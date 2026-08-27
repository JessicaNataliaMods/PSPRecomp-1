#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0141[64] = {
    0x8940122891280245ull, 0x50048A244A009144ull, 0x0122891280245122ull, 0x48A244A009144894ull,
    0x2891280245122500ull, 0x244A009144894012ull, 0x128024512250048Aull, 0xA009144894012289ull,
    0x024512250048A244ull, 0x9144894012289128ull, 0x512250048A244A00ull, 0x4894012289128024ull,
    0x250048A244A00914ull, 0x4012289128024512ull, 0x048A244A00914489ull, 0x2289128024512250ull,
    0xA244A00914489401ull, 0x9128024512250048ull, 0x4A00914489401228ull, 0x8024512250048A24ull,
    0x0914489401228912ull, 0x4512250048A244A0ull, 0x4489401228912802ull, 0x0000040A244A0091ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x1404208281000000ull, 0xA910040056921042ull,
    0x40801000106B5455ull, 0x42AA9241000A0048ull, 0x0000000042021220ull, 0x0244480008888100ull,
    0x4800080848444000ull, 0x1545409088880000ull, 0x0510400000040002ull, 0x42A1520A20A150A9ull,
    0x0000800021041001ull, 0x2250409450008100ull, 0x1131514821020040ull, 0x2022480028101001ull,
    0x05825249050442C5ull, 0x4442020040209000ull, 0x4008009800000400ull, 0x2008208148088210ull,
    0x820A554402040084ull, 0x0200024822012104ull, 0xC925CA45C9508000ull, 0xC925CA45C925CA45ull,
    0xC925CA45C925CA45ull, 0x2000400124A5CA45ull, 0x0000040020810410ull, 0x3028008000000000ull,
    0x000A400020003814ull, 0x91A80500130A0002ull, 0x000100124512000Aull, 0x12B4028052851422ull,
    0x0145008588408510ull, 0x0014500802000010ull, 0x4022404440C11010ull, 0x09534D1010A51140ull,
    0x022840001144104Aull, 0x4501888A80010000ull, 0x4522AA8002888449ull, 0x5111111294120885ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0141[64] = {
    1u, 18u, 34u, 50u, 68u, 84u, 100u, 116u, 133u, 149u, 167u, 183u, 199u, 215u, 231u, 248u,
    265u, 282u, 298u, 314u, 330u, 347u, 364u, 380u, 391u, 391u, 391u, 399u, 415u, 431u, 446u, 452u,
    462u, 471u, 484u, 490u, 510u, 516u, 528u, 542u, 552u, 571u, 580u, 586u, 597u, 611u, 621u, 642u,
    670u, 698u, 714u, 720u, 725u, 734u, 748u, 758u, 776u, 790u, 797u, 809u, 828u, 840u, 851u, 869u,
};
void recomp_unit_0141_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,17,18,29,6 fprs=12,13,14,20 gpr_occ=4795 fpr_occ=186 gpr_total=6719 fpr_total=254
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    std::uint32_t aot_gpr_18 = ctx.gpr[18];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[17] = aot_gpr_17; ctx.gpr[18] = aot_gpr_18; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_17 = ctx.gpr[17]; aot_gpr_18 = ctx.gpr[18]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A38004u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0141[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0141[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08A38004;
    case 2u: goto L_08A3800C;
    case 3u: goto L_08A3801C;
    case 4u: goto L_08A38028;
    case 5u: goto L_08A38050;
    case 6u: goto L_08A38058;
    case 7u: goto L_08A38064;
    case 8u: goto L_08A38074;
    case 9u: goto L_08A38080;
    case 10u: goto L_08A38090;
    case 11u: goto L_08A38098;
    case 12u: goto L_08A380A8;
    case 13u: goto L_08A380B4;
    case 14u: goto L_08A380DC;
    case 15u: goto L_08A380E4;
    case 16u: goto L_08A380F0;
    case 17u: goto L_08A38100;
    case 18u: goto L_08A3810C;
    case 19u: goto L_08A3811C;
    case 20u: goto L_08A38124;
    case 21u: goto L_08A38134;
    case 22u: goto L_08A38140;
    case 23u: goto L_08A38168;
    case 24u: goto L_08A38170;
    case 25u: goto L_08A3817C;
    case 26u: goto L_08A3818C;
    case 27u: goto L_08A38198;
    case 28u: goto L_08A381A8;
    case 29u: goto L_08A381B0;
    case 30u: goto L_08A381C0;
    case 31u: goto L_08A381CC;
    case 32u: goto L_08A381F4;
    case 33u: goto L_08A381FC;
    case 34u: goto L_08A38208;
    case 35u: goto L_08A38218;
    case 36u: goto L_08A38224;
    case 37u: goto L_08A38234;
    case 38u: goto L_08A3823C;
    case 39u: goto L_08A3824C;
    case 40u: goto L_08A38258;
    case 41u: goto L_08A38280;
    case 42u: goto L_08A38288;
    case 43u: goto L_08A38294;
    case 44u: goto L_08A382A4;
    case 45u: goto L_08A382B0;
    case 46u: goto L_08A382C0;
    case 47u: goto L_08A382C8;
    case 48u: goto L_08A382D8;
    case 49u: goto L_08A382E4;
    case 50u: goto L_08A3830C;
    case 51u: goto L_08A38314;
    case 52u: goto L_08A38320;
    case 53u: goto L_08A38330;
    case 54u: goto L_08A3833C;
    case 55u: goto L_08A3834C;
    case 56u: goto L_08A38354;
    case 57u: goto L_08A38364;
    case 58u: goto L_08A38370;
    case 59u: goto L_08A38398;
    case 60u: goto L_08A383A0;
    case 61u: goto L_08A383AC;
    case 62u: goto L_08A383BC;
    case 63u: goto L_08A383C8;
    case 64u: goto L_08A383D8;
    case 65u: goto L_08A383E0;
    case 66u: goto L_08A383F0;
    case 67u: goto L_08A383FC;
    case 68u: goto L_08A38424;
    case 69u: goto L_08A3842C;
    case 70u: goto L_08A38438;
    case 71u: goto L_08A38448;
    case 72u: goto L_08A38454;
    case 73u: goto L_08A38464;
    case 74u: goto L_08A3846C;
    case 75u: goto L_08A3847C;
    case 76u: goto L_08A38488;
    case 77u: goto L_08A384B0;
    case 78u: goto L_08A384B8;
    case 79u: goto L_08A384C4;
    case 80u: goto L_08A384D4;
    case 81u: goto L_08A384E0;
    case 82u: goto L_08A384F0;
    case 83u: goto L_08A384F8;
    case 84u: goto L_08A38508;
    case 85u: goto L_08A38514;
    case 86u: goto L_08A3853C;
    case 87u: goto L_08A38544;
    case 88u: goto L_08A38550;
    case 89u: goto L_08A38560;
    case 90u: goto L_08A3856C;
    case 91u: goto L_08A3857C;
    case 92u: goto L_08A38584;
    case 93u: goto L_08A38594;
    case 94u: goto L_08A385A0;
    case 95u: goto L_08A385C8;
    case 96u: goto L_08A385D0;
    case 97u: goto L_08A385DC;
    case 98u: goto L_08A385EC;
    case 99u: goto L_08A385F8;
    case 100u: goto L_08A38608;
    case 101u: goto L_08A38610;
    case 102u: goto L_08A38620;
    case 103u: goto L_08A3862C;
    case 104u: goto L_08A38654;
    case 105u: goto L_08A3865C;
    case 106u: goto L_08A38668;
    case 107u: goto L_08A38678;
    case 108u: goto L_08A38684;
    case 109u: goto L_08A38694;
    case 110u: goto L_08A3869C;
    case 111u: goto L_08A386AC;
    case 112u: goto L_08A386B8;
    case 113u: goto L_08A386E0;
    case 114u: goto L_08A386E8;
    case 115u: goto L_08A386F4;
    case 116u: goto L_08A38704;
    case 117u: goto L_08A38710;
    case 118u: goto L_08A38720;
    case 119u: goto L_08A38728;
    case 120u: goto L_08A38738;
    case 121u: goto L_08A38744;
    case 122u: goto L_08A3876C;
    case 123u: goto L_08A38774;
    case 124u: goto L_08A38780;
    case 125u: goto L_08A38790;
    case 126u: goto L_08A3879C;
    case 127u: goto L_08A387AC;
    case 128u: goto L_08A387B4;
    case 129u: goto L_08A387C4;
    case 130u: goto L_08A387D0;
    case 131u: goto L_08A387F8;
    case 132u: goto L_08A38800;
    case 133u: goto L_08A3880C;
    case 134u: goto L_08A3881C;
    case 135u: goto L_08A38828;
    case 136u: goto L_08A38838;
    case 137u: goto L_08A38840;
    case 138u: goto L_08A38850;
    case 139u: goto L_08A3885C;
    case 140u: goto L_08A38884;
    case 141u: goto L_08A3888C;
    case 142u: goto L_08A38898;
    case 143u: goto L_08A388A8;
    case 144u: goto L_08A388B4;
    case 145u: goto L_08A388C4;
    case 146u: goto L_08A388CC;
    case 147u: goto L_08A388DC;
    case 148u: goto L_08A388E8;
    case 149u: goto L_08A38910;
    case 150u: goto L_08A38918;
    case 151u: goto L_08A38924;
    case 152u: goto L_08A38934;
    case 153u: goto L_08A38940;
    case 154u: goto L_08A38950;
    case 155u: goto L_08A38958;
    case 156u: goto L_08A38968;
    case 157u: goto L_08A38974;
    case 158u: goto L_08A3899C;
    case 159u: goto L_08A389A4;
    case 160u: goto L_08A389B0;
    case 161u: goto L_08A389C0;
    case 162u: goto L_08A389CC;
    case 163u: goto L_08A389DC;
    case 164u: goto L_08A389E4;
    case 165u: goto L_08A389F4;
    case 166u: goto L_08A38A00;
    case 167u: goto L_08A38A28;
    case 168u: goto L_08A38A30;
    case 169u: goto L_08A38A3C;
    case 170u: goto L_08A38A4C;
    case 171u: goto L_08A38A58;
    case 172u: goto L_08A38A68;
    case 173u: goto L_08A38A70;
    case 174u: goto L_08A38A80;
    case 175u: goto L_08A38A8C;
    case 176u: goto L_08A38AB4;
    case 177u: goto L_08A38ABC;
    case 178u: goto L_08A38AC8;
    case 179u: goto L_08A38AD8;
    case 180u: goto L_08A38AE4;
    case 181u: goto L_08A38AF4;
    case 182u: goto L_08A38AFC;
    case 183u: goto L_08A38B0C;
    case 184u: goto L_08A38B18;
    case 185u: goto L_08A38B40;
    case 186u: goto L_08A38B48;
    case 187u: goto L_08A38B54;
    case 188u: goto L_08A38B64;
    case 189u: goto L_08A38B70;
    case 190u: goto L_08A38B80;
    case 191u: goto L_08A38B88;
    case 192u: goto L_08A38B98;
    case 193u: goto L_08A38BA4;
    case 194u: goto L_08A38BCC;
    case 195u: goto L_08A38BD4;
    case 196u: goto L_08A38BE0;
    case 197u: goto L_08A38BF0;
    case 198u: goto L_08A38BFC;
    case 199u: goto L_08A38C0C;
    case 200u: goto L_08A38C14;
    case 201u: goto L_08A38C24;
    case 202u: goto L_08A38C30;
    case 203u: goto L_08A38C58;
    case 204u: goto L_08A38C60;
    case 205u: goto L_08A38C6C;
    case 206u: goto L_08A38C7C;
    case 207u: goto L_08A38C88;
    case 208u: goto L_08A38C98;
    case 209u: goto L_08A38CA0;
    case 210u: goto L_08A38CB0;
    case 211u: goto L_08A38CBC;
    case 212u: goto L_08A38CE4;
    case 213u: goto L_08A38CEC;
    case 214u: goto L_08A38CF8;
    case 215u: goto L_08A38D08;
    case 216u: goto L_08A38D14;
    case 217u: goto L_08A38D24;
    case 218u: goto L_08A38D2C;
    case 219u: goto L_08A38D3C;
    case 220u: goto L_08A38D48;
    case 221u: goto L_08A38D70;
    case 222u: goto L_08A38D78;
    case 223u: goto L_08A38D84;
    case 224u: goto L_08A38D94;
    case 225u: goto L_08A38DA0;
    case 226u: goto L_08A38DB0;
    case 227u: goto L_08A38DB8;
    case 228u: goto L_08A38DC8;
    case 229u: goto L_08A38DD4;
    case 230u: goto L_08A38DFC;
    case 231u: goto L_08A38E04;
    case 232u: goto L_08A38E10;
    case 233u: goto L_08A38E20;
    case 234u: goto L_08A38E2C;
    case 235u: goto L_08A38E3C;
    case 236u: goto L_08A38E44;
    case 237u: goto L_08A38E54;
    case 238u: goto L_08A38E60;
    case 239u: goto L_08A38E88;
    case 240u: goto L_08A38E90;
    case 241u: goto L_08A38E9C;
    case 242u: goto L_08A38EAC;
    case 243u: goto L_08A38EB8;
    case 244u: goto L_08A38EC8;
    case 245u: goto L_08A38ED0;
    case 246u: goto L_08A38EE0;
    case 247u: goto L_08A38EEC;
    case 248u: goto L_08A38F14;
    case 249u: goto L_08A38F1C;
    case 250u: goto L_08A38F28;
    case 251u: goto L_08A38F38;
    case 252u: goto L_08A38F44;
    case 253u: goto L_08A38F54;
    case 254u: goto L_08A38F5C;
    case 255u: goto L_08A38F6C;
    case 256u: goto L_08A38F78;
    case 257u: goto L_08A38FA0;
    case 258u: goto L_08A38FA8;
    case 259u: goto L_08A38FB4;
    case 260u: goto L_08A38FC4;
    case 261u: goto L_08A38FD0;
    case 262u: goto L_08A38FE0;
    case 263u: goto L_08A38FE8;
    case 264u: goto L_08A38FF8;
    case 265u: goto L_08A39004;
    case 266u: goto L_08A3902C;
    case 267u: goto L_08A39034;
    case 268u: goto L_08A39040;
    case 269u: goto L_08A39050;
    case 270u: goto L_08A3905C;
    case 271u: goto L_08A3906C;
    case 272u: goto L_08A39074;
    case 273u: goto L_08A39084;
    case 274u: goto L_08A39090;
    case 275u: goto L_08A390B8;
    case 276u: goto L_08A390C0;
    case 277u: goto L_08A390CC;
    case 278u: goto L_08A390DC;
    case 279u: goto L_08A390E8;
    case 280u: goto L_08A390F8;
    case 281u: goto L_08A39100;
    case 282u: goto L_08A39110;
    case 283u: goto L_08A3911C;
    case 284u: goto L_08A39144;
    case 285u: goto L_08A3914C;
    case 286u: goto L_08A39158;
    case 287u: goto L_08A39168;
    case 288u: goto L_08A39174;
    case 289u: goto L_08A39184;
    case 290u: goto L_08A3918C;
    case 291u: goto L_08A3919C;
    case 292u: goto L_08A391A8;
    case 293u: goto L_08A391D0;
    case 294u: goto L_08A391D8;
    case 295u: goto L_08A391E4;
    case 296u: goto L_08A391F4;
    case 297u: goto L_08A39200;
    case 298u: goto L_08A39210;
    case 299u: goto L_08A39218;
    case 300u: goto L_08A39228;
    case 301u: goto L_08A39234;
    case 302u: goto L_08A3925C;
    case 303u: goto L_08A39264;
    case 304u: goto L_08A39270;
    case 305u: goto L_08A39280;
    case 306u: goto L_08A3928C;
    case 307u: goto L_08A3929C;
    case 308u: goto L_08A392A4;
    case 309u: goto L_08A392B4;
    case 310u: goto L_08A392C0;
    case 311u: goto L_08A392E8;
    case 312u: goto L_08A392F0;
    case 313u: goto L_08A392FC;
    case 314u: goto L_08A3930C;
    case 315u: goto L_08A39318;
    case 316u: goto L_08A39328;
    case 317u: goto L_08A39330;
    case 318u: goto L_08A39340;
    case 319u: goto L_08A3934C;
    case 320u: goto L_08A39374;
    case 321u: goto L_08A3937C;
    case 322u: goto L_08A39388;
    case 323u: goto L_08A39398;
    case 324u: goto L_08A393A4;
    case 325u: goto L_08A393B4;
    case 326u: goto L_08A393BC;
    case 327u: goto L_08A393CC;
    case 328u: goto L_08A393D8;
    case 329u: goto L_08A39400;
    case 330u: goto L_08A39408;
    case 331u: goto L_08A39414;
    case 332u: goto L_08A39424;
    case 333u: goto L_08A39430;
    case 334u: goto L_08A39440;
    case 335u: goto L_08A39448;
    case 336u: goto L_08A39458;
    case 337u: goto L_08A39464;
    case 338u: goto L_08A3948C;
    case 339u: goto L_08A39494;
    case 340u: goto L_08A394A0;
    case 341u: goto L_08A394B0;
    case 342u: goto L_08A394BC;
    case 343u: goto L_08A394CC;
    case 344u: goto L_08A394D4;
    case 345u: goto L_08A394E4;
    case 346u: goto L_08A394F0;
    case 347u: goto L_08A39518;
    case 348u: goto L_08A39520;
    case 349u: goto L_08A3952C;
    case 350u: goto L_08A3953C;
    case 351u: goto L_08A39548;
    case 352u: goto L_08A39558;
    case 353u: goto L_08A39560;
    case 354u: goto L_08A39570;
    case 355u: goto L_08A3957C;
    case 356u: goto L_08A395A4;
    case 357u: goto L_08A395AC;
    case 358u: goto L_08A395B8;
    case 359u: goto L_08A395C8;
    case 360u: goto L_08A395D4;
    case 361u: goto L_08A395E4;
    case 362u: goto L_08A395EC;
    case 363u: goto L_08A395FC;
    case 364u: goto L_08A39608;
    case 365u: goto L_08A39630;
    case 366u: goto L_08A39638;
    case 367u: goto L_08A39644;
    case 368u: goto L_08A39654;
    case 369u: goto L_08A39660;
    case 370u: goto L_08A39670;
    case 371u: goto L_08A39678;
    case 372u: goto L_08A39688;
    case 373u: goto L_08A39694;
    case 374u: goto L_08A396BC;
    case 375u: goto L_08A396C4;
    case 376u: goto L_08A396D0;
    case 377u: goto L_08A396E0;
    case 378u: goto L_08A396EC;
    case 379u: goto L_08A396FC;
    case 380u: goto L_08A39704;
    case 381u: goto L_08A39714;
    case 382u: goto L_08A39720;
    case 383u: goto L_08A39748;
    case 384u: goto L_08A39750;
    case 385u: goto L_08A3975C;
    case 386u: goto L_08A3976C;
    case 387u: goto L_08A39778;
    case 388u: goto L_08A39788;
    case 389u: goto L_08A39790;
    case 390u: goto L_08A397AC;
    case 391u: goto L_08A39A64;
    case 392u: goto L_08A39A80;
    case 393u: goto L_08A39A88;
    case 394u: goto L_08A39AA0;
    case 395u: goto L_08A39AB8;
    case 396u: goto L_08A39ACC;
    case 397u: goto L_08A39AEC;
    case 398u: goto L_08A39AF4;
    case 399u: goto L_08A39B08;
    case 400u: goto L_08A39B1C;
    case 401u: goto L_08A39B34;
    case 402u: goto L_08A39B48;
    case 403u: goto L_08A39B54;
    case 404u: goto L_08A39B60;
    case 405u: goto L_08A39B68;
    case 406u: goto L_08A39B6C;
    case 407u: goto L_08A39B74;
    case 408u: goto L_08A39B7C;
    case 409u: goto L_08A39BAC;
    case 410u: goto L_08A39BD4;
    case 411u: goto L_08A39BE4;
    case 412u: goto L_08A39BF0;
    case 413u: goto L_08A39BF8;
    case 414u: goto L_08A39C00;
    case 415u: goto L_08A39C04;
    case 416u: goto L_08A39C0C;
    case 417u: goto L_08A39C14;
    case 418u: goto L_08A39C1C;
    case 419u: goto L_08A39C2C;
    case 420u: goto L_08A39C34;
    case 421u: goto L_08A39C3C;
    case 422u: goto L_08A39C44;
    case 423u: goto L_08A39C48;
    case 424u: goto L_08A39C50;
    case 425u: goto L_08A39C58;
    case 426u: goto L_08A39C5C;
    case 427u: goto L_08A39C74;
    case 428u: goto L_08A39CB4;
    case 429u: goto L_08A39CE0;
    case 430u: goto L_08A39CFC;
    case 431u: goto L_08A39D10;
    case 432u: goto L_08A39D1C;
    case 433u: goto L_08A39D48;
    case 434u: goto L_08A39D50;
    case 435u: goto L_08A39D84;
    case 436u: goto L_08A39D9C;
    case 437u: goto L_08A39DA8;
    case 438u: goto L_08A39DB4;
    case 439u: goto L_08A39DC0;
    case 440u: goto L_08A39DC8;
    case 441u: goto L_08A39DD0;
    case 442u: goto L_08A39DD8;
    case 443u: goto L_08A39DE0;
    case 444u: goto L_08A39DE8;
    case 445u: goto L_08A39DFC;
    case 446u: goto L_08A39E18;
    case 447u: goto L_08A39E28;
    case 448u: goto L_08A39E34;
    case 449u: goto L_08A39E48;
    case 450u: goto L_08A39E68;
    case 451u: goto L_08A39E7C;
    case 452u: goto L_08A39F24;
    case 453u: goto L_08A39F40;
    case 454u: goto L_08A39F50;
    case 455u: goto L_08A39F60;
    case 456u: goto L_08A39F70;
    case 457u: goto L_08A39FB0;
    case 458u: goto L_08A39FBC;
    case 459u: goto L_08A39FCC;
    case 460u: goto L_08A39FDC;
    case 461u: goto L_08A39FE8;
    case 462u: goto L_08A3A03C;
    case 463u: goto L_08A3A04C;
    case 464u: goto L_08A3A05C;
    case 465u: goto L_08A3A070;
    case 466u: goto L_08A3A07C;
    case 467u: goto L_08A3A090;
    case 468u: goto L_08A3A0B0;
    case 469u: goto L_08A3A0F0;
    case 470u: goto L_08A3A0FC;
    case 471u: goto L_08A3A150;
    case 472u: goto L_08A3A160;
    case 473u: goto L_08A3A170;
    case 474u: goto L_08A3A180;
    case 475u: goto L_08A3A194;
    case 476u: goto L_08A3A1A0;
    case 477u: goto L_08A3A1BC;
    case 478u: goto L_08A3A1C4;
    case 479u: goto L_08A3A1CC;
    case 480u: goto L_08A3A1DC;
    case 481u: goto L_08A3A1E4;
    case 482u: goto L_08A3A1EC;
    case 483u: goto L_08A3A1F4;
    case 484u: goto L_08A3A208;
    case 485u: goto L_08A3A24C;
    case 486u: goto L_08A3A2BC;
    case 487u: goto L_08A3A2D4;
    case 488u: goto L_08A3A2E4;
    case 489u: goto L_08A3A2EC;
    case 490u: goto L_08A3A304;
    case 491u: goto L_08A3A310;
    case 492u: goto L_08A3A318;
    case 493u: goto L_08A3A320;
    case 494u: goto L_08A3A334;
    case 495u: goto L_08A3A33C;
    case 496u: goto L_08A3A344;
    case 497u: goto L_08A3A358;
    case 498u: goto L_08A3A360;
    case 499u: goto L_08A3A378;
    case 500u: goto L_08A3A388;
    case 501u: goto L_08A3A390;
    case 502u: goto L_08A3A3A8;
    case 503u: goto L_08A3A3B4;
    case 504u: goto L_08A3A3BC;
    case 505u: goto L_08A3A3C4;
    case 506u: goto L_08A3A3D8;
    case 507u: goto L_08A3A3E0;
    case 508u: goto L_08A3A3E8;
    case 509u: goto L_08A3A3FC;
    case 510u: goto L_08A3A404;
    case 511u: goto L_08A3A434;
    case 512u: goto L_08A3A44C;
    case 513u: goto L_08A3A464;
    case 514u: goto L_08A3A478;
    case 515u: goto L_08A3A4C0;
    case 516u: goto L_08A3A524;
    case 517u: goto L_08A3A540;
    case 518u: goto L_08A3A574;
    case 519u: goto L_08A3A57C;
    case 520u: goto L_08A3A58C;
    case 521u: goto L_08A3A594;
    case 522u: goto L_08A3A5A0;
    case 523u: goto L_08A3A5BC;
    case 524u: goto L_08A3A5D4;
    case 525u: goto L_08A3A5DC;
    case 526u: goto L_08A3A5E8;
    case 527u: goto L_08A3A5F8;
    case 528u: goto L_08A3A61C;
    case 529u: goto L_08A3A648;
    case 530u: goto L_08A3A664;
    case 531u: goto L_08A3A678;
    case 532u: goto L_08A3A690;
    case 533u: goto L_08A3A69C;
    case 534u: goto L_08A3A6A4;
    case 535u: goto L_08A3A6B4;
    case 536u: goto L_08A3A6BC;
    case 537u: goto L_08A3A6C4;
    case 538u: goto L_08A3A6D4;
    case 539u: goto L_08A3A6D8;
    case 540u: goto L_08A3A6E4;
    case 541u: goto L_08A3A6F4;
    case 542u: goto L_08A3A704;
    case 543u: goto L_08A3A734;
    case 544u: goto L_08A3A754;
    case 545u: goto L_08A3A770;
    case 546u: goto L_08A3A778;
    case 547u: goto L_08A3A7B0;
    case 548u: goto L_08A3A7BC;
    case 549u: goto L_08A3A7C8;
    case 550u: goto L_08A3A7D8;
    case 551u: goto L_08A3A7F8;
    case 552u: goto L_08A3A804;
    case 553u: goto L_08A3A80C;
    case 554u: goto L_08A3A81C;
    case 555u: goto L_08A3A820;
    case 556u: goto L_08A3A828;
    case 557u: goto L_08A3A83C;
    case 558u: goto L_08A3A84C;
    case 559u: goto L_08A3A864;
    case 560u: goto L_08A3A86C;
    case 561u: goto L_08A3A884;
    case 562u: goto L_08A3A890;
    case 563u: goto L_08A3A89C;
    case 564u: goto L_08A3A8A8;
    case 565u: goto L_08A3A8B4;
    case 566u: goto L_08A3A8BC;
    case 567u: goto L_08A3A8C8;
    case 568u: goto L_08A3A8E0;
    case 569u: goto L_08A3A8E4;
    case 570u: goto L_08A3A8EC;
    case 571u: goto L_08A3A934;
    case 572u: goto L_08A3A940;
    case 573u: goto L_08A3A958;
    case 574u: goto L_08A3A97C;
    case 575u: goto L_08A3A9A8;
    case 576u: goto L_08A3A9C8;
    case 577u: goto L_08A3A9DC;
    case 578u: goto L_08A3A9EC;
    case 579u: goto L_08A3A9FC;
    case 580u: goto L_08A3AA2C;
    case 581u: goto L_08A3AA90;
    case 582u: goto L_08A3AA94;
    case 583u: goto L_08A3AAA0;
    case 584u: goto L_08A3AAD0;
    case 585u: goto L_08A3AAFC;
    case 586u: goto L_08A3AB14;
    case 587u: goto L_08A3AB28;
    case 588u: goto L_08A3AB40;
    case 589u: goto L_08A3AB50;
    case 590u: goto L_08A3AB70;
    case 591u: goto L_08A3AB7C;
    case 592u: goto L_08A3AB84;
    case 593u: goto L_08A3ABA0;
    case 594u: goto L_08A3ABB8;
    case 595u: goto L_08A3ABD0;
    case 596u: goto L_08A3ABF8;
    case 597u: goto L_08A3AC0C;
    case 598u: goto L_08A3AC20;
    case 599u: goto L_08A3AC4C;
    case 600u: goto L_08A3AC68;
    case 601u: goto L_08A3AC8C;
    case 602u: goto L_08A3AC9C;
    case 603u: goto L_08A3ACA4;
    case 604u: goto L_08A3ACAC;
    case 605u: goto L_08A3ACB4;
    case 606u: goto L_08A3ACBC;
    case 607u: goto L_08A3ACC8;
    case 608u: goto L_08A3ACD0;
    case 609u: goto L_08A3ACE8;
    case 610u: goto L_08A3AD00;
    case 611u: goto L_08A3AD0C;
    case 612u: goto L_08A3AD24;
    case 613u: goto L_08A3AD38;
    case 614u: goto L_08A3AD44;
    case 615u: goto L_08A3AD68;
    case 616u: goto L_08A3AD78;
    case 617u: goto L_08A3AD90;
    case 618u: goto L_08A3AD9C;
    case 619u: goto L_08A3ADA8;
    case 620u: goto L_08A3ADE8;
    case 621u: goto L_08A3AE40;
    case 622u: goto L_08A3AE54;
    case 623u: goto L_08A3AE5C;
    case 624u: goto L_08A3AE64;
    case 625u: goto L_08A3AE70;
    case 626u: goto L_08A3AE7C;
    case 627u: goto L_08A3AE80;
    case 628u: goto L_08A3AE84;
    case 629u: goto L_08A3AE8C;
    case 630u: goto L_08A3AE9C;
    case 631u: goto L_08A3AEA8;
    case 632u: goto L_08A3AEB0;
    case 633u: goto L_08A3AEBC;
    case 634u: goto L_08A3AEC0;
    case 635u: goto L_08A3AEC4;
    case 636u: goto L_08A3AECC;
    case 637u: goto L_08A3AED8;
    case 638u: goto L_08A3AEE4;
    case 639u: goto L_08A3AEF0;
    case 640u: goto L_08A3AEFC;
    case 641u: goto L_08A3AF00;
    case 642u: goto L_08A3AF04;
    case 643u: goto L_08A3AF0C;
    case 644u: goto L_08A3AF1C;
    case 645u: goto L_08A3AF28;
    case 646u: goto L_08A3AF30;
    case 647u: goto L_08A3AF3C;
    case 648u: goto L_08A3AF40;
    case 649u: goto L_08A3AF44;
    case 650u: goto L_08A3AF4C;
    case 651u: goto L_08A3AF58;
    case 652u: goto L_08A3AF64;
    case 653u: goto L_08A3AF70;
    case 654u: goto L_08A3AF7C;
    case 655u: goto L_08A3AF80;
    case 656u: goto L_08A3AF84;
    case 657u: goto L_08A3AF8C;
    case 658u: goto L_08A3AF9C;
    case 659u: goto L_08A3AFA8;
    case 660u: goto L_08A3AFB0;
    case 661u: goto L_08A3AFBC;
    case 662u: goto L_08A3AFC0;
    case 663u: goto L_08A3AFC4;
    case 664u: goto L_08A3AFCC;
    case 665u: goto L_08A3AFD8;
    case 666u: goto L_08A3AFE4;
    case 667u: goto L_08A3AFF0;
    case 668u: goto L_08A3AFFC;
    case 669u: goto L_08A3B000;
    case 670u: goto L_08A3B004;
    case 671u: goto L_08A3B00C;
    case 672u: goto L_08A3B01C;
    case 673u: goto L_08A3B028;
    case 674u: goto L_08A3B030;
    case 675u: goto L_08A3B03C;
    case 676u: goto L_08A3B040;
    case 677u: goto L_08A3B044;
    case 678u: goto L_08A3B04C;
    case 679u: goto L_08A3B058;
    case 680u: goto L_08A3B064;
    case 681u: goto L_08A3B070;
    case 682u: goto L_08A3B07C;
    case 683u: goto L_08A3B080;
    case 684u: goto L_08A3B084;
    case 685u: goto L_08A3B08C;
    case 686u: goto L_08A3B09C;
    case 687u: goto L_08A3B0A8;
    case 688u: goto L_08A3B0B0;
    case 689u: goto L_08A3B0BC;
    case 690u: goto L_08A3B0C0;
    case 691u: goto L_08A3B0C4;
    case 692u: goto L_08A3B0CC;
    case 693u: goto L_08A3B0D8;
    case 694u: goto L_08A3B0E4;
    case 695u: goto L_08A3B0F0;
    case 696u: goto L_08A3B0FC;
    case 697u: goto L_08A3B100;
    case 698u: goto L_08A3B104;
    case 699u: goto L_08A3B10C;
    case 700u: goto L_08A3B11C;
    case 701u: goto L_08A3B128;
    case 702u: goto L_08A3B130;
    case 703u: goto L_08A3B13C;
    case 704u: goto L_08A3B140;
    case 705u: goto L_08A3B144;
    case 706u: goto L_08A3B14C;
    case 707u: goto L_08A3B158;
    case 708u: goto L_08A3B160;
    case 709u: goto L_08A3B16C;
    case 710u: goto L_08A3B178;
    case 711u: goto L_08A3B184;
    case 712u: goto L_08A3B1BC;
    case 713u: goto L_08A3B1F8;
    case 714u: goto L_08A3B214;
    case 715u: goto L_08A3B22C;
    case 716u: goto L_08A3B244;
    case 717u: goto L_08A3B260;
    case 718u: goto L_08A3B278;
    case 719u: goto L_08A3B2AC;
    case 720u: goto L_08A3B3A0;
    case 721u: goto L_08A3B3D0;
    case 722u: goto L_08A3B3D8;
    case 723u: goto L_08A3B3F4;
    case 724u: goto L_08A3B3F8;
    case 725u: goto L_08A3B40C;
    case 726u: goto L_08A3B414;
    case 727u: goto L_08A3B430;
    case 728u: goto L_08A3B434;
    case 729u: goto L_08A3B438;
    case 730u: goto L_08A3B478;
    case 731u: goto L_08A3B4BC;
    case 732u: goto L_08A3B4C8;
    case 733u: goto L_08A3B4D0;
    case 734u: goto L_08A3B508;
    case 735u: goto L_08A3B548;
    case 736u: goto L_08A3B550;
    case 737u: goto L_08A3B564;
    case 738u: goto L_08A3B568;
    case 739u: goto L_08A3B574;
    case 740u: goto L_08A3B5A4;
    case 741u: goto L_08A3B5AC;
    case 742u: goto L_08A3B5D0;
    case 743u: goto L_08A3B5D8;
    case 744u: goto L_08A3B5E0;
    case 745u: goto L_08A3B5E4;
    case 746u: goto L_08A3B5F4;
    case 747u: goto L_08A3B600;
    case 748u: goto L_08A3B608;
    case 749u: goto L_08A3B610;
    case 750u: goto L_08A3B648;
    case 751u: goto L_08A3B654;
    case 752u: goto L_08A3B664;
    case 753u: goto L_08A3B66C;
    case 754u: goto L_08A3B67C;
    case 755u: goto L_08A3B688;
    case 756u: goto L_08A3B694;
    case 757u: goto L_08A3B6C4;
    case 758u: goto L_08A3B708;
    case 759u: goto L_08A3B718;
    case 760u: goto L_08A3B72C;
    case 761u: goto L_08A3B734;
    case 762u: goto L_08A3B744;
    case 763u: goto L_08A3B74C;
    case 764u: goto L_08A3B760;
    case 765u: goto L_08A3B768;
    case 766u: goto L_08A3B774;
    case 767u: goto L_08A3B77C;
    case 768u: goto L_08A3B7A0;
    case 769u: goto L_08A3B7A8;
    case 770u: goto L_08A3B7CC;
    case 771u: goto L_08A3B7D4;
    case 772u: goto L_08A3B7D8;
    case 773u: goto L_08A3B7E0;
    case 774u: goto L_08A3B7E8;
    case 775u: goto L_08A3B7F4;
    case 776u: goto L_08A3B814;
    case 777u: goto L_08A3B824;
    case 778u: goto L_08A3B82C;
    case 779u: goto L_08A3B840;
    case 780u: goto L_08A3B85C;
    case 781u: goto L_08A3B870;
    case 782u: goto L_08A3B880;
    case 783u: goto L_08A3B884;
    case 784u: goto L_08A3B88C;
    case 785u: goto L_08A3B8A0;
    case 786u: goto L_08A3B8C4;
    case 787u: goto L_08A3B8CC;
    case 788u: goto L_08A3B8DC;
    case 789u: goto L_08A3B8E4;
    case 790u: goto L_08A3B914;
    case 791u: goto L_08A3B968;
    case 792u: goto L_08A3B990;
    case 793u: goto L_08A3B9B4;
    case 794u: goto L_08A3B9BC;
    case 795u: goto L_08A3B9CC;
    case 796u: goto L_08A3B9D4;
    case 797u: goto L_08A3BA14;
    case 798u: goto L_08A3BA34;
    case 799u: goto L_08A3BA44;
    case 800u: goto L_08A3BA5C;
    case 801u: goto L_08A3BA60;
    case 802u: goto L_08A3BA7C;
    case 803u: goto L_08A3BA8C;
    case 804u: goto L_08A3BA9C;
    case 805u: goto L_08A3BABC;
    case 806u: goto L_08A3BAC8;
    case 807u: goto L_08A3BAD8;
    case 808u: goto L_08A3BAFC;
    case 809u: goto L_08A3BB1C;
    case 810u: goto L_08A3BB24;
    case 811u: goto L_08A3BB34;
    case 812u: goto L_08A3BB44;
    case 813u: goto L_08A3BB4C;
    case 814u: goto L_08A3BB58;
    case 815u: goto L_08A3BB60;
    case 816u: goto L_08A3BB74;
    case 817u: goto L_08A3BB94;
    case 818u: goto L_08A3BBA4;
    case 819u: goto L_08A3BBAC;
    case 820u: goto L_08A3BBB0;
    case 821u: goto L_08A3BBBC;
    case 822u: goto L_08A3BBC4;
    case 823u: goto L_08A3BBC8;
    case 824u: goto L_08A3BBD4;
    case 825u: goto L_08A3BBDC;
    case 826u: goto L_08A3BBE4;
    case 827u: goto L_08A3BBF0;
    case 828u: goto L_08A3BC08;
    case 829u: goto L_08A3BC10;
    case 830u: goto L_08A3BC1C;
    case 831u: goto L_08A3BC34;
    case 832u: goto L_08A3BC4C;
    case 833u: goto L_08A3BC5C;
    case 834u: goto L_08A3BC64;
    case 835u: goto L_08A3BC74;
    case 836u: goto L_08A3BCBC;
    case 837u: goto L_08A3BCD0;
    case 838u: goto L_08A3BCD8;
    case 839u: goto L_08A3BCE8;
    case 840u: goto L_08A3BD44;
    case 841u: goto L_08A3BD80;
    case 842u: goto L_08A3BD88;
    case 843u: goto L_08A3BD90;
    case 844u: goto L_08A3BDA0;
    case 845u: goto L_08A3BDB0;
    case 846u: goto L_08A3BDC0;
    case 847u: goto L_08A3BDC4;
    case 848u: goto L_08A3BDE4;
    case 849u: goto L_08A3BDEC;
    case 850u: goto L_08A3BDFC;
    case 851u: goto L_08A3BE04;
    case 852u: goto L_08A3BE10;
    case 853u: goto L_08A3BE1C;
    case 854u: goto L_08A3BE2C;
    case 855u: goto L_08A3BE40;
    case 856u: goto L_08A3BE50;
    case 857u: goto L_08A3BE60;
    case 858u: goto L_08A3BE68;
    case 859u: goto L_08A3BEA0;
    case 860u: goto L_08A3BEA8;
    case 861u: goto L_08A3BEB0;
    case 862u: goto L_08A3BEB8;
    case 863u: goto L_08A3BEC0;
    case 864u: goto L_08A3BEC8;
    case 865u: goto L_08A3BED8;
    case 866u: goto L_08A3BEE4;
    case 867u: goto L_08A3BEEC;
    case 868u: goto L_08A3BEFC;
    case 869u: goto L_08A3BF04;
    case 870u: goto L_08A3BF0C;
    case 871u: goto L_08A3BF20;
    case 872u: goto L_08A3BF30;
    case 873u: goto L_08A3BF48;
    case 874u: goto L_08A3BF54;
    case 875u: goto L_08A3BF6C;
    case 876u: goto L_08A3BF74;
    case 877u: goto L_08A3BF80;
    case 878u: goto L_08A3BF88;
    case 879u: goto L_08A3BF94;
    case 880u: goto L_08A3BFA4;
    case 881u: goto L_08A3BFB4;
    case 882u: goto L_08A3BFC4;
    case 883u: goto L_08A3BFD4;
    case 884u: goto L_08A3BFE4;
    case 885u: goto L_08A3BFF4;
    case 886u: goto L_08A3BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08A38004:
    ctx.gpr[31] = (0x08A3800Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3800Cu) goto L_08A3800C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3800C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8884))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A3801Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3801Cu) goto L_08A3801C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3801C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38050;
      }
      goto L_08A38028;
    }
L_08A38028:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28452));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38050;
L_08A38050:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38064;
      }
      goto L_08A38058;
    }
L_08A38058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38064;
L_08A38064:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38074u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38074u) goto L_08A38074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38074:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38098;
      }
      goto L_08A38080;
    }
L_08A38080:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38098;
      }
      goto L_08A38090;
    }
L_08A38090:
    ctx.gpr[31] = (0x08A38098u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38098u) goto L_08A38098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38098:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9944))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A380A8u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A380A8u) goto L_08A380A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A380A8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A380DC;
      }
      goto L_08A380B4;
    }
L_08A380B4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28512));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A380DC;
L_08A380DC:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A380F0;
      }
      goto L_08A380E4;
    }
L_08A380E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A380F0;
L_08A380F0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38100u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38100u) goto L_08A38100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38100:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38124;
      }
      goto L_08A3810C;
    }
L_08A3810C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38124;
      }
      goto L_08A3811C;
    }
L_08A3811C:
    ctx.gpr[31] = (0x08A38124u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38124u) goto L_08A38124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38124:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9945))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38134u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38134u) goto L_08A38134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38134:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38168;
      }
      goto L_08A38140;
    }
L_08A38140:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28736));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38168;
L_08A38168:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A3817C;
      }
      goto L_08A38170;
    }
L_08A38170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3817C;
L_08A3817C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3818Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3818Cu) goto L_08A3818C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3818C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A381B0;
      }
      goto L_08A38198;
    }
L_08A38198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A381B0;
      }
      goto L_08A381A8;
    }
L_08A381A8:
    ctx.gpr[31] = (0x08A381B0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A381B0u) goto L_08A381B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A381B0:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9946))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A381C0u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A381C0u) goto L_08A381C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A381C0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A381F4;
      }
      goto L_08A381CC;
    }
L_08A381CC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28896));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A381F4;
L_08A381F4:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38208;
      }
      goto L_08A381FC;
    }
L_08A381FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38208;
L_08A38208:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38218u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38218u) goto L_08A38218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38218:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A3823C;
      }
      goto L_08A38224;
    }
L_08A38224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3823C;
      }
      goto L_08A38234;
    }
L_08A38234:
    ctx.gpr[31] = (0x08A3823Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3823Cu) goto L_08A3823C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3823C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8724))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A3824Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3824Cu) goto L_08A3824C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3824C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38280;
      }
      goto L_08A38258;
    }
L_08A38258:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29036));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38280;
L_08A38280:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38294;
      }
      goto L_08A38288;
    }
L_08A38288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38294;
L_08A38294:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A382A4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A382A4u) goto L_08A382A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A382A4:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A382C8;
      }
      goto L_08A382B0;
    }
L_08A382B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A382C8;
      }
      goto L_08A382C0;
    }
L_08A382C0:
    ctx.gpr[31] = (0x08A382C8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A382C8u) goto L_08A382C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A382C8:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9947))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A382D8u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A382D8u) goto L_08A382D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A382D8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3830C;
      }
      goto L_08A382E4;
    }
L_08A382E4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29464));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3830C;
L_08A3830C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A38314;
    }
L_08A38314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38320;
L_08A38320:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38330u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38330u) goto L_08A38330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38330:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38354;
      }
      goto L_08A3833C;
    }
L_08A3833C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38354;
      }
      goto L_08A3834C;
    }
L_08A3834C:
    ctx.gpr[31] = (0x08A38354u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38354u) goto L_08A38354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38354:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9948))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38364u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38364u) goto L_08A38364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38364:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38398;
      }
      goto L_08A38370;
    }
L_08A38370:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29648));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38398;
L_08A38398:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A383AC;
      }
      goto L_08A383A0;
    }
L_08A383A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A383AC;
L_08A383AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A383BCu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A383BCu) goto L_08A383BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A383BC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A383E0;
      }
      goto L_08A383C8;
    }
L_08A383C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A383E0;
      }
      goto L_08A383D8;
    }
L_08A383D8:
    ctx.gpr[31] = (0x08A383E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A383E0u) goto L_08A383E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A383E0:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9949))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A383F0u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A383F0u) goto L_08A383F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A383F0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38424;
      }
      goto L_08A383FC;
    }
L_08A383FC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29808));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38424;
L_08A38424:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38438;
      }
      goto L_08A3842C;
    }
L_08A3842C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38438;
L_08A38438:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38448u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38448u) goto L_08A38448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38448:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A3846C;
      }
      goto L_08A38454;
    }
L_08A38454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3846C;
      }
      goto L_08A38464;
    }
L_08A38464:
    ctx.gpr[31] = (0x08A3846Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3846Cu) goto L_08A3846C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3846C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9950))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A3847Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3847Cu) goto L_08A3847C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3847C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A384B0;
      }
      goto L_08A38488;
    }
L_08A38488:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29932));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A384B0;
L_08A384B0:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A384C4;
      }
      goto L_08A384B8;
    }
L_08A384B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A384C4;
L_08A384C4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A384D4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A384D4u) goto L_08A384D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A384D4:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A384F8;
      }
      goto L_08A384E0;
    }
L_08A384E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A384F8;
      }
      goto L_08A384F0;
    }
L_08A384F0:
    ctx.gpr[31] = (0x08A384F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A384F8u) goto L_08A384F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A384F8:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9951))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38508u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38508u) goto L_08A38508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38508:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3853C;
      }
      goto L_08A38514;
    }
L_08A38514:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29976));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3853C;
L_08A3853C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38550;
      }
      goto L_08A38544;
    }
L_08A38544:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38550;
L_08A38550:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38560u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38560u) goto L_08A38560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38560:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38584;
      }
      goto L_08A3856C;
    }
L_08A3856C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38584;
      }
      goto L_08A3857C;
    }
L_08A3857C:
    ctx.gpr[31] = (0x08A38584u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38584u) goto L_08A38584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38584:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8681))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38594u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38594u) goto L_08A38594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38594:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A385C8;
      }
      goto L_08A385A0;
    }
L_08A385A0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2190u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20880));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A385C8;
L_08A385C8:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A385DC;
      }
      goto L_08A385D0;
    }
L_08A385D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A385DC;
L_08A385DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A385ECu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A385ECu) goto L_08A385EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A385EC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38610;
      }
      goto L_08A385F8;
    }
L_08A385F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38610;
      }
      goto L_08A38608;
    }
L_08A38608:
    ctx.gpr[31] = (0x08A38610u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38610u) goto L_08A38610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38610:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9637))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38620u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38620u) goto L_08A38620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38620:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38654;
      }
      goto L_08A3862C;
    }
L_08A3862C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(15860));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38654;
L_08A38654:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38668;
      }
      goto L_08A3865C;
    }
L_08A3865C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38668;
L_08A38668:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38678u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38678u) goto L_08A38678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38678:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A3869C;
      }
      goto L_08A38684;
    }
L_08A38684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3869C;
      }
      goto L_08A38694;
    }
L_08A38694:
    ctx.gpr[31] = (0x08A3869Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3869Cu) goto L_08A3869C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3869C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9642))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A386ACu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A386ACu) goto L_08A386AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A386AC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A386E0;
      }
      goto L_08A386B8;
    }
L_08A386B8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(992));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A386E0;
L_08A386E0:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A386F4;
      }
      goto L_08A386E8;
    }
L_08A386E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A386F4;
L_08A386F4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38704u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38704u) goto L_08A38704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38704:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38728;
      }
      goto L_08A38710;
    }
L_08A38710:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38728;
      }
      goto L_08A38720;
    }
L_08A38720:
    ctx.gpr[31] = (0x08A38728u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38728u) goto L_08A38728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38728:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9638))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38738u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38738u) goto L_08A38738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38738:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3876C;
      }
      goto L_08A38744;
    }
L_08A38744:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-956));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3876C;
L_08A3876C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38780;
      }
      goto L_08A38774;
    }
L_08A38774:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38780;
L_08A38780:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38790u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38790u) goto L_08A38790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38790:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A387B4;
      }
      goto L_08A3879C;
    }
L_08A3879C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A387B4;
      }
      goto L_08A387AC;
    }
L_08A387AC:
    ctx.gpr[31] = (0x08A387B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A387B4u) goto L_08A387B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A387B4:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9639))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A387C4u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A387C4u) goto L_08A387C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A387C4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A387F8;
      }
      goto L_08A387D0;
    }
L_08A387D0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(212));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A387F8;
L_08A387F8:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A3880C;
      }
      goto L_08A38800;
    }
L_08A38800:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3880C;
L_08A3880C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3881Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3881Cu) goto L_08A3881C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3881C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38840;
      }
      goto L_08A38828;
    }
L_08A38828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38840;
      }
      goto L_08A38838;
    }
L_08A38838:
    ctx.gpr[31] = (0x08A38840u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38840u) goto L_08A38840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38840:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9640))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38850u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38850u) goto L_08A38850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38850:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38884;
      }
      goto L_08A3885C;
    }
L_08A3885C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-556));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38884;
L_08A38884:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38898;
      }
      goto L_08A3888C;
    }
L_08A3888C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38898;
L_08A38898:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A388A8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A388A8u) goto L_08A388A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A388A8:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A388CC;
      }
      goto L_08A388B4;
    }
L_08A388B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A388CC;
      }
      goto L_08A388C4;
    }
L_08A388C4:
    ctx.gpr[31] = (0x08A388CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A388CCu) goto L_08A388CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A388CC:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8064))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A388DCu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A388DCu) goto L_08A388DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A388DC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38910;
      }
      goto L_08A388E8;
    }
L_08A388E8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2184u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-56));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38910;
L_08A38910:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38924;
      }
      goto L_08A38918;
    }
L_08A38918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38924;
L_08A38924:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38934u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38934u) goto L_08A38934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38934:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38958;
      }
      goto L_08A38940;
    }
L_08A38940:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38958;
      }
      goto L_08A38950;
    }
L_08A38950:
    ctx.gpr[31] = (0x08A38958u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38958u) goto L_08A38958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38958:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8433))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38968u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38968u) goto L_08A38968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38968:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3899C;
      }
      goto L_08A38974;
    }
L_08A38974:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2185u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3899C;
L_08A3899C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A389B0;
      }
      goto L_08A389A4;
    }
L_08A389A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A389B0;
L_08A389B0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A389C0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A389C0u) goto L_08A389C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A389C0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A389E4;
      }
      goto L_08A389CC;
    }
L_08A389CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A389E4;
      }
      goto L_08A389DC;
    }
L_08A389DC:
    ctx.gpr[31] = (0x08A389E4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A389E4u) goto L_08A389E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A389E4:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9641))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A389F4u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A389F4u) goto L_08A389F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A389F4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38A28;
      }
      goto L_08A38A00;
    }
L_08A38A00:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38A28;
L_08A38A28:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38A3C;
      }
      goto L_08A38A30;
    }
L_08A38A30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38A3C;
L_08A38A3C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38A4Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38A4Cu) goto L_08A38A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38A4C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38A70;
      }
      goto L_08A38A58;
    }
L_08A38A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38A70;
      }
      goto L_08A38A68;
    }
L_08A38A68:
    ctx.gpr[31] = (0x08A38A70u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38A70u) goto L_08A38A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38A70:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9643))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38A80u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38A80u) goto L_08A38A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38A80:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38AB4;
      }
      goto L_08A38A8C;
    }
L_08A38A8C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1836));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38AB4;
L_08A38AB4:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38AC8;
      }
      goto L_08A38ABC;
    }
L_08A38ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38AC8;
L_08A38AC8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38AD8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38AD8u) goto L_08A38AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38AD8:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38AFC;
      }
      goto L_08A38AE4;
    }
L_08A38AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38AFC;
      }
      goto L_08A38AF4;
    }
L_08A38AF4:
    ctx.gpr[31] = (0x08A38AFCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38AFCu) goto L_08A38AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38AFC:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9645))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38B0Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38B0Cu) goto L_08A38B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38B0C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38B40;
      }
      goto L_08A38B18;
    }
L_08A38B18:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2436));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38B40;
L_08A38B40:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38B54;
      }
      goto L_08A38B48;
    }
L_08A38B48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38B54;
L_08A38B54:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38B64u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38B64u) goto L_08A38B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38B64:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38B88;
      }
      goto L_08A38B70;
    }
L_08A38B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38B88;
      }
      goto L_08A38B80;
    }
L_08A38B80:
    ctx.gpr[31] = (0x08A38B88u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38B88u) goto L_08A38B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38B88:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9646))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38B98u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38B98u) goto L_08A38B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38B98:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38BCC;
      }
      goto L_08A38BA4;
    }
L_08A38BA4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17920));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38BCC;
L_08A38BCC:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38BE0;
      }
      goto L_08A38BD4;
    }
L_08A38BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38BE0;
L_08A38BE0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38BF0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38BF0u) goto L_08A38BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38BF0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38C14;
      }
      goto L_08A38BFC;
    }
L_08A38BFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38C14;
      }
      goto L_08A38C0C;
    }
L_08A38C0C:
    ctx.gpr[31] = (0x08A38C14u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38C14u) goto L_08A38C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38C14:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9745))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38C24u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38C24u) goto L_08A38C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38C24:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38C58;
      }
      goto L_08A38C30;
    }
L_08A38C30:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2209u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20808));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38C58;
L_08A38C58:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38C6C;
      }
      goto L_08A38C60;
    }
L_08A38C60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38C6C;
L_08A38C6C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38C7Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38C7Cu) goto L_08A38C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38C7C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38CA0;
      }
      goto L_08A38C88;
    }
L_08A38C88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38CA0;
      }
      goto L_08A38C98;
    }
L_08A38C98:
    ctx.gpr[31] = (0x08A38CA0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38CA0u) goto L_08A38CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38CA0:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9744))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38CB0u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38CB0u) goto L_08A38CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38CB0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38CE4;
      }
      goto L_08A38CBC;
    }
L_08A38CBC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2209u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21024));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38CE4;
L_08A38CE4:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38CF8;
      }
      goto L_08A38CEC;
    }
L_08A38CEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38CF8;
L_08A38CF8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38D08u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38D08u) goto L_08A38D08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38D08:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38D2C;
      }
      goto L_08A38D14;
    }
L_08A38D14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38D2C;
      }
      goto L_08A38D24;
    }
L_08A38D24:
    ctx.gpr[31] = (0x08A38D2Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38D2Cu) goto L_08A38D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38D2C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9746))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38D3Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38D3Cu) goto L_08A38D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38D3C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38D70;
      }
      goto L_08A38D48;
    }
L_08A38D48:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2209u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19948));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38D70;
L_08A38D70:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38D84;
      }
      goto L_08A38D78;
    }
L_08A38D78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38D84;
L_08A38D84:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38D94u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38D94u) goto L_08A38D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38D94:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38DB8;
      }
      goto L_08A38DA0;
    }
L_08A38DA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38DB8;
      }
      goto L_08A38DB0;
    }
L_08A38DB0:
    ctx.gpr[31] = (0x08A38DB8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38DB8u) goto L_08A38DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38DB8:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9684))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38DC8u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38DC8u) goto L_08A38DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38DC8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38DFC;
      }
      goto L_08A38DD4;
    }
L_08A38DD4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2207u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27216));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38DFC;
L_08A38DFC:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38E10;
      }
      goto L_08A38E04;
    }
L_08A38E04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38E10;
L_08A38E10:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38E20u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38E20u) goto L_08A38E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38E20:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38E44;
      }
      goto L_08A38E2C;
    }
L_08A38E2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38E44;
      }
      goto L_08A38E3C;
    }
L_08A38E3C:
    ctx.gpr[31] = (0x08A38E44u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38E44u) goto L_08A38E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38E44:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9636))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38E54u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38E54u) goto L_08A38E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38E54:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38E88;
      }
      goto L_08A38E60;
    }
L_08A38E60:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2205u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1176));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38E88;
L_08A38E88:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38E9C;
      }
      goto L_08A38E90;
    }
L_08A38E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38E9C;
L_08A38E9C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38EACu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38EACu) goto L_08A38EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38EAC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38ED0;
      }
      goto L_08A38EB8;
    }
L_08A38EB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38ED0;
      }
      goto L_08A38EC8;
    }
L_08A38EC8:
    ctx.gpr[31] = (0x08A38ED0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38ED0u) goto L_08A38ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38ED0:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7884))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38EE0u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38EE0u) goto L_08A38EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38EE0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38F14;
      }
      goto L_08A38EEC;
    }
L_08A38EEC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30208));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38F14;
L_08A38F14:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38F28;
      }
      goto L_08A38F1C;
    }
L_08A38F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38F28;
L_08A38F28:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38F38u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38F38u) goto L_08A38F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38F38:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38F5C;
      }
      goto L_08A38F44;
    }
L_08A38F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38F5C;
      }
      goto L_08A38F54;
    }
L_08A38F54:
    ctx.gpr[31] = (0x08A38F5Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38F5Cu) goto L_08A38F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38F5C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9956))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38F6Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38F6Cu) goto L_08A38F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38F6C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38FA0;
      }
      goto L_08A38F78;
    }
L_08A38F78:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30628));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A38FA0;
L_08A38FA0:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A38FB4;
      }
      goto L_08A38FA8;
    }
L_08A38FA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A38FB4;
L_08A38FB4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A38FC4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38FC4u) goto L_08A38FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38FC4:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A38FE8;
      }
      goto L_08A38FD0;
    }
L_08A38FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A38FE8;
      }
      goto L_08A38FE0;
    }
L_08A38FE0:
    ctx.gpr[31] = (0x08A38FE8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38FE8u) goto L_08A38FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38FE8:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9954))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A38FF8u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A38FF8u) goto L_08A38FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A38FF8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3902C;
      }
      goto L_08A39004;
    }
L_08A39004:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30832));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3902C;
L_08A3902C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A39040;
      }
      goto L_08A39034;
    }
L_08A39034:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A39040;
L_08A39040:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39050u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39050u) goto L_08A39050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39050:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39074;
      }
      goto L_08A3905C;
    }
L_08A3905C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39074;
      }
      goto L_08A3906C;
    }
L_08A3906C:
    ctx.gpr[31] = (0x08A39074u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39074u) goto L_08A39074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39074:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9955))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39084u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39084u) goto L_08A39084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39084:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A390B8;
      }
      goto L_08A39090;
    }
L_08A39090:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31248));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A390B8;
L_08A390B8:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A390CC;
      }
      goto L_08A390C0;
    }
L_08A390C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A390CC;
L_08A390CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A390DCu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A390DCu) goto L_08A390DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A390DC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39100;
      }
      goto L_08A390E8;
    }
L_08A390E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39100;
      }
      goto L_08A390F8;
    }
L_08A390F8:
    ctx.gpr[31] = (0x08A39100u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39100u) goto L_08A39100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39100:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9960))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39110u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39110u) goto L_08A39110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39110:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39144;
      }
      goto L_08A3911C;
    }
L_08A3911C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1456));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A39144;
L_08A39144:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A39158;
      }
      goto L_08A3914C;
    }
L_08A3914C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A39158;
L_08A39158:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39168u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39168u) goto L_08A39168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39168:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A3918C;
      }
      goto L_08A39174;
    }
L_08A39174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3918C;
      }
      goto L_08A39184;
    }
L_08A39184:
    ctx.gpr[31] = (0x08A3918Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3918Cu) goto L_08A3918C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3918C:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9961))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A3919Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3919Cu) goto L_08A3919C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3919C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A391D0;
      }
      goto L_08A391A8;
    }
L_08A391A8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2212u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A391D0;
L_08A391D0:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A391E4;
      }
      goto L_08A391D8;
    }
L_08A391D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A391E4;
L_08A391E4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A391F4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A391F4u) goto L_08A391F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A391F4:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39218;
      }
      goto L_08A39200;
    }
L_08A39200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39218;
      }
      goto L_08A39210;
    }
L_08A39210:
    ctx.gpr[31] = (0x08A39218u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39218u) goto L_08A39218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39218:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8680))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39228u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39228u) goto L_08A39228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39228:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3925C;
      }
      goto L_08A39234;
    }
L_08A39234:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2190u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10520));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3925C;
L_08A3925C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A39270;
      }
      goto L_08A39264;
    }
L_08A39264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A39270;
L_08A39270:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39280u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39280u) goto L_08A39280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39280:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A392A4;
      }
      goto L_08A3928C;
    }
L_08A3928C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A392A4;
      }
      goto L_08A3929C;
    }
L_08A3929C:
    ctx.gpr[31] = (0x08A392A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A392A4u) goto L_08A392A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A392A4:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9953))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A392B4u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A392B4u) goto L_08A392B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A392B4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A392E8;
      }
      goto L_08A392C0;
    }
L_08A392C0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31672));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A392E8;
L_08A392E8:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A392FC;
      }
      goto L_08A392F0;
    }
L_08A392F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A392FC;
L_08A392FC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3930Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3930Cu) goto L_08A3930C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3930C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39330;
      }
      goto L_08A39318;
    }
L_08A39318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39330;
      }
      goto L_08A39328;
    }
L_08A39328:
    ctx.gpr[31] = (0x08A39330u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39330u) goto L_08A39330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39330:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9644))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39340u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39340u) goto L_08A39340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39340:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39374;
      }
      goto L_08A3934C;
    }
L_08A3934C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2205u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(19140));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A39374;
L_08A39374:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A39388;
      }
      goto L_08A3937C;
    }
L_08A3937C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A39388;
L_08A39388:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39398u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39398u) goto L_08A39398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39398:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A393BC;
      }
      goto L_08A393A4;
    }
L_08A393A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A393BC;
      }
      goto L_08A393B4;
    }
L_08A393B4:
    ctx.gpr[31] = (0x08A393BCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A393BCu) goto L_08A393BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A393BC:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7788))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A393CCu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A393CCu) goto L_08A393CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A393CC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39400;
      }
      goto L_08A393D8;
    }
L_08A393D8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2178u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20996));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A39400;
L_08A39400:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A39414;
      }
      goto L_08A39408;
    }
L_08A39408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A39414;
L_08A39414:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39424u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39424u) goto L_08A39424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39424:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39448;
      }
      goto L_08A39430;
    }
L_08A39430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39448;
      }
      goto L_08A39440;
    }
L_08A39440:
    ctx.gpr[31] = (0x08A39448u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39448u) goto L_08A39448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39448:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7789))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39458u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39458u) goto L_08A39458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39458:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3948C;
      }
      goto L_08A39464;
    }
L_08A39464:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2178u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21120));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A3948C;
L_08A3948C:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A394A0;
      }
      goto L_08A39494;
    }
L_08A39494:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A394A0;
L_08A394A0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A394B0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A394B0u) goto L_08A394B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A394B0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A394D4;
      }
      goto L_08A394BC;
    }
L_08A394BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A394D4;
      }
      goto L_08A394CC;
    }
L_08A394CC:
    ctx.gpr[31] = (0x08A394D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A394D4u) goto L_08A394D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A394D4:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9957))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A394E4u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A394E4u) goto L_08A394E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A394E4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39518;
      }
      goto L_08A394F0;
    }
L_08A394F0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31968));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A39518;
L_08A39518:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A3952C;
      }
      goto L_08A39520;
    }
L_08A39520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3952C;
L_08A3952C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3953Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3953Cu) goto L_08A3953C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3953C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39560;
      }
      goto L_08A39548;
    }
L_08A39548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39560;
      }
      goto L_08A39558;
    }
L_08A39558:
    ctx.gpr[31] = (0x08A39560u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39560u) goto L_08A39560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39560:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8617))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39570u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39570u) goto L_08A39570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39570:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A395A4;
      }
      goto L_08A3957C;
    }
L_08A3957C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30016));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A395A4;
L_08A395A4:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A395B8;
      }
      goto L_08A395AC;
    }
L_08A395AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A395B8;
L_08A395B8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A395C8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A395C8u) goto L_08A395C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A395C8:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A395EC;
      }
      goto L_08A395D4;
    }
L_08A395D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A395EC;
      }
      goto L_08A395E4;
    }
L_08A395E4:
    ctx.gpr[31] = (0x08A395ECu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A395ECu) goto L_08A395EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A395EC:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9952))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A395FCu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A395FCu) goto L_08A395FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A395FC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39630;
      }
      goto L_08A39608;
    }
L_08A39608:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32128));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A39630;
L_08A39630:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A39644;
      }
      goto L_08A39638;
    }
L_08A39638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A39644;
L_08A39644:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39654u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39654u) goto L_08A39654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39654:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39678;
      }
      goto L_08A39660;
    }
L_08A39660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39678;
      }
      goto L_08A39670;
    }
L_08A39670:
    ctx.gpr[31] = (0x08A39678u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39678u) goto L_08A39678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39678:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9958))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39688u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39688u) goto L_08A39688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39688:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A396BC;
      }
      goto L_08A39694;
    }
L_08A39694:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32144));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A396BC;
L_08A396BC:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A396D0;
      }
      goto L_08A396C4;
    }
L_08A396C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A396D0;
L_08A396D0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A396E0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A396E0u) goto L_08A396E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A396E0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39704;
      }
      goto L_08A396EC;
    }
L_08A396EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39704;
      }
      goto L_08A396FC;
    }
L_08A396FC:
    ctx.gpr[31] = (0x08A39704u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39704u) goto L_08A39704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39704:
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9959))))));
    aot_gpr_18 = (0u | 0u);
    ctx.gpr[31] = (0x08A39714u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39714u) goto L_08A39714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39714:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39748;
      }
      goto L_08A39720;
    }
L_08A39720:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32300));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    goto L_08A39748;
L_08A39748:
    { const bool branch_taken = aot_gpr_18 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_18);
      if (branch_taken) {
          goto L_08A3975C;
      }
      goto L_08A39750;
    }
L_08A39750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3975C;
L_08A3975C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3976Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3976Cu) goto L_08A3976C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3976C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A39790;
      }
      goto L_08A39778;
    }
L_08A39778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A39790;
      }
      goto L_08A39788;
    }
L_08A39788:
    ctx.gpr[31] = (0x08A39790u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39790u) goto L_08A39790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39790:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A397AC:
    aot_gpr_4 = (0u | 61u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9943), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9943)));
    aot_gpr_6 = (0u | 15u);
    ctx.gpr[7] = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30144));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9747), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6736));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9747)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 6u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8884), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6720));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8884)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 7u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8885), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6704));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8885)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 8u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9944), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6688));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9944)));
    aot_gpr_5 = (0u | 9u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9945), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5984));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9945)));
    aot_gpr_5 = (0u | 10u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9946), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6004));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9946)));
    aot_gpr_5 = (0u | 11u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8724), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6036));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8724)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 13u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9947), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6672));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9947)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 12u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9948), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6660));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9948)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 19u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9949), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6644));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9949)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9950), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6628));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9950)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 4u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9951), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6616));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9951)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 60u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6600));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8617)));
    aot_gpr_5 = (0u | 62u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9952), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6056));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9952)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 58u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9953), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6588));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9953)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 57u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9954), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6576));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9954)));
    aot_gpr_5 = (0u | 63u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9955), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6076));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9955)));
    aot_gpr_5 = (0u | 56u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9956), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6104));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9956)));
    aot_gpr_5 = (0u | 55u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7884), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6124));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7884)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 26u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9957), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6560));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9957)));
    aot_gpr_5 = (0u | 64u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9958), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6144));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9958)));
    aot_gpr_5 = (0u | 65u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9959), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6168));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9959)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6188));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39A64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(300)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A39A88;
      }
      goto L_08A39A80;
    }
L_08A39A80:
    ctx.gpr[31] = (0x08A39A88u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A39ACC;
L_08A39A88:
    aot_gpr_4 = (12u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28672));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39AA0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39AA0u) goto L_08A39AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39AA0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39AB8u);
    ctx.gpr[7] = (8u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 485u, 0x08ABE3E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39AB8u) goto L_08A39AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39AB8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39ACC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39AECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39AECu) goto L_08A39AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39AEC:
    ctx.gpr[31] = (0x08A39AF4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 500u, 0x08ABE564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39AF4u) goto L_08A39AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39AF4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39B08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39B1Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 484u, 0x08ABE3BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39B1Cu) goto L_08A39B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39B1C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39B34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39B48u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    goto L_08A39B08;
L_08A39B48:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39B54:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A39B68;
      }
      goto L_08A39B60;
    }
L_08A39B60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A39B68;
    }
L_08A39B68:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6544));
    goto L_08A39B6C;
L_08A39B6C:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39B74:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39B7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_18);
    aot_gpr_18 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[7] << 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_18 = (aot_gpr_18 + aot_gpr_6);
      if (branch_taken) {
          goto L_08A39C58;
      }
      goto L_08A39BAC;
    }
L_08A39BAC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(42))))));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 6u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_17 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_08A39C04;
      }
      goto L_08A39BD4;
    }
L_08A39BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08A39BF0;
      }
      goto L_08A39BE4;
    }
L_08A39BE4:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08A39BF8;
      }
      goto L_08A39BF0;
    }
L_08A39BF0:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_6 & 255u);
    goto L_08A39BF8;
L_08A39BF8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A39C04;
      }
      goto L_08A39C00;
    }
L_08A39C00:
    aot_gpr_17 = (0u | 0u);
    goto L_08A39C04;
L_08A39C04:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A39C1C;
      }
      goto L_08A39C0C;
    }
L_08A39C0C:
    ctx.gpr[31] = (0x08A39C14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39C14u) goto L_08A39C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39C14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A39C34;
      }
      goto L_08A39C1C;
    }
L_08A39C1C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(42))))));
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08A39C44;
      }
      goto L_08A39C2C;
    }
L_08A39C2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_08A39C3C;
      }
      goto L_08A39C34;
    }
L_08A39C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08A39C5C;
      }
      goto L_08A39C3C;
    }
L_08A39C3C:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08A39C48;
      }
      goto L_08A39C44;
    }
L_08A39C44:
    aot_gpr_17 = (0u | 0u);
    goto L_08A39C48;
L_08A39C48:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08A39C58;
      }
      goto L_08A39C50;
    }
L_08A39C50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A39C5C;
      }
      goto L_08A39C58;
    }
L_08A39C58:
    ctx.gpr[2] = (0u | 5u);
    goto L_08A39C5C;
L_08A39C5C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39C74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39CB4u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_08A3A524;
L_08A39CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_6 = (aot_gpr_5 & 992u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (aot_gpr_6 >> 5u);
    ctx.gpr[31] = (0x08A39CE0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39CE0u) goto L_08A39CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39CE0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A39CFCu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39CFCu) goto L_08A39CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39CFC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39D10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A39D48;
      }
      goto L_08A39D1C;
    }
L_08A39D1C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_08A39D48;
L_08A39D48:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39D50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_18);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_18 = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_6 | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39D84u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39D84u) goto L_08A39D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39D84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A39DC0;
      }
      goto L_08A39D9C;
    }
L_08A39D9C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A39DC0;
      }
      goto L_08A39DA8;
    }
L_08A39DA8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A39DC0;
      }
      goto L_08A39DB4;
    }
L_08A39DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DC0;
    }
L_08A39DC0:
    ctx.gpr[31] = (0x08A39DC8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39DC8u) goto L_08A39DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DD0;
    }
L_08A39DD0:
    ctx.gpr[31] = (0x08A39DD8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39DD8u) goto L_08A39DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DE0;
    }
L_08A39DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_08A39DFC;
      }
      goto L_08A39DE8;
    }
L_08A39DE8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A39DFCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 576u, 0x088230BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39DFCu) goto L_08A39DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39DFC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39E18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39E28u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A3A524;
L_08A39E28:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39E34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39E48u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 424u, 0x0881E6E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39E48u) goto L_08A39E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39E48:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29640));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39E68u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A3A524;
L_08A39E68:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A39E7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), ctx.gpr[16], aot_gpr_17, aot_gpr_18, ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words); }
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (21352u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 54437u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_08A3A070;
      }
      goto L_08A39F24;
    }
L_08A39F24:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 58u);
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_18 = (ctx.gpr[21] | 0u);
    goto L_08A39F40;
L_08A39F40:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1824)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A39F70;
    }
    goto L_08A39F50;
L_08A39F50:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A39F60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39F60u) goto L_08A39F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39F60:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A39F70;
L_08A39F70:
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A39FB0;
    }
L_08A39FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A39FDC;
    }
    goto L_08A39FBC;
L_08A39FBC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A39FCCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A39FCCu) goto L_08A39FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A39FCC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A39FDC;
L_08A39FDC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A39FE8;
    }
L_08A39FE8:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 17u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
          goto L_08A3A05C;
      }
      goto L_08A3A03C;
    }
L_08A3A03C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A3A04C;
    }
L_08A3A04C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[16]);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A3A05C;
L_08A3A05C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_18 = (aot_gpr_18 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A39F40;
      }
      goto L_08A3A070;
    }
L_08A3A070:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3A1A0;
      }
      goto L_08A3A07C;
    }
L_08A3A07C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08A3A194;
      }
      goto L_08A3A090;
    }
L_08A3A090:
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 58u);
    aot_gpr_6 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_08A3A0B0;
L_08A3A0B0:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[3] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A0F0;
    }
L_08A3A0F0:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[3] == aot_gpr_5;
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A0FC;
    }
L_08A3A0FC:
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[3]);
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 17u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[3]);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A150;
    }
L_08A3A150:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A160;
    }
L_08A3A160:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(468)));
    ctx.gpr[3] = (ctx.gpr[3] & 256u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A170;
    }
L_08A3A170:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), ctx.gpr[10]);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A3A180;
L_08A3A180:
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A0B0;
      }
      goto L_08A3A194;
    }
L_08A3A194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3A1C4;
      }
      goto L_08A3A1A0;
    }
L_08A3A1A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3A1CC;
      }
      goto L_08A3A1BC;
    }
L_08A3A1BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3A1DC;
      }
      goto L_08A3A1C4;
    }
L_08A3A1C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3A208;
      }
      goto L_08A3A1CC;
    }
L_08A3A1CC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3A1EC;
      }
      goto L_08A3A1DC;
    }
L_08A3A1DC:
    ctx.gpr[31] = (0x08A3A1E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A1E4u) goto L_08A3A1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A1E4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3A1EC;
      }
      goto L_08A3A1EC;
    }
L_08A3A1EC:
    ctx.gpr[31] = (0x08A3A1F4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A1F4u) goto L_08A3A1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A1F4:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3A208u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A208u) goto L_08A3A208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A208:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.gpr[16] = aot_run_words[5];
      aot_gpr_17 = aot_run_words[6];
      aot_gpr_18 = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      ctx.gpr[23] = aot_run_words[12];
      ctx.gpr[30] = aot_run_words[13];
      ctx.gpr[31] = aot_run_words[14];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A24C:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16181u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 1153u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (17152u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[24] = (0u - ctx.gpr[15]);
    ctx.gpr[14] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A2E4;
      }
      goto L_08A3A2BC;
    }
L_08A3A2BC:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (0u | 1u);
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[10] & 31u));
    ctx.gpr[24] = (ctx.gpr[24] | ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[24]);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2D4;
    }
L_08A3A2D4:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (ctx.gpr[24] | ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2E4;
    }
L_08A3A2E4:
    { const bool branch_taken = ctx.gpr[13] == 0u;
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2EC;
    }
L_08A3A2EC:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (0u | 1u);
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[11] & 31u));
    ctx.gpr[24] = (ctx.gpr[24] | ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[24]);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A304;
    }
L_08A3A304:
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (ctx.gpr[24] | ctx.gpr[15]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[15]);
    goto L_08A3A310;
L_08A3A310:
    { const bool branch_taken = ctx.gpr[12] == 0u;
      if (branch_taken) {
          goto L_08A3A334;
      }
      goto L_08A3A318;
    }
L_08A3A318:
    { const bool branch_taken = ctx.gpr[14] != 0u;
      if (branch_taken) {
          goto L_08A3A334;
      }
      goto L_08A3A320;
    }
L_08A3A320:
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[14] << (ctx.gpr[10] & 31u));
    ctx.gpr[10] = (ctx.gpr[12] | ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A3A334;
L_08A3A334:
    { const bool branch_taken = ctx.gpr[3] == 0u;
      if (branch_taken) {
          goto L_08A3A358;
      }
      goto L_08A3A33C;
    }
L_08A3A33C:
    { const bool branch_taken = ctx.gpr[13] != 0u;
      if (branch_taken) {
          goto L_08A3A358;
      }
      goto L_08A3A344;
    }
L_08A3A344:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[3] << (ctx.gpr[11] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A3A358;
L_08A3A358:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A3A388;
      }
      goto L_08A3A360;
    }
L_08A3A360:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[2] & 31u));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[10]);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A378;
    }
L_08A3A378:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[11] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A388;
    }
L_08A3A388:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A390;
    }
L_08A3A390:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[9] & 31u));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[10]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A3A8;
    }
L_08A3A3A8:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[11] | ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    goto L_08A3A3B4;
L_08A3A3B4:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A3A3D8;
      }
      goto L_08A3A3BC;
    }
L_08A3A3BC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08A3A3D8;
      }
      goto L_08A3A3C4;
    }
L_08A3A3C4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[8] << (ctx.gpr[2] & 31u));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08A3A3D8;
L_08A3A3D8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3A3FC;
      }
      goto L_08A3A3E0;
    }
L_08A3A3E0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08A3A3FC;
      }
      goto L_08A3A3E8;
    }
L_08A3A3E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 << (ctx.gpr[9] & 31u));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3A3FC;
L_08A3A3FC:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A404:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08A3A434u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A434u) goto L_08A3A434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A434:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_6 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3A44Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A44Cu) goto L_08A3A44C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A44C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[31] = (0x08A3A464u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 426u, 0x0881E7E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A464u) goto L_08A3A464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A464:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A478:
    aot_gpr_6 = (0u | 5u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.hi);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.gpr[7] + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> (aot_gpr_5 & 31u)));
    ctx.gpr[2] = (aot_gpr_4 & 7u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A4C0:
    ctx.gpr[7] = (0u | 5u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (0u | 7u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[9] = (ctx.hi);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.gpr[9] + ctx.gpr[9]);
    aot_gpr_5 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[7] = (ctx.gpr[8] << (aot_gpr_5 & 31u));
    aot_gpr_5 = (aot_gpr_6 << (aot_gpr_5 & 31u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (~(ctx.gpr[7] | 0u));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A524:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3A540u);
    aot_gpr_17 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 726u, 0x0881FF4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A540u) goto L_08A3A540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (65535u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x08A3A574u);
    aot_gpr_6 = (0u | 48u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A574u) goto L_08A3A574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A574:
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_08A3A58C;
      }
      goto L_08A3A57C;
    }
L_08A3A57C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[31] = (0x08A3A58Cu);
    aot_gpr_6 = (0u | 48u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A58Cu) goto L_08A3A58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A58C:
    ctx.gpr[31] = (0x08A3A594u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 664u, 0x0881FA54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A594u) goto L_08A3A594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3A5E8;
      }
      goto L_08A3A5A0;
    }
L_08A3A5A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3A5E8;
      }
      goto L_08A3A5BC;
    }
L_08A3A5BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(216));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08A3A5D4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A5D4u) goto L_08A3A5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A5D4:
    ctx.gpr[31] = (0x08A3A5DCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A5DCu) goto L_08A3A5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A5DC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08A3A5F8;
      }
      goto L_08A3A5E8;
    }
L_08A3A5E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08A3A5F8;
L_08A3A5F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A61C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08A3A648u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 620u, 0x0881F7A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A648u) goto L_08A3A648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A648:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[19] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A3A664u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A664u) goto L_08A3A664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A664:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_18 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3A6B4;
      }
      goto L_08A3A678;
    }
L_08A3A678:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 << (aot_gpr_18 & 31u));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3A6A4;
      }
      goto L_08A3A690;
    }
L_08A3A690:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A69Cu);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A69Cu) goto L_08A3A69C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A3A6B4;
      }
      goto L_08A3A6A4;
    }
L_08A3A6A4:
    aot_gpr_18 = (aot_gpr_18 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A3A678;
      }
      goto L_08A3A6B4;
    }
L_08A3A6B4:
    ctx.gpr[31] = (0x08A3A6BCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A6BCu) goto L_08A3A6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A6BC:
    { const bool branch_taken = aot_gpr_18 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08A3A6D8;
      }
      goto L_08A3A6C4;
    }
L_08A3A6C4:
    aot_gpr_18 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A6D4u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A6D4u) goto L_08A3A6D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A6D4:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    goto L_08A3A6D8;
L_08A3A6D8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A6E4u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A6E4u) goto L_08A3A6E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A6E4:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A6F4u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A6F4u) goto L_08A3A6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A6F4:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3A704u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_08A3A404;
L_08A3A704:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A3A734u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A734u) goto L_08A3A734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A734:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A754:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (0u | 255u);
    if (aot_gpr_5 != aot_gpr_4) {
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
        goto L_08A3A778;
    }
    goto L_08A3A770;
L_08A3A770:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    goto L_08A3A778;
L_08A3A778:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_6 & 255u);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A3A7F8;
      }
      goto L_08A3A7B0;
    }
L_08A3A7B0:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A3A7D8;
      }
      goto L_08A3A7BC;
    }
L_08A3A7BC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A3A81C;
      }
      goto L_08A3A7C8;
    }
L_08A3A7C8:
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A820;
      }
      goto L_08A3A7D8;
    }
L_08A3A7D8:
    aot_gpr_5 = (ctx.gpr[7] & 255u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(255));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A820;
      }
      goto L_08A3A7F8;
    }
L_08A3A7F8:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A81C;
      }
      goto L_08A3A804;
    }
L_08A3A804:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3A81C;
      }
      goto L_08A3A80C;
    }
L_08A3A80C:
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A820;
      }
      goto L_08A3A81C;
    }
L_08A3A81C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A3A820;
L_08A3A820:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A828:
    aot_gpr_4 = (aot_gpr_6 & 65535u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 20u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08A3A864;
      }
      goto L_08A3A83C;
    }
L_08A3A83C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A3A8E0;
      }
      goto L_08A3A84C;
    }
L_08A3A84C:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6216)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A86C;
    }
L_08A3A86C:
    aot_gpr_5 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 ^ 5u);
    ctx.gpr[2] = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | aot_gpr_4);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A884;
    }
L_08A3A884:
    ctx.gpr[2] = (aot_gpr_4 ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A890;
    }
L_08A3A890:
    ctx.gpr[2] = (aot_gpr_4 ^ 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A89C;
    }
L_08A3A89C:
    ctx.gpr[2] = (aot_gpr_4 ^ 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8A8;
    }
L_08A3A8A8:
    ctx.gpr[2] = (aot_gpr_4 ^ 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8B4;
    }
L_08A3A8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8BC;
    }
L_08A3A8BC:
    ctx.gpr[2] = (aot_gpr_4 & 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8C8;
    }
L_08A3A8C8:
    aot_gpr_5 = (aot_gpr_4 ^ 7u);
    aot_gpr_4 = (aot_gpr_4 ^ 5u);
    ctx.gpr[2] = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | aot_gpr_4);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8E0;
    }
L_08A3A8E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A3A8E4;
L_08A3A8E4:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A8EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_18);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_18 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_18 < aot_gpr_5 ? 1u : 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A3A958;
      }
      goto L_08A3A934;
    }
L_08A3A934:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3A940u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A940u) goto L_08A3A940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A940:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13)));
    aot_gpr_18 = (aot_gpr_18 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 < aot_gpr_17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3A934;
      }
      goto L_08A3A958;
    }
L_08A3A958:
    ctx.gpr[2] = (ctx.gpr[19] + ctx.gpr[16]);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3A97C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08A3A9A8u);
    aot_gpr_6 = (0u | 0u);
    goto L_08A3A8EC;
L_08A3A9A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A9C8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3A9C8u) goto L_08A3A9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3A9C8:
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13)));
    aot_gpr_18 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3A9FC;
      }
      goto L_08A3A9DC;
    }
L_08A3A9DC:
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_18);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3A9ECu);
    aot_gpr_6 = (0u | 0u);
    goto L_08A3A4C0;
L_08A3A9EC:
    aot_gpr_18 = (aot_gpr_18 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3A9DC;
      }
      goto L_08A3A9FC;
    }
L_08A3A9FC:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr_5));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3AA2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536), ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_18);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_18 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3AA94;
      }
      goto L_08A3AA90;
    }
L_08A3AA90:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A3AA94;
L_08A3AA94:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AAA0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 727u, 0x0881FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AAA0u) goto L_08A3AAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AAA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    ctx.gpr[22] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3AAD0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 55u, 0x08820384u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AAD0u) goto L_08A3AAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AAD0:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[20] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AB28;
      }
      goto L_08A3AAFC;
    }
L_08A3AAFC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3AB14u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AB14u) goto L_08A3AB14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AB14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3AB50;
      }
      goto L_08A3AB28;
    }
L_08A3AB28:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3AB40u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AB40u) goto L_08A3AB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AB40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_08A3AB50;
L_08A3AB50:
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3AB70;
    }
L_08A3AB70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3AB7C;
    }
L_08A3AB7C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A3ABF8;
      }
      goto L_08A3AB84;
    }
L_08A3AB84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3ABA0;
    }
L_08A3ABA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08A3ABB8u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3ABB8u) goto L_08A3ABB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3ABB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08A3ABD0u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3ABD0u) goto L_08A3ABD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3ABD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3ABF8;
    }
L_08A3ABF8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3AC0Cu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 613u, 0x0881F6CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AC0Cu) goto L_08A3AC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AC0C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[30] = (aot_gpr_17 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AC20u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A3A524;
L_08A3AC20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 << 6u);
    aot_gpr_17 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (aot_gpr_5 & 992u);
    aot_gpr_6 = (aot_gpr_6 >> 5u);
    ctx.gpr[31] = (0x08A3AC4Cu);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AC4Cu) goto L_08A3AC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AC4C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3AC68u);
    ctx.gpr[9] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AC68u) goto L_08A3AC68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AC68:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3AC8Cu);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 468u, 0x0881EB44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3AC8Cu) goto L_08A3AC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3AC8C:
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    ctx.gpr[30] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A3ACA4;
      }
      goto L_08A3AC9C;
    }
L_08A3AC9C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
      if (branch_taken) {
          goto L_08A3AD0C;
      }
      goto L_08A3ACA4;
    }
L_08A3ACA4:
    ctx.gpr[31] = (0x08A3ACACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3ACACu) goto L_08A3ACAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3ACAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A3AD0C;
      }
      goto L_08A3ACB4;
    }
L_08A3ACB4:
    ctx.gpr[31] = (0x08A3ACBCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3ACBCu) goto L_08A3ACBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3ACBC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (49024u << 16u);
      if (branch_taken) {
          goto L_08A3AD0C;
      }
      goto L_08A3ACC8;
    }
L_08A3ACC8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (1u << 16u);
    goto L_08A3ACD0;
L_08A3ACD0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A3AD00;
      }
      goto L_08A3ACE8;
    }
L_08A3ACE8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    goto L_08A3AD00;
L_08A3AD00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3ACD0;
      }
      goto L_08A3AD0C;
    }
L_08A3AD0C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    aot_gpr_4 = (aot_gpr_4 >> 12u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AD68;
      }
      goto L_08A3AD24;
    }
L_08A3AD24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08A3AD44;
      }
      goto L_08A3AD38;
    }
L_08A3AD38:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A3AD44;
L_08A3AD44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (17530u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(1732), aot_gpr_4);
    goto L_08A3AD68;
L_08A3AD68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A3AD9C;
      }
      goto L_08A3AD78;
    }
L_08A3AD78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A3AD9C;
      }
      goto L_08A3AD90;
    }
L_08A3AD90:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AD9Cu);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    goto L_08A39E7C;
L_08A3AD9C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ADA8u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 203u, 0x08820E28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3ADA8u) goto L_08A3ADA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3ADA8:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536), aot_gpr_4);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
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
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3ADE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-400));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(154)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_18};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_gpr_18 = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_run_words); }
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3AE5C;
      }
      goto L_08A3AE40;
    }
L_08A3AE40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(38))))));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (49920u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08A3AE64;
      }
      goto L_08A3AE54;
    }
L_08A3AE54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(38))))));
      if (branch_taken) {
          goto L_08A3AEA8;
      }
      goto L_08A3AE5C;
    }
L_08A3AE5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3B4D0;
      }
      goto L_08A3AE64;
    }
L_08A3AE64:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AE80;
      }
      goto L_08A3AE70;
    }
L_08A3AE70:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3AE84;
      }
      goto L_08A3AE7C;
    }
L_08A3AE7C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3AE80;
L_08A3AE80:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3AE84;
L_08A3AE84:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3AE9C;
    }
    goto L_08A3AE8C;
L_08A3AE8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3AE9C;
L_08A3AE9C:
    aot_gpr_4 = (aot_gpr_4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3AED8;
      }
      goto L_08A3AEA8;
    }
L_08A3AEA8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AEC0;
      }
      goto L_08A3AEB0;
    }
L_08A3AEB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3AEC4;
      }
      goto L_08A3AEBC;
    }
L_08A3AEBC:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3AEC0;
L_08A3AEC0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3AEC4;
L_08A3AEC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AED8;
      }
      goto L_08A3AECC;
    }
L_08A3AECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3AED8;
L_08A3AED8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(40))))));
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(40))))));
        goto L_08A3AF28;
    }
    goto L_08A3AEE4;
L_08A3AEE4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AF00;
      }
      goto L_08A3AEF0;
    }
L_08A3AEF0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3AF04;
      }
      goto L_08A3AEFC;
    }
L_08A3AEFC:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3AF00;
L_08A3AF00:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3AF04;
L_08A3AF04:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3AF1C;
    }
    goto L_08A3AF0C;
L_08A3AF0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3AF1C;
L_08A3AF1C:
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3AF58;
      }
      goto L_08A3AF28;
    }
L_08A3AF28:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AF40;
      }
      goto L_08A3AF30;
    }
L_08A3AF30:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3AF44;
      }
      goto L_08A3AF3C;
    }
L_08A3AF3C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3AF40;
L_08A3AF40:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3AF44;
L_08A3AF44:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AF58;
      }
      goto L_08A3AF4C;
    }
L_08A3AF4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3AF58;
L_08A3AF58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(44))))));
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(44))))));
        goto L_08A3AFA8;
    }
    goto L_08A3AF64;
L_08A3AF64:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AF80;
      }
      goto L_08A3AF70;
    }
L_08A3AF70:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3AF84;
      }
      goto L_08A3AF7C;
    }
L_08A3AF7C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3AF80;
L_08A3AF80:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3AF84;
L_08A3AF84:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3AF9C;
    }
    goto L_08A3AF8C;
L_08A3AF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3AF9C;
L_08A3AF9C:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3AFD8;
      }
      goto L_08A3AFA8;
    }
L_08A3AFA8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AFC0;
      }
      goto L_08A3AFB0;
    }
L_08A3AFB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3AFC4;
      }
      goto L_08A3AFBC;
    }
L_08A3AFBC:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3AFC0;
L_08A3AFC0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3AFC4;
L_08A3AFC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3AFD8;
      }
      goto L_08A3AFCC;
    }
L_08A3AFCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3AFD8;
L_08A3AFD8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(42))))));
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(42))))));
        goto L_08A3B028;
    }
    goto L_08A3AFE4;
L_08A3AFE4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFF0;
    }
L_08A3AFF0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3B004;
      }
      goto L_08A3AFFC;
    }
L_08A3AFFC:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3B000;
L_08A3B000:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3B004;
L_08A3B004:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3B01C;
    }
    goto L_08A3B00C;
L_08A3B00C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3B01C;
L_08A3B01C:
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3B058;
      }
      goto L_08A3B028;
    }
L_08A3B028:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B040;
      }
      goto L_08A3B030;
    }
L_08A3B030:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3B044;
      }
      goto L_08A3B03C;
    }
L_08A3B03C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3B040;
L_08A3B040:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3B044;
L_08A3B044:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B058;
      }
      goto L_08A3B04C;
    }
L_08A3B04C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3B058;
L_08A3B058:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(10))))));
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(10))))));
        goto L_08A3B0A8;
    }
    goto L_08A3B064;
L_08A3B064:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B080;
      }
      goto L_08A3B070;
    }
L_08A3B070:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3B084;
      }
      goto L_08A3B07C;
    }
L_08A3B07C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3B080;
L_08A3B080:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3B084;
L_08A3B084:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3B09C;
    }
    goto L_08A3B08C;
L_08A3B08C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3B09C;
L_08A3B09C:
    aot_gpr_4 = (aot_gpr_4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3B0D8;
      }
      goto L_08A3B0A8;
    }
L_08A3B0A8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B0C0;
      }
      goto L_08A3B0B0;
    }
L_08A3B0B0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3B0C4;
      }
      goto L_08A3B0BC;
    }
L_08A3B0BC:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3B0C0;
L_08A3B0C0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3B0C4;
L_08A3B0C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B0D8;
      }
      goto L_08A3B0CC;
    }
L_08A3B0CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3B0D8;
L_08A3B0D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(14))))));
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(14))))));
        goto L_08A3B128;
    }
    goto L_08A3B0E4;
L_08A3B0E4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B100;
      }
      goto L_08A3B0F0;
    }
L_08A3B0F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3B104;
      }
      goto L_08A3B0FC;
    }
L_08A3B0FC:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3B100;
L_08A3B100:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3B104;
L_08A3B104:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3B11C;
    }
    goto L_08A3B10C;
L_08A3B10C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3B11C;
L_08A3B11C:
    aot_gpr_4 = (aot_gpr_4 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3B158;
      }
      goto L_08A3B128;
    }
L_08A3B128:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B140;
      }
      goto L_08A3B130;
    }
L_08A3B130:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_18 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A3B144;
      }
      goto L_08A3B13C;
    }
L_08A3B13C:
    aot_gpr_4 = (0u | 1u);
    goto L_08A3B140;
L_08A3B140:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A3B144;
L_08A3B144:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B158;
      }
      goto L_08A3B14C;
    }
L_08A3B14C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A3B158;
L_08A3B158:
    ctx.gpr[31] = (0x08A3B160u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B160u) goto L_08A3B160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B160:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B16Cu);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B16Cu) goto L_08A3B16C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B16C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B178u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 964u, 0x0898BBCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B178u) goto L_08A3B178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B178:
    aot_gpr_4 = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3B184u);
    aot_gpr_18 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 968u, 0x0898BC0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B184u) goto L_08A3B184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B184:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u | 18u);
    ctx.gpr[3] = (0u | 19u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (aot_gpr_18 | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (0u | 16u);
    ctx.gpr[11] = (0u | 17u);
    ctx.gpr[31] = (0x08A3B1BCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3A24C;
L_08A3B1BC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) & 0x7FFFFFFFu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_18);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[22]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08A3B214;
      }
      goto L_08A3B1F8;
    }
L_08A3B1F8:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A3B22C;
      }
      goto L_08A3B214;
    }
L_08A3B214:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08A3B22C;
L_08A3B22C:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3B260;
      }
      goto L_08A3B244;
    }
L_08A3B244:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A3B278;
      }
      goto L_08A3B260;
    }
L_08A3B260:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08A3B278;
L_08A3B278:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[2] = (0u | 13u);
    ctx.gpr[3] = (0u | 14u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 11u);
    ctx.gpr[11] = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A3B2ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3A24C;
L_08A3B2AC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_18 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3B3A0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B3A0u) goto L_08A3B3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B3A0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3B3D8;
      }
      goto L_08A3B3D0;
    }
L_08A3B3D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3B3F8;
      }
      goto L_08A3B3D8;
    }
L_08A3B3D8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3B3F8;
      }
      goto L_08A3B3F4;
    }
L_08A3B3F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A3B3F8;
L_08A3B3F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A3B414;
      }
      goto L_08A3B40C;
    }
L_08A3B40C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3B434;
      }
      goto L_08A3B414;
    }
L_08A3B414:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
        goto L_08A3B438;
    }
    goto L_08A3B430;
L_08A3B430:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A3B434;
L_08A3B434:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    goto L_08A3B438;
L_08A3B438:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145))))));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(146))))));
    ctx.gpr[2] = (0u | 9u);
    ctx.gpr[3] = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 8u);
    ctx.gpr[31] = (0x08A3B478u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3A24C;
L_08A3B478:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_gpr_4 = (15360u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A3B4D0;
      }
      goto L_08A3B4BC;
    }
L_08A3B4BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B4D0;
      }
      goto L_08A3B4C8;
    }
L_08A3B4C8:
    ctx.gpr[31] = (0x08A3B4D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B4D0u) goto L_08A3B4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B4D0:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      aot_gpr_17 = aot_run_words[5];
      aot_gpr_18 = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[31] = aot_run_words[11];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3B508:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_18);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_18 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A3B550;
      }
      goto L_08A3B548;
    }
L_08A3B548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B568;
      }
      goto L_08A3B550;
    }
L_08A3B550:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B564u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 438u, 0x0881E8FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B564u) goto L_08A3B564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B564:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_08A3B568;
L_08A3B568:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B574u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 545u, 0x0881F0FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B574u) goto L_08A3B574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B574:
    aot_gpr_4 = (17278u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[22] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[21] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08A3B768;
      }
      goto L_08A3B5A4;
    }
L_08A3B5A4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08A3B768;
      }
      goto L_08A3B5AC;
    }
L_08A3B5AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A3B5D0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B5D0u) goto L_08A3B5D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B5D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A3B5E0;
      }
      goto L_08A3B5D8;
    }
L_08A3B5D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3B5E4;
      }
      goto L_08A3B5E0;
    }
L_08A3B5E0:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A3B5E4;
L_08A3B5E4:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3B5F4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B5F4u) goto L_08A3B5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B5F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_08A3B608;
      }
      goto L_08A3B600;
    }
L_08A3B600:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B608;
    }
L_08A3B608:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A3B66C;
      }
      goto L_08A3B610;
    }
L_08A3B610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A3B648u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B648u) goto L_08A3B648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B648:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B654u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A3A524;
L_08A3B654:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A3B664u);
    aot_gpr_6 = (0u | 48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B664u) goto L_08A3B664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B664:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3B694;
      }
      goto L_08A3B66C;
    }
L_08A3B66C:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A3B67Cu);
    aot_gpr_6 = (0u | 48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B67Cu) goto L_08A3B67C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B67C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B688u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    goto L_08A3A404;
L_08A3B688:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B694u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A3A524;
L_08A3B694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A3B6C4u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B6C4u) goto L_08A3B6C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B6C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{0u, aot_gpr_4, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3B708u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08A3B508;
L_08A3B708:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A3B718u);
    aot_gpr_6 = (0u | 48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B718u) goto L_08A3B718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B718:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3B72Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A3B508;
L_08A3B72C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B734;
    }
L_08A3B734:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08A3B744u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    goto L_08A3A61C;
L_08A3B744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A3B760;
      }
      goto L_08A3B74C;
    }
L_08A3B74C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3B760u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A3B508;
L_08A3B760:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B768;
    }
L_08A3B768:
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[31] = (0x08A3B774u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B774u) goto L_08A3B774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B774:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A3B7D8;
      }
      goto L_08A3B77C;
    }
L_08A3B77C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[30] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08A3B7A0u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B7A0u) goto L_08A3B7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B7A0:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
      if (branch_taken) {
          goto L_08A3B7D4;
      }
      goto L_08A3B7A8;
    }
L_08A3B7A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[30] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08A3B7CCu);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B7CCu) goto L_08A3B7CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B7CC:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08A3B7D8;
      }
      goto L_08A3B7D4;
    }
L_08A3B7D4:
    ctx.gpr[23] = (0u | 0u);
    goto L_08A3B7D8;
L_08A3B7D8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A3B870;
      }
      goto L_08A3B7E0;
    }
L_08A3B7E0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08A3B870;
      }
      goto L_08A3B7E8;
    }
L_08A3B7E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B870;
      }
      goto L_08A3B7F4;
    }
L_08A3B7F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B82C;
      }
      goto L_08A3B814;
    }
L_08A3B814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A3B824u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B824u) goto L_08A3B824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B824:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3B840;
      }
      goto L_08A3B82C;
    }
L_08A3B82C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A3B840;
L_08A3B840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08A3B85Cu);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B85Cu) goto L_08A3B85C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B85C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A3B870u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 87u, 0x088205F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B870u) goto L_08A3B870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B870:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A3B884;
      }
      goto L_08A3B880;
    }
L_08A3B880:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_08A3B884;
L_08A3B884:
    ctx.gpr[31] = (0x08A3B88Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B88Cu) goto L_08A3B88C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B88C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (0u | 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3B8DC;
      }
      goto L_08A3B8A0;
    }
L_08A3B8A0:
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (aot_gpr_17 | 0u);
    ctx.gpr[9] = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3B8C4u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_08A3B914;
L_08A3B8C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B8CC;
    }
L_08A3B8CC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3B8A0;
      }
      goto L_08A3B8DC;
    }
L_08A3B8DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B8E4;
    }
L_08A3B8E4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A3B914:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[7]{aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_run_words); }
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[30] = (ctx.gpr[9] | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_6 & 255u);
    aot_gpr_18 = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3B968u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B968u) goto L_08A3B968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B968:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr_18));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_18 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_08A3BA34;
      }
      goto L_08A3B990;
    }
L_08A3B990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A3B9B4u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3B9B4u) goto L_08A3B9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3B9B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A3BA34;
      }
      goto L_08A3B9BC;
    }
L_08A3B9BC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B9CCu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3B9CC:
    { const bool branch_taken = aot_gpr_18 != 0u;
      if (branch_taken) {
          goto L_08A3BA14;
      }
      goto L_08A3B9D4;
    }
L_08A3B9D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[5]{0u, 0u, aot_gpr_4, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A3BA14u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_08A3B914;
L_08A3BA14:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 << (ctx.gpr[20] & 31u));
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BA34;
    }
L_08A3BA34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BA60;
      }
      goto L_08A3BA44;
    }
L_08A3BA44:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A3BA60;
      }
      goto L_08A3BA5C;
    }
L_08A3BA5C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A3BA60;
L_08A3BA60:
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(13)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 2u, 0x08A3C010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BA7C;
    }
L_08A3BA7C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BA8Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08A3A8EC;
L_08A3BA8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BA9Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08A3A478;
L_08A3BA9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BABCu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08A3A828;
L_08A3BABC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_18 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3BAD8;
      }
      goto L_08A3BAC8;
    }
L_08A3BAC8:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A3BB24;
      }
      goto L_08A3BAD8;
    }
L_08A3BAD8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(aot_gpr_18));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_18 = (ctx.gpr[19] << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_18);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(113)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BAFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08A3A754;
L_08A3BAFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_18);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(21));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BB1Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08A3A754;
L_08A3BB1C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_18 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(127)));
    goto L_08A3BB24;
L_08A3BB24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB34;
    }
L_08A3BB34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB44;
    }
L_08A3BB44:
    { const bool branch_taken = aot_gpr_18 != 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BB60;
      }
      goto L_08A3BB4C;
    }
L_08A3BB4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB58;
    }
L_08A3BB58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB60;
    }
L_08A3BB60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(13)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB74;
    }
L_08A3BB74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_18 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A3BB94u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A3A478;
L_08A3BB94:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    ctx.gpr[31] = (0x08A3BBA4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_08A3A828;
L_08A3BBA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BBAC;
    }
L_08A3BBAC:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A3BBB0;
L_08A3BBB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BBC8;
      }
      goto L_08A3BBBC;
    }
L_08A3BBBC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A3BBC8;
      }
      goto L_08A3BBC4;
    }
L_08A3BBC4:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A3BBC8;
L_08A3BBC8:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BBD4;
    }
L_08A3BBD4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BBDC;
    }
L_08A3BBDC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08A3BC08;
      }
      goto L_08A3BBE4;
    }
L_08A3BBE4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BC08;
      }
      goto L_08A3BBF0;
    }
L_08A3BBF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 << (ctx.gpr[20] & 31u));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), aot_gpr_4);
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC08;
    }
L_08A3BC08:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC10;
    }
L_08A3BC10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC1C;
    }
L_08A3BC1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 << (ctx.gpr[20] & 31u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC34;
    }
L_08A3BC34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 << (ctx.gpr[20] & 31u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3BC64;
      }
      goto L_08A3BC4C;
    }
L_08A3BC4C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BCD8;
      }
      goto L_08A3BC5C;
    }
L_08A3BC5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BC64;
    }
L_08A3BC64:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3BC74u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08A3A61C;
L_08A3BC74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{0u, aot_gpr_4, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BCBCu);
    ctx.gpr[7] = (0u | 1u);
    goto L_08A3B508;
L_08A3BCBC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BCD0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A3B508;
L_08A3BCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_17 | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BCD8;
    }
L_08A3BCD8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BCE8u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3BCE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), 0u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{0u, aot_gpr_4, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(113)));
    aot_gpr_18 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BD44u);
    ctx.gpr[10] = (0u | 1u);
    goto L_08A3B914;
L_08A3BD44:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 << (ctx.gpr[20] & 31u));
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3BD80u);
    ctx.gpr[11] = (aot_gpr_17 | 0u);
    goto L_08A3B914;
L_08A3BD80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BD88;
    }
L_08A3BD88:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BF48;
      }
      goto L_08A3BD90;
    }
L_08A3BD90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
        goto L_08A3BDC4;
    }
    goto L_08A3BDA0;
L_08A3BDA0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
        goto L_08A3BDC4;
    }
    goto L_08A3BDB0;
L_08A3BDB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_5 = (aot_gpr_5 & 32u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3BDEC;
      }
      goto L_08A3BDC0;
    }
L_08A3BDC0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    goto L_08A3BDC4;
L_08A3BDC4:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 << (aot_gpr_6 & 31u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08A3BE04;
      }
      goto L_08A3BDE4;
    }
L_08A3BDE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A3BE1C;
      }
      goto L_08A3BDEC;
    }
L_08A3BDEC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BDFCu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3BDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BE04;
    }
L_08A3BE04:
    aot_gpr_5 = (ctx.gpr[22] & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE10;
    }
L_08A3BE10:
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 65535u);
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE1C;
    }
L_08A3BE1C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A3BE40;
      }
      goto L_08A3BE2C;
    }
L_08A3BE2C:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 65535u);
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE40;
    }
L_08A3BE40:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE50;
    }
L_08A3BE50:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (ctx.gpr[22] & 65535u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_6 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08A3BE68;
      }
      goto L_08A3BE60;
    }
L_08A3BE60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BE68;
    }
L_08A3BE68:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[9] = (aot_gpr_6 ^ 1u);
    ctx.gpr[10] = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (aot_gpr_6 ^ 4u);
    ctx.gpr[9] = (ctx.gpr[10] | ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 ^ 5u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[9] | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 4u);
      if (branch_taken) {
          goto L_08A3BEA8;
      }
      goto L_08A3BEA0;
    }
L_08A3BEA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BEA8;
    }
L_08A3BEA8:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BEB0;
    }
L_08A3BEB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BEB8;
    }
L_08A3BEB8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BEC0;
    }
L_08A3BEC0:
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    goto L_08A3BEC8;
L_08A3BEC8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A3BEE4;
      }
      goto L_08A3BED8;
    }
L_08A3BED8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[22] = (ctx.gpr[22] & aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    goto L_08A3BEE4;
L_08A3BEE4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BEEC;
    }
L_08A3BEEC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BEFC;
    }
L_08A3BEFC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BF04;
    }
L_08A3BF04:
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_4;
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BF0C;
    }
L_08A3BF0C:
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BF20;
    }
L_08A3BF20:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(113)));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (ctx.gpr[16] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08A3BF30;
L_08A3BF30:
    ctx.gpr[22] = (ctx.gpr[22] | aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BF48u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08A3A4C0;
L_08A3BF48:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BF54;
    }
L_08A3BF54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BF6Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08A3A828;
L_08A3BF6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A3BF80;
      }
      goto L_08A3BF74;
    }
L_08A3BF74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    goto L_08A3BF80;
L_08A3BF80:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BF88;
    }
L_08A3BF88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BF94;
    }
L_08A3BF94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(13)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFA4;
    }
L_08A3BFA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(13)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFB4;
    }
L_08A3BFB4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFC4;
    }
L_08A3BFC4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFD4;
    }
L_08A3BFD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFE4;
    }
L_08A3BFE4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BFF4u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3BFF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A3BFFC;
    }
L_08A3BFFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(13)));
    ctx.pc = 0x08A3C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0141(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0141_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_141(Runtime &runtime) {
    runtime.register_generated_unit(141u, 0x08A38000u, 16384u, &recomp_unit_0141, &recomp_unit_0141_entry);
    runtime.register_function(0x08A38004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3800Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3801Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38064u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38080u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38090u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38098u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3810Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3811Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38124u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38134u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38170u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3817Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3818Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38198u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38224u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3823Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3824Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38258u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38294u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3830Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38314u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38320u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38330u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3833Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3834Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38354u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38364u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38370u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38398u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3842Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38438u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38454u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3846Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3847Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38488u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38514u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3853Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38550u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3856Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3857Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38584u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38610u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38620u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3862Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3865Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38684u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3869Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38710u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38720u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38728u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38738u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3876Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38774u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38790u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3879Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3880Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3881Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38828u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38838u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38850u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3885Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3888Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38898u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38910u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38918u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38924u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38950u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38958u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38974u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3899Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ED0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3902Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39034u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39040u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3905Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3906Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39084u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39090u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39110u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3911Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3914Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39158u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39174u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3918Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3919Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39200u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39210u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39228u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3925Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39270u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3928Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3929Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3930Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39328u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39330u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39340u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3934Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39374u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3937Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39388u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39398u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39400u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39408u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39414u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39458u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3948Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39494u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39518u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39520u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3952Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3953Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39548u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39570u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3957Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39630u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39638u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39644u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39660u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39670u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39688u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39714u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39720u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39748u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39750u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3975Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3976Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39788u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39790u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39ACCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A03Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A04Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A05Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A070u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A07Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A090u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A150u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A160u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A170u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A180u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A194u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A24Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A304u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A320u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A334u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A33Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A344u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A358u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A360u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A378u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A388u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A390u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A404u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A434u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A44Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A478u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A524u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A540u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A57Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A58Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A61Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A664u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A690u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A69Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A754u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A770u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A804u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A80Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A81Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A820u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A828u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A83Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A84Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A864u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A86Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A890u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A89Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A958u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A97Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AECCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B00Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B01Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B030u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B03Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B040u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B04Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B064u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B070u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B07Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B080u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B084u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B08Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B09Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B104u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B10Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B11Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B130u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B13Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B14Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B158u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B160u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B16Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B178u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B214u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B22Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B244u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B260u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B278u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B40Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B414u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B434u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B438u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B478u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B548u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B550u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B564u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B568u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B600u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B610u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B664u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B66Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B67Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B688u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B708u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B718u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B72Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B74Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B760u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B768u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B774u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B77Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B814u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B82Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B85Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B880u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B88Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B914u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B990u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFFCu, &recomp_unit_0141, "recomp_unit_0141");
}
} // namespace psprecomp
