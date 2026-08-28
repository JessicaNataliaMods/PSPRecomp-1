#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0161[64] = {
    0x0210801200065001ull, 0x20402500021A8404ull, 0x8502241008B88802ull, 0x100001349105A032ull,
    0x0000810018412008ull, 0x1002000101440200ull, 0x0904548024000000ull, 0x1111108802100800ull,
    0xA244022211005110ull, 0x5088034AA2051100ull, 0x0114284880509100ull, 0x4404100551044010ull,
    0x024502200441A540ull, 0x01A5000002A28920ull, 0x2844000D28050880ull, 0x0008028440006940ull,
    0xA4948B48D20A4800ull, 0x6D4AA9552947692Dull, 0x9229280000200005ull, 0x5A92402248008021ull,
    0x6A200000405012ADull, 0x0002D41200808AB5ull, 0x52A4402220248894ull, 0x1004010AA2484849ull,
    0x9520940102848804ull, 0x2552404882282289ull, 0x2008080420000424ull, 0x8B88802000288301ull,
    0x2548C2089000A54Aull, 0x00080401150064AAull, 0x0201200001000240ull, 0x0000110010009210ull,
    0x2400002002004004ull, 0x024154110AA50945ull, 0x8A00400481488280ull, 0x000A800000000004ull,
    0x2108000000001010ull, 0x002010402A040020ull, 0xAA23480048204428ull, 0x0000000000000080ull,
    0x4082140180048222ull, 0x0041006440002AA1ull, 0x0000040800000001ull, 0x186005544690A200ull,
    0x5500002000020010ull, 0x905DA89090C20200ull, 0x4008000016298029ull, 0x0100000000000000ull,
    0x0008110404000040ull, 0x0201220002000001ull, 0x0801101242280010ull, 0x5021020048100010ull,
    0x4522024200094080ull, 0x00A2028094040408ull, 0x0000200284800290ull, 0x0044410000000000ull,
    0x0001040400000240ull, 0x8041111100804004ull, 0x2054081090204080ull, 0x2400440101008222ull,
    0x004800002AA00440ull, 0x000010410000008Aull, 0x528E222928220000ull, 0x8A28012008800005ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0161[64] = {
    1u, 11u, 23u, 38u, 53u, 61u, 68u, 77u, 87u, 101u, 117u, 130u, 142u, 156u, 169u, 182u,
    192u, 212u, 243u, 254u, 269u, 284u, 300u, 317u, 332u, 347u, 365u, 373u, 387u, 405u, 418u, 424u,
    431u, 437u, 456u, 468u, 472u, 477u, 485u, 501u, 502u, 514u, 526u, 529u, 546u, 553u, 571u, 583u,
    584u, 590u, 596u, 606u, 615u, 627u, 638u, 646u, 650u, 655u, 665u, 676u, 686u, 695u, 701u, 717u,
};
void recomp_unit_0161_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,16,7 fprs=12,13,15,14 gpr_occ=4440 fpr_occ=172 gpr_total=7037 fpr_total=180
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_15 = ctx.fpr[15];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.gpr[7] = aot_gpr_7; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[15] = aot_fpr_15; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_7 = ctx.gpr[7]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_15 = ctx.fpr[15]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A88000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0161[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0161[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08A88000;
    case 2u: goto L_08A88030;
    case 3u: goto L_08A88038;
    case 4u: goto L_08A88044;
    case 5u: goto L_08A88048;
    case 6u: goto L_08A88084;
    case 7u: goto L_08A88090;
    case 8u: goto L_08A880BC;
    case 9u: goto L_08A880D0;
    case 10u: goto L_08A880E4;
    case 11u: goto L_08A88108;
    case 12u: goto L_08A88128;
    case 13u: goto L_08A8813C;
    case 14u: goto L_08A88144;
    case 15u: goto L_08A8814C;
    case 16u: goto L_08A88150;
    case 17u: goto L_08A88164;
    case 18u: goto L_08A881A0;
    case 19u: goto L_08A881A8;
    case 20u: goto L_08A881B4;
    case 21u: goto L_08A881D8;
    case 22u: goto L_08A881F4;
    case 23u: goto L_08A88204;
    case 24u: goto L_08A8822C;
    case 25u: goto L_08A8823C;
    case 26u: goto L_08A8824C;
    case 27u: goto L_08A88250;
    case 28u: goto L_08A88254;
    case 29u: goto L_08A8825C;
    case 30u: goto L_08A8826C;
    case 31u: goto L_08A88290;
    case 32u: goto L_08A882A8;
    case 33u: goto L_08A882B4;
    case 34u: goto L_08A882C4;
    case 35u: goto L_08A882E0;
    case 36u: goto L_08A882E8;
    case 37u: goto L_08A882FC;
    case 38u: goto L_08A88304;
    case 39u: goto L_08A88310;
    case 40u: goto L_08A88314;
    case 41u: goto L_08A88334;
    case 42u: goto L_08A8833C;
    case 43u: goto L_08A88340;
    case 44u: goto L_08A88348;
    case 45u: goto L_08A88360;
    case 46u: goto L_08A88370;
    case 47u: goto L_08A8837C;
    case 48u: goto L_08A88388;
    case 49u: goto L_08A88390;
    case 50u: goto L_08A88394;
    case 51u: goto L_08A883A0;
    case 52u: goto L_08A883F0;
    case 53u: goto L_08A8840C;
    case 54u: goto L_08A88434;
    case 55u: goto L_08A88440;
    case 56u: goto L_08A88458;
    case 57u: goto L_08A8846C;
    case 58u: goto L_08A88470;
    case 59u: goto L_08A884A0;
    case 60u: goto L_08A884BC;
    case 61u: goto L_08A88524;
    case 62u: goto L_08A88548;
    case 63u: goto L_08A88558;
    case 64u: goto L_08A88560;
    case 65u: goto L_08A88580;
    case 66u: goto L_08A885C4;
    case 67u: goto L_08A885F0;
    case 68u: goto L_08A88668;
    case 69u: goto L_08A88674;
    case 70u: goto L_08A8869C;
    case 71u: goto L_08A886A8;
    case 72u: goto L_08A886B0;
    case 73u: goto L_08A886B8;
    case 74u: goto L_08A886C8;
    case 75u: goto L_08A886E0;
    case 76u: goto L_08A886EC;
    case 77u: goto L_08A8872C;
    case 78u: goto L_08A88750;
    case 79u: goto L_08A88764;
    case 80u: goto L_08A8878C;
    case 81u: goto L_08A8879C;
    case 82u: goto L_08A887B0;
    case 83u: goto L_08A887C0;
    case 84u: goto L_08A887D0;
    case 85u: goto L_08A887E0;
    case 86u: goto L_08A887F0;
    case 87u: goto L_08A88810;
    case 88u: goto L_08A88820;
    case 89u: goto L_08A88830;
    case 90u: goto L_08A88838;
    case 91u: goto L_08A88860;
    case 92u: goto L_08A88870;
    case 93u: goto L_08A88884;
    case 94u: goto L_08A88894;
    case 95u: goto L_08A888A4;
    case 96u: goto L_08A888C8;
    case 97u: goto L_08A888D8;
    case 98u: goto L_08A888E4;
    case 99u: goto L_08A888F4;
    case 100u: goto L_08A888FC;
    case 101u: goto L_08A88920;
    case 102u: goto L_08A88930;
    case 103u: goto L_08A88940;
    case 104u: goto L_08A88948;
    case 105u: goto L_08A88964;
    case 106u: goto L_08A88974;
    case 107u: goto L_08A8897C;
    case 108u: goto L_08A88984;
    case 109u: goto L_08A8898C;
    case 110u: goto L_08A88998;
    case 111u: goto L_08A889A0;
    case 112u: goto L_08A889A4;
    case 113u: goto L_08A889CC;
    case 114u: goto L_08A889DC;
    case 115u: goto L_08A889F0;
    case 116u: goto L_08A889F8;
    case 117u: goto L_08A88A20;
    case 118u: goto L_08A88A30;
    case 119u: goto L_08A88A3C;
    case 120u: goto L_08A88A50;
    case 121u: goto L_08A88A58;
    case 122u: goto L_08A88A7C;
    case 123u: goto L_08A88A8C;
    case 124u: goto L_08A88A98;
    case 125u: goto L_08A88AAC;
    case 126u: goto L_08A88AB4;
    case 127u: goto L_08A88AC8;
    case 128u: goto L_08A88AD0;
    case 129u: goto L_08A88AE0;
    case 130u: goto L_08A88B10;
    case 131u: goto L_08A88B38;
    case 132u: goto L_08A88B48;
    case 133u: goto L_08A88B60;
    case 134u: goto L_08A88B70;
    case 135u: goto L_08A88B78;
    case 136u: goto L_08A88B80;
    case 137u: goto L_08A88B88;
    case 138u: goto L_08A88BB0;
    case 139u: goto L_08A88BC8;
    case 140u: goto L_08A88BE8;
    case 141u: goto L_08A88BF8;
    case 142u: goto L_08A88C18;
    case 143u: goto L_08A88C20;
    case 144u: goto L_08A88C28;
    case 145u: goto L_08A88C34;
    case 146u: goto L_08A88C3C;
    case 147u: goto L_08A88C40;
    case 148u: goto L_08A88C58;
    case 149u: goto L_08A88C68;
    case 150u: goto L_08A88C94;
    case 151u: goto L_08A88CA4;
    case 152u: goto L_08A88CC0;
    case 153u: goto L_08A88CC8;
    case 154u: goto L_08A88CD8;
    case 155u: goto L_08A88CE4;
    case 156u: goto L_08A88D14;
    case 157u: goto L_08A88D20;
    case 158u: goto L_08A88D2C;
    case 159u: goto L_08A88D3C;
    case 160u: goto L_08A88D44;
    case 161u: goto L_08A88D54;
    case 162u: goto L_08A88D5C;
    case 163u: goto L_08A88D64;
    case 164u: goto L_08A88DC0;
    case 165u: goto L_08A88DC8;
    case 166u: goto L_08A88DD4;
    case 167u: goto L_08A88DDC;
    case 168u: goto L_08A88DE0;
    case 169u: goto L_08A88E1C;
    case 170u: goto L_08A88E2C;
    case 171u: goto L_08A88E40;
    case 172u: goto L_08A88E48;
    case 173u: goto L_08A88E6C;
    case 174u: goto L_08A88E74;
    case 175u: goto L_08A88E80;
    case 176u: goto L_08A88E88;
    case 177u: goto L_08A88E8C;
    case 178u: goto L_08A88EC8;
    case 179u: goto L_08A88ED8;
    case 180u: goto L_08A88EEC;
    case 181u: goto L_08A88EF4;
    case 182u: goto L_08A88F18;
    case 183u: goto L_08A88F20;
    case 184u: goto L_08A88F2C;
    case 185u: goto L_08A88F34;
    case 186u: goto L_08A88F38;
    case 187u: goto L_08A88F78;
    case 188u: goto L_08A88F88;
    case 189u: goto L_08A88F9C;
    case 190u: goto L_08A88FA4;
    case 191u: goto L_08A88FCC;
    case 192u: goto L_08A8902C;
    case 193u: goto L_08A89038;
    case 194u: goto L_08A89044;
    case 195u: goto L_08A8904C;
    case 196u: goto L_08A89064;
    case 197u: goto L_08A89070;
    case 198u: goto L_08A89078;
    case 199u: goto L_08A8907C;
    case 200u: goto L_08A8908C;
    case 201u: goto L_08A89098;
    case 202u: goto L_08A890A0;
    case 203u: goto L_08A890A4;
    case 204u: goto L_08A890AC;
    case 205u: goto L_08A890BC;
    case 206u: goto L_08A890C8;
    case 207u: goto L_08A890D0;
    case 208u: goto L_08A890DC;
    case 209u: goto L_08A890E8;
    case 210u: goto L_08A890F4;
    case 211u: goto L_08A890FC;
    case 212u: goto L_08A89100;
    case 213u: goto L_08A89108;
    case 214u: goto L_08A8910C;
    case 215u: goto L_08A89114;
    case 216u: goto L_08A89120;
    case 217u: goto L_08A8912C;
    case 218u: goto L_08A89134;
    case 219u: goto L_08A89138;
    case 220u: goto L_08A89140;
    case 221u: goto L_08A89144;
    case 222u: goto L_08A89148;
    case 223u: goto L_08A89158;
    case 224u: goto L_08A89160;
    case 225u: goto L_08A8916C;
    case 226u: goto L_08A89174;
    case 227u: goto L_08A89180;
    case 228u: goto L_08A89188;
    case 229u: goto L_08A89190;
    case 230u: goto L_08A89198;
    case 231u: goto L_08A891A0;
    case 232u: goto L_08A891AC;
    case 233u: goto L_08A891B4;
    case 234u: goto L_08A891BC;
    case 235u: goto L_08A891C4;
    case 236u: goto L_08A891CC;
    case 237u: goto L_08A891D8;
    case 238u: goto L_08A891E0;
    case 239u: goto L_08A891E8;
    case 240u: goto L_08A891EC;
    case 241u: goto L_08A891F4;
    case 242u: goto L_08A891F8;
    case 243u: goto L_08A89200;
    case 244u: goto L_08A89208;
    case 245u: goto L_08A89254;
    case 246u: goto L_08A892AC;
    case 247u: goto L_08A892B4;
    case 248u: goto L_08A892C0;
    case 249u: goto L_08A892CC;
    case 250u: goto L_08A892D4;
    case 251u: goto L_08A892E4;
    case 252u: goto L_08A892F0;
    case 253u: goto L_08A892FC;
    case 254u: goto L_08A89300;
    case 255u: goto L_08A89314;
    case 256u: goto L_08A8933C;
    case 257u: goto L_08A8936C;
    case 258u: goto L_08A89378;
    case 259u: goto L_08A89384;
    case 260u: goto L_08A89394;
    case 261u: goto L_08A893B8;
    case 262u: goto L_08A893C4;
    case 263u: goto L_08A893D0;
    case 264u: goto L_08A893DC;
    case 265u: goto L_08A893E4;
    case 266u: goto L_08A893EC;
    case 267u: goto L_08A893F0;
    case 268u: goto L_08A893F8;
    case 269u: goto L_08A89400;
    case 270u: goto L_08A89408;
    case 271u: goto L_08A8940C;
    case 272u: goto L_08A89414;
    case 273u: goto L_08A8941C;
    case 274u: goto L_08A89424;
    case 275u: goto L_08A89430;
    case 276u: goto L_08A89450;
    case 277u: goto L_08A89458;
    case 278u: goto L_08A89478;
    case 279u: goto L_08A894D4;
    case 280u: goto L_08A894E4;
    case 281u: goto L_08A894EC;
    case 282u: goto L_08A894F4;
    case 283u: goto L_08A894F8;
    case 284u: goto L_08A89500;
    case 285u: goto L_08A89508;
    case 286u: goto L_08A89510;
    case 287u: goto L_08A89514;
    case 288u: goto L_08A8951C;
    case 289u: goto L_08A89524;
    case 290u: goto L_08A8952C;
    case 291u: goto L_08A8953C;
    case 292u: goto L_08A8955C;
    case 293u: goto L_08A89584;
    case 294u: goto L_08A89590;
    case 295u: goto L_08A895A8;
    case 296u: goto L_08A895B0;
    case 297u: goto L_08A895B8;
    case 298u: goto L_08A895BC;
    case 299u: goto L_08A895C4;
    case 300u: goto L_08A89608;
    case 301u: goto L_08A89610;
    case 302u: goto L_08A8961C;
    case 303u: goto L_08A8962C;
    case 304u: goto L_08A8963C;
    case 305u: goto L_08A89648;
    case 306u: goto L_08A89654;
    case 307u: goto L_08A89674;
    case 308u: goto L_08A89684;
    case 309u: goto L_08A89694;
    case 310u: goto L_08A896B8;
    case 311u: goto L_08A896C8;
    case 312u: goto L_08A896D4;
    case 313u: goto L_08A896DC;
    case 314u: goto L_08A896E4;
    case 315u: goto L_08A896F0;
    case 316u: goto L_08A896F8;
    case 317u: goto L_08A89700;
    case 318u: goto L_08A8970C;
    case 319u: goto L_08A89718;
    case 320u: goto L_08A8972C;
    case 321u: goto L_08A89738;
    case 322u: goto L_08A8974C;
    case 323u: goto L_08A89758;
    case 324u: goto L_08A89764;
    case 325u: goto L_08A89774;
    case 326u: goto L_08A8977C;
    case 327u: goto L_08A89784;
    case 328u: goto L_08A8978C;
    case 329u: goto L_08A897A0;
    case 330u: goto L_08A897C8;
    case 331u: goto L_08A897F0;
    case 332u: goto L_08A89808;
    case 333u: goto L_08A8982C;
    case 334u: goto L_08A8983C;
    case 335u: goto L_08A89848;
    case 336u: goto L_08A8985C;
    case 337u: goto L_08A89864;
    case 338u: goto L_08A89880;
    case 339u: goto L_08A898A8;
    case 340u: goto L_08A898B0;
    case 341u: goto L_08A898BC;
    case 342u: goto L_08A898D4;
    case 343u: goto L_08A898E0;
    case 344u: goto L_08A898E8;
    case 345u: goto L_08A898F0;
    case 346u: goto L_08A898FC;
    case 347u: goto L_08A89900;
    case 348u: goto L_08A8990C;
    case 349u: goto L_08A8991C;
    case 350u: goto L_08A89924;
    case 351u: goto L_08A89934;
    case 352u: goto L_08A8994C;
    case 353u: goto L_08A89954;
    case 354u: goto L_08A89964;
    case 355u: goto L_08A8997C;
    case 356u: goto L_08A8998C;
    case 357u: goto L_08A89998;
    case 358u: goto L_08A899B8;
    case 359u: goto L_08A899C4;
    case 360u: goto L_08A899D0;
    case 361u: goto L_08A899D8;
    case 362u: goto L_08A899E0;
    case 363u: goto L_08A899E8;
    case 364u: goto L_08A899F4;
    case 365u: goto L_08A89A08;
    case 366u: goto L_08A89A14;
    case 367u: goto L_08A89A28;
    case 368u: goto L_08A89A74;
    case 369u: goto L_08A89A88;
    case 370u: goto L_08A89AAC;
    case 371u: goto L_08A89ACC;
    case 372u: goto L_08A89AF4;
    case 373u: goto L_08A89B00;
    case 374u: goto L_08A89B20;
    case 375u: goto L_08A89B24;
    case 376u: goto L_08A89B3C;
    case 377u: goto L_08A89B4C;
    case 378u: goto L_08A89B54;
    case 379u: goto L_08A89B94;
    case 380u: goto L_08A89BBC;
    case 381u: goto L_08A89BCC;
    case 382u: goto L_08A89BDC;
    case 383u: goto L_08A89BE0;
    case 384u: goto L_08A89BE4;
    case 385u: goto L_08A89BEC;
    case 386u: goto L_08A89BFC;
    case 387u: goto L_08A89C04;
    case 388u: goto L_08A89C0C;
    case 389u: goto L_08A89C18;
    case 390u: goto L_08A89C20;
    case 391u: goto L_08A89C28;
    case 392u: goto L_08A89C34;
    case 393u: goto L_08A89C3C;
    case 394u: goto L_08A89C70;
    case 395u: goto L_08A89C7C;
    case 396u: goto L_08A89C8C;
    case 397u: goto L_08A89CA4;
    case 398u: goto L_08A89CB8;
    case 399u: goto L_08A89CBC;
    case 400u: goto L_08A89CCC;
    case 401u: goto L_08A89CD8;
    case 402u: goto L_08A89CE0;
    case 403u: goto L_08A89CE8;
    case 404u: goto L_08A89CF4;
    case 405u: goto L_08A89D04;
    case 406u: goto L_08A89D0C;
    case 407u: goto L_08A89D14;
    case 408u: goto L_08A89D1C;
    case 409u: goto L_08A89D28;
    case 410u: goto L_08A89D34;
    case 411u: goto L_08A89D38;
    case 412u: goto L_08A89D60;
    case 413u: goto L_08A89D68;
    case 414u: goto L_08A89D70;
    case 415u: goto L_08A89D80;
    case 416u: goto L_08A89DA8;
    case 417u: goto L_08A89DCC;
    case 418u: goto L_08A89E18;
    case 419u: goto L_08A89E24;
    case 420u: goto L_08A89E60;
    case 421u: goto L_08A89EB4;
    case 422u: goto L_08A89EC0;
    case 423u: goto L_08A89EE4;
    case 424u: goto L_08A89F10;
    case 425u: goto L_08A89F24;
    case 426u: goto L_08A89F30;
    case 427u: goto L_08A89F3C;
    case 428u: goto L_08A89F70;
    case 429u: goto L_08A89FA0;
    case 430u: goto L_08A89FB0;
    case 431u: goto L_08A8A008;
    case 432u: goto L_08A8A038;
    case 433u: goto L_08A8A064;
    case 434u: goto L_08A8A094;
    case 435u: goto L_08A8A0E8;
    case 436u: goto L_08A8A0F4;
    case 437u: goto L_08A8A100;
    case 438u: goto L_08A8A108;
    case 439u: goto L_08A8A118;
    case 440u: goto L_08A8A120;
    case 441u: goto L_08A8A12C;
    case 442u: goto L_08A8A140;
    case 443u: goto L_08A8A148;
    case 444u: goto L_08A8A154;
    case 445u: goto L_08A8A15C;
    case 446u: goto L_08A8A164;
    case 447u: goto L_08A8A16C;
    case 448u: goto L_08A8A180;
    case 449u: goto L_08A8A190;
    case 450u: goto L_08A8A1A8;
    case 451u: goto L_08A8A1B0;
    case 452u: goto L_08A8A1B8;
    case 453u: goto L_08A8A1C0;
    case 454u: goto L_08A8A1D8;
    case 455u: goto L_08A8A1E4;
    case 456u: goto L_08A8A21C;
    case 457u: goto L_08A8A224;
    case 458u: goto L_08A8A23C;
    case 459u: goto L_08A8A24C;
    case 460u: goto L_08A8A258;
    case 461u: goto L_08A8A260;
    case 462u: goto L_08A8A27C;
    case 463u: goto L_08A8A288;
    case 464u: goto L_08A8A2B8;
    case 465u: goto L_08A8A2E4;
    case 466u: goto L_08A8A2EC;
    case 467u: goto L_08A8A2FC;
    case 468u: goto L_08A8A308;
    case 469u: goto L_08A8A3BC;
    case 470u: goto L_08A8A3C4;
    case 471u: goto L_08A8A3CC;
    case 472u: goto L_08A8A410;
    case 473u: goto L_08A8A430;
    case 474u: goto L_08A8A4CC;
    case 475u: goto L_08A8A4E0;
    case 476u: goto L_08A8A4F4;
    case 477u: goto L_08A8A514;
    case 478u: goto L_08A8A548;
    case 479u: goto L_08A8A564;
    case 480u: goto L_08A8A56C;
    case 481u: goto L_08A8A574;
    case 482u: goto L_08A8A598;
    case 483u: goto L_08A8A5B0;
    case 484u: goto L_08A8A5D4;
    case 485u: goto L_08A8A60C;
    case 486u: goto L_08A8A614;
    case 487u: goto L_08A8A628;
    case 488u: goto L_08A8A638;
    case 489u: goto L_08A8A654;
    case 490u: goto L_08A8A66C;
    case 491u: goto L_08A8A678;
    case 492u: goto L_08A8A6AC;
    case 493u: goto L_08A8A6B8;
    case 494u: goto L_08A8A6C0;
    case 495u: goto L_08A8A6C4;
    case 496u: goto L_08A8A6D4;
    case 497u: goto L_08A8A6E4;
    case 498u: goto L_08A8A6EC;
    case 499u: goto L_08A8A6F4;
    case 500u: goto L_08A8A6FC;
    case 501u: goto L_08A8A71C;
    case 502u: goto L_08A8A804;
    case 503u: goto L_08A8A814;
    case 504u: goto L_08A8A824;
    case 505u: goto L_08A8A83C;
    case 506u: goto L_08A8A848;
    case 507u: goto L_08A8A87C;
    case 508u: goto L_08A8A880;
    case 509u: goto L_08A8A8A8;
    case 510u: goto L_08A8A8B0;
    case 511u: goto L_08A8A8C4;
    case 512u: goto L_08A8A8DC;
    case 513u: goto L_08A8A8F8;
    case 514u: goto L_08A8A900;
    case 515u: goto L_08A8A914;
    case 516u: goto L_08A8A91C;
    case 517u: goto L_08A8A924;
    case 518u: goto L_08A8A92C;
    case 519u: goto L_08A8A934;
    case 520u: goto L_08A8A978;
    case 521u: goto L_08A8A988;
    case 522u: goto L_08A8A994;
    case 523u: goto L_08A8A998;
    case 524u: goto L_08A8A9C0;
    case 525u: goto L_08A8A9D8;
    case 526u: goto L_08A8AA00;
    case 527u: goto L_08A8AA8C;
    case 528u: goto L_08A8AAA8;
    case 529u: goto L_08A8AB24;
    case 530u: goto L_08A8AB34;
    case 531u: goto L_08A8AB3C;
    case 532u: goto L_08A8AB50;
    case 533u: goto L_08A8AB5C;
    case 534u: goto L_08A8AB64;
    case 535u: goto L_08A8AB68;
    case 536u: goto L_08A8AB78;
    case 537u: goto L_08A8AB88;
    case 538u: goto L_08A8AB90;
    case 539u: goto L_08A8AB98;
    case 540u: goto L_08A8ABA0;
    case 541u: goto L_08A8ABA8;
    case 542u: goto L_08A8ABD4;
    case 543u: goto L_08A8ABD8;
    case 544u: goto L_08A8ABEC;
    case 545u: goto L_08A8ABF0;
    case 546u: goto L_08A8AC10;
    case 547u: goto L_08A8AC44;
    case 548u: goto L_08A8AC94;
    case 549u: goto L_08A8ACE0;
    case 550u: goto L_08A8ACE8;
    case 551u: goto L_08A8ACF0;
    case 552u: goto L_08A8ACF8;
    case 553u: goto L_08A8AD24;
    case 554u: goto L_08A8AD44;
    case 555u: goto L_08A8AD58;
    case 556u: goto L_08A8AD5C;
    case 557u: goto L_08A8AD70;
    case 558u: goto L_08A8AD7C;
    case 559u: goto L_08A8AD90;
    case 560u: goto L_08A8AD9C;
    case 561u: goto L_08A8ADAC;
    case 562u: goto L_08A8ADB4;
    case 563u: goto L_08A8ADBC;
    case 564u: goto L_08A8ADC0;
    case 565u: goto L_08A8ADC8;
    case 566u: goto L_08A8ADCC;
    case 567u: goto L_08A8ADD0;
    case 568u: goto L_08A8ADD8;
    case 569u: goto L_08A8ADF0;
    case 570u: goto L_08A8ADFC;
    case 571u: goto L_08A8AE00;
    case 572u: goto L_08A8AE0C;
    case 573u: goto L_08A8AE14;
    case 574u: goto L_08A8AE3C;
    case 575u: goto L_08A8AE40;
    case 576u: goto L_08A8AE4C;
    case 577u: goto L_08A8AE54;
    case 578u: goto L_08A8AE64;
    case 579u: goto L_08A8AE68;
    case 580u: goto L_08A8AE70;
    case 581u: goto L_08A8AECC;
    case 582u: goto L_08A8AEF8;
    case 583u: goto L_08A8AFE0;
    case 584u: goto L_08A8B018;
    case 585u: goto L_08A8B068;
    case 586u: goto L_08A8B088;
    case 587u: goto L_08A8B0A0;
    case 588u: goto L_08A8B0B0;
    case 589u: goto L_08A8B0CC;
    case 590u: goto L_08A8B100;
    case 591u: goto L_08A8B164;
    case 592u: goto L_08A8B1A4;
    case 593u: goto L_08A8B1B4;
    case 594u: goto L_08A8B1C0;
    case 595u: goto L_08A8B1E4;
    case 596u: goto L_08A8B210;
    case 597u: goto L_08A8B24C;
    case 598u: goto L_08A8B254;
    case 599u: goto L_08A8B264;
    case 600u: goto L_08A8B278;
    case 601u: goto L_08A8B284;
    case 602u: goto L_08A8B290;
    case 603u: goto L_08A8B2B0;
    case 604u: goto L_08A8B2C0;
    case 605u: goto L_08A8B2EC;
    case 606u: goto L_08A8B310;
    case 607u: goto L_08A8B350;
    case 608u: goto L_08A8B36C;
    case 609u: goto L_08A8B378;
    case 610u: goto L_08A8B3A4;
    case 611u: goto L_08A8B3C0;
    case 612u: goto L_08A8B3D4;
    case 613u: goto L_08A8B3F0;
    case 614u: goto L_08A8B3F8;
    case 615u: goto L_08A8B41C;
    case 616u: goto L_08A8B438;
    case 617u: goto L_08A8B440;
    case 618u: goto L_08A8B44C;
    case 619u: goto L_08A8B484;
    case 620u: goto L_08A8B498;
    case 621u: goto L_08A8B4A4;
    case 622u: goto L_08A8B4C4;
    case 623u: goto L_08A8B4D4;
    case 624u: goto L_08A8B4E0;
    case 625u: goto L_08A8B4E8;
    case 626u: goto L_08A8B4F8;
    case 627u: goto L_08A8B50C;
    case 628u: goto L_08A8B528;
    case 629u: goto L_08A8B548;
    case 630u: goto L_08A8B568;
    case 631u: goto L_08A8B570;
    case 632u: goto L_08A8B57C;
    case 633u: goto L_08A8B59C;
    case 634u: goto L_08A8B5A4;
    case 635u: goto L_08A8B5C4;
    case 636u: goto L_08A8B5D4;
    case 637u: goto L_08A8B5DC;
    case 638u: goto L_08A8B610;
    case 639u: goto L_08A8B61C;
    case 640u: goto L_08A8B624;
    case 641u: goto L_08A8B65C;
    case 642u: goto L_08A8B668;
    case 643u: goto L_08A8B67C;
    case 644u: goto L_08A8B684;
    case 645u: goto L_08A8B6B4;
    case 646u: goto L_08A8B7A0;
    case 647u: goto L_08A8B7B8;
    case 648u: goto L_08A8B7C8;
    case 649u: goto L_08A8B7D8;
    case 650u: goto L_08A8B818;
    case 651u: goto L_08A8B824;
    case 652u: goto L_08A8B888;
    case 653u: goto L_08A8B8A8;
    case 654u: goto L_08A8B8C0;
    case 655u: goto L_08A8B908;
    case 656u: goto L_08A8B938;
    case 657u: goto L_08A8B95C;
    case 658u: goto L_08A8B980;
    case 659u: goto L_08A8B990;
    case 660u: goto L_08A8B9A0;
    case 661u: goto L_08A8B9B0;
    case 662u: goto L_08A8B9C0;
    case 663u: goto L_08A8B9D8;
    case 664u: goto L_08A8B9FC;
    case 665u: goto L_08A8BA1C;
    case 666u: goto L_08A8BA38;
    case 667u: goto L_08A8BA54;
    case 668u: goto L_08A8BA70;
    case 669u: goto L_08A8BA7C;
    case 670u: goto L_08A8BA90;
    case 671u: goto L_08A8BAAC;
    case 672u: goto L_08A8BAC8;
    case 673u: goto L_08A8BAD0;
    case 674u: goto L_08A8BAD8;
    case 675u: goto L_08A8BAF4;
    case 676u: goto L_08A8BB04;
    case 677u: goto L_08A8BB14;
    case 678u: goto L_08A8BB24;
    case 679u: goto L_08A8BB3C;
    case 680u: goto L_08A8BB60;
    case 681u: goto L_08A8BB80;
    case 682u: goto L_08A8BBA8;
    case 683u: goto L_08A8BBB8;
    case 684u: goto L_08A8BBE8;
    case 685u: goto L_08A8BBF4;
    case 686u: goto L_08A8BC18;
    case 687u: goto L_08A8BC28;
    case 688u: goto L_08A8BC54;
    case 689u: goto L_08A8BC5C;
    case 690u: goto L_08A8BC64;
    case 691u: goto L_08A8BC6C;
    case 692u: goto L_08A8BC74;
    case 693u: goto L_08A8BCCC;
    case 694u: goto L_08A8BCD8;
    case 695u: goto L_08A8BD04;
    case 696u: goto L_08A8BD0C;
    case 697u: goto L_08A8BD1C;
    case 698u: goto L_08A8BD80;
    case 699u: goto L_08A8BD98;
    case 700u: goto L_08A8BDB0;
    case 701u: goto L_08A8BE44;
    case 702u: goto L_08A8BE54;
    case 703u: goto L_08A8BE6C;
    case 704u: goto L_08A8BE74;
    case 705u: goto L_08A8BE80;
    case 706u: goto L_08A8BE8C;
    case 707u: goto L_08A8BE94;
    case 708u: goto L_08A8BEA4;
    case 709u: goto L_08A8BEB4;
    case 710u: goto L_08A8BEC4;
    case 711u: goto L_08A8BEC8;
    case 712u: goto L_08A8BECC;
    case 713u: goto L_08A8BEDC;
    case 714u: goto L_08A8BEE4;
    case 715u: goto L_08A8BEF0;
    case 716u: goto L_08A8BEF8;
    case 717u: goto L_08A8BF00;
    case 718u: goto L_08A8BF08;
    case 719u: goto L_08A8BF5C;
    case 720u: goto L_08A8BF6C;
    case 721u: goto L_08A8BF94;
    case 722u: goto L_08A8BFA0;
    case 723u: goto L_08A8BFCC;
    case 724u: goto L_08A8BFD4;
    case 725u: goto L_08A8BFE4;
    case 726u: goto L_08A8BFEC;
    case 727u: goto L_08A8BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08A88000u;
        if (local_delta_v813 >= 16384u || (local_delta_v813 & 3u) != 0u) {
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
L_08A88000:
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A88048;
      }
      goto L_08A88030;
    }
L_08A88030:
    ctx.gpr[31] = (0x08A88038u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88038u) goto L_08A88038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88038:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08A88030;
      }
      goto L_08A88044;
    }
L_08A88044:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    goto L_08A88048;
L_08A88048:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(132)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(120)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(120));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x08A88084u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 6u, 0x08A88084u, 0x08A87E60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 635u, 0x08A87E60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88084u) goto L_08A88084;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88084:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A88090u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A89478;
L_08A88090:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_08A880D0;
      }
      goto L_08A880BC;
    }
L_08A880BC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), aot_gpr_4);
      if (branch_taken) {
          goto L_08A880E4;
      }
      goto L_08A880D0;
    }
L_08A880D0:
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(108));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A880E4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 10u, 0x08A880E4u, 0x08B6E938u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 548u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 548u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 548u, 0x08B6E938u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A880E4u) goto L_08A880E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A880E4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88108:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08A88128u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 12u, 0x08A88128u, 0x08A87FFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 661u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 661u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 661u, 0x08A87FFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88128u) goto L_08A88128;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88128:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A8813Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 13u, 0x08A8813Cu, 0x08A3C788u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 93u, 0x08A3C788u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8813Cu) goto L_08A8813C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8813C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A8814C;
      }
      goto L_08A88144;
    }
L_08A88144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A88150;
      }
      goto L_08A8814C;
    }
L_08A8814C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A88150;
L_08A88150:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88164:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
      if (branch_taken) {
          goto L_08A881A8;
      }
      goto L_08A881A0;
    }
L_08A881A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A88470;
      }
      goto L_08A881A8;
    }
L_08A881A8:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x08A881B4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A881B4u) goto L_08A881B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A881B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store16(ctx.gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A882E0;
      }
      goto L_08A881D8;
    }
L_08A881D8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(26));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08A881F4;
L_08A881F4:
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A88204u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 23u, 0x08A88204u, 0x08A3C840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88204u) goto L_08A88204;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88204:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A88250;
      }
      goto L_08A8822C;
    }
L_08A8822C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A88254;
    }
    goto L_08A8823C;
L_08A8823C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A88254;
      }
      goto L_08A8824C;
    }
L_08A8824C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A88250;
L_08A88250:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A88254;
L_08A88254:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A882A8;
      }
      goto L_08A8825C;
    }
L_08A8825C:
    aot_gpr_16 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8826Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 30u, 0x08A8826Cu, 0x08A3C840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8826Cu) goto L_08A8826C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8826C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A882A8;
      }
      goto L_08A88290;
    }
L_08A88290:
    aot_mem.aot_direct_store16(ctx.gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08A882E8;
      }
      goto L_08A882A8;
    }
L_08A882A8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A882C4;
      }
      goto L_08A882B4;
    }
L_08A882B4:
    aot_mem.aot_direct_store16(ctx.gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08A882E8;
      }
      goto L_08A882C4;
    }
L_08A882C4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A881F4;
      }
      goto L_08A882E0;
    }
L_08A882E0:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    goto L_08A882E8;
L_08A882E8:
    aot_gpr_16 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88314;
      }
      goto L_08A882FC;
    }
L_08A882FC:
    ctx.gpr[31] = (0x08A88304u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88304u) goto L_08A88304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88304:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08A882FC;
      }
      goto L_08A88310;
    }
L_08A88310:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    goto L_08A88314;
L_08A88314:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08A88340;
      }
      goto L_08A88334;
    }
L_08A88334:
    ctx.gpr[31] = (0x08A8833Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8833Cu) goto L_08A8833C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8833C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08A88340;
L_08A88340:
    ctx.gpr[31] = (0x08A88348u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 44u, 0x08A88348u, 0x08A53344u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 598u, 0x08A53344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88348u) goto L_08A88348;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8840C;
      }
      goto L_08A88360;
    }
L_08A88360:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(34));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08A88370;
L_08A88370:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A883F0;
      }
      goto L_08A8837C;
    }
L_08A8837C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A88394;
    }
    goto L_08A88388;
L_08A88388:
    ctx.gpr[31] = (0x08A88390u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88390u) goto L_08A88390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A88394;
L_08A88394:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A883F0;
      }
      goto L_08A883A0;
    }
L_08A883A0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_7));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A883F0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08A89B54;
L_08A883F0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A88370;
      }
      goto L_08A8840C;
    }
L_08A8840C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr_7 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (aot_gpr_7 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A8846C;
      }
      goto L_08A88434;
    }
L_08A88434:
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08A88458;
      }
      goto L_08A88440;
    }
L_08A88440:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), aot_gpr_4);
      if (branch_taken) {
          goto L_08A8846C;
      }
      goto L_08A88458;
    }
L_08A88458:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A8846Cu);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 57u, 0x08A8846Cu, 0x08B6E938u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 548u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 548u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 548u, 0x08B6E938u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8846Cu) goto L_08A8846C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8846C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A88470;
L_08A88470:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A884A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08A884BCu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0094.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 60u, 0x08A884BCu, 0x0897F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0094_entry(rt, ctx, 931u, aot_mem);
#else
        recomp_unit_0094_entry(rt, ctx, 931u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 931u, 0x0897F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A884BCu) goto L_08A884BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A884BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (19056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(100), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_gpr_7 = (aot_gpr_7 >> 30u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_08A886A8;
      }
      goto L_08A88524;
    }
L_08A88524:
    ctx.gpr[9] = (34953u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-30584));
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[2] = (0u | 45696u);
    ctx.gpr[13] = (0u | 45788u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(14))))));
    aot_gpr_6 = (0u | 0u);
    goto L_08A88548;
L_08A88548:
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
      if (branch_taken) {
          goto L_08A88560;
      }
      goto L_08A88558;
    }
L_08A88558:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88674;
      }
      goto L_08A88560;
    }
L_08A88560:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[11] + ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-19832)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-19836)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[9];
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(96))))));
      if (branch_taken) {
          goto L_08A885C4;
      }
      goto L_08A88580;
    }
L_08A88580:
    aot_gpr_5 = (ctx.gpr[11] - aot_gpr_5);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[11]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (ctx.gpr[3] + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A885F0;
      }
      goto L_08A885C4;
    }
L_08A885C4:
    aot_gpr_5 = (ctx.gpr[11] << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (ctx.gpr[3] + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A885F0;
L_08A885F0:
    ctx.gpr[11] = (aot_gpr_7 << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (aot_gpr_5 << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    aot_gpr_7 = (ctx.gpr[11] - ctx.gpr[12]);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_gpr_7 + ctx.gpr[2]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[13]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[14]);
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[15]) < 0 ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] & 255u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
      if (branch_taken) {
          goto L_08A88674;
      }
      goto L_08A88668;
    }
L_08A88668:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    goto L_08A88674;
L_08A88674:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_7 = (aot_gpr_7 - aot_gpr_5);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[3] = (ctx.gpr[3] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[3]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    aot_gpr_7 = (aot_gpr_4 < aot_gpr_7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A88548;
      }
      goto L_08A8869C;
    }
L_08A8869C:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[14]));
    goto L_08A886A8;
L_08A886A8:
    ctx.gpr[31] = (0x08A886B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08A8AA00;
L_08A886B0:
    ctx.gpr[31] = (0x08A886B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0162.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 73u, 0x08A886B8u, 0x08A8C214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0162_entry(rt, ctx, 26u, aot_mem);
#else
        recomp_unit_0162_entry(rt, ctx, 26u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 26u, 0x08A8C214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A886B8u) goto L_08A886B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A886B8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A886C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[31] = (0x08A886E0u);
    goto L_08A8A934;
L_08A886E0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A886EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    ctx.gpr[23] = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (aot_gpr_7 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[21];
    ctx.gpr[20] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A88AE0;
      }
      goto L_08A8872C;
    }
L_08A8872C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[21] - ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A88948;
      }
      goto L_08A88750;
    }
L_08A88750:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[20]);
    aot_gpr_16 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A88838;
      }
      goto L_08A88764;
    }
L_08A88764:
    ctx.gpr[17] = (ctx.gpr[22] - aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x08A8878Cu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 80u, 0x08A8878Cu, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8878Cu) goto L_08A8878C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8878C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A887B0;
      }
      goto L_08A8879C;
    }
L_08A8879C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 - aot_gpr_4);
      if (branch_taken) {
          goto L_08A887D0;
      }
      goto L_08A887B0;
    }
L_08A887B0:
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A887C0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 83u, 0x08A887C0u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A887C0u) goto L_08A887C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A887C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 - aot_gpr_4);
    goto L_08A887D0;
L_08A887D0:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (aot_gpr_4 - ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A887F0;
      }
      goto L_08A887E0;
    }
L_08A887E0:
    aot_gpr_4 = (aot_gpr_16 - ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A887F0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 86u, 0x08A887F0u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A887F0u) goto L_08A887F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A887F0:
    aot_gpr_16 = (ctx.gpr[23] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(36))))));
    ctx.gpr[31] = (0x08A88810u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 87u, 0x08A88810u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88810u) goto L_08A88810;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88810:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_16;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88830;
      }
      goto L_08A88820;
    }
L_08A88820:
    aot_gpr_6 = (ctx.gpr[21] - ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A88830u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 89u, 0x08A88830u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88830u) goto L_08A88830;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88830:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88940;
      }
      goto L_08A88838;
    }
L_08A88838:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(43))))));
    ctx.gpr[31] = (0x08A88860u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 91u, 0x08A88860u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88860u) goto L_08A88860;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88860:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88884;
      }
      goto L_08A88870;
    }
L_08A88870:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
      if (branch_taken) {
          goto L_08A888A4;
      }
      goto L_08A88884;
    }
L_08A88884:
    aot_gpr_6 = (ctx.gpr[21] - ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A88894u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 94u, 0x08A88894u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88894u) goto L_08A88894;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88894:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    goto L_08A888A4;
L_08A888A4:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49))))));
    ctx.gpr[31] = (0x08A888C8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 96u, 0x08A888C8u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A888C8u) goto L_08A888C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A888C8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A888E4;
      }
      goto L_08A888D8;
    }
L_08A888D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A888FC;
      }
      goto L_08A888E4;
    }
L_08A888E4:
    aot_gpr_6 = (aot_gpr_16 - ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A888F4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 99u, 0x08A888F4u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A888F4u) goto L_08A888F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A888F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    goto L_08A888FC;
L_08A888FC:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(55))))));
    ctx.gpr[31] = (0x08A88920u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 101u, 0x08A88920u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88920u) goto L_08A88920;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88920:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88940;
      }
      goto L_08A88930;
    }
L_08A88930:
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A88940u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 103u, 0x08A88940u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88940u) goto L_08A88940;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88940:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88AE0;
      }
      goto L_08A88948;
    }
L_08A88948:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    aot_gpr_4 = (ctx.gpr[30] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A88974;
      }
      goto L_08A88964;
    }
L_08A88964:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + aot_gpr_4);
      if (branch_taken) {
          goto L_08A8897C;
      }
      goto L_08A88974;
    }
L_08A88974:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + aot_gpr_4);
    goto L_08A8897C;
L_08A8897C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A889A4;
      }
      goto L_08A88984;
    }
L_08A88984:
    ctx.gpr[31] = (0x08A8898Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 109u, 0x08A8898Cu, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8898Cu) goto L_08A8898C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8898C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08A889A4;
      }
      goto L_08A88998;
    }
L_08A88998:
    ctx.gpr[31] = (0x08A889A0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A889A0u) goto L_08A889A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A889A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A889A4;
L_08A889A4:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(61))))));
    ctx.gpr[31] = (0x08A889CCu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 113u, 0x08A889CCu, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A889CCu) goto L_08A889CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A889CC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_16;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A889F8;
      }
      goto L_08A889DC;
    }
L_08A889DC:
    ctx.gpr[17] = (ctx.gpr[20] - aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A889F0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 115u, 0x08A889F0u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A889F0u) goto L_08A889F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A889F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A889F8;
      }
      goto L_08A889F8;
    }
L_08A889F8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_gpr_16 = (ctx.gpr[23] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(67))))));
    ctx.gpr[31] = (0x08A88A20u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 117u, 0x08A88A20u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88A20u) goto L_08A88A20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88A20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    { const bool branch_taken = ctx.gpr[21] != aot_gpr_16;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88A3C;
      }
      goto L_08A88A30;
    }
L_08A88A30:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A88A58;
      }
      goto L_08A88A3C;
    }
L_08A88A3C:
    ctx.gpr[17] = (ctx.gpr[21] - ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A88A50u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 120u, 0x08A88A50u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88A50u) goto L_08A88A50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88A50:
    aot_gpr_16 = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08A88A58;
L_08A88A58:
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(73))))));
    ctx.gpr[31] = (0x08A88A7Cu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 122u, 0x08A88A7Cu, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88A7Cu) goto L_08A88A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88A7C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88A98;
      }
      goto L_08A88A8C;
    }
L_08A88A8C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A88AB4;
      }
      goto L_08A88A98;
    }
L_08A88A98:
    aot_gpr_16 = (ctx.gpr[17] - ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A88AACu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 125u, 0x08A88AACu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88AACu) goto L_08A88AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88AAC:
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A88AB4;
L_08A88AB4:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A88AD0;
      }
      goto L_08A88AC8;
    }
L_08A88AC8:
    ctx.gpr[31] = (0x08A88AD0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88AD0u) goto L_08A88AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88AD0:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[30]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], aot_gpr_16, aot_gpr_4};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_08A88AE0;
L_08A88AE0:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88B10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08A88B38u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A8AE14;
L_08A88B38:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_08A88B80;
      }
      goto L_08A88B48;
    }
L_08A88B48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(10001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A88B78;
      }
      goto L_08A88B60;
    }
L_08A88B60:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08A88B88;
      }
      goto L_08A88B70;
    }
L_08A88B70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88B88;
      }
      goto L_08A88B78;
    }
L_08A88B78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88BB0;
      }
      goto L_08A88B80;
    }
L_08A88B80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88BB0;
      }
      goto L_08A88B88;
    }
L_08A88B88:
    aot_gpr_7 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_7));
    aot_gpr_7 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_7));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_16 + aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A88BB0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08A886EC;
L_08A88BB0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88BC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A88C20;
      }
      goto L_08A88BE8;
    }
L_08A88BE8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08A88BF8u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08A8AE14;
L_08A88BF8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 51200u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A88C28;
      }
      goto L_08A88C18;
    }
L_08A88C18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88C58;
      }
      goto L_08A88C20;
    }
L_08A88C20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88C94;
      }
      goto L_08A88C28;
    }
L_08A88C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A88C40;
    }
    goto L_08A88C34;
L_08A88C34:
    ctx.gpr[31] = (0x08A88C3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88C3Cu) goto L_08A88C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A88C40;
L_08A88C40:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88C94;
      }
      goto L_08A88C58;
    }
L_08A88C58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A88C68;
      }
      goto L_08A88C68;
    }
L_08A88C68:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_7 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_7));
    aot_gpr_7 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_7));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_16 + aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A88C94u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08A886EC;
L_08A88C94:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88CA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_gpr_7 = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_gpr_4 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08A88CC8;
      }
      goto L_08A88CC0;
    }
L_08A88CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88CD8;
      }
      goto L_08A88CC8;
    }
L_08A88CC8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x08A88CD8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_08A88B10;
L_08A88CD8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88CE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_6);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_7 = (aot_gpr_7 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_7 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A88D54;
      }
      goto L_08A88D14;
    }
L_08A88D14:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A88D2C;
      }
      goto L_08A88D20;
    }
L_08A88D20:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_5;
      if (branch_taken) {
          goto L_08A88D44;
      }
      goto L_08A88D2C;
    }
L_08A88D2C:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_7 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A88D14;
      }
      goto L_08A88D3C;
    }
L_08A88D3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A88D54;
      }
      goto L_08A88D44;
    }
L_08A88D44:
    aot_gpr_4 = (0u | 45788u);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A88D5C;
      }
      goto L_08A88D54;
    }
L_08A88D54:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    goto L_08A88D5C;
L_08A88D5C:
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88D64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A88DE0;
      }
      goto L_08A88DC0;
    }
L_08A88DC0:
    ctx.gpr[31] = (0x08A88DC8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 165u, 0x08A88DC8u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88DC8u) goto L_08A88DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88DC8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A88DE0;
      }
      goto L_08A88DD4;
    }
L_08A88DD4:
    ctx.gpr[31] = (0x08A88DDCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88DDCu) goto L_08A88DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88DDC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08A88DE0;
L_08A88DE0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(6))))));
    ctx.gpr[31] = (0x08A88E1Cu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 169u, 0x08A88E1Cu, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88E1Cu) goto L_08A88E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88E1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88E48;
      }
      goto L_08A88E2C;
    }
L_08A88E2C:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A88E40u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 171u, 0x08A88E40u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88E40u) goto L_08A88E40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A88E48;
      }
      goto L_08A88E48;
    }
L_08A88E48:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (ctx.gpr[20] - aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A88E8C;
      }
      goto L_08A88E6C;
    }
L_08A88E6C:
    ctx.gpr[31] = (0x08A88E74u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 174u, 0x08A88E74u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88E74u) goto L_08A88E74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88E74:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A88E8C;
      }
      goto L_08A88E80;
    }
L_08A88E80:
    ctx.gpr[31] = (0x08A88E88u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88E88u) goto L_08A88E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88E88:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08A88E8C;
L_08A88E8C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(11))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(14))))));
    ctx.gpr[31] = (0x08A88EC8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 178u, 0x08A88EC8u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88EC8u) goto L_08A88EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88EC8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88EF4;
      }
      goto L_08A88ED8;
    }
L_08A88ED8:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A88EECu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 180u, 0x08A88EECu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88EECu) goto L_08A88EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A88EF4;
      }
      goto L_08A88EF4;
    }
L_08A88EF4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] - aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A88F38;
      }
      goto L_08A88F18;
    }
L_08A88F18:
    ctx.gpr[31] = (0x08A88F20u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 183u, 0x08A88F20u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88F20u) goto L_08A88F20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88F20:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A88F38;
      }
      goto L_08A88F2C;
    }
L_08A88F2C:
    ctx.gpr[31] = (0x08A88F34u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88F34u) goto L_08A88F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A88F34:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08A88F38;
L_08A88F38:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_6);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    ctx.gpr[31] = (0x08A88F78u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 187u, 0x08A88F78u, 0x08A87A98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88F78u) goto L_08A88F78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88F78:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A88FA4;
      }
      goto L_08A88F88;
    }
L_08A88F88:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A88F9Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 189u, 0x08A88F9Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A88F9Cu) goto L_08A88F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A88F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A88FA4;
      }
      goto L_08A88FA4;
    }
L_08A88FA4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A88FCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[9]);
    ctx.gpr[9] = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_7); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_gpr_7 = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A89038;
      }
      goto L_08A8902C;
    }
L_08A8902C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
      if (branch_taken) {
          goto L_08A89044;
      }
      goto L_08A89038;
    }
L_08A89038:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    goto L_08A89044;
L_08A89044:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8907C;
      }
      goto L_08A8904C;
    }
L_08A8904C:
    aot_gpr_4 = (ctx.gpr[20] << 4u);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[31] = (0x08A89064u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 196u, 0x08A89064u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89064u) goto L_08A89064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89064:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A8907C;
      }
      goto L_08A89070;
    }
L_08A89070:
    ctx.gpr[31] = (0x08A89078u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89078u) goto L_08A89078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89078:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08A8907C;
L_08A8907C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A890AC;
      }
      goto L_08A8908C;
    }
L_08A8908C:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
        goto L_08A890A4;
    }
    goto L_08A89098;
L_08A89098:
    ctx.gpr[31] = (0x08A890A0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_08A88D64;
L_08A890A0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
    goto L_08A890A4;
L_08A890A4:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A8908C;
      }
      goto L_08A890AC;
    }
L_08A890AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A890DC;
      }
      goto L_08A890BC;
    }
L_08A890BC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A890D0;
      }
      goto L_08A890C8;
    }
L_08A890C8:
    ctx.gpr[31] = (0x08A890D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A890D0:
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A8910C;
      }
      goto L_08A890DC;
    }
L_08A890DC:
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89108;
      }
      goto L_08A890E8;
    }
L_08A890E8:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08A89100;
    }
    goto L_08A890F4;
L_08A890F4:
    ctx.gpr[31] = (0x08A890FCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A890FC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A89100;
L_08A89100:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A890E8;
      }
      goto L_08A89108;
    }
L_08A89108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08A8910C;
L_08A8910C:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[17] = (aot_gpr_4 | 0u);
        goto L_08A89148;
    }
    goto L_08A89114;
L_08A89114:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89144;
      }
      goto L_08A89120;
    }
L_08A89120:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
        goto L_08A89138;
    }
    goto L_08A8912C;
L_08A8912C:
    ctx.gpr[31] = (0x08A89134u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A88D64;
L_08A89134:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    goto L_08A89138;
L_08A89138:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89120;
      }
      goto L_08A89140;
    }
L_08A89140:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08A89144;
L_08A89144:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08A89148;
L_08A89148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A891F8;
      }
      goto L_08A89158;
    }
L_08A89158:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A891E8;
      }
      goto L_08A89160;
    }
L_08A89160:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A8916C;
    }
L_08A8916C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A89174;
    }
L_08A89174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A89180;
    }
L_08A89180:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A89188;
    }
L_08A89188:
    ctx.gpr[31] = (0x08A89190u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89190u) goto L_08A89190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89190:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A89198;
    }
L_08A89198:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A891A0;
    }
L_08A891A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A891AC;
    }
L_08A891AC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A891B4;
    }
L_08A891B4:
    ctx.gpr[31] = (0x08A891BCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A891BCu) goto L_08A891BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A891BC:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
        goto L_08A891EC;
    }
    goto L_08A891C4;
L_08A891C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A891E8;
      }
      goto L_08A891CC;
    }
L_08A891CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
        goto L_08A891EC;
    }
    goto L_08A891D8;
L_08A891D8:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
        goto L_08A891EC;
    }
    goto L_08A891E0;
L_08A891E0:
    ctx.gpr[31] = (0x08A891E8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A891E8u) goto L_08A891E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A891E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    goto L_08A891EC;
L_08A891EC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08A89158;
      }
      goto L_08A891F4;
    }
L_08A891F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08A891F8;
L_08A891F8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A89208;
      }
      goto L_08A89200;
    }
L_08A89200:
    ctx.gpr[31] = (0x08A89208u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89208u) goto L_08A89208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89208:
    aot_gpr_4 = (ctx.gpr[20] << 4u);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[23], aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_run_words); }
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89254:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[17] - aot_gpr_4);
    ctx.gpr[19] = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_7 = (ctx.lo);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_gpr_7 << 4u);
    aot_gpr_7 = (ctx.gpr[20] - aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 << 2u);
    ctx.gpr[20] = (aot_gpr_7 - ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[8];
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A89430;
      }
      goto L_08A892AC;
    }
L_08A892AC:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
      if (branch_taken) {
          goto L_08A892E4;
      }
      goto L_08A892B4;
    }
L_08A892B4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A892D4;
      }
      goto L_08A892C0;
    }
L_08A892C0:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x08A892CCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A892CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08A892D4;
L_08A892D4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A89458;
      }
      goto L_08A892E4;
    }
L_08A892E4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_08A89300;
      }
      goto L_08A892F0;
    }
L_08A892F0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08A892FCu);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08A88D64;
L_08A892FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08A89300;
L_08A89300:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A89314u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A89314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-88));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[18] - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_08A89394;
      }
      goto L_08A8933C;
    }
L_08A8933C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-44));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A8936Cu);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 257u, 0x08A8936Cu, 0x08B6E74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8936Cu) goto L_08A8936C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8936C:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A89378u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 258u, 0x08A89378u, 0x08B6E74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89378u) goto L_08A89378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89378:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A89384u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 259u, 0x08A89384u, 0x08B6E74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89384u) goto L_08A89384;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89384:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A8933C;
      }
      goto L_08A89394;
    }
L_08A89394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A893B8u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 261u, 0x08A893B8u, 0x08B6E74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A893B8u) goto L_08A893B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A893B8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A893C4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 262u, 0x08A893C4u, 0x08B6E74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A893C4u) goto L_08A893C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A893C4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A893D0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 263u, 0x08A893D0u, 0x08B6E74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A893D0u) goto L_08A893D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A893D0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A893EC;
      }
      goto L_08A893DC;
    }
L_08A893DC:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
        goto L_08A893F0;
    }
    goto L_08A893E4;
L_08A893E4:
    ctx.gpr[31] = (0x08A893ECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A893ECu) goto L_08A893EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A893EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08A893F0;
L_08A893F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89408;
      }
      goto L_08A893F8;
    }
L_08A893F8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
        goto L_08A8940C;
    }
    goto L_08A89400;
L_08A89400:
    ctx.gpr[31] = (0x08A89408u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89408u) goto L_08A89408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_08A8940C;
L_08A8940C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89424;
      }
      goto L_08A89414;
    }
L_08A89414:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A89424;
      }
      goto L_08A8941C;
    }
L_08A8941C:
    ctx.gpr[31] = (0x08A89424u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89424u) goto L_08A89424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89424:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A89458;
      }
      goto L_08A89430;
    }
L_08A89430:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A89450u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08A88FCC;
L_08A89450:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    goto L_08A89458;
L_08A89458:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89478:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(120));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_6));
    { const std::uint32_t aot_run_words[9]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08A894D4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08A89254;
L_08A894D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A894F4;
      }
      goto L_08A894E4;
    }
L_08A894E4:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
        goto L_08A894F8;
    }
    goto L_08A894EC;
L_08A894EC:
    ctx.gpr[31] = (0x08A894F4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A894F4u) goto L_08A894F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A894F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    goto L_08A894F8;
L_08A894F8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89510;
      }
      goto L_08A89500;
    }
L_08A89500:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
        goto L_08A89514;
    }
    goto L_08A89508;
L_08A89508:
    ctx.gpr[31] = (0x08A89510u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89510u) goto L_08A89510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08A89514;
L_08A89514:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8952C;
      }
      goto L_08A8951C;
    }
L_08A8951C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8952C;
      }
      goto L_08A89524;
    }
L_08A89524:
    ctx.gpr[31] = (0x08A8952Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8952Cu) goto L_08A8952C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8952C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[31] = (0x08A8953Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A8AD44;
L_08A8953C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8955C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(120)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_4 = (0u | 44u);
    ctx.gpr[8] = (0u | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08A895B8;
      }
      goto L_08A89584;
    }
L_08A89584:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_5;
      if (branch_taken) {
          goto L_08A895B0;
      }
      goto L_08A89590;
    }
L_08A89590:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89584;
      }
      goto L_08A895A8;
    }
L_08A895A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A895B8;
      }
      goto L_08A895B0;
    }
L_08A895B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A895BC;
      }
      goto L_08A895B8;
    }
L_08A895B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A895BC;
L_08A895BC:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A895C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_7;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A89694;
      }
      goto L_08A89608;
    }
L_08A89608:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
      if (branch_taken) {
          goto L_08A8963C;
      }
      goto L_08A89610;
    }
L_08A89610:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A8962C;
      }
      goto L_08A8961C;
    }
L_08A8961C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08A8962C;
L_08A8962C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A897A0;
      }
      goto L_08A8963C;
    }
L_08A8963C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A89654;
      }
      goto L_08A89648;
    }
L_08A89648:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08A89654;
L_08A89654:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89684;
      }
      goto L_08A89674;
    }
L_08A89674:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[31] = (0x08A89684u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 308u, 0x08A89684u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89684u) goto L_08A89684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89684:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A897A0;
      }
      goto L_08A89694;
    }
L_08A89694:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] - aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A896C8;
      }
      goto L_08A896B8;
    }
L_08A896B8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
      if (branch_taken) {
          goto L_08A896D4;
      }
      goto L_08A896C8;
    }
L_08A896C8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
    goto L_08A896D4;
L_08A896D4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A89700;
      }
      goto L_08A896DC;
    }
L_08A896DC:
    ctx.gpr[31] = (0x08A896E4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 314u, 0x08A896E4u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A896E4u) goto L_08A896E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A896E4:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08A89700;
    }
    goto L_08A896F0;
L_08A896F0:
    ctx.gpr[31] = (0x08A896F8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A896F8u) goto L_08A896F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A896F8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08A89700;
L_08A89700:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_6;
    ctx.gpr[21] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A89718;
      }
      goto L_08A8970C;
    }
L_08A8970C:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A89738;
      }
      goto L_08A89718;
    }
L_08A89718:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[22] = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8972Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 320u, 0x08A8972Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8972Cu) goto L_08A8972C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8972C:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08A89738;
L_08A89738:
    ctx.gpr[22] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[22] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08A8974Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8974Cu) goto L_08A8974C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8974C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A89764;
      }
      goto L_08A89758;
    }
L_08A89758:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8977C;
      }
      goto L_08A89764;
    }
L_08A89764:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89774u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 325u, 0x08A89774u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89774u) goto L_08A89774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89774:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08A8977C;
L_08A8977C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8978C;
      }
      goto L_08A89784;
    }
L_08A89784:
    ctx.gpr[31] = (0x08A8978Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8978Cu) goto L_08A8978C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8978C:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[20]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[17], aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[2] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_08A897A0;
L_08A897A0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A897C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    ctx.gpr[31] = (0x08A897F0u);
    goto L_08A8AE14;
L_08A897F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[31] = (0x08A89808u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 332u, 0x08A89808u, 0x08B6ED5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 622u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 622u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 622u, 0x08B6ED5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89808u) goto L_08A89808;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89808:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A8982Cu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 333u, 0x08A8982Cu, 0x08B6ED70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 623u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 623u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 623u, 0x08B6ED70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8982Cu) goto L_08A8982C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8982C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A89848;
      }
      goto L_08A8983C;
    }
L_08A8983C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A8985C;
      }
      goto L_08A89848;
    }
L_08A89848:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A8985Cu);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    goto L_08A895C4;
L_08A8985C:
    ctx.gpr[31] = (0x08A89864u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08A8AD44;
L_08A89864:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89880:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[31] = (0x08A898A8u);
    goto L_08A89998;
L_08A898A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A898E8;
      }
      goto L_08A898B0;
    }
L_08A898B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A898BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A8AE14;
L_08A898BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A898D4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 342u, 0x08A898D4u, 0x08B6EDD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 630u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 630u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 630u, 0x08B6EDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A898D4u) goto L_08A898D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A898D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A898F0;
      }
      goto L_08A898E0;
    }
L_08A898E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A89924;
      }
      goto L_08A898E8;
    }
L_08A898E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A89964;
      }
      goto L_08A898F0;
    }
L_08A898F0:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08A89924;
      }
      goto L_08A898FC;
    }
L_08A898FC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08A89900;
L_08A89900:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_6 == aot_gpr_7) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08A8991C;
    }
    goto L_08A8990C;
L_08A8990C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08A8991C;
L_08A8991C:
    if (aot_gpr_4 != ctx.gpr[18]) {
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08A89900;
    }
    goto L_08A89924;
L_08A89924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89954;
      }
      goto L_08A89934;
    }
L_08A89934:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    ctx.gpr[31] = (0x08A8994Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 352u, 0x08A8994Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8994Cu) goto L_08A8994C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8994C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A89954;
      }
      goto L_08A89954;
    }
L_08A89954:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_5);
    ctx.gpr[31] = (0x08A89964u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08A8AD44;
L_08A89964:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8997C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8998Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    goto L_08A89998;
L_08A8998C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89998:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A899E0;
      }
      goto L_08A899B8;
    }
L_08A899B8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A899E0;
      }
      goto L_08A899C4;
    }
L_08A899C4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A899D0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08A8955C;
L_08A899D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A899E8;
      }
      goto L_08A899D8;
    }
L_08A899D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A89A14;
      }
      goto L_08A899E0;
    }
L_08A899E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A89A14;
      }
      goto L_08A899E8;
    }
L_08A899E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A899F4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08A8AE14;
L_08A899F4:
    aot_gpr_16 = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A89A08u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 365u, 0x08A89A08u, 0x08B6EC68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 597u, 0x08B6EC68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89A08u) goto L_08A89A08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] ^ aot_gpr_4);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A89A14;
L_08A89A14:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89A28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[19] = (0u | 44u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[20] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A89AAC;
      }
      goto L_08A89A74;
    }
L_08A89A74:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89A88u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08A89880;
L_08A89A88:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[20] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89A74;
      }
      goto L_08A89AAC;
    }
L_08A89AAC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89ACC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(120)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_7);
    aot_gpr_5 = (0u | 44u);
    aot_gpr_6 = (0u | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (aot_gpr_6 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A89B4C;
      }
      goto L_08A89AF4;
    }
L_08A89AF4:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_7 + static_cast<std::uint32_t>(32));
    goto L_08A89B00;
L_08A89B00:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_7 = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08A89B3C;
      }
      goto L_08A89B20;
    }
L_08A89B20:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A89B24;
L_08A89B24:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A89B24;
      }
      goto L_08A89B3C;
    }
L_08A89B3C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89B00;
      }
      goto L_08A89B4C;
    }
L_08A89B4C:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89B54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_7 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08A89B94u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 379u, 0x08A89B94u, 0x08A3C840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89B94u) goto L_08A89B94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89B94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A89BE0;
      }
      goto L_08A89BBC;
    }
L_08A89BBC:
    aot_gpr_7 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_5 = (aot_gpr_5 & 255u);
        goto L_08A89BE4;
    }
    goto L_08A89BCC;
L_08A89BCC:
    aot_gpr_7 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08A89BE4;
      }
      goto L_08A89BDC;
    }
L_08A89BDC:
    aot_gpr_5 = (0u | 1u);
    goto L_08A89BE0;
L_08A89BE0:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A89BE4;
L_08A89BE4:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A89C04;
    }
    goto L_08A89BEC;
L_08A89BEC:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A89C04;
      }
      goto L_08A89BFC;
    }
L_08A89BFC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A89C04;
L_08A89C04:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A89C3C;
      }
      goto L_08A89C0C;
    }
L_08A89C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A89C28;
      }
      goto L_08A89C18;
    }
L_08A89C18:
    ctx.gpr[31] = (0x08A89C20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89C20u) goto L_08A89C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89C20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (ctx.gpr[19] & 255u);
    goto L_08A89C28;
L_08A89C28:
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89C34u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 392u, 0x08A89C34u, 0x08A52CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 501u, 0x08A52CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89C34u) goto L_08A89C34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89C34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A89D80;
      }
      goto L_08A89C3C;
    }
L_08A89C3C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (aot_gpr_6 - aot_gpr_7);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[10] = (ctx.gpr[10] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[20] = (aot_gpr_4 << 2u);
    if (ctx.gpr[9] == 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08A89C70;
    }
    goto L_08A89C70;
L_08A89C70:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A89CBC;
      }
      goto L_08A89C7C;
    }
L_08A89C7C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08A89CA4;
      }
      goto L_08A89C8C;
    }
L_08A89C8C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), aot_gpr_4);
      if (branch_taken) {
          goto L_08A89CBC;
      }
      goto L_08A89CA4;
    }
L_08A89CA4:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 - ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A89CB8u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 398u, 0x08A89CB8u, 0x08B6E938u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 548u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 548u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 548u, 0x08B6E938u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89CB8u) goto L_08A89CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89CB8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    goto L_08A89CBC;
L_08A89CBC:
    aot_gpr_4 = (aot_gpr_7 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A89CE0;
      }
      goto L_08A89CCC;
    }
L_08A89CCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (0u | 45792u);
      if (branch_taken) {
          goto L_08A89CE8;
      }
      goto L_08A89CD8;
    }
L_08A89CD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A89D14;
      }
      goto L_08A89CE0;
    }
L_08A89CE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A89D80;
      }
      goto L_08A89CE8;
    }
L_08A89CE8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08A89CF4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89CF4u) goto L_08A89CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89CF4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A89D38;
      }
      goto L_08A89D04;
    }
L_08A89D04:
    ctx.gpr[31] = (0x08A89D0Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08A8AE70;
L_08A89D0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A89D38;
      }
      goto L_08A89D14;
    }
L_08A89D14:
    ctx.gpr[31] = (0x08A89D1Cu);
    ctx.gpr[21] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 408u, 0x08A89D1Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89D1Cu) goto L_08A89D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89D1C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A89D38;
      }
      goto L_08A89D28;
    }
L_08A89D28:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89D34u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08A8AE70;
L_08A89D34:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08A89D38;
L_08A89D38:
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_5 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A89D70;
      }
      goto L_08A89D60;
    }
L_08A89D60:
    ctx.gpr[31] = (0x08A89D68u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89D68u) goto L_08A89D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89D68:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (ctx.gpr[19] & 255u);
    goto L_08A89D70;
L_08A89D70:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89D80u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 415u, 0x08A89D80u, 0x08A52CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 501u, 0x08A52CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89D80u) goto L_08A89D80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89D80:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89DA8:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A89DCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1696));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1648), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1644), aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(0u));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x08A89E18u);
    aot_gpr_6 = (0u | 1404u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89E18u) goto L_08A89E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A89E18:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A89E24u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08A8A9D8;
L_08A89E24:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(222));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1640), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08A89E60;
    }
    goto L_08A89E60;
L_08A89E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(204));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10085)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (18766u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17999));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_7 = (2217u << 16u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-25176));
    aot_gpr_5 = (0u | 16u);
    ctx.gpr[31] = (0x08A89EB4u);
    aot_gpr_6 = (0u | 12u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 421u, 0x08A89EB4u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89EB4u) goto L_08A89EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89EB4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 102u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1640)));
    goto L_08A89EC0;
L_08A89EC0:
    aot_gpr_7 = (aot_gpr_29 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(1))))));
    ctx.gpr[9] = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A89EC0;
      }
      goto L_08A89EE4;
    }
L_08A89EE4:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[20] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(1624));
      if (branch_taken) {
          goto L_08A8A038;
      }
      goto L_08A89F10;
    }
L_08A89F10:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1640)));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1616));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1632));
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(14));
    ctx.gpr[17] = (0u | 0u);
    goto L_08A89F24;
L_08A89F24:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_5;
      if (branch_taken) {
          goto L_08A89FA0;
      }
      goto L_08A89F30;
    }
L_08A89F30:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A89F3Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 427u, 0x08A89F3Cu, 0x08A3C840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89F3Cu) goto L_08A89F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89F3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1624)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1616), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1620), aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A89F70u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 428u, 0x08A89F70u, 0x08A3C840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A89F70u) goto L_08A89F70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A89F70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1632)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1636)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1616), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1620), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1622)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store_word_right(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_16 + static_cast<std::uint32_t>(23), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_08A89FA0;
L_08A89FA0:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8A008;
      }
      goto L_08A89FB0;
    }
L_08A89FB0:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store_word_right(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_16 + static_cast<std::uint32_t>(23), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_08A8A008;
L_08A8A008:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[20] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A89F24;
      }
      goto L_08A8A038;
    }
L_08A8A038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1640)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8A064u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1644)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 433u, 0x08A8A064u, 0x08A3C94Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 118u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 118u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A064u) goto L_08A8A064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8A064:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1648), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1696));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A094:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[18] = (ctx.gpr[17] << 2u);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_7 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A8A118;
      }
      goto L_08A8A0E8;
    }
L_08A8A0E8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A8A108;
      }
      goto L_08A8A0F4;
    }
L_08A8A0F4:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08A8A108;
      }
      goto L_08A8A100;
    }
L_08A8A100:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8A118;
      }
      goto L_08A8A108;
    }
L_08A8A108:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_7 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8A0E8;
      }
      goto L_08A8A118;
    }
L_08A8A118:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A8A154;
      }
      goto L_08A8A120;
    }
L_08A8A120:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A8A12Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A8A71C;
L_08A8A12C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8A15C;
      }
      goto L_08A8A140;
    }
L_08A8A140:
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08A8A148u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A148u) goto L_08A8A148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8A148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8A16C;
      }
      goto L_08A8A154;
    }
L_08A8A154:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8A1C0;
      }
      goto L_08A8A15C;
    }
L_08A8A15C:
    ctx.gpr[31] = (0x08A8A164u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A164u) goto L_08A8A164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8A164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    goto L_08A8A16C;
L_08A8A16C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A8A180u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08A89880;
L_08A8A180:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8A190u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08A89880;
L_08A8A190:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_5 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A8A1B8;
      }
      goto L_08A8A1A8;
    }
L_08A8A1A8:
    ctx.gpr[31] = (0x08A8A1B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A1B0u) goto L_08A8A1B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8A1B0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    goto L_08A8A1B8;
L_08A8A1B8:
    ctx.gpr[31] = (0x08A8A1C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 453u, 0x08A8A1C0u, 0x08A52F08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 537u, 0x08A52F08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A1C0u) goto L_08A8A1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8A1C0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A1D8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A1E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[20] = (aot_gpr_6 << 2u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[18] = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08A8A224;
      }
      goto L_08A8A21C;
    }
L_08A8A21C:
    ctx.gpr[31] = (0x08A8A224u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A224u) goto L_08A8A224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8A224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8A23Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 458u, 0x08A8A23Cu, 0x08A52FF8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A23Cu) goto L_08A8A23C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8A23C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8A410;
      }
      goto L_08A8A24C;
    }
L_08A8A24C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A8A410;
      }
      goto L_08A8A258;
    }
L_08A8A258:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08A8A27C;
      }
      goto L_08A8A260;
    }
L_08A8A260:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(592)));
    aot_gpr_6 = (aot_gpr_5 & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
      if (branch_taken) {
          goto L_08A8A288;
      }
      goto L_08A8A27C;
    }
L_08A8A27C:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    goto L_08A8A288;
L_08A8A288:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_gpr_7 ^ 46u);
    aot_gpr_7 = (aot_gpr_7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08A8A2EC;
      }
      goto L_08A8A2B8;
    }
L_08A8A2B8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08A8A2FC;
      }
      goto L_08A8A2E4;
    }
L_08A8A2E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8A308;
      }
      goto L_08A8A2EC;
    }
L_08A8A2EC:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8A4F4;
      }
      goto L_08A8A2FC;
    }
L_08A8A2FC:
    aot_gpr_7 = (0u | 47u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08A8A308;
L_08A8A308:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 << 2u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(12));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[8] = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 << 2u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 << 2u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 << 2u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 ^ 46u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8A3C4;
      }
      goto L_08A8A3BC;
    }
L_08A8A3BC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A8A3C4;
L_08A8A3C4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08A8A410;
      }
      goto L_08A8A3CC;
    }
L_08A8A3CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(592));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(592));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 4095u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A8A410;
L_08A8A410:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[20]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8A430u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 473u, 0x08A8A430u, 0x08A3C94Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 118u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 118u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A430u) goto L_08A8A430;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8A430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[20] = (aot_gpr_16 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2392)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(42));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2392), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2384)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(42));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(2384), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (60u << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (1u << 16u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(2400)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08A8A4E0;
      }
      goto L_08A8A4CC;
    }
L_08A8A4CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2392)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(2396), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2392), 0u);
    goto L_08A8A4E0;
L_08A8A4E0:
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2400));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08A8A4F4;
L_08A8A4F4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A514:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_7 - ctx.gpr[8]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A8A598;
      }
      goto L_08A8A548;
    }
L_08A8A548:
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_7 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_7 ? 1u : 0u);
    goto L_08A8A564;
L_08A8A564:
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08A8A598;
      }
      goto L_08A8A56C;
    }
L_08A8A56C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A8A598;
      }
      goto L_08A8A574;
    }
L_08A8A574:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_gpr_7 = (ctx.gpr[17] + aot_gpr_5);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8A564;
      }
      goto L_08A8A598;
    }
L_08A8A598:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x08A8A5B0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 483u, 0x08A8A5B0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A5B0u) goto L_08A8A5B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8A5B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A5D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_7 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_7 | 0u);
    goto L_08A8A60C;
L_08A8A60C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8A6FC;
      }
      goto L_08A8A614;
    }
L_08A8A614:
    aot_gpr_4 = (aot_mem.aot_direct_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), aot_gpr_4));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8A6FC;
      }
      goto L_08A8A628;
    }
L_08A8A628:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10084)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A8A66C;
      }
      goto L_08A8A638;
    }
L_08A8A638:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(6), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8A654u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A8B6B4;
L_08A8A654:
    aot_gpr_4 = (aot_mem.aot_direct_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), aot_gpr_4));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8A60C;
      }
      goto L_08A8A66C;
    }
L_08A8A66C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8A654;
      }
      goto L_08A8A678;
    }
L_08A8A678:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[8] = (ctx.gpr[20] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A8A6ACu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A6ACu) goto L_08A8A6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8A6AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A8A6C4;
    }
    goto L_08A8A6B8;
L_08A8A6B8:
    ctx.gpr[31] = (0x08A8A6C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8A6C0u) goto L_08A8A6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8A6C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A8A6C4;
L_08A8A6C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8A6E4;
      }
      goto L_08A8A6D4;
    }
L_08A8A6D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A8A6EC;
      }
      goto L_08A8A6E4;
    }
L_08A8A6E4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A8A6EC;
L_08A8A6EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8A654;
      }
      goto L_08A8A6F4;
    }
L_08A8A6F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8A6FC;
      }
      goto L_08A8A6FC;
    }
L_08A8A6FC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A71C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(576));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      ctx.gpr[8] = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_7 + static_cast<std::uint32_t>(576));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_7);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_7 ^ ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_7 = (aot_gpr_7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A8A880;
      }
      goto L_08A8A804;
    }
L_08A8A804:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08A8A824;
      }
      goto L_08A8A814;
    }
L_08A8A814:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_7);
    goto L_08A8A824;
L_08A8A824:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (aot_gpr_5 != aot_gpr_7) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_08A8A848;
    }
    goto L_08A8A83C;
L_08A8A83C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08A8A848;
L_08A8A848:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_7, ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A8A804;
      }
      goto L_08A8A87C;
    }
L_08A8A87C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    goto L_08A8A880;
L_08A8A880:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (0u | 47u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    aot_gpr_7 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A8A8A8;
L_08A8A8A8:
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8A92C;
      }
      goto L_08A8A8B0;
    }
L_08A8A8B0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[8] = (aot_gpr_7 < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
      if (branch_taken) {
          goto L_08A8A8DC;
      }
      goto L_08A8A8C4;
    }
L_08A8A8C4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_7 = (ctx.lo);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8A8F8;
      }
      goto L_08A8A8DC;
    }
L_08A8A8DC:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_7 = (ctx.lo);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(144));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    goto L_08A8A8F8;
L_08A8A8F8:
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08A8A92C;
      }
      goto L_08A8A900;
    }
L_08A8A900:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(140), aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(136)));
    aot_gpr_7 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (aot_gpr_7 & 255u);
      if (branch_taken) {
          goto L_08A8A91C;
      }
      goto L_08A8A914;
    }
L_08A8A914:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(136), aot_gpr_5);
      if (branch_taken) {
          goto L_08A8A924;
      }
      goto L_08A8A91C;
    }
L_08A8A91C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    goto L_08A8A924;
L_08A8A924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8A8A8;
      }
      goto L_08A8A92C;
    }
L_08A8A92C:
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A934:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8A9C0;
      }
      goto L_08A8A978;
    }
L_08A8A978:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8A998;
      }
      goto L_08A8A988;
    }
L_08A8A988:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A8A994u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A8A094;
L_08A8A994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    goto L_08A8A998;
L_08A8A998:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8A978;
      }
      goto L_08A8A9C0;
    }
L_08A8A9C0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8A9D8:
    aot_gpr_6 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8AA00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1520));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1492), aot_run_words); }
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(2388), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1448), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_6 = (60u << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1456), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_7 = (1u << 16u);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(2412)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1464), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_7);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_7); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1472), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1480), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A8AAA8;
      }
      goto L_08A8AA8C;
    }
L_08A8AA8C:
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2404)));
    aot_gpr_6 = (1u << 16u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(2408), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2404), 0u);
    goto L_08A8AAA8;
L_08A8AAA8:
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2412));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(100));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1484), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1485), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1486), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1487), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1488), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1489), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1484)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1488))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08A8AB24;
L_08A8AB24:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1400u);
    ctx.gpr[31] = (0x08A8AB34u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 530u, 0x08A8AB34u, 0x08A3C868u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 104u, 0x08A3C868u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8AB34u) goto L_08A8AB34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8AB34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8ABA8;
      }
      goto L_08A8AB3C;
    }
L_08A8AB3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A8AB50u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A8BDB0;
L_08A8AB50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A8AB68;
    }
    goto L_08A8AB5C;
L_08A8AB5C:
    ctx.gpr[31] = (0x08A8AB64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8AB64u) goto L_08A8AB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8AB64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A8AB68;
L_08A8AB68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8AB88;
      }
      goto L_08A8AB78;
    }
L_08A8AB78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A8AB90;
      }
      goto L_08A8AB88;
    }
L_08A8AB88:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A8AB90;
L_08A8AB90:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A8ABA0;
      }
      goto L_08A8AB98;
    }
L_08A8AB98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A8AB24;
      }
      goto L_08A8ABA0;
    }
L_08A8ABA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8AD24;
      }
      goto L_08A8ABA8;
    }
L_08A8ABA8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 31u);
      if (branch_taken) {
          goto L_08A8AD24;
      }
      goto L_08A8ABD4;
    }
L_08A8ABD4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A8ABD8;
L_08A8ABD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8ACF8;
      }
      goto L_08A8ABEC;
    }
L_08A8ABEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    goto L_08A8ABF0;
L_08A8ABF0:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(596));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A8ACF8;
      }
      goto L_08A8AC10;
    }
L_08A8AC10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(596));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8ACF8;
      }
      goto L_08A8AC44;
    }
L_08A8AC44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(596));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr_7 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(6));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8AC94u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08A8A5D4;
L_08A8AC94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(7)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(594), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(596));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_5 != ctx.gpr[19]) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08A8ACE8;
    }
    goto L_08A8ACE0;
L_08A8ACE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A8ACF0;
      }
      goto L_08A8ACE8;
    }
L_08A8ACE8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08A8ACF0;
L_08A8ACF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08A8ABF0;
      }
      goto L_08A8ACF8;
    }
L_08A8ACF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8ABD8;
      }
      goto L_08A8AD24;
    }
L_08A8AD24:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1492), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8AD44:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8AE0C;
      }
      goto L_08A8AD58;
    }
L_08A8AD58:
    aot_gpr_5 = (0u | 44u);
    goto L_08A8AD5C;
L_08A8AD5C:
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_7));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(120)));
    aot_gpr_6 = (ctx.gpr[9] | 0u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[8];
      if (branch_taken) {
          goto L_08A8ADFC;
      }
      goto L_08A8AD70;
    }
L_08A8AD70:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[11]);
    goto L_08A8AD7C;
L_08A8AD7C:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[13] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[13];
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ADCC;
      }
      goto L_08A8AD90;
    }
L_08A8AD90:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    if (ctx.gpr[13] == ctx.gpr[2]) {
    ctx.gpr[12] = (0u | 1u);
        goto L_08A8ADC0;
    }
    goto L_08A8AD9C;
L_08A8AD9C:
    ctx.gpr[14] = (aot_mem.aot_direct_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (aot_mem.aot_direct_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[15];
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8ADB4;
      }
      goto L_08A8ADAC;
    }
L_08A8ADAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ADC0;
      }
      goto L_08A8ADB4;
    }
L_08A8ADB4:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[2];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8AD9C;
      }
      goto L_08A8ADBC;
    }
L_08A8ADBC:
    ctx.gpr[12] = (0u | 1u);
    goto L_08A8ADC0;
L_08A8ADC0:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
      if (branch_taken) {
          goto L_08A8ADD0;
      }
      goto L_08A8ADC8;
    }
L_08A8ADC8:
    ctx.gpr[3] = (0u | 1u);
    goto L_08A8ADCC;
L_08A8ADCC:
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    goto L_08A8ADD0;
L_08A8ADD0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
      if (branch_taken) {
          goto L_08A8ADF0;
      }
      goto L_08A8ADD8;
    }
L_08A8ADD8:
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08A8AE00;
      }
      goto L_08A8ADF0;
    }
L_08A8ADF0:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(44));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
      if (branch_taken) {
          goto L_08A8AD7C;
      }
      goto L_08A8ADFC;
    }
L_08A8ADFC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    goto L_08A8AE00;
L_08A8AE00:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
      if (branch_taken) {
          goto L_08A8AD5C;
      }
      goto L_08A8AE0C;
    }
L_08A8AE0C:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8AE14:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(120)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_6 = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8AE64;
      }
      goto L_08A8AE3C;
    }
L_08A8AE3C:
    ctx.gpr[2] = (aot_gpr_7 + ctx.gpr[2]);
    goto L_08A8AE40;
L_08A8AE40:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A8AE54;
      }
      goto L_08A8AE4C;
    }
L_08A8AE4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8AE68;
      }
      goto L_08A8AE54;
    }
L_08A8AE54:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A8AE40;
      }
      goto L_08A8AE64;
    }
L_08A8AE64:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8AE68;
L_08A8AE68:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8AE70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_4));
    { const std::uint32_t aot_run_words[4]{aot_gpr_6, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    aot_gpr_7 = (2217u << 16u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-24104));
    aot_gpr_5 = (0u | 47u);
    ctx.gpr[31] = (0x08A8AECCu);
    aot_gpr_6 = (0u | 12u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 581u, 0x08A8AECCu, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8AECCu) goto L_08A8AECC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8AECC:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(592), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(594), static_cast<std::uint16_t>(0u));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(596), aot_run_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(608));
    aot_gpr_7 = (2216u << 16u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(31404));
    aot_gpr_5 = (0u | 32u);
    ctx.gpr[31] = (0x08A8AEF8u);
    aot_gpr_6 = (0u | 1404u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 582u, 0x08A8AEF8u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8AEF8u) goto L_08A8AEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8AEF8:
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-20000), 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19996), 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19992), 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19860), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 30u);
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-19848), aot_gpr_4);
    aot_gpr_4 = (0u | 30u);
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-19844), aot_gpr_4);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-19840), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (34953u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30584));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-19836), aot_gpr_4);
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-19832), aot_gpr_4);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19824), 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19820), 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19816), 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-19748), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8AFE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-2928));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2888), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08A8B018u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(56));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0094.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 584u, 0x08A8B018u, 0x0897F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0094_entry(rt, ctx, 931u, aot_mem);
#else
        recomp_unit_0094_entry(rt, ctx, 931u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 931u, 0x0897F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B018u) goto L_08A8B018;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B018:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (19056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(100));
    ctx.gpr[19] = (1u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2868), aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2384), 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B068u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A8AE14;
L_08A8B068:
    aot_gpr_16 = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A8B1E4;
      }
      goto L_08A8B088;
    }
L_08A8B088:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1428));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_08A8B0A0;
L_08A8B0A0:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B0B0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A8A9D8;
L_08A8B0B0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2876), ctx.gpr[20]);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B0CCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2872), ctx.gpr[18]);
    goto L_08A8A514;
L_08A8B0CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2880), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B100u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 590u, 0x08A8B100u, 0x08A3C840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B100u) goto L_08A8B100;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B100:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1428))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1430))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1432))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1434)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2880)));
    ctx.gpr[31] = (0x08A8B164u);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 591u, 0x08A8B164u, 0x08A3C94Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 118u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 118u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B164u) goto L_08A8B164;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2392)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(42));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2392), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2384)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(42));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2384), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2856), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2872)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2876)));
      if (branch_taken) {
          goto L_08A8B1C0;
      }
      goto L_08A8B1A4;
    }
L_08A8B1A4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2876), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[31] = (0x08A8B1B4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 593u, 0x08A8B1B4u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B1B4u) goto L_08A8B1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B1B4:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2876)));
      if (branch_taken) {
          goto L_08A8B1C0;
      }
      goto L_08A8B1C0;
    }
L_08A8B1C0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8B0A0;
      }
      goto L_08A8B1E4;
    }
L_08A8B1E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1440), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1436), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8B65C;
      }
      goto L_08A8B210;
    }
L_08A8B210:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[23] ^ 1u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2864), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 ^ 47u);
    ctx.gpr[19] = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_08A8B24C;
L_08A8B24C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_08A8B5A4;
      }
      goto L_08A8B254;
    }
L_08A8B254:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_08A8B284;
      }
      goto L_08A8B264;
    }
L_08A8B264:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2864)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A8B5A4;
      }
      goto L_08A8B278;
    }
L_08A8B278:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A8B5A4;
      }
      goto L_08A8B284;
    }
L_08A8B284:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1444));
    ctx.gpr[31] = (0x08A8B290u);
    aot_gpr_5 = (0u | 1412u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 602u, 0x08A8B290u, 0x08B60818u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 94u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 94u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 94u, 0x08B60818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B290u) goto L_08A8B290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B290:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1448), 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(1460), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B2C0;
      }
      goto L_08A8B2B0;
    }
L_08A8B2B0:
    aot_gpr_4 = (0u | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), aot_gpr_4);
    aot_gpr_6 = (0u | 48u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_08A8B2C0;
L_08A8B2C0:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(144));
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (0u | 176u);
    ctx.gpr[9] = (aot_gpr_29 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1444)));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08A8B2EC;
L_08A8B2EC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1448)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_gpr_29 + aot_gpr_7);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1444)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_7);
      if (branch_taken) {
          goto L_08A8B2EC;
      }
      goto L_08A8B310;
    }
L_08A8B310:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2868)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B350u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_08A8A9D8;
L_08A8B350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2864)));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A8B3C0;
      }
      goto L_08A8B36C;
    }
L_08A8B36C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A8B3C0;
      }
      goto L_08A8B378;
    }
L_08A8B378:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B3A4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08A8A514;
L_08A8B3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_16 + ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2864), aot_gpr_5);
    goto L_08A8B3C0;
L_08A8B3C0:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] == aot_gpr_5;
      if (branch_taken) {
          goto L_08A8B3F8;
      }
      goto L_08A8B3D4;
    }
L_08A8B3D4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B3F0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08A8A514;
L_08A8B3F0:
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    goto L_08A8B3F8;
L_08A8B3F8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_08A8B528;
      }
      goto L_08A8B41C;
    }
L_08A8B41C:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A8B440;
      }
      goto L_08A8B438;
    }
L_08A8B438:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8B50C;
      }
      goto L_08A8B440;
    }
L_08A8B440:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08A8B4E8;
      }
      goto L_08A8B44C;
    }
L_08A8B44C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    aot_gpr_16 = (ctx.gpr[17] << 4u);
    aot_gpr_5 = (aot_gpr_16 - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_16 = (aot_gpr_5 - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A8B4E8;
      }
      goto L_08A8B484;
    }
L_08A8B484:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B498u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_08A8A514;
L_08A8B498:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A8B4E8;
      }
      goto L_08A8B4A4;
    }
L_08A8B4A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2858), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8B4E0;
      }
      goto L_08A8B4C4;
    }
L_08A8B4C4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2884), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[31] = (0x08A8B4D4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 623u, 0x08A8B4D4u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B4D4u) goto L_08A8B4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B4D4:
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2884)));
      if (branch_taken) {
          goto L_08A8B4E0;
      }
      goto L_08A8B4E0;
    }
L_08A8B4E0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2859), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08A8B4E8;
L_08A8B4E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A8B50C;
      }
      goto L_08A8B4F8;
    }
L_08A8B4F8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8B50Cu);
    aot_gpr_7 = (0u | 0u);
    goto L_08A8A1E4;
L_08A8B50C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_5;
      if (branch_taken) {
          goto L_08A8B41C;
      }
      goto L_08A8B528;
    }
L_08A8B528:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08A8B57C;
      }
      goto L_08A8B548;
    }
L_08A8B548:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 ^ 47u);
    ctx.gpr[19] = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (0u | 47u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A8B570;
      }
      goto L_08A8B568;
    }
L_08A8B568:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), 0u);
      if (branch_taken) {
          goto L_08A8B59C;
      }
      goto L_08A8B570;
    }
L_08A8B570:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), aot_gpr_5);
      if (branch_taken) {
          goto L_08A8B59C;
      }
      goto L_08A8B57C;
    }
L_08A8B57C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_gpr_5 = (aot_gpr_5 ^ 47u);
    ctx.gpr[19] = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_08A8B59C;
L_08A8B59C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8B24C;
      }
      goto L_08A8B5A4;
    }
L_08A8B5A4:
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[30];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2860), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8B5DC;
      }
      goto L_08A8B5C4;
    }
L_08A8B5C4:
    ctx.gpr[17] = (aot_gpr_5 - ctx.gpr[30]);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A8B5D4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 636u, 0x08A8B5D4u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B5D4u) goto L_08A8B5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B5D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8B5DC;
      }
      goto L_08A8B5DC;
    }
L_08A8B5DC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2861), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2862), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2864)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[17] = (aot_gpr_5 - aot_gpr_6);
      if (branch_taken) {
          goto L_08A8B624;
      }
      goto L_08A8B610;
    }
L_08A8B610:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x08A8B61Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 639u, 0x08A8B61Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B61Cu) goto L_08A8B61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B61C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8B624;
      }
      goto L_08A8B624;
    }
L_08A8B624:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2863), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1440)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-44));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1440), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1436), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A8B210;
      }
      goto L_08A8B65C;
    }
L_08A8B65C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8B684;
      }
      goto L_08A8B668;
    }
L_08A8B668:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A8B684;
      }
      goto L_08A8B67C;
    }
L_08A8B67C:
    ctx.gpr[31] = (0x08A8B684u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 644u, 0x08A8B684u, 0x08A87FFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 661u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 661u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 661u, 0x08A87FFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8B684u) goto L_08A8B684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8B684:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(2888), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(2928));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8B6B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_run_words); }
    ctx.gpr[8] = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(28));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(592));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(28));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[8]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      ctx.gpr[9] = aot_run_words[0];
      ctx.gpr[10] = aot_run_words[1];
      ctx.gpr[11] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(28));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], aot_gpr_6, ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A8BD98;
      }
      goto L_08A8B7A0;
    }
L_08A8B7A0:
    ctx.gpr[14] = (aot_gpr_7 & 4095u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      ctx.gpr[2] = aot_run_words[0];
      ctx.gpr[3] = aot_run_words[1];
      ctx.gpr[12] = aot_run_words[2];
    }
    goto L_08A8B7B8;
L_08A8B7B8:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_direct_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[25] != 0u;
      if (branch_taken) {
          goto L_08A8BD0C;
      }
      goto L_08A8B7C8;
    }
L_08A8B7C8:
    ctx.gpr[25] = (aot_mem.aot_direct_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[25] = (ctx.gpr[25] & 4095u);
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[14];
      if (branch_taken) {
          goto L_08A8BD0C;
      }
      goto L_08A8B7D8;
    }
L_08A8B7D8:
    { const std::uint32_t aot_run_words[3]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_7 & 61440u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8B824;
      }
      goto L_08A8B818;
    }
L_08A8B818:
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_7;
      if (branch_taken) {
          goto L_08A8BD04;
      }
      goto L_08A8B824;
    }
L_08A8B824:
    ctx.gpr[25] = (aot_gpr_6 | 0u);
    ctx.gpr[24] = (aot_gpr_4 + static_cast<std::uint32_t>(100));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(192))))));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (1u << 16u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_7 = (1u << 16u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[9] = (1u << 16u);
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[11] = (1u << 16u);
    ctx.gpr[11] = (aot_gpr_5 + ctx.gpr[11]);
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[2] = (aot_gpr_5 + ctx.gpr[2]);
    ctx.gpr[3] = (1u << 16u);
    ctx.gpr[12] = (1u << 16u);
    ctx.gpr[12] = (aot_gpr_5 + ctx.gpr[12]);
    aot_gpr_16 = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_16);
      if (branch_taken) {
          goto L_08A8B8A8;
      }
      goto L_08A8B888;
    }
L_08A8B888:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A8B8C0;
      }
      goto L_08A8B8A8;
    }
L_08A8B8A8:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[24]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(8));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
    goto L_08A8B8C0;
L_08A8B8C0:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(152))))));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(154))))));
    ctx.gpr[14] = (ctx.gpr[14] - ctx.gpr[15]);
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[14] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[24] = (ctx.gpr[24] ^ 31u);
    ctx.gpr[24] = (ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-19828)));
      if (branch_taken) {
          goto L_08A8BB80;
      }
      goto L_08A8B908;
    }
L_08A8B908:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[19] = (ctx.gpr[24] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    ctx.gpr[25] = (0u | 45724u);
    aot_gpr_16 = (1u << 16u);
    aot_gpr_16 = (aot_gpr_5 + aot_gpr_16);
    ctx.gpr[17] = (0u | 45548u);
    ctx.gpr[18] = (1u << 16u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8B95C;
      }
      goto L_08A8B938;
    }
L_08A8B938:
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (aot_gpr_5 + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[15]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
      if (branch_taken) {
          goto L_08A8B980;
      }
      goto L_08A8B95C;
    }
L_08A8B95C:
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-32));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (aot_gpr_5 + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[15]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A8B980;
L_08A8B980:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(-19820)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B9A0;
      }
      goto L_08A8B990;
    }
L_08A8B990:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08A8B9A0;
L_08A8B9A0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B9C0;
      }
      goto L_08A8B9B0;
    }
L_08A8B9B0:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08A8B9C0;
L_08A8B9C0:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[24]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(-19820)));
    ctx.gpr[15] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[15] = (aot_gpr_5 + ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[24] == aot_gpr_16;
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A8B9FC;
      }
      goto L_08A8B9D8;
    }
L_08A8B9D8:
    ctx.gpr[24] = (aot_gpr_16 + aot_gpr_16);
    ctx.gpr[24] = (aot_gpr_5 + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[9]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[24] + static_cast<std::uint32_t>(-19812))))));
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[15] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    goto L_08A8B9FC;
L_08A8B9FC:
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
      if (branch_taken) {
          goto L_08A8BA38;
      }
      goto L_08A8BA1C;
    }
L_08A8BA1C:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A8BA54;
      }
      goto L_08A8BA38;
    }
L_08A8BA38:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    goto L_08A8BA54;
L_08A8BA54:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[14]);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[13]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-19992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
      if (branch_taken) {
          goto L_08A8BA7C;
      }
      goto L_08A8BA70;
    }
L_08A8BA70:
    ctx.gpr[9] = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A8BA7C;
L_08A8BA7C:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[14] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08A8BAAC;
      }
      goto L_08A8BA90;
    }
L_08A8BA90:
    ctx.gpr[8] = (ctx.gpr[14] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08A8BAC8;
      }
      goto L_08A8BAAC;
    }
L_08A8BAAC:
    ctx.gpr[8] = (ctx.gpr[14] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[17]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_08A8BAC8;
L_08A8BAC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A8BAD8;
      }
      goto L_08A8BAD0;
    }
L_08A8BAD0:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    goto L_08A8BAD8;
L_08A8BAD8:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_15 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BB04;
      }
      goto L_08A8BAF4;
    }
L_08A8BAF4:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08A8BB04;
L_08A8BB04:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BB24;
      }
      goto L_08A8BB14;
    }
L_08A8BB14:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08A8BB24;
L_08A8BB24:
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[9]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[18];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A8BB60;
      }
      goto L_08A8BB3C;
    }
L_08A8BB3C:
    ctx.gpr[9] = (ctx.gpr[18] << 2u);
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-19988)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    goto L_08A8BB60;
L_08A8BB60:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[13]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08A8BC54;
      }
      goto L_08A8BB80;
    }
L_08A8BB80:
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[15]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(-19816), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BBB8;
      }
      goto L_08A8BBA8;
    }
L_08A8BBA8:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08A8BBB8;
L_08A8BBB8:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[8] = (ctx.gpr[15] + ctx.gpr[15]);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[13]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[8]);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[13]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
      if (branch_taken) {
          goto L_08A8BBF4;
      }
      goto L_08A8BBE8;
    }
L_08A8BBE8:
    ctx.gpr[8] = (20352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    goto L_08A8BBF4;
L_08A8BBF4:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-19992), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BC28;
      }
      goto L_08A8BC18;
    }
L_08A8BC18:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08A8BC28;
L_08A8BC28:
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[13]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_08A8BC54;
L_08A8BC54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A8BC64;
      }
      goto L_08A8BC5C;
    }
L_08A8BC5C:
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    goto L_08A8BC64;
L_08A8BC64:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_08A8BC74;
      }
      goto L_08A8BC6C;
    }
L_08A8BC6C:
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    goto L_08A8BC74;
L_08A8BC74:
    aot_fpr_15 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_15 + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19848), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-19828)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(-19816)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852)));
      if (branch_taken) {
          goto L_08A8BCD8;
      }
      goto L_08A8BCCC;
    }
L_08A8BCCC:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    goto L_08A8BCD8;
L_08A8BCD8:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_15;
    aot_gpr_4 = (14080u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-19836), aot_gpr_4);
    goto L_08A8BD04;
L_08A8BD04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8BD98;
      }
      goto L_08A8BD0C;
    }
L_08A8BD0C:
    aot_gpr_6 = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_6);
    if (aot_gpr_6 == ctx.gpr[15]) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[24]);
        goto L_08A8BD1C;
    }
    goto L_08A8BD1C;
L_08A8BD1C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[2] = aot_run_words[0];
      ctx.gpr[3] = aot_run_words[1];
      ctx.gpr[12] = aot_run_words[2];
    }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(28));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_6);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[10] ^ ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
      if (branch_taken) {
          goto L_08A8B7B8;
      }
      goto L_08A8BD80;
    }
L_08A8BD80:
    { const std::uint32_t aot_run_words[3]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    goto L_08A8BD98;
L_08A8BD98:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A8BDB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2404)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(42));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(2404), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2388)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(42));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(2388), aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BE44;
    }
L_08A8BE44:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BE54;
    }
L_08A8BE54:
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8BE74;
      }
      goto L_08A8BE6C;
    }
L_08A8BE6C:
    ctx.gpr[31] = (0x08A8BE74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8BE74u) goto L_08A8BE74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A8BE74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08A8BE80u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 705u, 0x08A8BE80u, 0x08A52FF8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8BE80u) goto L_08A8BE80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8BE80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8BE8Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 706u, 0x08A8BE8Cu, 0x08A52A20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 459u, 0x08A52A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8BE8Cu) goto L_08A8BE8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8BE8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A8BEDC;
      }
      goto L_08A8BE94;
    }
L_08A8BE94:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8BEC8;
      }
      goto L_08A8BEA4;
    }
L_08A8BEA4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A8BECC;
    }
    goto L_08A8BEB4;
L_08A8BEB4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A8BECC;
      }
      goto L_08A8BEC4;
    }
L_08A8BEC4:
    aot_gpr_4 = (0u | 1u);
    goto L_08A8BEC8;
L_08A8BEC8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A8BECC;
L_08A8BECC:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A8BEF8;
      }
      goto L_08A8BEDC;
    }
L_08A8BEDC:
    ctx.gpr[31] = (0x08A8BEE4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0161->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0161_entry, 714u, 0x08A8BEE4u, 0x08A52A20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 459u, 0x08A52A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A8BEE4u) goto L_08A8BEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A8BEE4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A8BF00;
      }
      goto L_08A8BEF0;
    }
L_08A8BEF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A8BF08;
      }
      goto L_08A8BEF8;
    }
L_08A8BEF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BF00;
    }
L_08A8BF00:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08A8BF08;
L_08A8BF08:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(-19748))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8BF6C;
      }
      goto L_08A8BF5C;
    }
L_08A8BF5C:
    aot_gpr_5 = (0u | 45788u);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08A8BF6C;
L_08A8BF6C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    aot_gpr_6 = (ctx.gpr[22] + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(-6));
    aot_gpr_7 = (ctx.gpr[22] + aot_gpr_7);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A8BF94u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08A8A5D4;
L_08A8BF94:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BFA0;
    }
L_08A8BFA0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    ctx.gpr[22] = (aot_gpr_4 | aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(594)));
    aot_gpr_4 = (ctx.gpr[22] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 4095u);
    aot_gpr_5 = (aot_gpr_4 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A8BFD4;
      }
      goto L_08A8BFCC;
    }
L_08A8BFCC:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4096));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    goto L_08A8BFD4;
L_08A8BFD4:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BFE4;
    }
L_08A8BFE4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 24u, 0x08A8C1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BFEC;
    }
L_08A8BFEC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(604)));
    aot_gpr_7 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 14u, 0x08A8C0F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A8BFFC;
    }
L_08A8BFFC:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(604), aot_gpr_5);
    ctx.pc = 0x08A8C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0161(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0161_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_161(Runtime &runtime) {
    runtime.register_generated_unit(161u, 0x08A88000u, 16384u, &recomp_unit_0161, &recomp_unit_0161_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08A88000u, &recomp_unit_0161, "recomp_unit_0161",
                                          kEntryMasks_recomp_unit_0161, 64u);
}
} // namespace psprecomp
