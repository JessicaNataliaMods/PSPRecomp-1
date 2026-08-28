#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0029[64] = {
    0x422011148A24A451ull, 0x46948A5C8A104011ull, 0x204A97044C111704ull, 0xA924921008948495ull,
    0x200081144A549112ull, 0x0C11169242028405ull, 0x5109692548040001ull, 0x4711000B4B109692ull,
    0x410082E22152085Aull, 0x16909A4001010402ull, 0x12315A49448A2E22ull, 0x8AD24A1115A49021ull,
    0x4908100005692544ull, 0x420A44569242515Aull, 0x2B4928AD248289D2ull, 0xE925111154569242ull,
    0x3A49482A8AD24844ull, 0x4089D24A22167495ull, 0x20885692513A4808ull, 0x104A885692513A48ull,
    0x924A8A6925289D24ull, 0x9A4910896924A8A6ull, 0x4890AA92114D24A2ull, 0x2210BA8882285692ull,
    0x492AA4A274922B49ull, 0x84A8A27492A54A2Bull, 0x4881095142749220ull, 0x225515A4904509D2ull,
    0xE9252104A89D24A2ull, 0xA450AD2490B3A494ull, 0x142B49244A248884ull, 0x51111544E9221295ull,
    0x2485515A49089692ull, 0x3A494442CE92A749ull, 0x254509D248821291ull, 0x4A215A490513A488ull,
    0x2513A48208310AD2ull, 0xA274901041880169ull, 0x20C42B4928856924ull, 0x5C1130445C111A4Dull,
    0x0140914D2480A048ull, 0x2B4925482CA904A9ull, 0x2812A2B4928AD24Aull, 0x49280A04A8AD24A0ull,
    0x0954A9340020022Bull, 0x2E22152251168A57ull, 0x9989002D24711002ull, 0x2CA48BA4804D2485ull,
    0x2454944010054241ull, 0x8C5153145C25095Cull, 0x5C8AE12A98A0C48Aull, 0x555A46B495A55A44ull,
    0x55440A52D2B57095ull, 0x2D5528B442E12849ull, 0x000000410010A280ull, 0x23A4945692401592ull,
    0x12D248969244B492ull, 0x0969000022088841ull, 0x21048A9A49442A91ull, 0x88A69242118E2200ull,
    0x08E8A1889108AD24ull, 0x15A494315A490151ull, 0x0010430401000209ull, 0xA4A0002000182008ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0029[64] = {
    1u, 19u, 39u, 59u, 79u, 95u, 112u, 128u, 149u, 167u, 181u, 204u, 226u, 242u, 264u, 289u,
    313u, 336u, 360u, 380u, 402u, 427u, 451u, 473u, 494u, 520u, 546u, 565u, 588u, 612u, 637u, 657u,
    680u, 703u, 730u, 751u, 773u, 794u, 813u, 835u, 858u, 874u, 898u, 922u, 942u, 960u, 985u, 1004u,
    1027u, 1043u, 1068u, 1093u, 1122u, 1149u, 1174u, 1181u, 1204u, 1228u, 1241u, 1262u, 1281u, 1302u, 1325u, 1334u,
};
void recomp_unit_0029_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,2,6,28 fprs=12,13,14,15 gpr_occ=5167 fpr_occ=31 gpr_total=7731 fpr_total=75
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_28 = ctx.gpr[28];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[2] = aot_gpr_2; ctx.gpr[6] = aot_gpr_6; ctx.gpr[28] = aot_gpr_28; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_28 = ctx.gpr[28]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08878000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0029[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0029[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08878000;
    case 2u: goto L_08878010;
    case 3u: goto L_08878018;
    case 4u: goto L_08878028;
    case 5u: goto L_08878034;
    case 6u: goto L_0887803C;
    case 7u: goto L_08878048;
    case 8u: goto L_08878054;
    case 9u: goto L_08878064;
    case 10u: goto L_0887806C;
    case 11u: goto L_0887807C;
    case 12u: goto L_08878088;
    case 13u: goto L_08878090;
    case 14u: goto L_088780A0;
    case 15u: goto L_088780B0;
    case 16u: goto L_088780D4;
    case 17u: goto L_088780E4;
    case 18u: goto L_088780F8;
    case 19u: goto L_08878100;
    case 20u: goto L_08878110;
    case 21u: goto L_08878138;
    case 22u: goto L_08878150;
    case 23u: goto L_08878164;
    case 24u: goto L_0887816C;
    case 25u: goto L_0887817C;
    case 26u: goto L_08878188;
    case 27u: goto L_0887818C;
    case 28u: goto L_08878190;
    case 29u: goto L_08878198;
    case 30u: goto L_088781A4;
    case 31u: goto L_088781AC;
    case 32u: goto L_088781BC;
    case 33u: goto L_088781C8;
    case 34u: goto L_088781D0;
    case 35u: goto L_088781DC;
    case 36u: goto L_088781E4;
    case 37u: goto L_088781E8;
    case 38u: goto L_088781F8;
    case 39u: goto L_08878208;
    case 40u: goto L_08878220;
    case 41u: goto L_08878224;
    case 42u: goto L_08878228;
    case 43u: goto L_08878230;
    case 44u: goto L_08878240;
    case 45u: goto L_08878250;
    case 46u: goto L_08878268;
    case 47u: goto L_0887826C;
    case 48u: goto L_08878278;
    case 49u: goto L_08878288;
    case 50u: goto L_088782A0;
    case 51u: goto L_088782A4;
    case 52u: goto L_088782A8;
    case 53u: goto L_088782B0;
    case 54u: goto L_088782BC;
    case 55u: goto L_088782C4;
    case 56u: goto L_088782CC;
    case 57u: goto L_088782D8;
    case 58u: goto L_088782F4;
    case 59u: goto L_08878300;
    case 60u: goto L_08878308;
    case 61u: goto L_08878310;
    case 62u: goto L_0887831C;
    case 63u: goto L_08878328;
    case 64u: goto L_0887833C;
    case 65u: goto L_08878348;
    case 66u: goto L_08878350;
    case 67u: goto L_0887835C;
    case 68u: goto L_0887836C;
    case 69u: goto L_08878390;
    case 70u: goto L_088783A4;
    case 71u: goto L_088783B0;
    case 72u: goto L_088783BC;
    case 73u: goto L_088783C8;
    case 74u: goto L_088783D4;
    case 75u: goto L_088783E0;
    case 76u: goto L_088783EC;
    case 77u: goto L_088783F4;
    case 78u: goto L_088783FC;
    case 79u: goto L_08878404;
    case 80u: goto L_08878410;
    case 81u: goto L_08878420;
    case 82u: goto L_08878430;
    case 83u: goto L_0887843C;
    case 84u: goto L_08878448;
    case 85u: goto L_08878450;
    case 86u: goto L_08878458;
    case 87u: goto L_08878464;
    case 88u: goto L_0887846C;
    case 89u: goto L_08878478;
    case 90u: goto L_08878488;
    case 91u: goto L_08878490;
    case 92u: goto L_088784A0;
    case 93u: goto L_088784BC;
    case 94u: goto L_088784F4;
    case 95u: goto L_08878500;
    case 96u: goto L_08878508;
    case 97u: goto L_08878528;
    case 98u: goto L_0887853C;
    case 99u: goto L_08878544;
    case 100u: goto L_08878564;
    case 101u: goto L_08878578;
    case 102u: goto L_08878584;
    case 103u: goto L_08878590;
    case 104u: goto L_0887859C;
    case 105u: goto L_088785A4;
    case 106u: goto L_088785A8;
    case 107u: goto L_088785B0;
    case 108u: goto L_088785C0;
    case 109u: goto L_088785D0;
    case 110u: goto L_088785E8;
    case 111u: goto L_088785EC;
    case 112u: goto L_08878600;
    case 113u: goto L_08878648;
    case 114u: goto L_0887866C;
    case 115u: goto L_08878678;
    case 116u: goto L_08878680;
    case 117u: goto L_08878688;
    case 118u: goto L_08878694;
    case 119u: goto L_088786A0;
    case 120u: goto L_088786AC;
    case 121u: goto L_088786B4;
    case 122u: goto L_088786B8;
    case 123u: goto L_088786C0;
    case 124u: goto L_088786CC;
    case 125u: goto L_088786E0;
    case 126u: goto L_088786F0;
    case 127u: goto L_088786F8;
    case 128u: goto L_08878704;
    case 129u: goto L_08878710;
    case 130u: goto L_0887871C;
    case 131u: goto L_08878724;
    case 132u: goto L_08878728;
    case 133u: goto L_08878730;
    case 134u: goto L_0887873C;
    case 135u: goto L_08878750;
    case 136u: goto L_08878760;
    case 137u: goto L_08878764;
    case 138u: goto L_0887876C;
    case 139u: goto L_08878778;
    case 140u: goto L_08878780;
    case 141u: goto L_08878784;
    case 142u: goto L_0887878C;
    case 143u: goto L_088787C0;
    case 144u: goto L_088787D0;
    case 145u: goto L_088787E0;
    case 146u: goto L_088787E4;
    case 147u: goto L_088787E8;
    case 148u: goto L_088787F8;
    case 149u: goto L_08878804;
    case 150u: goto L_0887880C;
    case 151u: goto L_08878810;
    case 152u: goto L_08878818;
    case 153u: goto L_0887882C;
    case 154u: goto L_08878844;
    case 155u: goto L_08878850;
    case 156u: goto L_08878858;
    case 157u: goto L_08878860;
    case 158u: goto L_08878874;
    case 159u: goto L_08878884;
    case 160u: goto L_08878894;
    case 161u: goto L_08878898;
    case 162u: goto L_0887889C;
    case 163u: goto L_088788A4;
    case 164u: goto L_088788BC;
    case 165u: goto L_088788E0;
    case 166u: goto L_088788F8;
    case 167u: goto L_08878904;
    case 168u: goto L_08878928;
    case 169u: goto L_08878940;
    case 170u: goto L_08878960;
    case 171u: goto L_08878998;
    case 172u: goto L_088789A4;
    case 173u: goto L_088789AC;
    case 174u: goto L_088789B0;
    case 175u: goto L_088789BC;
    case 176u: goto L_088789D0;
    case 177u: goto L_088789DC;
    case 178u: goto L_088789E4;
    case 179u: goto L_088789E8;
    case 180u: goto L_088789F0;
    case 181u: goto L_08878A04;
    case 182u: goto L_08878A14;
    case 183u: goto L_08878A24;
    case 184u: goto L_08878A28;
    case 185u: goto L_08878A2C;
    case 186u: goto L_08878A34;
    case 187u: goto L_08878A44;
    case 188u: goto L_08878A4C;
    case 189u: goto L_08878A5C;
    case 190u: goto L_08878A68;
    case 191u: goto L_08878A78;
    case 192u: goto L_08878A80;
    case 193u: goto L_08878A8C;
    case 194u: goto L_08878A98;
    case 195u: goto L_08878AA4;
    case 196u: goto L_08878AAC;
    case 197u: goto L_08878AB0;
    case 198u: goto L_08878AB8;
    case 199u: goto L_08878AC0;
    case 200u: goto L_08878AD0;
    case 201u: goto L_08878AD4;
    case 202u: goto L_08878AE4;
    case 203u: goto L_08878AF0;
    case 204u: goto L_08878B00;
    case 205u: goto L_08878B14;
    case 206u: goto L_08878B30;
    case 207u: goto L_08878B3C;
    case 208u: goto L_08878B48;
    case 209u: goto L_08878B54;
    case 210u: goto L_08878B5C;
    case 211u: goto L_08878B60;
    case 212u: goto L_08878B68;
    case 213u: goto L_08878B70;
    case 214u: goto L_08878B80;
    case 215u: goto L_08878B90;
    case 216u: goto L_08878BA4;
    case 217u: goto L_08878BAC;
    case 218u: goto L_08878BB8;
    case 219u: goto L_08878BC4;
    case 220u: goto L_08878BD0;
    case 221u: goto L_08878BD8;
    case 222u: goto L_08878BDC;
    case 223u: goto L_08878BE4;
    case 224u: goto L_08878BEC;
    case 225u: goto L_08878BFC;
    case 226u: goto L_08878C08;
    case 227u: goto L_08878C18;
    case 228u: goto L_08878C20;
    case 229u: goto L_08878C28;
    case 230u: goto L_08878C34;
    case 231u: goto L_08878C40;
    case 232u: goto L_08878C4C;
    case 233u: goto L_08878C54;
    case 234u: goto L_08878C58;
    case 235u: goto L_08878C60;
    case 236u: goto L_08878C68;
    case 237u: goto L_08878CB0;
    case 238u: goto L_08878CCC;
    case 239u: goto L_08878CE0;
    case 240u: goto L_08878CEC;
    case 241u: goto L_08878CF8;
    case 242u: goto L_08878D04;
    case 243u: goto L_08878D0C;
    case 244u: goto L_08878D10;
    case 245u: goto L_08878D18;
    case 246u: goto L_08878D20;
    case 247u: goto L_08878D30;
    case 248u: goto L_08878D38;
    case 249u: goto L_08878D44;
    case 250u: goto L_08878D58;
    case 251u: goto L_08878D64;
    case 252u: goto L_08878D70;
    case 253u: goto L_08878D7C;
    case 254u: goto L_08878D84;
    case 255u: goto L_08878D88;
    case 256u: goto L_08878D90;
    case 257u: goto L_08878D98;
    case 258u: goto L_08878DA8;
    case 259u: goto L_08878DB8;
    case 260u: goto L_08878DC4;
    case 261u: goto L_08878DCC;
    case 262u: goto L_08878DE4;
    case 263u: goto L_08878DF8;
    case 264u: goto L_08878E04;
    case 265u: goto L_08878E10;
    case 266u: goto L_08878E18;
    case 267u: goto L_08878E1C;
    case 268u: goto L_08878E20;
    case 269u: goto L_08878E2C;
    case 270u: goto L_08878E3C;
    case 271u: goto L_08878E44;
    case 272u: goto L_08878E5C;
    case 273u: goto L_08878E68;
    case 274u: goto L_08878E74;
    case 275u: goto L_08878E80;
    case 276u: goto L_08878E88;
    case 277u: goto L_08878E8C;
    case 278u: goto L_08878E94;
    case 279u: goto L_08878E9C;
    case 280u: goto L_08878EAC;
    case 281u: goto L_08878EB4;
    case 282u: goto L_08878EC0;
    case 283u: goto L_08878ECC;
    case 284u: goto L_08878ED8;
    case 285u: goto L_08878EE0;
    case 286u: goto L_08878EE4;
    case 287u: goto L_08878EEC;
    case 288u: goto L_08878EF4;
    case 289u: goto L_08878F04;
    case 290u: goto L_08878F18;
    case 291u: goto L_08878F24;
    case 292u: goto L_08878F30;
    case 293u: goto L_08878F3C;
    case 294u: goto L_08878F44;
    case 295u: goto L_08878F48;
    case 296u: goto L_08878F50;
    case 297u: goto L_08878F58;
    case 298u: goto L_08878F68;
    case 299u: goto L_08878F70;
    case 300u: goto L_08878F78;
    case 301u: goto L_08878F80;
    case 302u: goto L_08878F90;
    case 303u: goto L_08878FA0;
    case 304u: goto L_08878FB0;
    case 305u: goto L_08878FC0;
    case 306u: goto L_08878FC8;
    case 307u: goto L_08878FD4;
    case 308u: goto L_08878FE0;
    case 309u: goto L_08878FEC;
    case 310u: goto L_08878FF4;
    case 311u: goto L_08878FF8;
    case 312u: goto L_08878FFC;
    case 313u: goto L_08879008;
    case 314u: goto L_08879018;
    case 315u: goto L_0887902C;
    case 316u: goto L_08879038;
    case 317u: goto L_08879044;
    case 318u: goto L_08879050;
    case 319u: goto L_08879058;
    case 320u: goto L_0887905C;
    case 321u: goto L_08879064;
    case 322u: goto L_0887906C;
    case 323u: goto L_0887907C;
    case 324u: goto L_08879084;
    case 325u: goto L_0887908C;
    case 326u: goto L_08879094;
    case 327u: goto L_088790AC;
    case 328u: goto L_088790B8;
    case 329u: goto L_088790C0;
    case 330u: goto L_088790CC;
    case 331u: goto L_088790D8;
    case 332u: goto L_088790E4;
    case 333u: goto L_088790EC;
    case 334u: goto L_088790F0;
    case 335u: goto L_088790F4;
    case 336u: goto L_08879100;
    case 337u: goto L_08879108;
    case 338u: goto L_08879110;
    case 339u: goto L_0887911C;
    case 340u: goto L_08879128;
    case 341u: goto L_08879130;
    case 342u: goto L_08879134;
    case 343u: goto L_08879138;
    case 344u: goto L_08879144;
    case 345u: goto L_08879148;
    case 346u: goto L_08879150;
    case 347u: goto L_08879164;
    case 348u: goto L_08879174;
    case 349u: goto L_08879184;
    case 350u: goto L_0887918C;
    case 351u: goto L_08879198;
    case 352u: goto L_088791A4;
    case 353u: goto L_088791B0;
    case 354u: goto L_088791B8;
    case 355u: goto L_088791BC;
    case 356u: goto L_088791C0;
    case 357u: goto L_088791CC;
    case 358u: goto L_088791DC;
    case 359u: goto L_088791F8;
    case 360u: goto L_0887920C;
    case 361u: goto L_0887922C;
    case 362u: goto L_08879238;
    case 363u: goto L_08879244;
    case 364u: goto L_0887924C;
    case 365u: goto L_08879250;
    case 366u: goto L_08879254;
    case 367u: goto L_08879260;
    case 368u: goto L_08879270;
    case 369u: goto L_08879278;
    case 370u: goto L_08879284;
    case 371u: goto L_08879290;
    case 372u: goto L_0887929C;
    case 373u: goto L_088792A4;
    case 374u: goto L_088792A8;
    case 375u: goto L_088792B0;
    case 376u: goto L_088792B8;
    case 377u: goto L_088792CC;
    case 378u: goto L_088792DC;
    case 379u: goto L_088792F4;
    case 380u: goto L_0887930C;
    case 381u: goto L_08879318;
    case 382u: goto L_08879324;
    case 383u: goto L_0887932C;
    case 384u: goto L_08879330;
    case 385u: goto L_08879334;
    case 386u: goto L_08879340;
    case 387u: goto L_08879350;
    case 388u: goto L_08879358;
    case 389u: goto L_08879364;
    case 390u: goto L_08879370;
    case 391u: goto L_0887937C;
    case 392u: goto L_08879384;
    case 393u: goto L_08879388;
    case 394u: goto L_08879390;
    case 395u: goto L_08879398;
    case 396u: goto L_088793AC;
    case 397u: goto L_088793BC;
    case 398u: goto L_088793C4;
    case 399u: goto L_088793CC;
    case 400u: goto L_088793D8;
    case 401u: goto L_088793F0;
    case 402u: goto L_08879408;
    case 403u: goto L_08879414;
    case 404u: goto L_08879420;
    case 405u: goto L_08879428;
    case 406u: goto L_0887942C;
    case 407u: goto L_08879430;
    case 408u: goto L_0887943C;
    case 409u: goto L_0887944C;
    case 410u: goto L_08879454;
    case 411u: goto L_08879460;
    case 412u: goto L_08879468;
    case 413u: goto L_08879474;
    case 414u: goto L_08879480;
    case 415u: goto L_0887948C;
    case 416u: goto L_08879494;
    case 417u: goto L_08879498;
    case 418u: goto L_088794A4;
    case 419u: goto L_088794AC;
    case 420u: goto L_088794BC;
    case 421u: goto L_088794C4;
    case 422u: goto L_088794CC;
    case 423u: goto L_088794D8;
    case 424u: goto L_088794E4;
    case 425u: goto L_088794F0;
    case 426u: goto L_088794FC;
    case 427u: goto L_08879504;
    case 428u: goto L_08879508;
    case 429u: goto L_08879514;
    case 430u: goto L_0887951C;
    case 431u: goto L_0887952C;
    case 432u: goto L_08879534;
    case 433u: goto L_0887953C;
    case 434u: goto L_08879548;
    case 435u: goto L_08879554;
    case 436u: goto L_08879560;
    case 437u: goto L_0887956C;
    case 438u: goto L_08879574;
    case 439u: goto L_08879578;
    case 440u: goto L_08879580;
    case 441u: goto L_0887958C;
    case 442u: goto L_0887959C;
    case 443u: goto L_088795B0;
    case 444u: goto L_088795C0;
    case 445u: goto L_088795CC;
    case 446u: goto L_088795D8;
    case 447u: goto L_088795E4;
    case 448u: goto L_088795EC;
    case 449u: goto L_088795F0;
    case 450u: goto L_088795FC;
    case 451u: goto L_08879604;
    case 452u: goto L_08879614;
    case 453u: goto L_0887961C;
    case 454u: goto L_08879628;
    case 455u: goto L_08879634;
    case 456u: goto L_08879640;
    case 457u: goto L_08879648;
    case 458u: goto L_0887964C;
    case 459u: goto L_08879658;
    case 460u: goto L_08879660;
    case 461u: goto L_08879670;
    case 462u: goto L_08879684;
    case 463u: goto L_08879690;
    case 464u: goto L_0887969C;
    case 465u: goto L_088796A4;
    case 466u: goto L_088796AC;
    case 467u: goto L_088796B4;
    case 468u: goto L_088796BC;
    case 469u: goto L_088796D0;
    case 470u: goto L_088796DC;
    case 471u: goto L_088796EC;
    case 472u: goto L_088796F8;
    case 473u: goto L_08879704;
    case 474u: goto L_08879710;
    case 475u: goto L_0887971C;
    case 476u: goto L_08879724;
    case 477u: goto L_08879728;
    case 478u: goto L_08879730;
    case 479u: goto L_08879738;
    case 480u: goto L_0887974C;
    case 481u: goto L_08879754;
    case 482u: goto L_08879764;
    case 483u: goto L_0887977C;
    case 484u: goto L_0887978C;
    case 485u: goto L_0887979C;
    case 486u: goto L_088797A4;
    case 487u: goto L_088797AC;
    case 488u: goto L_088797B0;
    case 489u: goto L_088797B4;
    case 490u: goto L_088797BC;
    case 491u: goto L_088797D0;
    case 492u: goto L_088797E4;
    case 493u: goto L_088797F4;
    case 494u: goto L_08879800;
    case 495u: goto L_0887980C;
    case 496u: goto L_08879818;
    case 497u: goto L_08879820;
    case 498u: goto L_08879824;
    case 499u: goto L_0887982C;
    case 500u: goto L_08879834;
    case 501u: goto L_08879844;
    case 502u: goto L_08879850;
    case 503u: goto L_0887985C;
    case 504u: goto L_08879868;
    case 505u: goto L_08879870;
    case 506u: goto L_08879874;
    case 507u: goto L_08879878;
    case 508u: goto L_08879884;
    case 509u: goto L_08879894;
    case 510u: goto L_0887989C;
    case 511u: goto L_088798A8;
    case 512u: goto L_088798B4;
    case 513u: goto L_088798BC;
    case 514u: goto L_088798C4;
    case 515u: goto L_088798CC;
    case 516u: goto L_088798D4;
    case 517u: goto L_088798E0;
    case 518u: goto L_088798EC;
    case 519u: goto L_088798F8;
    case 520u: goto L_08879900;
    case 521u: goto L_08879904;
    case 522u: goto L_0887990C;
    case 523u: goto L_08879914;
    case 524u: goto L_08879924;
    case 525u: goto L_0887992C;
    case 526u: goto L_08879938;
    case 527u: goto L_08879940;
    case 528u: goto L_08879948;
    case 529u: goto L_08879954;
    case 530u: goto L_0887995C;
    case 531u: goto L_08879964;
    case 532u: goto L_08879970;
    case 533u: goto L_0887997C;
    case 534u: goto L_08879988;
    case 535u: goto L_08879990;
    case 536u: goto L_08879994;
    case 537u: goto L_08879998;
    case 538u: goto L_088799A4;
    case 539u: goto L_088799B4;
    case 540u: goto L_088799BC;
    case 541u: goto L_088799CC;
    case 542u: goto L_088799D4;
    case 543u: goto L_088799DC;
    case 544u: goto L_088799E8;
    case 545u: goto L_088799FC;
    case 546u: goto L_08879A14;
    case 547u: goto L_08879A24;
    case 548u: goto L_08879A30;
    case 549u: goto L_08879A3C;
    case 550u: goto L_08879A48;
    case 551u: goto L_08879A50;
    case 552u: goto L_08879A54;
    case 553u: goto L_08879A58;
    case 554u: goto L_08879A64;
    case 555u: goto L_08879A78;
    case 556u: goto L_08879A80;
    case 557u: goto L_08879A90;
    case 558u: goto L_08879A98;
    case 559u: goto L_08879AA0;
    case 560u: goto L_08879AAC;
    case 561u: goto L_08879AC0;
    case 562u: goto L_08879ADC;
    case 563u: goto L_08879AEC;
    case 564u: goto L_08879AF8;
    case 565u: goto L_08879B04;
    case 566u: goto L_08879B10;
    case 567u: goto L_08879B18;
    case 568u: goto L_08879B1C;
    case 569u: goto L_08879B20;
    case 570u: goto L_08879B2C;
    case 571u: goto L_08879B40;
    case 572u: goto L_08879B48;
    case 573u: goto L_08879B58;
    case 574u: goto L_08879B70;
    case 575u: goto L_08879B7C;
    case 576u: goto L_08879B88;
    case 577u: goto L_08879B94;
    case 578u: goto L_08879B9C;
    case 579u: goto L_08879BA0;
    case 580u: goto L_08879BA8;
    case 581u: goto L_08879BB0;
    case 582u: goto L_08879BC0;
    case 583u: goto L_08879BC8;
    case 584u: goto L_08879BD0;
    case 585u: goto L_08879BD8;
    case 586u: goto L_08879BE4;
    case 587u: goto L_08879BF4;
    case 588u: goto L_08879C04;
    case 589u: goto L_08879C14;
    case 590u: goto L_08879C1C;
    case 591u: goto L_08879C28;
    case 592u: goto L_08879C34;
    case 593u: goto L_08879C40;
    case 594u: goto L_08879C48;
    case 595u: goto L_08879C4C;
    case 596u: goto L_08879C50;
    case 597u: goto L_08879C5C;
    case 598u: goto L_08879C6C;
    case 599u: goto L_08879C74;
    case 600u: goto L_08879C7C;
    case 601u: goto L_08879C88;
    case 602u: goto L_08879CA0;
    case 603u: goto L_08879CB4;
    case 604u: goto L_08879CC0;
    case 605u: goto L_08879CC8;
    case 606u: goto L_08879CD4;
    case 607u: goto L_08879CE0;
    case 608u: goto L_08879CEC;
    case 609u: goto L_08879CF4;
    case 610u: goto L_08879CF8;
    case 611u: goto L_08879CFC;
    case 612u: goto L_08879D08;
    case 613u: goto L_08879D10;
    case 614u: goto L_08879D1C;
    case 615u: goto L_08879D28;
    case 616u: goto L_08879D34;
    case 617u: goto L_08879D3C;
    case 618u: goto L_08879D40;
    case 619u: goto L_08879D44;
    case 620u: goto L_08879D50;
    case 621u: goto L_08879D54;
    case 622u: goto L_08879D5C;
    case 623u: goto L_08879D70;
    case 624u: goto L_08879D7C;
    case 625u: goto L_08879D88;
    case 626u: goto L_08879D94;
    case 627u: goto L_08879DA0;
    case 628u: goto L_08879DA8;
    case 629u: goto L_08879DAC;
    case 630u: goto L_08879DB4;
    case 631u: goto L_08879DBC;
    case 632u: goto L_08879DD0;
    case 633u: goto L_08879DD8;
    case 634u: goto L_08879DE8;
    case 635u: goto L_08879DF4;
    case 636u: goto L_08879DFC;
    case 637u: goto L_08879E08;
    case 638u: goto L_08879E1C;
    case 639u: goto L_08879E2C;
    case 640u: goto L_08879E3C;
    case 641u: goto L_08879E48;
    case 642u: goto L_08879E54;
    case 643u: goto L_08879E64;
    case 644u: goto L_08879E6C;
    case 645u: goto L_08879E78;
    case 646u: goto L_08879E88;
    case 647u: goto L_08879E94;
    case 648u: goto L_08879EA0;
    case 649u: goto L_08879EAC;
    case 650u: goto L_08879EB8;
    case 651u: goto L_08879EC0;
    case 652u: goto L_08879EC4;
    case 653u: goto L_08879ECC;
    case 654u: goto L_08879ED4;
    case 655u: goto L_08879EE8;
    case 656u: goto L_08879EF0;
    case 657u: goto L_08879F00;
    case 658u: goto L_08879F08;
    case 659u: goto L_08879F10;
    case 660u: goto L_08879F1C;
    case 661u: goto L_08879F24;
    case 662u: goto L_08879F30;
    case 663u: goto L_08879F44;
    case 664u: goto L_08879F54;
    case 665u: goto L_08879F60;
    case 666u: goto L_08879F6C;
    case 667u: goto L_08879F74;
    case 668u: goto L_08879F78;
    case 669u: goto L_08879F7C;
    case 670u: goto L_08879F88;
    case 671u: goto L_08879F98;
    case 672u: goto L_08879FA0;
    case 673u: goto L_08879FA8;
    case 674u: goto L_08879FB0;
    case 675u: goto L_08879FC0;
    case 676u: goto L_08879FD0;
    case 677u: goto L_08879FE0;
    case 678u: goto L_08879FF0;
    case 679u: goto L_08879FF8;
    case 680u: goto L_0887A004;
    case 681u: goto L_0887A010;
    case 682u: goto L_0887A01C;
    case 683u: goto L_0887A024;
    case 684u: goto L_0887A028;
    case 685u: goto L_0887A030;
    case 686u: goto L_0887A03C;
    case 687u: goto L_0887A04C;
    case 688u: goto L_0887A060;
    case 689u: goto L_0887A06C;
    case 690u: goto L_0887A078;
    case 691u: goto L_0887A084;
    case 692u: goto L_0887A08C;
    case 693u: goto L_0887A090;
    case 694u: goto L_0887A098;
    case 695u: goto L_0887A0A0;
    case 696u: goto L_0887A0B0;
    case 697u: goto L_0887A0B8;
    case 698u: goto L_0887A0C0;
    case 699u: goto L_0887A0C8;
    case 700u: goto L_0887A0DC;
    case 701u: goto L_0887A0E8;
    case 702u: goto L_0887A0F4;
    case 703u: goto L_0887A100;
    case 704u: goto L_0887A10C;
    case 705u: goto L_0887A118;
    case 706u: goto L_0887A120;
    case 707u: goto L_0887A124;
    case 708u: goto L_0887A128;
    case 709u: goto L_0887A134;
    case 710u: goto L_0887A13C;
    case 711u: goto L_0887A144;
    case 712u: goto L_0887A150;
    case 713u: goto L_0887A15C;
    case 714u: goto L_0887A164;
    case 715u: goto L_0887A168;
    case 716u: goto L_0887A16C;
    case 717u: goto L_0887A178;
    case 718u: goto L_0887A17C;
    case 719u: goto L_0887A184;
    case 720u: goto L_0887A198;
    case 721u: goto L_0887A1A8;
    case 722u: goto L_0887A1B8;
    case 723u: goto L_0887A1C0;
    case 724u: goto L_0887A1CC;
    case 725u: goto L_0887A1D8;
    case 726u: goto L_0887A1E4;
    case 727u: goto L_0887A1EC;
    case 728u: goto L_0887A1F0;
    case 729u: goto L_0887A1F4;
    case 730u: goto L_0887A200;
    case 731u: goto L_0887A210;
    case 732u: goto L_0887A21C;
    case 733u: goto L_0887A224;
    case 734u: goto L_0887A230;
    case 735u: goto L_0887A244;
    case 736u: goto L_0887A25C;
    case 737u: goto L_0887A26C;
    case 738u: goto L_0887A278;
    case 739u: goto L_0887A284;
    case 740u: goto L_0887A290;
    case 741u: goto L_0887A298;
    case 742u: goto L_0887A29C;
    case 743u: goto L_0887A2A0;
    case 744u: goto L_0887A2AC;
    case 745u: goto L_0887A2C0;
    case 746u: goto L_0887A2C8;
    case 747u: goto L_0887A2D8;
    case 748u: goto L_0887A2E0;
    case 749u: goto L_0887A2E8;
    case 750u: goto L_0887A2F4;
    case 751u: goto L_0887A30C;
    case 752u: goto L_0887A31C;
    case 753u: goto L_0887A328;
    case 754u: goto L_0887A334;
    case 755u: goto L_0887A33C;
    case 756u: goto L_0887A340;
    case 757u: goto L_0887A344;
    case 758u: goto L_0887A350;
    case 759u: goto L_0887A360;
    case 760u: goto L_0887A368;
    case 761u: goto L_0887A380;
    case 762u: goto L_0887A38C;
    case 763u: goto L_0887A398;
    case 764u: goto L_0887A3A4;
    case 765u: goto L_0887A3AC;
    case 766u: goto L_0887A3B0;
    case 767u: goto L_0887A3B8;
    case 768u: goto L_0887A3C0;
    case 769u: goto L_0887A3D4;
    case 770u: goto L_0887A3E4;
    case 771u: goto L_0887A3EC;
    case 772u: goto L_0887A3F8;
    case 773u: goto L_0887A404;
    case 774u: goto L_0887A410;
    case 775u: goto L_0887A418;
    case 776u: goto L_0887A41C;
    case 777u: goto L_0887A424;
    case 778u: goto L_0887A42C;
    case 779u: goto L_0887A440;
    case 780u: goto L_0887A450;
    case 781u: goto L_0887A454;
    case 782u: goto L_0887A46C;
    case 783u: goto L_0887A484;
    case 784u: goto L_0887A49C;
    case 785u: goto L_0887A4A8;
    case 786u: goto L_0887A4B4;
    case 787u: goto L_0887A4BC;
    case 788u: goto L_0887A4C0;
    case 789u: goto L_0887A4C4;
    case 790u: goto L_0887A4D0;
    case 791u: goto L_0887A4E0;
    case 792u: goto L_0887A4E8;
    case 793u: goto L_0887A4F4;
    case 794u: goto L_0887A500;
    case 795u: goto L_0887A50C;
    case 796u: goto L_0887A514;
    case 797u: goto L_0887A518;
    case 798u: goto L_0887A520;
    case 799u: goto L_0887A54C;
    case 800u: goto L_0887A55C;
    case 801u: goto L_0887A560;
    case 802u: goto L_0887A578;
    case 803u: goto L_0887A590;
    case 804u: goto L_0887A5B0;
    case 805u: goto L_0887A5BC;
    case 806u: goto L_0887A5C8;
    case 807u: goto L_0887A5D0;
    case 808u: goto L_0887A5D4;
    case 809u: goto L_0887A5D8;
    case 810u: goto L_0887A5E4;
    case 811u: goto L_0887A5F4;
    case 812u: goto L_0887A5FC;
    case 813u: goto L_0887A608;
    case 814u: goto L_0887A614;
    case 815u: goto L_0887A620;
    case 816u: goto L_0887A62C;
    case 817u: goto L_0887A634;
    case 818u: goto L_0887A638;
    case 819u: goto L_0887A640;
    case 820u: goto L_0887A648;
    case 821u: goto L_0887A65C;
    case 822u: goto L_0887A66C;
    case 823u: goto L_0887A674;
    case 824u: goto L_0887A680;
    case 825u: goto L_0887A68C;
    case 826u: goto L_0887A698;
    case 827u: goto L_0887A6A0;
    case 828u: goto L_0887A6A4;
    case 829u: goto L_0887A6AC;
    case 830u: goto L_0887A6B4;
    case 831u: goto L_0887A6C8;
    case 832u: goto L_0887A6D8;
    case 833u: goto L_0887A6DC;
    case 834u: goto L_0887A6F4;
    case 835u: goto L_0887A700;
    case 836u: goto L_0887A708;
    case 837u: goto L_0887A70C;
    case 838u: goto L_0887A718;
    case 839u: goto L_0887A724;
    case 840u: goto L_0887A72C;
    case 841u: goto L_0887A730;
    case 842u: goto L_0887A740;
    case 843u: goto L_0887A750;
    case 844u: goto L_0887A768;
    case 845u: goto L_0887A76C;
    case 846u: goto L_0887A770;
    case 847u: goto L_0887A778;
    case 848u: goto L_0887A788;
    case 849u: goto L_0887A798;
    case 850u: goto L_0887A7B0;
    case 851u: goto L_0887A7B4;
    case 852u: goto L_0887A7C0;
    case 853u: goto L_0887A7D0;
    case 854u: goto L_0887A7E8;
    case 855u: goto L_0887A7EC;
    case 856u: goto L_0887A7F0;
    case 857u: goto L_0887A7F8;
    case 858u: goto L_0887A80C;
    case 859u: goto L_0887A818;
    case 860u: goto L_0887A834;
    case 861u: goto L_0887A83C;
    case 862u: goto L_0887A85C;
    case 863u: goto L_0887A868;
    case 864u: goto L_0887A874;
    case 865u: goto L_0887A880;
    case 866u: goto L_0887A888;
    case 867u: goto L_0887A88C;
    case 868u: goto L_0887A898;
    case 869u: goto L_0887A8A0;
    case 870u: goto L_0887A8B0;
    case 871u: goto L_0887A8BC;
    case 872u: goto L_0887A8D8;
    case 873u: goto L_0887A8E0;
    case 874u: goto L_0887A900;
    case 875u: goto L_0887A90C;
    case 876u: goto L_0887A914;
    case 877u: goto L_0887A91C;
    case 878u: goto L_0887A928;
    case 879u: goto L_0887A940;
    case 880u: goto L_0887A94C;
    case 881u: goto L_0887A954;
    case 882u: goto L_0887A95C;
    case 883u: goto L_0887A968;
    case 884u: goto L_0887A96C;
    case 885u: goto L_0887A974;
    case 886u: goto L_0887A98C;
    case 887u: goto L_0887A998;
    case 888u: goto L_0887A9A0;
    case 889u: goto L_0887A9A8;
    case 890u: goto L_0887A9B4;
    case 891u: goto L_0887A9C0;
    case 892u: goto L_0887A9CC;
    case 893u: goto L_0887A9D8;
    case 894u: goto L_0887A9E0;
    case 895u: goto L_0887A9E4;
    case 896u: goto L_0887A9EC;
    case 897u: goto L_0887A9F4;
    case 898u: goto L_0887AA04;
    case 899u: goto L_0887AA0C;
    case 900u: goto L_0887AA18;
    case 901u: goto L_0887AA24;
    case 902u: goto L_0887AA30;
    case 903u: goto L_0887AA38;
    case 904u: goto L_0887AA3C;
    case 905u: goto L_0887AA44;
    case 906u: goto L_0887AA4C;
    case 907u: goto L_0887AA5C;
    case 908u: goto L_0887AA64;
    case 909u: goto L_0887AA70;
    case 910u: goto L_0887AA7C;
    case 911u: goto L_0887AA88;
    case 912u: goto L_0887AA90;
    case 913u: goto L_0887AA94;
    case 914u: goto L_0887AA9C;
    case 915u: goto L_0887AAA4;
    case 916u: goto L_0887AAB4;
    case 917u: goto L_0887AABC;
    case 918u: goto L_0887AAC4;
    case 919u: goto L_0887AAD0;
    case 920u: goto L_0887AAEC;
    case 921u: goto L_0887AAF4;
    case 922u: goto L_0887AB14;
    case 923u: goto L_0887AB1C;
    case 924u: goto L_0887AB28;
    case 925u: goto L_0887AB34;
    case 926u: goto L_0887AB40;
    case 927u: goto L_0887AB48;
    case 928u: goto L_0887AB4C;
    case 929u: goto L_0887AB54;
    case 930u: goto L_0887AB5C;
    case 931u: goto L_0887AB6C;
    case 932u: goto L_0887AB74;
    case 933u: goto L_0887AB7C;
    case 934u: goto L_0887AB88;
    case 935u: goto L_0887ABA4;
    case 936u: goto L_0887ABAC;
    case 937u: goto L_0887ABCC;
    case 938u: goto L_0887ABD4;
    case 939u: goto L_0887ABE0;
    case 940u: goto L_0887ABEC;
    case 941u: goto L_0887ABF8;
    case 942u: goto L_0887AC00;
    case 943u: goto L_0887AC04;
    case 944u: goto L_0887AC0C;
    case 945u: goto L_0887AC14;
    case 946u: goto L_0887AC24;
    case 947u: goto L_0887AC54;
    case 948u: goto L_0887AC88;
    case 949u: goto L_0887AC90;
    case 950u: goto L_0887AC94;
    case 951u: goto L_0887ACA0;
    case 952u: goto L_0887ACAC;
    case 953u: goto L_0887ACB4;
    case 954u: goto L_0887ACBC;
    case 955u: goto L_0887ACC8;
    case 956u: goto L_0887ACD0;
    case 957u: goto L_0887ACD8;
    case 958u: goto L_0887ACE0;
    case 959u: goto L_0887ACEC;
    case 960u: goto L_0887AD00;
    case 961u: goto L_0887AD04;
    case 962u: goto L_0887AD08;
    case 963u: goto L_0887AD10;
    case 964u: goto L_0887AD18;
    case 965u: goto L_0887AD24;
    case 966u: goto L_0887AD2C;
    case 967u: goto L_0887AD3C;
    case 968u: goto L_0887AD44;
    case 969u: goto L_0887AD48;
    case 970u: goto L_0887AD50;
    case 971u: goto L_0887AD60;
    case 972u: goto L_0887AD70;
    case 973u: goto L_0887AD78;
    case 974u: goto L_0887AD84;
    case 975u: goto L_0887AD94;
    case 976u: goto L_0887ADA0;
    case 977u: goto L_0887ADA8;
    case 978u: goto L_0887ADB0;
    case 979u: goto L_0887ADC4;
    case 980u: goto L_0887ADD4;
    case 981u: goto L_0887ADE4;
    case 982u: goto L_0887ADE8;
    case 983u: goto L_0887ADEC;
    case 984u: goto L_0887ADF4;
    case 985u: goto L_0887AE04;
    case 986u: goto L_0887AE30;
    case 987u: goto L_0887AE40;
    case 988u: goto L_0887AE50;
    case 989u: goto L_0887AE54;
    case 990u: goto L_0887AE58;
    case 991u: goto L_0887AE68;
    case 992u: goto L_0887AE74;
    case 993u: goto L_0887AE80;
    case 994u: goto L_0887AE88;
    case 995u: goto L_0887AE8C;
    case 996u: goto L_0887AE94;
    case 997u: goto L_0887AEC0;
    case 998u: goto L_0887AECC;
    case 999u: goto L_0887AEDC;
    case 1000u: goto L_0887AEE0;
    case 1001u: goto L_0887AEEC;
    case 1002u: goto L_0887AEF0;
    case 1003u: goto L_0887AEFC;
    case 1004u: goto L_0887AF00;
    case 1005u: goto L_0887AF08;
    case 1006u: goto L_0887AF1C;
    case 1007u: goto L_0887AF28;
    case 1008u: goto L_0887AF34;
    case 1009u: goto L_0887AF40;
    case 1010u: goto L_0887AF48;
    case 1011u: goto L_0887AF4C;
    case 1012u: goto L_0887AF58;
    case 1013u: goto L_0887AF7C;
    case 1014u: goto L_0887AF88;
    case 1015u: goto L_0887AF94;
    case 1016u: goto L_0887AF9C;
    case 1017u: goto L_0887AFA0;
    case 1018u: goto L_0887AFA4;
    case 1019u: goto L_0887AFAC;
    case 1020u: goto L_0887AFBC;
    case 1021u: goto L_0887AFC8;
    case 1022u: goto L_0887AFD4;
    case 1023u: goto L_0887AFDC;
    case 1024u: goto L_0887AFE8;
    case 1025u: goto L_0887AFEC;
    case 1026u: goto L_0887AFF4;
    case 1027u: goto L_0887B000;
    case 1028u: goto L_0887B018;
    case 1029u: goto L_0887B024;
    case 1030u: goto L_0887B038;
    case 1031u: goto L_0887B040;
    case 1032u: goto L_0887B048;
    case 1033u: goto L_0887B070;
    case 1034u: goto L_0887B098;
    case 1035u: goto L_0887B0A8;
    case 1036u: goto L_0887B0B0;
    case 1037u: goto L_0887B0BC;
    case 1038u: goto L_0887B0C8;
    case 1039u: goto L_0887B0D0;
    case 1040u: goto L_0887B0D8;
    case 1041u: goto L_0887B0E8;
    case 1042u: goto L_0887B0F4;
    case 1043u: goto L_0887B108;
    case 1044u: goto L_0887B10C;
    case 1045u: goto L_0887B110;
    case 1046u: goto L_0887B118;
    case 1047u: goto L_0887B120;
    case 1048u: goto L_0887B12C;
    case 1049u: goto L_0887B140;
    case 1050u: goto L_0887B148;
    case 1051u: goto L_0887B154;
    case 1052u: goto L_0887B168;
    case 1053u: goto L_0887B16C;
    case 1054u: goto L_0887B170;
    case 1055u: goto L_0887B178;
    case 1056u: goto L_0887B188;
    case 1057u: goto L_0887B190;
    case 1058u: goto L_0887B1A0;
    case 1059u: goto L_0887B1A4;
    case 1060u: goto L_0887B1B0;
    case 1061u: goto L_0887B1B8;
    case 1062u: goto L_0887B1C0;
    case 1063u: goto L_0887B1D0;
    case 1064u: goto L_0887B1D8;
    case 1065u: goto L_0887B1E8;
    case 1066u: goto L_0887B1EC;
    case 1067u: goto L_0887B1FC;
    case 1068u: goto L_0887B204;
    case 1069u: goto L_0887B20C;
    case 1070u: goto L_0887B21C;
    case 1071u: goto L_0887B228;
    case 1072u: goto L_0887B238;
    case 1073u: goto L_0887B23C;
    case 1074u: goto L_0887B254;
    case 1075u: goto L_0887B25C;
    case 1076u: goto L_0887B26C;
    case 1077u: goto L_0887B270;
    case 1078u: goto L_0887B27C;
    case 1079u: goto L_0887B284;
    case 1080u: goto L_0887B28C;
    case 1081u: goto L_0887B294;
    case 1082u: goto L_0887B2A0;
    case 1083u: goto L_0887B2B4;
    case 1084u: goto L_0887B2B8;
    case 1085u: goto L_0887B2BC;
    case 1086u: goto L_0887B2C4;
    case 1087u: goto L_0887B2CC;
    case 1088u: goto L_0887B2DC;
    case 1089u: goto L_0887B2E8;
    case 1090u: goto L_0887B2EC;
    case 1091u: goto L_0887B2F0;
    case 1092u: goto L_0887B2F8;
    case 1093u: goto L_0887B308;
    case 1094u: goto L_0887B318;
    case 1095u: goto L_0887B324;
    case 1096u: goto L_0887B32C;
    case 1097u: goto L_0887B330;
    case 1098u: goto L_0887B338;
    case 1099u: goto L_0887B340;
    case 1100u: goto L_0887B348;
    case 1101u: goto L_0887B354;
    case 1102u: goto L_0887B35C;
    case 1103u: goto L_0887B360;
    case 1104u: goto L_0887B368;
    case 1105u: goto L_0887B370;
    case 1106u: goto L_0887B37C;
    case 1107u: goto L_0887B388;
    case 1108u: goto L_0887B390;
    case 1109u: goto L_0887B394;
    case 1110u: goto L_0887B39C;
    case 1111u: goto L_0887B3A4;
    case 1112u: goto L_0887B3A8;
    case 1113u: goto L_0887B3B8;
    case 1114u: goto L_0887B3C4;
    case 1115u: goto L_0887B3CC;
    case 1116u: goto L_0887B3D0;
    case 1117u: goto L_0887B3D8;
    case 1118u: goto L_0887B3E0;
    case 1119u: goto L_0887B3E8;
    case 1120u: goto L_0887B3F0;
    case 1121u: goto L_0887B3F8;
    case 1122u: goto L_0887B400;
    case 1123u: goto L_0887B408;
    case 1124u: goto L_0887B410;
    case 1125u: goto L_0887B41C;
    case 1126u: goto L_0887B430;
    case 1127u: goto L_0887B434;
    case 1128u: goto L_0887B438;
    case 1129u: goto L_0887B440;
    case 1130u: goto L_0887B448;
    case 1131u: goto L_0887B450;
    case 1132u: goto L_0887B454;
    case 1133u: goto L_0887B45C;
    case 1134u: goto L_0887B464;
    case 1135u: goto L_0887B470;
    case 1136u: goto L_0887B478;
    case 1137u: goto L_0887B47C;
    case 1138u: goto L_0887B484;
    case 1139u: goto L_0887B490;
    case 1140u: goto L_0887B498;
    case 1141u: goto L_0887B4A4;
    case 1142u: goto L_0887B4AC;
    case 1143u: goto L_0887B4C8;
    case 1144u: goto L_0887B4D8;
    case 1145u: goto L_0887B4E0;
    case 1146u: goto L_0887B4E8;
    case 1147u: goto L_0887B4F0;
    case 1148u: goto L_0887B4F8;
    case 1149u: goto L_0887B500;
    case 1150u: goto L_0887B50C;
    case 1151u: goto L_0887B518;
    case 1152u: goto L_0887B52C;
    case 1153u: goto L_0887B534;
    case 1154u: goto L_0887B540;
    case 1155u: goto L_0887B554;
    case 1156u: goto L_0887B558;
    case 1157u: goto L_0887B55C;
    case 1158u: goto L_0887B564;
    case 1159u: goto L_0887B578;
    case 1160u: goto L_0887B588;
    case 1161u: goto L_0887B590;
    case 1162u: goto L_0887B594;
    case 1163u: goto L_0887B59C;
    case 1164u: goto L_0887B5AC;
    case 1165u: goto L_0887B5B4;
    case 1166u: goto L_0887B5C0;
    case 1167u: goto L_0887B5C8;
    case 1168u: goto L_0887B5D0;
    case 1169u: goto L_0887B5D8;
    case 1170u: goto L_0887B5E0;
    case 1171u: goto L_0887B5E8;
    case 1172u: goto L_0887B5EC;
    case 1173u: goto L_0887B5F4;
    case 1174u: goto L_0887B61C;
    case 1175u: goto L_0887B624;
    case 1176u: goto L_0887B634;
    case 1177u: goto L_0887B63C;
    case 1178u: goto L_0887B650;
    case 1179u: goto L_0887B680;
    case 1180u: goto L_0887B698;
    case 1181u: goto L_0887B704;
    case 1182u: goto L_0887B710;
    case 1183u: goto L_0887B71C;
    case 1184u: goto L_0887B720;
    case 1185u: goto L_0887B728;
    case 1186u: goto L_0887B730;
    case 1187u: goto L_0887B758;
    case 1188u: goto L_0887B764;
    case 1189u: goto L_0887B770;
    case 1190u: goto L_0887B77C;
    case 1191u: goto L_0887B784;
    case 1192u: goto L_0887B788;
    case 1193u: goto L_0887B790;
    case 1194u: goto L_0887B798;
    case 1195u: goto L_0887B7A8;
    case 1196u: goto L_0887B7B0;
    case 1197u: goto L_0887B7BC;
    case 1198u: goto L_0887B7C8;
    case 1199u: goto L_0887B7D4;
    case 1200u: goto L_0887B7DC;
    case 1201u: goto L_0887B7E0;
    case 1202u: goto L_0887B7E4;
    case 1203u: goto L_0887B7F4;
    case 1204u: goto L_0887B804;
    case 1205u: goto L_0887B810;
    case 1206u: goto L_0887B81C;
    case 1207u: goto L_0887B828;
    case 1208u: goto L_0887B830;
    case 1209u: goto L_0887B834;
    case 1210u: goto L_0887B83C;
    case 1211u: goto L_0887B848;
    case 1212u: goto L_0887B858;
    case 1213u: goto L_0887B864;
    case 1214u: goto L_0887B870;
    case 1215u: goto L_0887B87C;
    case 1216u: goto L_0887B884;
    case 1217u: goto L_0887B888;
    case 1218u: goto L_0887B890;
    case 1219u: goto L_0887B89C;
    case 1220u: goto L_0887B8AC;
    case 1221u: goto L_0887B8B8;
    case 1222u: goto L_0887B8C4;
    case 1223u: goto L_0887B8D0;
    case 1224u: goto L_0887B8D8;
    case 1225u: goto L_0887B8DC;
    case 1226u: goto L_0887B8E4;
    case 1227u: goto L_0887B8F0;
    case 1228u: goto L_0887B900;
    case 1229u: goto L_0887B918;
    case 1230u: goto L_0887B92C;
    case 1231u: goto L_0887B93C;
    case 1232u: goto L_0887B94C;
    case 1233u: goto L_0887B964;
    case 1234u: goto L_0887B974;
    case 1235u: goto L_0887B9C0;
    case 1236u: goto L_0887B9CC;
    case 1237u: goto L_0887B9D4;
    case 1238u: goto L_0887B9D8;
    case 1239u: goto L_0887B9E0;
    case 1240u: goto L_0887B9EC;
    case 1241u: goto L_0887BA00;
    case 1242u: goto L_0887BA10;
    case 1243u: goto L_0887BA1C;
    case 1244u: goto L_0887BA24;
    case 1245u: goto L_0887BA2C;
    case 1246u: goto L_0887BA34;
    case 1247u: goto L_0887BA48;
    case 1248u: goto L_0887BA58;
    case 1249u: goto L_0887BA60;
    case 1250u: goto L_0887BA6C;
    case 1251u: goto L_0887BA78;
    case 1252u: goto L_0887BA84;
    case 1253u: goto L_0887BA8C;
    case 1254u: goto L_0887BA90;
    case 1255u: goto L_0887BA9C;
    case 1256u: goto L_0887BAA4;
    case 1257u: goto L_0887BAAC;
    case 1258u: goto L_0887BABC;
    case 1259u: goto L_0887BAC8;
    case 1260u: goto L_0887BAE0;
    case 1261u: goto L_0887BAF4;
    case 1262u: goto L_0887BB24;
    case 1263u: goto L_0887BB34;
    case 1264u: goto L_0887BB44;
    case 1265u: goto L_0887BB48;
    case 1266u: goto L_0887BB4C;
    case 1267u: goto L_0887BB5C;
    case 1268u: goto L_0887BB60;
    case 1269u: goto L_0887BB70;
    case 1270u: goto L_0887BB84;
    case 1271u: goto L_0887BB98;
    case 1272u: goto L_0887BBA4;
    case 1273u: goto L_0887BBB0;
    case 1274u: goto L_0887BBBC;
    case 1275u: goto L_0887BBC4;
    case 1276u: goto L_0887BBC8;
    case 1277u: goto L_0887BBD4;
    case 1278u: goto L_0887BBDC;
    case 1279u: goto L_0887BBEC;
    case 1280u: goto L_0887BBFC;
    case 1281u: goto L_0887BC08;
    case 1282u: goto L_0887BC14;
    case 1283u: goto L_0887BC20;
    case 1284u: goto L_0887BC28;
    case 1285u: goto L_0887BC2C;
    case 1286u: goto L_0887BC34;
    case 1287u: goto L_0887BC3C;
    case 1288u: goto L_0887BC4C;
    case 1289u: goto L_0887BC60;
    case 1290u: goto L_0887BC70;
    case 1291u: goto L_0887BC7C;
    case 1292u: goto L_0887BC8C;
    case 1293u: goto L_0887BC9C;
    case 1294u: goto L_0887BCA0;
    case 1295u: goto L_0887BCB4;
    case 1296u: goto L_0887BCBC;
    case 1297u: goto L_0887BCCC;
    case 1298u: goto L_0887BCD4;
    case 1299u: goto L_0887BCD8;
    case 1300u: goto L_0887BCDC;
    case 1301u: goto L_0887BCEC;
    case 1302u: goto L_0887BD00;
    case 1303u: goto L_0887BD10;
    case 1304u: goto L_0887BD18;
    case 1305u: goto L_0887BD20;
    case 1306u: goto L_0887BD40;
    case 1307u: goto L_0887BD4C;
    case 1308u: goto L_0887BD58;
    case 1309u: goto L_0887BD64;
    case 1310u: goto L_0887BD6C;
    case 1311u: goto L_0887BD70;
    case 1312u: goto L_0887BD78;
    case 1313u: goto L_0887BD80;
    case 1314u: goto L_0887BD90;
    case 1315u: goto L_0887BD94;
    case 1316u: goto L_0887BDA8;
    case 1317u: goto L_0887BDB0;
    case 1318u: goto L_0887BDBC;
    case 1319u: goto L_0887BDC8;
    case 1320u: goto L_0887BDD4;
    case 1321u: goto L_0887BDDC;
    case 1322u: goto L_0887BDE0;
    case 1323u: goto L_0887BDE8;
    case 1324u: goto L_0887BDF0;
    case 1325u: goto L_0887BE00;
    case 1326u: goto L_0887BE0C;
    case 1327u: goto L_0887BE24;
    case 1328u: goto L_0887BE60;
    case 1329u: goto L_0887BE88;
    case 1330u: goto L_0887BEA0;
    case 1331u: goto L_0887BEA4;
    case 1332u: goto L_0887BEB8;
    case 1333u: goto L_0887BED0;
    case 1334u: goto L_0887BF0C;
    case 1335u: goto L_0887BF34;
    case 1336u: goto L_0887BF4C;
    case 1337u: goto L_0887BF50;
    case 1338u: goto L_0887BF94;
    case 1339u: goto L_0887BFD4;
    case 1340u: goto L_0887BFDC;
    case 1341u: goto L_0887BFE8;
    case 1342u: goto L_0887BFF4;
    case 1343u: goto L_0887BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08878000u;
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
L_08878000:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08878010u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 2u, 0x08878010u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878010u) goto L_08878010;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878010:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878034;
      }
      goto L_08878018;
    }
L_08878018:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08878028u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 4u, 0x08878028u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878028u) goto L_08878028;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878028:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08878034u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 5u, 0x08878034u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878034u) goto L_08878034;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878034:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878088;
      }
      goto L_0887803C;
    }
L_0887803C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08878048u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 7u, 0x08878048u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878048u) goto L_08878048;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878048:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887806C;
      }
      goto L_08878054;
    }
L_08878054:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08878064u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 9u, 0x08878064u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878064u) goto L_08878064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878088;
      }
      goto L_0887806C;
    }
L_0887806C:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x0887807Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 11u, 0x0887807Cu, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887807Cu) goto L_0887807C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887807C:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08878088u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 12u, 0x08878088u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878088u) goto L_08878088;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878088:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878164;
      }
      goto L_08878090;
    }
L_08878090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088780F8;
      }
      goto L_088780A0;
    }
L_088780A0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088780B0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088780B0u) goto L_088780B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088780B0:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18920));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088780E4;
      }
      goto L_088780D4;
    }
L_088780D4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088780F8;
      }
      goto L_088780E4;
    }
L_088780E4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088780F8;
L_088780F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878164;
      }
      goto L_08878100;
    }
L_08878100:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08878164;
      }
      goto L_08878110;
    }
L_08878110:
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
          goto L_08878150;
      }
      goto L_08878138;
    }
L_08878138:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
      if (branch_taken) {
          goto L_08878164;
      }
      goto L_08878150;
    }
L_08878150:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
    goto L_08878164;
L_08878164:
    aot_gpr_31 = (0x0887816Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887816Cu) goto L_0887816C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887816C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887818C;
      }
      goto L_0887817C;
    }
L_0887817C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08878190;
      }
      goto L_08878188;
    }
L_08878188:
    aot_gpr_5 = (0u | 1u);
    goto L_0887818C;
L_0887818C:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08878190;
L_08878190:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088783A4;
      }
      goto L_08878198;
    }
L_08878198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088781AC;
      }
      goto L_088781A4;
    }
L_088781A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088781C8;
      }
      goto L_088781AC;
    }
L_088781AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088781C8;
      }
      goto L_088781BC;
    }
L_088781BC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088781C8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 33u, 0x088781C8u, 0x08874584u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 81u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 81u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 81u, 0x08874584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088781C8u) goto L_088781C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088781C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088783A4;
      }
      goto L_088781D0;
    }
L_088781D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_088781E8;
    }
    goto L_088781DC;
L_088781DC:
    aot_gpr_31 = (0x088781E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088781E4u) goto L_088781E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088781E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_088781E8;
L_088781E8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08878220;
      }
      goto L_088781F8;
    }
L_088781F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_08878224;
    }
    goto L_08878208;
L_08878208:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    ctx.gpr[7] = (2213u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08878228;
      }
      goto L_08878220;
    }
L_08878220:
    aot_gpr_5 = (0u | 1u);
    goto L_08878224;
L_08878224:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08878228;
L_08878228:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_088782A8;
    }
    goto L_08878230;
L_08878230:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887826C;
    }
    goto L_08878240;
L_08878240:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887826C;
    }
    goto L_08878250;
L_08878250:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21964));
    if (aot_gpr_6 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_088782A8;
    }
    goto L_08878268;
L_08878268:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887826C;
L_0887826C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_088782A4;
    }
    goto L_08878278;
L_08878278:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_088782A4;
    }
    goto L_08878288;
L_08878288:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22528));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088782A8;
      }
      goto L_088782A0;
    }
L_088782A0:
    aot_gpr_4 = (0u | 1u);
    goto L_088782A4;
L_088782A4:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088782A8;
L_088782A8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088783A4;
      }
      goto L_088782B0;
    }
L_088782B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088782C4;
      }
      goto L_088782BC;
    }
L_088782BC:
    aot_gpr_31 = (0x088782C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088782C4u) goto L_088782C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088782C4:
    aot_gpr_31 = (0x088782CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 56u, 0x088782CCu, 0x08A54FECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 256u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 256u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 256u, 0x08A54FECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088782CCu) goto L_088782CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088782CC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_0887831C;
      }
      goto L_088782D8;
    }
L_088782D8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878328;
      }
      goto L_088782F4;
    }
L_088782F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08878308;
      }
      goto L_08878300;
    }
L_08878300:
    aot_gpr_31 = (0x08878308u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878308u) goto L_08878308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878308:
    aot_gpr_31 = (0x08878310u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 61u, 0x08878310u, 0x08A550C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 267u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 267u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 267u, 0x08A550C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878310u) goto L_08878310;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878310:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878328;
      }
      goto L_0887831C;
    }
L_0887831C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(4188)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088783A4;
      }
      goto L_08878328;
    }
L_08878328:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887833Cu);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887833Cu) goto L_0887833C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887833C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08878350;
      }
      goto L_08878348;
    }
L_08878348:
    aot_gpr_31 = (0x08878350u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878350u) goto L_08878350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_31 = (0x0887835Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 67u, 0x0887835Cu, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887835Cu) goto L_0887835C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887835C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 17u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08878390;
      }
      goto L_0887836C;
    }
L_0887836C:
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[17] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887836C;
      }
      goto L_08878390;
    }
L_08878390:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27304));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27296));
    aot_gpr_31 = (0x088783A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 70u, 0x088783A4u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088783A4u) goto L_088783A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088783A4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088783B0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088783B0u) goto L_088783B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088783B0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08878430;
      }
      goto L_088783BC;
    }
L_088783BC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088783C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088783C8u) goto L_088783C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088783C8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_088783F4;
      }
      goto L_088783D4;
    }
L_088783D4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088783E0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088783E0u) goto L_088783E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088783E0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_088783F4;
      }
      goto L_088783EC;
    }
L_088783EC:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_088783F4;
L_088783F4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08878430;
      }
      goto L_088783FC;
    }
L_088783FC:
    aot_gpr_31 = (0x08878404u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 79u, 0x08878404u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878404u) goto L_08878404;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878404:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08878430;
      }
      goto L_08878410;
    }
L_08878410:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08878420u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 81u, 0x08878420u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878420u) goto L_08878420;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878420:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(425), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08878430u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 82u, 0x08878430u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878430u) goto L_08878430;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878430:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0887843Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 83u, 0x0887843Cu, 0x08874808u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 132u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 132u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 132u, 0x08874808u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887843Cu) goto L_0887843C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887843C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08878450;
      }
      goto L_08878448;
    }
L_08878448:
    aot_gpr_31 = (0x08878450u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878450u) goto L_08878450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878450:
    aot_gpr_31 = (0x08878458u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 86u, 0x08878458u, 0x08A56900u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 600u, 0x08A56900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878458u) goto L_08878458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887846C;
      }
      goto L_08878464;
    }
L_08878464:
    aot_gpr_31 = (0x0887846Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887846Cu) goto L_0887846C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887846C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_31 = (0x08878478u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 89u, 0x08878478u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878478u) goto L_08878478;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878478:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878488u);
    aot_gpr_6 = (0u | 136u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878488u) goto L_08878488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878488:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088784A0;
      }
      goto L_08878490;
    }
L_08878490:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088784A0u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088784A0u) goto L_088784A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088784A0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(156), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088784BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1152));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(1104), aot_run_words); }
    aot_gpr_31 = (0x088784F4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 94u, 0x088784F4u, 0x08870018u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 2u, 0x08870018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088784F4u) goto L_088784F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088784F4:
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_31 = (0x08878500u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878500u) goto L_08878500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878500:
    aot_gpr_31 = (0x08878508u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878508u) goto L_08878508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878508:
    aot_gpr_4 = (0u | 30u);
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x08878528u);
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878528u) goto L_08878528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08878544;
      }
      goto L_0887853C;
    }
L_0887853C:
    aot_gpr_31 = (0x08878544u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878544u) goto L_08878544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878544:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878B14;
      }
      goto L_08878564;
    }
L_08878564:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), aot_gpr_4);
    ctx.gpr[18] = (0u | 370u);
    aot_gpr_31 = (0x08878578u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 101u, 0x08878578u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878578u) goto L_08878578;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088785B0;
    }
    goto L_08878584;
L_08878584:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878590u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 103u, 0x08878590u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878590u) goto L_08878590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878590:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088785A8;
      }
      goto L_0887859C;
    }
L_0887859C:
    aot_gpr_31 = (0x088785A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088785A4u) goto L_088785A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088785A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088785A8;
L_088785A8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088785B0;
L_088785B0:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[18]);
    aot_gpr_31 = (0x088785C0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26956));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 108u, 0x088785C0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088785C0u) goto L_088785C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088785C0:
    aot_gpr_6 = (0u | 74u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088785D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088785D0u) goto L_088785D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088785D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088785EC;
      }
      goto L_088785E8;
    }
L_088785E8:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[20]);
    goto L_088785EC;
L_088785EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-26948));
      if (branch_taken) {
          goto L_08878B14;
      }
      goto L_08878600;
    }
L_08878600:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26940));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-26936));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(5824));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), aot_gpr_6);
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25856));
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-19192));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[19] = (0u | 13u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_08878648;
L_08878648:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[30] & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
      if (branch_taken) {
          goto L_08878764;
      }
      goto L_0887866C;
    }
L_0887866C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08878678u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 115u, 0x08878678u, 0x08ADC7BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 154u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 154u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878678u) goto L_08878678;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878678:
    aot_gpr_31 = (0x08878680u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878680u) goto L_08878680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878680:
    { const bool branch_taken = ctx.gpr[30] != 0u;
      if (branch_taken) {
          goto L_088786F8;
      }
      goto L_08878688;
    }
L_08878688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
        goto L_088786C0;
    }
    goto L_08878694;
L_08878694:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088786A0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 119u, 0x088786A0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088786A0u) goto L_088786A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088786A0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088786B8;
      }
      goto L_088786AC;
    }
L_088786AC:
    aot_gpr_31 = (0x088786B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088786B4u) goto L_088786B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088786B4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088786B8;
L_088786B8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_088786C0;
L_088786C0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x088786CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 124u, 0x088786CCu, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088786CCu) goto L_088786CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088786CC:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088786E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 125u, 0x088786E0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088786E0u) goto L_088786E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088786E0:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(77));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088786F0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088786F0u) goto L_088786F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088786F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878760;
      }
      goto L_088786F8;
    }
L_088786F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
        goto L_08878730;
    }
    goto L_08878704;
L_08878704:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878710u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 129u, 0x08878710u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878710u) goto L_08878710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878710:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08878728;
      }
      goto L_0887871C;
    }
L_0887871C:
    aot_gpr_31 = (0x08878724u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878724u) goto L_08878724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878724:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08878728;
L_08878728:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_08878730;
L_08878730:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887873Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 134u, 0x0887873Cu, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887873Cu) goto L_0887873C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887873C:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08878750u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 135u, 0x08878750u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878750u) goto L_08878750;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878750:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(77));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878760u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878760u) goto L_08878760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878760:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13));
    goto L_08878764;
L_08878764:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0887876C;
L_0887876C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_08878784;
    }
    goto L_08878778;
L_08878778:
    aot_gpr_31 = (0x08878780u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878780u) goto L_08878780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_08878784;
L_08878784:
    aot_gpr_31 = (0x0887878Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 142u, 0x0887878Cu, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887878Cu) goto L_0887878C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887878C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(576), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(577), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(578), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(579), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(580), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(581), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088787E4;
      }
      goto L_088787C0;
    }
L_088787C0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_088787E8;
    }
    goto L_088787D0;
L_088787D0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088787E8;
      }
      goto L_088787E0;
    }
L_088787E0:
    aot_gpr_4 = (0u | 1u);
    goto L_088787E4;
L_088787E4:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088787E8;
L_088787E8:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878AF0;
      }
      goto L_088787F8;
    }
L_088787F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_08878810;
    }
    goto L_08878804;
L_08878804:
    aot_gpr_31 = (0x0887880Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887880Cu) goto L_0887880C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887880C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_08878810;
L_08878810:
    aot_gpr_31 = (0x08878818u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 152u, 0x08878818u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878818u) goto L_08878818;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878818:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08878844;
      }
      goto L_0887882C;
    }
L_0887882C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08878AF0;
      }
      goto L_08878844;
    }
L_08878844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08878858;
      }
      goto L_08878850;
    }
L_08878850:
    aot_gpr_31 = (0x08878858u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878858u) goto L_08878858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878858:
    aot_gpr_31 = (0x08878860u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 157u, 0x08878860u, 0x08A54F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878860u) goto L_08878860;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878860:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08878898;
      }
      goto L_08878874;
    }
L_08878874:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (ctx.gpr[7] & 255u);
        goto L_0887889C;
    }
    goto L_08878884;
L_08878884:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_0887889C;
      }
      goto L_08878894;
    }
L_08878894:
    ctx.gpr[7] = (0u | 1u);
    goto L_08878898;
L_08878898:
    aot_gpr_4 = (ctx.gpr[7] & 255u);
    goto L_0887889C;
L_0887889C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088788E0;
      }
      goto L_088788A4;
    }
L_088788A4:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(600));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088788BCu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088788BCu) goto L_088788BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088788BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(584), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(585), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(587), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08878960;
      }
      goto L_088788E0;
    }
L_088788E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878928;
      }
      goto L_088788F8;
    }
L_088788F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr_31 = (0x08878904u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 167u, 0x08878904u, 0x08ADC7BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 154u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 154u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878904u) goto L_08878904;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878904:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(584), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(585), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(587), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08878960;
      }
      goto L_08878928;
    }
L_08878928:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(604));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08878940u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878940u) goto L_08878940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878940:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(584), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(585), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(587), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08878960;
L_08878960:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(585)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(586)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(587)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(588), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(589), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x08878998u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(588));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878998u) goto L_08878998;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878998:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_088789B0;
    }
    goto L_088789A4;
L_088789A4:
    aot_gpr_31 = (0x088789ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088789ACu) goto L_088789AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088789AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_088789B0;
L_088789B0:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    aot_gpr_31 = (0x088789BCu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 175u, 0x088789BCu, 0x08A54B14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 180u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 180u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 180u, 0x08A54B14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088789BCu) goto L_088789BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088789BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08878A80;
      }
      goto L_088789D0;
    }
L_088789D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_088789E8;
    }
    goto L_088789DC;
L_088789DC:
    aot_gpr_31 = (0x088789E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088789E4u) goto L_088789E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088789E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_088789E8;
L_088789E8:
    aot_gpr_31 = (0x088789F0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 180u, 0x088789F0u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088789F0u) goto L_088789F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088789F0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08878A28;
      }
      goto L_08878A04;
    }
L_08878A04:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (ctx.gpr[7] & 255u);
        goto L_08878A2C;
    }
    goto L_08878A14;
L_08878A14:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08878A2C;
      }
      goto L_08878A24;
    }
L_08878A24:
    ctx.gpr[7] = (0u | 1u);
    goto L_08878A28;
L_08878A28:
    aot_gpr_4 = (ctx.gpr[7] & 255u);
    goto L_08878A2C;
L_08878A2C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878A4C;
      }
      goto L_08878A34;
    }
L_08878A34:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    aot_gpr_31 = (0x08878A44u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878A44u) goto L_08878A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878A44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878A5C;
      }
      goto L_08878A4C;
    }
L_08878A4C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_gpr_31 = (0x08878A5Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878A5Cu) goto L_08878A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878A5C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08878A68u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 190u, 0x08878A68u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878A68u) goto L_08878A68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878A68:
    aot_gpr_5 = (0u | 375u);
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(77));
    aot_gpr_31 = (0x08878A78u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878A78u) goto L_08878A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878A78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878AD4;
      }
      goto L_08878A80;
    }
L_08878A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878AB8;
    }
    goto L_08878A8C;
L_08878A8C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878A98u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 194u, 0x08878A98u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878A98u) goto L_08878A98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878A98:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08878AB0;
      }
      goto L_08878AA4;
    }
L_08878AA4:
    aot_gpr_31 = (0x08878AACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878AACu) goto L_08878AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878AAC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08878AB0;
L_08878AB0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878AB8;
L_08878AB8:
    aot_gpr_31 = (0x08878AC0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 199u, 0x08878AC0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878AC0u) goto L_08878AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878AC0:
    aot_gpr_5 = (0u | 375u);
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(77));
    aot_gpr_31 = (0x08878AD0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878AD0u) goto L_08878AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878AD0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_08878AD4;
L_08878AD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_08878AF0;
      }
      goto L_08878AE4;
    }
L_08878AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    aot_gpr_31 = (0x08878AF0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878AF0u) goto L_08878AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878AF0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887876C;
      }
      goto L_08878B00;
    }
L_08878B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08878648;
      }
      goto L_08878B14;
    }
L_08878B14:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[30] = (0u | 10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (0u | 185u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08878B30u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 206u, 0x08878B30u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878B30u) goto L_08878B30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878B30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878B68;
    }
    goto L_08878B3C;
L_08878B3C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878B48u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 208u, 0x08878B48u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878B48u) goto L_08878B48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878B48:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08878B60;
      }
      goto L_08878B54;
    }
L_08878B54:
    aot_gpr_31 = (0x08878B5Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878B5Cu) goto L_08878B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878B5C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08878B60;
L_08878B60:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878B68;
L_08878B68:
    aot_gpr_31 = (0x08878B70u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26928));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 213u, 0x08878B70u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878B70u) goto L_08878B70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878B70:
    aot_gpr_6 = (0u | 74u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878B80u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878B80u) goto L_08878B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878B80:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26920));
    aot_gpr_31 = (0x08878B90u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878B90u) goto L_08878B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878B90:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(532));
    aot_gpr_6 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08878BA4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878BA4u) goto L_08878BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878BA4:
    aot_gpr_31 = (0x08878BACu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878BACu) goto L_08878BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878BAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878BE4;
    }
    goto L_08878BB8;
L_08878BB8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878BC4u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 219u, 0x08878BC4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878BC4u) goto L_08878BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878BC4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08878BDC;
      }
      goto L_08878BD0;
    }
L_08878BD0:
    aot_gpr_31 = (0x08878BD8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878BD8u) goto L_08878BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878BD8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08878BDC;
L_08878BDC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878BE4;
L_08878BE4:
    aot_gpr_31 = (0x08878BECu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 224u, 0x08878BECu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878BECu) goto L_08878BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878BEC:
    aot_gpr_6 = (0u | 74u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878BFCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878BFCu) goto L_08878BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878BFC:
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26912));
    aot_gpr_31 = (0x08878C08u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C08u) goto L_08878C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878C08:
    aot_gpr_6 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08878C18u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C18u) goto L_08878C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878C18:
    aot_gpr_31 = (0x08878C20u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 228u, 0x08878C20u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C20u) goto L_08878C20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878C20:
    aot_gpr_31 = (0x08878C28u);
    aot_gpr_4 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C28u) goto L_08878C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878C60;
    }
    goto L_08878C34;
L_08878C34:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878C40u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 231u, 0x08878C40u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C40u) goto L_08878C40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878C40:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08878C58;
      }
      goto L_08878C4C;
    }
L_08878C4C:
    aot_gpr_31 = (0x08878C54u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C54u) goto L_08878C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878C54:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08878C58;
L_08878C58:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878C60;
L_08878C60:
    aot_gpr_31 = (0x08878C68u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 236u, 0x08878C68u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878C68u) goto L_08878C68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878C68:
    aot_gpr_4 = (0u | 237u);
    aot_gpr_5 = (0u | 130u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 180u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (17392u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (17076u << 16u);
    aot_gpr_31 = (0x08878CB0u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878CB0u) goto L_08878CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878CB0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878CCCu);
    ctx.gpr[9] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 238u, 0x08878CCCu, 0x08B0C1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878CCCu) goto L_08878CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878CCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08878CE0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 239u, 0x08878CE0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878CE0u) goto L_08878CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878CE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878D18;
    }
    goto L_08878CEC;
L_08878CEC:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08878CF8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 241u, 0x08878CF8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878CF8u) goto L_08878CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878CF8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08878D10;
      }
      goto L_08878D04;
    }
L_08878D04:
    aot_gpr_31 = (0x08878D0Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D0Cu) goto L_08878D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878D0C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08878D10;
L_08878D10:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878D18;
L_08878D18:
    aot_gpr_31 = (0x08878D20u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26904));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 246u, 0x08878D20u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D20u) goto L_08878D20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878D20:
    aot_gpr_6 = (0u | 87u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878D30u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D30u) goto L_08878D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878D30:
    aot_gpr_31 = (0x08878D38u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D38u) goto L_08878D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878D38:
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26896));
    aot_gpr_31 = (0x08878D44u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D44u) goto L_08878D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878D44:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08878D58u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D58u) goto L_08878D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878D58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878D90;
    }
    goto L_08878D64;
L_08878D64:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08878D70u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 252u, 0x08878D70u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D70u) goto L_08878D70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878D70:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08878D88;
      }
      goto L_08878D7C;
    }
L_08878D7C:
    aot_gpr_31 = (0x08878D84u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D84u) goto L_08878D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878D84:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08878D88;
L_08878D88:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878D90;
L_08878D90:
    aot_gpr_31 = (0x08878D98u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 257u, 0x08878D98u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878D98u) goto L_08878D98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878D98:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08878DA8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 258u, 0x08878DA8u, 0x08887BB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 854u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 854u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 854u, 0x08887BB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878DA8u) goto L_08878DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878DA8:
    aot_gpr_6 = (0u | 87u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08878DB8u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878DB8u) goto L_08878DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878DB8:
    ctx.gpr[20] = (0u | 2u);
    aot_gpr_31 = (0x08878DC4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878DC4u) goto L_08878DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878DC4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
      if (branch_taken) {
          goto L_088793C4;
      }
      goto L_08878DCC;
    }
L_08878DCC:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08878DE4u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 262u, 0x08878DE4u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878DE4u) goto L_08878DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26888));
    ctx.gpr[19] = (aot_gpr_28 + static_cast<std::uint32_t>(-26864));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (aot_gpr_28 + static_cast<std::uint32_t>(-26844));
      if (branch_taken) {
          goto L_08878E20;
      }
      goto L_08878DF8;
    }
L_08878DF8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08878E04u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 264u, 0x08878E04u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E04u) goto L_08878E04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878E04:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08878E1C;
      }
      goto L_08878E10;
    }
L_08878E10:
    aot_gpr_31 = (0x08878E18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E18u) goto L_08878E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878E18:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08878E1C;
L_08878E1C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08878E20;
L_08878E20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08878E2Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 269u, 0x08878E2Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E2Cu) goto L_08878E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878E2C:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878E3Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E3Cu) goto L_08878E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878E3C:
    aot_gpr_31 = (0x08878E44u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E44u) goto L_08878E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878E44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08878EB4;
      }
      goto L_08878E5C;
    }
L_08878E5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878E94;
    }
    goto L_08878E68;
L_08878E68:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08878E74u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 274u, 0x08878E74u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E74u) goto L_08878E74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878E74:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08878E8C;
      }
      goto L_08878E80;
    }
L_08878E80:
    aot_gpr_31 = (0x08878E88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E88u) goto L_08878E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878E88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08878E8C;
L_08878E8C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878E94;
L_08878E94:
    aot_gpr_31 = (0x08878E9Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26880));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 279u, 0x08878E9Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878E9Cu) goto L_08878E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878E9C:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878EACu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878EACu) goto L_08878EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878EAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08878F04;
      }
      goto L_08878EB4;
    }
L_08878EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878EEC;
    }
    goto L_08878EC0;
L_08878EC0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08878ECCu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 283u, 0x08878ECCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878ECCu) goto L_08878ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878ECC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08878EE4;
      }
      goto L_08878ED8;
    }
L_08878ED8:
    aot_gpr_31 = (0x08878EE0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878EE0u) goto L_08878EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878EE0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08878EE4;
L_08878EE4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878EEC;
L_08878EEC:
    aot_gpr_31 = (0x08878EF4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26872));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 288u, 0x08878EF4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878EF4u) goto L_08878EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878EF4:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878F04u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F04u) goto L_08878F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 3u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08878F18u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 290u, 0x08878F18u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F18u) goto L_08878F18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08878F50;
    }
    goto L_08878F24;
L_08878F24:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08878F30u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 292u, 0x08878F30u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F30u) goto L_08878F30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878F30:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08878F48;
      }
      goto L_08878F3C;
    }
L_08878F3C:
    aot_gpr_31 = (0x08878F44u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F44u) goto L_08878F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878F44:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08878F48;
L_08878F48:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08878F50;
L_08878F50:
    aot_gpr_31 = (0x08878F58u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 297u, 0x08878F58u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F58u) goto L_08878F58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878F58:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08878F68u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F68u) goto L_08878F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878F68:
    aot_gpr_31 = (0x08878F70u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F70u) goto L_08878F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878F70:
    aot_gpr_31 = (0x08878F78u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 300u, 0x08878F78u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F78u) goto L_08878F78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878F78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08878FC8;
      }
      goto L_08878F80;
    }
L_08878F80:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(680));
    ctx.gpr[17] = (aot_gpr_28 + static_cast<std::uint32_t>(-26856));
    aot_gpr_31 = (0x08878F90u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 302u, 0x08878F90u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878F90u) goto L_08878F90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878F90:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08878FA0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878FA0u) goto L_08878FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878FA0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08878FB0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 304u, 0x08878FB0u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878FB0u) goto L_08878FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878FB0:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08878FC0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878FC0u) goto L_08878FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878FC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08879018;
      }
      goto L_08878FC8;
    }
L_08878FC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26852));
      if (branch_taken) {
          goto L_08878FFC;
      }
      goto L_08878FD4;
    }
L_08878FD4:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08878FE0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 308u, 0x08878FE0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878FE0u) goto L_08878FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08878FE0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08878FF8;
      }
      goto L_08878FEC;
    }
L_08878FEC:
    aot_gpr_31 = (0x08878FF4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08878FF4u) goto L_08878FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08878FF4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08878FF8;
L_08878FF8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08878FFC;
L_08878FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879008u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 313u, 0x08879008u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879008u) goto L_08879008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879008:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879018u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879018u) goto L_08879018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887902Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 315u, 0x0887902Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887902Cu) goto L_0887902C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887902C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879064;
    }
    goto L_08879038;
L_08879038:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879044u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 317u, 0x08879044u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879044u) goto L_08879044;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879044:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887905C;
      }
      goto L_08879050;
    }
L_08879050:
    aot_gpr_31 = (0x08879058u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879058u) goto L_08879058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879058:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887905C;
L_0887905C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879064;
L_08879064:
    aot_gpr_31 = (0x0887906Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 322u, 0x0887906Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887906Cu) goto L_0887906C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887906C:
    aot_gpr_6 = (0u | 126u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887907Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887907Cu) goto L_0887907C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887907C:
    aot_gpr_31 = (0x08879084u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879084u) goto L_08879084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879084:
    aot_gpr_31 = (0x0887908Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 325u, 0x0887908Cu, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887908Cu) goto L_0887908C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887908C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_0887918C;
      }
      goto L_08879094;
    }
L_08879094:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.gpr[21] = (aot_gpr_28 + static_cast<std::uint32_t>(-26836));
    aot_gpr_31 = (0x088790ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 327u, 0x088790ACu, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088790ACu) goto L_088790AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088790AC:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088790B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 328u, 0x088790B8u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088790B8u) goto L_088790B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088790B8:
    if (aot_gpr_2 != ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879108;
    }
    goto L_088790C0;
L_088790C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26828));
      if (branch_taken) {
          goto L_088790F4;
      }
      goto L_088790CC;
    }
L_088790CC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088790D8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 331u, 0x088790D8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088790D8u) goto L_088790D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088790D8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088790F0;
      }
      goto L_088790E4;
    }
L_088790E4:
    aot_gpr_31 = (0x088790ECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088790ECu) goto L_088790EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088790EC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088790F0;
L_088790F0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088790F4;
L_088790F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879100u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 336u, 0x08879100u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879100u) goto L_08879100;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08879148;
      }
      goto L_08879108;
    }
L_08879108:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26820));
      if (branch_taken) {
          goto L_08879138;
      }
      goto L_08879110;
    }
L_08879110:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887911Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 339u, 0x0887911Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887911Cu) goto L_0887911C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887911C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879134;
      }
      goto L_08879128;
    }
L_08879128:
    aot_gpr_31 = (0x08879130u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879130u) goto L_08879130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879130:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879134;
L_08879134:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879138;
L_08879138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879144u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 344u, 0x08879144u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879144u) goto L_08879144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879144:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08879148;
L_08879148:
    aot_gpr_31 = (0x08879150u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 346u, 0x08879150u, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879150u) goto L_08879150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879150:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08879164u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879164u) goto L_08879164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879164:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(686));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    aot_gpr_31 = (0x08879174u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 348u, 0x08879174u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879174u) goto L_08879174;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879174:
    aot_gpr_6 = (0u | 126u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879184u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879184u) goto L_08879184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088791DC;
      }
      goto L_0887918C;
    }
L_0887918C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26852));
      if (branch_taken) {
          goto L_088791C0;
      }
      goto L_08879198;
    }
L_08879198:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x088791A4u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 352u, 0x088791A4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088791A4u) goto L_088791A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088791A4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088791BC;
      }
      goto L_088791B0;
    }
L_088791B0:
    aot_gpr_31 = (0x088791B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088791B8u) goto L_088791B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088791B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088791BC;
L_088791BC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_088791C0;
L_088791C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x088791CCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 357u, 0x088791CCu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088791CCu) goto L_088791CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088791CC:
    aot_gpr_6 = (0u | 126u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088791DCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088791DCu) goto L_088791DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088791DC:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_088791F8;
    }
L_088791F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 5u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887920Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 360u, 0x0887920Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887920Cu) goto L_0887920C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887920C:
    aot_gpr_5 = (ctx.gpr[20] << 4u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_gpr_5 - ctx.gpr[20]);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-19192));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08879254;
      }
      goto L_0887922C;
    }
L_0887922C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879238u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 362u, 0x08879238u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879238u) goto L_08879238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879238:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879250;
      }
      goto L_08879244;
    }
L_08879244:
    aot_gpr_31 = (0x0887924Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887924Cu) goto L_0887924C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887924C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879250;
L_08879250:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08879254;
L_08879254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879260u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26812));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 367u, 0x08879260u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879260u) goto L_08879260;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879260:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879270u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879270u) goto L_08879270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879270:
    aot_gpr_31 = (0x08879278u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879278u) goto L_08879278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088792B0;
    }
    goto L_08879284;
L_08879284:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879290u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 371u, 0x08879290u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879290u) goto L_08879290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879290:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088792A8;
      }
      goto L_0887929C;
    }
L_0887929C:
    aot_gpr_31 = (0x088792A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088792A4u) goto L_088792A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088792A4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088792A8;
L_088792A8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088792B0;
L_088792B0:
    aot_gpr_31 = (0x088792B8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 376u, 0x088792B8u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088792B8u) goto L_088792B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088792B8:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088792CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 377u, 0x088792CCu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088792CCu) goto L_088792CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088792CC:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088792DCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088792DCu) goto L_088792DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088792DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088792F4u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 379u, 0x088792F4u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088792F4u) goto L_088792F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088792F4:
    aot_gpr_4 = (ctx.gpr[20] << 4u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_gpr_4 - ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08879334;
      }
      goto L_0887930C;
    }
L_0887930C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879318u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 381u, 0x08879318u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879318u) goto L_08879318;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879318:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879330;
      }
      goto L_08879324;
    }
L_08879324:
    aot_gpr_31 = (0x0887932Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887932Cu) goto L_0887932C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887932C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879330;
L_08879330:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08879334;
L_08879334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879340u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26804));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 386u, 0x08879340u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879340u) goto L_08879340;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879340:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879350u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879350u) goto L_08879350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879350:
    aot_gpr_31 = (0x08879358u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879358u) goto L_08879358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879390;
    }
    goto L_08879364;
L_08879364:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879370u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 390u, 0x08879370u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879370u) goto L_08879370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879370:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879388;
      }
      goto L_0887937C;
    }
L_0887937C:
    aot_gpr_31 = (0x08879384u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879384u) goto L_08879384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879384:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879388;
L_08879388:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879390;
L_08879390:
    aot_gpr_31 = (0x08879398u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 395u, 0x08879398u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879398u) goto L_08879398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879398:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088793ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 396u, 0x088793ACu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088793ACu) goto L_088793AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088793AC:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088793BCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088793BCu) goto L_088793BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088793BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_088793C4;
    }
L_088793C4:
    aot_gpr_31 = (0x088793CCu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088793CCu) goto L_088793CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088793CC:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088799D4;
      }
      goto L_088793D8;
    }
L_088793D8:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088793F0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 401u, 0x088793F0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088793F0u) goto L_088793F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088793F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26888));
    ctx.gpr[21] = (aot_gpr_28 + static_cast<std::uint32_t>(-26856));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(732));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(790));
      if (branch_taken) {
          goto L_08879430;
      }
      goto L_08879408;
    }
L_08879408:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879414u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 403u, 0x08879414u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879414u) goto L_08879414;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879414:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887942C;
      }
      goto L_08879420;
    }
L_08879420:
    aot_gpr_31 = (0x08879428u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879428u) goto L_08879428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879428:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887942C;
L_0887942C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879430;
L_08879430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887943Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 408u, 0x0887943Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887943Cu) goto L_0887943C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887943C:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887944Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887944Cu) goto L_0887944C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887944C:
    aot_gpr_31 = (0x08879454u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879454u) goto L_08879454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879454:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr_31 = (0x08879460u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879460u) goto L_08879460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879460:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088794C4;
      }
      goto L_08879468;
    }
L_08879468:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088794A4;
    }
    goto L_08879474;
L_08879474:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879480u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 414u, 0x08879480u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879480u) goto L_08879480;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879480:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879498;
      }
      goto L_0887948C;
    }
L_0887948C:
    aot_gpr_31 = (0x08879494u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879494u) goto L_08879494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879494:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879498;
L_08879498:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088794A4;
L_088794A4:
    aot_gpr_31 = (0x088794ACu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26796));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 419u, 0x088794ACu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088794ACu) goto L_088794AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088794AC:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088794BCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088794BCu) goto L_088794BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088794BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887959C;
      }
      goto L_088794C4;
    }
L_088794C4:
    aot_gpr_31 = (0x088794CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088794CCu) goto L_088794CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088794CC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08879534;
      }
      goto L_088794D8;
    }
L_088794D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879514;
    }
    goto L_088794E4;
L_088794E4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088794F0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 425u, 0x088794F0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088794F0u) goto L_088794F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088794F0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879508;
      }
      goto L_088794FC;
    }
L_088794FC:
    aot_gpr_31 = (0x08879504u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879504u) goto L_08879504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879504:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879508;
L_08879508:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879514;
L_08879514:
    aot_gpr_31 = (0x0887951Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26788));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 430u, 0x0887951Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887951Cu) goto L_0887951C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887951C:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887952Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887952Cu) goto L_0887952C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887952C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887959C;
      }
      goto L_08879534;
    }
L_08879534:
    aot_gpr_31 = (0x0887953Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887953Cu) goto L_0887953C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887953C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0887959C;
      }
      goto L_08879548;
    }
L_08879548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26780));
      if (branch_taken) {
          goto L_08879580;
      }
      goto L_08879554;
    }
L_08879554:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879560u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 436u, 0x08879560u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879560u) goto L_08879560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879560:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879578;
      }
      goto L_0887956C;
    }
L_0887956C:
    aot_gpr_31 = (0x08879574u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879574u) goto L_08879574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879574:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879578;
L_08879578:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_08879580;
L_08879580:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887958Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 441u, 0x0887958Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887958Cu) goto L_0887958C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887958C:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887959Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887959Cu) goto L_0887959C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887959C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 3u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088795B0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 443u, 0x088795B0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088795B0u) goto L_088795B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088795B0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26772));
    aot_gpr_31 = (0x088795C0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088795C0u) goto L_088795C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088795C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088795FC;
    }
    goto L_088795CC;
L_088795CC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088795D8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 446u, 0x088795D8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088795D8u) goto L_088795D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088795D8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088795F0;
      }
      goto L_088795E4;
    }
L_088795E4:
    aot_gpr_31 = (0x088795ECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088795ECu) goto L_088795EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088795EC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088795F0;
L_088795F0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088795FC;
L_088795FC:
    aot_gpr_31 = (0x08879604u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26764));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 451u, 0x08879604u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879604u) goto L_08879604;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879604:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879614u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879614u) goto L_08879614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879614:
    aot_gpr_31 = (0x0887961Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887961Cu) goto L_0887961C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887961C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879658;
    }
    goto L_08879628;
L_08879628:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879634u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 455u, 0x08879634u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879634u) goto L_08879634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879634:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887964C;
      }
      goto L_08879640;
    }
L_08879640:
    aot_gpr_31 = (0x08879648u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879648u) goto L_08879648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879648:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887964C;
L_0887964C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879658;
L_08879658:
    aot_gpr_31 = (0x08879660u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 460u, 0x08879660u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879660u) goto L_08879660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879660:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879670u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879670u) goto L_08879670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08879684u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 462u, 0x08879684u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879684u) goto L_08879684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879684:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08879690u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879690u) goto L_08879690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879690:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_088796B4;
      }
      goto L_0887969C;
    }
L_0887969C:
    aot_gpr_31 = (0x088796A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088796A4u) goto L_088796A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088796A4:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_088796B4;
      }
      goto L_088796AC;
    }
L_088796AC:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    goto L_088796B4;
L_088796B4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088796D0;
      }
      goto L_088796BC;
    }
L_088796BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088796D0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 469u, 0x088796D0u, 0x088743ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 64u, 0x088743ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088796D0u) goto L_088796D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088796D0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    aot_gpr_31 = (0x088796DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 470u, 0x088796DCu, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088796DCu) goto L_088796DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088796DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088796ECu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088796ECu) goto L_088796EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088796EC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088796F8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 472u, 0x088796F8u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088796F8u) goto L_088796F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088796F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879730;
    }
    goto L_08879704;
L_08879704:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879710u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 474u, 0x08879710u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879710u) goto L_08879710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879710:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879728;
      }
      goto L_0887971C;
    }
L_0887971C:
    aot_gpr_31 = (0x08879724u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879724u) goto L_08879724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879724:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879728;
L_08879728:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879730;
L_08879730:
    aot_gpr_31 = (0x08879738u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26756));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 479u, 0x08879738u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879738u) goto L_08879738;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879738:
    ctx.gpr[16] = (0u | 126u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0887974Cu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887974Cu) goto L_0887974C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887974C:
    aot_gpr_31 = (0x08879754u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879754u) goto L_08879754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879754:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08879764u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879764u) goto L_08879764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (0u | 5u);
    aot_gpr_4 = (aot_gpr_4 ^ 5u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887977Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 483u, 0x0887977Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887977Cu) goto L_0887977C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887977C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887978Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887978Cu) goto L_0887978C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887978C:
    ctx.gpr[20] = (0u | 6u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[21];
    ctx.gpr[19] = (0u | 65u);
      if (branch_taken) {
          goto L_088797B0;
      }
      goto L_0887979C;
    }
L_0887979C:
    aot_gpr_31 = (0x088797A4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088797A4u) goto L_088797A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088797A4:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[21];
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_088797B4;
      }
      goto L_088797AC;
    }
L_088797AC:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_088797B0;
L_088797B0:
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    goto L_088797B4;
L_088797B4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088797D0;
      }
      goto L_088797BC;
    }
L_088797BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088797D0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 491u, 0x088797D0u, 0x088743ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 64u, 0x088743ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088797D0u) goto L_088797D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088797D0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088797F4;
      }
      goto L_088797E4;
    }
L_088797E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088797F4;
L_088797F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887982C;
    }
    goto L_08879800;
L_08879800:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887980Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 495u, 0x0887980Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887980Cu) goto L_0887980C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887980C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879824;
      }
      goto L_08879818;
    }
L_08879818:
    aot_gpr_31 = (0x08879820u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879820u) goto L_08879820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879820:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879824;
L_08879824:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887982C;
L_0887982C:
    aot_gpr_31 = (0x08879834u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(344));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 500u, 0x08879834u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879834u) goto L_08879834;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879834:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08879844u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 501u, 0x08879844u, 0x08887BB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 854u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 854u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 854u, 0x08887BB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879844u) goto L_08879844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
      if (branch_taken) {
          goto L_08879878;
      }
      goto L_08879850;
    }
L_08879850:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887985Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 503u, 0x0887985Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887985Cu) goto L_0887985C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887985C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879874;
      }
      goto L_08879868;
    }
L_08879868:
    aot_gpr_31 = (0x08879870u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879870u) goto L_08879870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879870:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879874;
L_08879874:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879878;
L_08879878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879884u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26748));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 508u, 0x08879884u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879884u) goto L_08879884;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879884:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879894u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879894u) goto L_08879894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879894:
    aot_gpr_31 = (0x0887989Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887989Cu) goto L_0887989C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887989C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x088798A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088798A8u) goto L_088798A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088798A8:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_088798CC;
      }
      goto L_088798B4;
    }
L_088798B4:
    aot_gpr_31 = (0x088798BCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088798BCu) goto L_088798BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088798BC:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_088798CC;
      }
      goto L_088798C4;
    }
L_088798C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    goto L_088798CC;
L_088798CC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887992C;
      }
      goto L_088798D4;
    }
L_088798D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887990C;
    }
    goto L_088798E0;
L_088798E0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x088798ECu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 518u, 0x088798ECu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088798ECu) goto L_088798EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088798EC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879904;
      }
      goto L_088798F8;
    }
L_088798F8:
    aot_gpr_31 = (0x08879900u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879900u) goto L_08879900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879900:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879904;
L_08879904:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887990C;
L_0887990C:
    aot_gpr_31 = (0x08879914u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26740));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 523u, 0x08879914u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879914u) goto L_08879914;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879914:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879924u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879924u) goto L_08879924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088799CC;
      }
      goto L_0887992C;
    }
L_0887992C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879938u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879938u) goto L_08879938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879938:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0887995C;
      }
      goto L_08879940;
    }
L_08879940:
    aot_gpr_31 = (0x08879948u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879948u) goto L_08879948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879948:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0887995C;
      }
      goto L_08879954;
    }
L_08879954:
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    goto L_0887995C;
L_0887995C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088799BC;
      }
      goto L_08879964;
    }
L_08879964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26780));
      if (branch_taken) {
          goto L_08879998;
      }
      goto L_08879970;
    }
L_08879970:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887997Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 533u, 0x0887997Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887997Cu) goto L_0887997C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887997C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08879994;
      }
      goto L_08879988;
    }
L_08879988:
    aot_gpr_31 = (0x08879990u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879990u) goto L_08879990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879990:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08879994;
L_08879994:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879998;
L_08879998:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x088799A4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 538u, 0x088799A4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088799A4u) goto L_088799A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088799A4:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088799B4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088799B4u) goto L_088799B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088799B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088799CC;
      }
      goto L_088799BC;
    }
L_088799BC:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088799CCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088799CCu) goto L_088799CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088799CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_088799D4;
    }
L_088799D4:
    aot_gpr_31 = (0x088799DCu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088799DCu) goto L_088799DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088799DC:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08879A98;
      }
      goto L_088799E8;
    }
L_088799E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088799FCu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 545u, 0x088799FCu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088799FCu) goto L_088799FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088799FC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26856));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08879A14u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A14u) goto L_08879A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879A14:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(806));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879A24u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 547u, 0x08879A24u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A24u) goto L_08879A24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879A24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26732));
      if (branch_taken) {
          goto L_08879A58;
      }
      goto L_08879A30;
    }
L_08879A30:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879A3Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 549u, 0x08879A3Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A3Cu) goto L_08879A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879A3C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08879A54;
      }
      goto L_08879A48;
    }
L_08879A48:
    aot_gpr_31 = (0x08879A50u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A50u) goto L_08879A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879A50:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08879A54;
L_08879A54:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879A58;
L_08879A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879A64u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 554u, 0x08879A64u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A64u) goto L_08879A64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879A64:
    ctx.gpr[16] = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08879A78u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A78u) goto L_08879A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879A78:
    aot_gpr_31 = (0x08879A80u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A80u) goto L_08879A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879A80:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08879A90u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879A90u) goto L_08879A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_08879A98;
    }
L_08879A98:
    aot_gpr_31 = (0x08879AA0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879AA0u) goto L_08879AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879AA0:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08879C74;
      }
      goto L_08879AAC;
    }
L_08879AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08879AC0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 561u, 0x08879AC0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879AC0u) goto L_08879AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879AC0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26856));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08879ADCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879ADCu) goto L_08879ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879ADC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(822));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08879AECu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 563u, 0x08879AECu, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879AECu) goto L_08879AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879AEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (aot_gpr_28 + static_cast<std::uint32_t>(-26732));
      if (branch_taken) {
          goto L_08879B20;
      }
      goto L_08879AF8;
    }
L_08879AF8:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08879B04u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 565u, 0x08879B04u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B04u) goto L_08879B04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879B04:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08879B1C;
      }
      goto L_08879B10;
    }
L_08879B10:
    aot_gpr_31 = (0x08879B18u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B18u) goto L_08879B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879B18:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08879B1C;
L_08879B1C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08879B20;
L_08879B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879B2Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 570u, 0x08879B2Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B2Cu) goto L_08879B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879B2C:
    ctx.gpr[18] = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08879B40u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B40u) goto L_08879B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879B40:
    aot_gpr_31 = (0x08879B48u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B48u) goto L_08879B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879B48:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08879B58u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B58u) goto L_08879B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879B58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 3u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08879B70u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 574u, 0x08879B70u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B70u) goto L_08879B70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879BA8;
    }
    goto L_08879B7C;
L_08879B7C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879B88u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 576u, 0x08879B88u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B88u) goto L_08879B88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879B88:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08879BA0;
      }
      goto L_08879B94;
    }
L_08879B94:
    aot_gpr_31 = (0x08879B9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879B9Cu) goto L_08879B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879B9C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08879BA0;
L_08879BA0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879BA8;
L_08879BA8:
    aot_gpr_31 = (0x08879BB0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26724));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 581u, 0x08879BB0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879BB0u) goto L_08879BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879BB0:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879BC0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879BC0u) goto L_08879BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879BC0:
    aot_gpr_31 = (0x08879BC8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879BC8u) goto L_08879BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879BC8:
    aot_gpr_31 = (0x08879BD0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879BD0u) goto L_08879BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879BD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08879C1C;
      }
      goto L_08879BD8;
    }
L_08879BD8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(844));
    aot_gpr_31 = (0x08879BE4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879BE4u) goto L_08879BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879BE4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879BF4u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879BF4u) goto L_08879BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879BF4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08879C04u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 588u, 0x08879C04u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C04u) goto L_08879C04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879C04:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879C14u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C14u) goto L_08879C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879C14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08879C6C;
      }
      goto L_08879C1C;
    }
L_08879C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26852));
      if (branch_taken) {
          goto L_08879C50;
      }
      goto L_08879C28;
    }
L_08879C28:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879C34u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 592u, 0x08879C34u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C34u) goto L_08879C34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879C34:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879C4C;
      }
      goto L_08879C40;
    }
L_08879C40:
    aot_gpr_31 = (0x08879C48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C48u) goto L_08879C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879C48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879C4C;
L_08879C4C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08879C50;
L_08879C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879C5Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 597u, 0x08879C5Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C5Cu) goto L_08879C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879C5C:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879C6Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C6Cu) goto L_08879C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_08879C74;
    }
L_08879C74:
    aot_gpr_31 = (0x08879C7Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879C7Cu) goto L_08879C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879C7C:
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08879DF4;
      }
      goto L_08879C88;
    }
L_08879C88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08879CA0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 602u, 0x08879CA0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879CA0u) goto L_08879CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879CA0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(852));
    ctx.gpr[22] = (aot_gpr_28 + static_cast<std::uint32_t>(-26836));
    aot_gpr_31 = (0x08879CB4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 603u, 0x08879CB4u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879CB4u) goto L_08879CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879CB4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879CC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 604u, 0x08879CC0u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879CC0u) goto L_08879CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879CC0:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(868));
      if (branch_taken) {
          goto L_08879D10;
      }
      goto L_08879CC8;
    }
L_08879CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26828));
      if (branch_taken) {
          goto L_08879CFC;
      }
      goto L_08879CD4;
    }
L_08879CD4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879CE0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 607u, 0x08879CE0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879CE0u) goto L_08879CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879CE0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879CF8;
      }
      goto L_08879CEC;
    }
L_08879CEC:
    aot_gpr_31 = (0x08879CF4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879CF4u) goto L_08879CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879CF4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879CF8;
L_08879CF8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879CFC;
L_08879CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879D08u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 612u, 0x08879D08u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D08u) goto L_08879D08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879D08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08879D54;
      }
      goto L_08879D10;
    }
L_08879D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26820));
      if (branch_taken) {
          goto L_08879D44;
      }
      goto L_08879D1C;
    }
L_08879D1C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08879D28u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 615u, 0x08879D28u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D28u) goto L_08879D28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879D28:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08879D40;
      }
      goto L_08879D34;
    }
L_08879D34:
    aot_gpr_31 = (0x08879D3Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D3Cu) goto L_08879D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879D3C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08879D40;
L_08879D40:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08879D44;
L_08879D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879D50u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 620u, 0x08879D50u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D50u) goto L_08879D50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879D50:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08879D54;
L_08879D54:
    aot_gpr_31 = (0x08879D5Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 622u, 0x08879D5Cu, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D5Cu) goto L_08879D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879D5C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08879D70u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D70u) goto L_08879D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879D70:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(852));
    aot_gpr_31 = (0x08879D7Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 624u, 0x08879D7Cu, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D7Cu) goto L_08879D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879DB4;
    }
    goto L_08879D88;
L_08879D88:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879D94u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 626u, 0x08879D94u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879D94u) goto L_08879D94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879D94:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879DAC;
      }
      goto L_08879DA0;
    }
L_08879DA0:
    aot_gpr_31 = (0x08879DA8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879DA8u) goto L_08879DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879DA8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879DAC;
L_08879DAC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879DB4;
L_08879DB4:
    aot_gpr_31 = (0x08879DBCu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26716));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 631u, 0x08879DBCu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879DBCu) goto L_08879DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879DBC:
    ctx.gpr[16] = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08879DD0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879DD0u) goto L_08879DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879DD0:
    aot_gpr_31 = (0x08879DD8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879DD8u) goto L_08879DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879DD8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08879DE8u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879DE8u) goto L_08879DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879DE8:
    ctx.gpr[20] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_08879DF4;
    }
L_08879DF4:
    aot_gpr_31 = (0x08879DFCu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879DFCu) goto L_08879DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879DFC:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08879F08;
      }
      goto L_08879E08;
    }
L_08879E08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08879E1Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 638u, 0x08879E1Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E1Cu) goto L_08879E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879E1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7872)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(900));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(916));
      if (branch_taken) {
          goto L_08879E3C;
      }
      goto L_08879E2C;
    }
L_08879E2C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08879E3Cu);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7864));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 640u, 0x08879E3Cu, 0x089C6318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E3Cu) goto L_08879E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879E3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7868)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08879E6C;
      }
      goto L_08879E48;
    }
L_08879E48:
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26708));
    aot_gpr_31 = (0x08879E54u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 642u, 0x08879E54u, 0x08ADC794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E54u) goto L_08879E54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879E54:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879E64u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E64u) goto L_08879E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879E64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08879E88;
      }
      goto L_08879E6C;
    }
L_08879E6C:
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26704));
    aot_gpr_31 = (0x08879E78u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 645u, 0x08879E78u, 0x08ADC794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E78u) goto L_08879E78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879E78:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879E88u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E88u) goto L_08879E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879E88:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08879E94u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 647u, 0x08879E94u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879E94u) goto L_08879E94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879E94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08879ECC;
    }
    goto L_08879EA0;
L_08879EA0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08879EACu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 649u, 0x08879EACu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879EACu) goto L_08879EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879EAC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08879EC4;
      }
      goto L_08879EB8;
    }
L_08879EB8:
    aot_gpr_31 = (0x08879EC0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879EC0u) goto L_08879EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879EC0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08879EC4;
L_08879EC4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08879ECC;
L_08879ECC:
    aot_gpr_31 = (0x08879ED4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26700));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 654u, 0x08879ED4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879ED4u) goto L_08879ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879ED4:
    ctx.gpr[16] = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08879EE8u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879EE8u) goto L_08879EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879EE8:
    aot_gpr_31 = (0x08879EF0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879EF0u) goto L_08879EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879EF0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08879F00u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F00u) goto L_08879F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_08879F08;
    }
L_08879F08:
    aot_gpr_31 = (0x08879F10u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F10u) goto L_08879F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879F10:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_08879F1C;
    }
L_08879F1C:
    aot_gpr_31 = (0x08879F24u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F24u) goto L_08879F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879F24:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0887A21C;
      }
      goto L_08879F30;
    }
L_08879F30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08879F44u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 663u, 0x08879F44u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F44u) goto L_08879F44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26864));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_28 + static_cast<std::uint32_t>(-26844));
      if (branch_taken) {
          goto L_08879F7C;
      }
      goto L_08879F54;
    }
L_08879F54:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08879F60u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 665u, 0x08879F60u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F60u) goto L_08879F60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879F60:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08879F78;
      }
      goto L_08879F6C;
    }
L_08879F6C:
    aot_gpr_31 = (0x08879F74u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F74u) goto L_08879F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879F74:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08879F78;
L_08879F78:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08879F7C;
L_08879F7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08879F88u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 670u, 0x08879F88u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F88u) goto L_08879F88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879F88:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08879F98u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879F98u) goto L_08879F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879F98:
    aot_gpr_31 = (0x08879FA0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879FA0u) goto L_08879FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879FA0:
    aot_gpr_31 = (0x08879FA8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 673u, 0x08879FA8u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879FA8u) goto L_08879FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879FA8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
      if (branch_taken) {
          goto L_08879FF8;
      }
      goto L_08879FB0;
    }
L_08879FB0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(956));
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26856));
    aot_gpr_31 = (0x08879FC0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 675u, 0x08879FC0u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879FC0u) goto L_08879FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879FC0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08879FD0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879FD0u) goto L_08879FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879FD0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(946));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08879FE0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 677u, 0x08879FE0u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879FE0u) goto L_08879FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08879FE0:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08879FF0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08879FF0u) goto L_08879FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08879FF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887A04C;
      }
      goto L_08879FF8;
    }
L_08879FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (aot_gpr_28 + static_cast<std::uint32_t>(-26852));
      if (branch_taken) {
          goto L_0887A030;
      }
      goto L_0887A004;
    }
L_0887A004:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A010u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 681u, 0x0887A010u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A010u) goto L_0887A010;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A010:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A028;
      }
      goto L_0887A01C;
    }
L_0887A01C:
    aot_gpr_31 = (0x0887A024u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A024u) goto L_0887A024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A024:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_0887A028;
L_0887A028:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    goto L_0887A030;
L_0887A030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A03Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 686u, 0x0887A03Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A03Cu) goto L_0887A03C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A03C:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A04Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A04Cu) goto L_0887A04C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A04C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 3u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A060u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 688u, 0x0887A060u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A060u) goto L_0887A060;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A060:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A098;
    }
    goto L_0887A06C;
L_0887A06C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A078u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 690u, 0x0887A078u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A078u) goto L_0887A078;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A078:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A090;
      }
      goto L_0887A084;
    }
L_0887A084:
    aot_gpr_31 = (0x0887A08Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A08Cu) goto L_0887A08C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A08C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_0887A090;
L_0887A090:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A098;
L_0887A098:
    aot_gpr_31 = (0x0887A0A0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 695u, 0x0887A0A0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A0A0u) goto L_0887A0A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A0A0:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A0B0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A0B0u) goto L_0887A0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A0B0:
    aot_gpr_31 = (0x0887A0B8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A0B8u) goto L_0887A0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A0B8:
    aot_gpr_31 = (0x0887A0C0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 698u, 0x0887A0C0u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A0C0u) goto L_0887A0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A0C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_0887A1C0;
      }
      goto L_0887A0C8;
    }
L_0887A0C8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[21] = (aot_gpr_28 + static_cast<std::uint32_t>(-26836));
    aot_gpr_31 = (0x0887A0DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 700u, 0x0887A0DCu, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A0DCu) goto L_0887A0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A0DC:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A0E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 701u, 0x0887A0E8u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A0E8u) goto L_0887A0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A0E8:
    aot_gpr_4 = (0u | 1u);
    if (aot_gpr_2 != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A13C;
    }
    goto L_0887A0F4;
L_0887A0F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26828));
      if (branch_taken) {
          goto L_0887A128;
      }
      goto L_0887A100;
    }
L_0887A100:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A10Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 704u, 0x0887A10Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A10Cu) goto L_0887A10C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A10C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887A124;
      }
      goto L_0887A118;
    }
L_0887A118:
    aot_gpr_31 = (0x0887A120u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A120u) goto L_0887A120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A120:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887A124;
L_0887A124:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0887A128;
L_0887A128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A134u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 709u, 0x0887A134u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A134u) goto L_0887A134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0887A17C;
      }
      goto L_0887A13C;
    }
L_0887A13C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-26820));
      if (branch_taken) {
          goto L_0887A16C;
      }
      goto L_0887A144;
    }
L_0887A144:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A150u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 712u, 0x0887A150u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A150u) goto L_0887A150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A150:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887A168;
      }
      goto L_0887A15C;
    }
L_0887A15C:
    aot_gpr_31 = (0x0887A164u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A164u) goto L_0887A164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A164:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887A168;
L_0887A168:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0887A16C;
L_0887A16C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A178u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 717u, 0x0887A178u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A178u) goto L_0887A178;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A178:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_0887A17C;
L_0887A17C:
    aot_gpr_31 = (0x0887A184u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 719u, 0x0887A184u, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A184u) goto L_0887A184;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A184:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0887A198u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A198u) goto L_0887A198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A198:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(962));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    aot_gpr_31 = (0x0887A1A8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 721u, 0x0887A1A8u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A1A8u) goto L_0887A1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A1A8:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0887A1B8u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A1B8u) goto L_0887A1B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A1B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887A210;
      }
      goto L_0887A1C0;
    }
L_0887A1C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-26852));
      if (branch_taken) {
          goto L_0887A1F4;
      }
      goto L_0887A1CC;
    }
L_0887A1CC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A1D8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 725u, 0x0887A1D8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A1D8u) goto L_0887A1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A1D8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A1F0;
      }
      goto L_0887A1E4;
    }
L_0887A1E4:
    aot_gpr_31 = (0x0887A1ECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A1ECu) goto L_0887A1EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A1EC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0887A1F0;
L_0887A1F0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0887A1F4;
L_0887A1F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A200u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 730u, 0x0887A200u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A200u) goto L_0887A200;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A200:
    aot_gpr_6 = (0u | 113u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A210u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A210u) goto L_0887A210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A210:
    ctx.gpr[20] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_0887A21C;
    }
L_0887A21C:
    aot_gpr_31 = (0x0887A224u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A224u) goto L_0887A224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A224:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0887A2E0;
      }
      goto L_0887A230;
    }
L_0887A230:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A244u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 735u, 0x0887A244u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A244u) goto L_0887A244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A244:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26856));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x0887A25Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A25Cu) goto L_0887A25C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A25C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1014));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0887A26Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 737u, 0x0887A26Cu, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A26Cu) goto L_0887A26C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A26C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (aot_gpr_28 + static_cast<std::uint32_t>(-26732));
      if (branch_taken) {
          goto L_0887A2A0;
      }
      goto L_0887A278;
    }
L_0887A278:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A284u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 739u, 0x0887A284u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A284u) goto L_0887A284;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A284:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A29C;
      }
      goto L_0887A290;
    }
L_0887A290:
    aot_gpr_31 = (0x0887A298u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A298u) goto L_0887A298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A298:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0887A29C;
L_0887A29C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0887A2A0;
L_0887A2A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A2ACu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 744u, 0x0887A2ACu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A2ACu) goto L_0887A2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A2AC:
    ctx.gpr[17] = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0887A2C0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A2C0u) goto L_0887A2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A2C0:
    aot_gpr_31 = (0x0887A2C8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A2C8u) goto L_0887A2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A2C8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0887A2D8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A2D8u) goto L_0887A2D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_0887A2E0;
    }
L_0887A2E0:
    aot_gpr_31 = (0x0887A2E8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A2E8u) goto L_0887A2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A2E8:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0887A454;
      }
      goto L_0887A2F4;
    }
L_0887A2F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A30Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 751u, 0x0887A30Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A30Cu) goto L_0887A30C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A30C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2233u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-19192));
      if (branch_taken) {
          goto L_0887A344;
      }
      goto L_0887A31C;
    }
L_0887A31C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A328u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 753u, 0x0887A328u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A328u) goto L_0887A328;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A328:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887A340;
      }
      goto L_0887A334;
    }
L_0887A334:
    aot_gpr_31 = (0x0887A33Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A33Cu) goto L_0887A33C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A33C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887A340;
L_0887A340:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0887A344;
L_0887A344:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A350u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26692));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 758u, 0x0887A350u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A350u) goto L_0887A350;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A350:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A360u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A360u) goto L_0887A360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A360:
    aot_gpr_31 = (0x0887A368u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A368u) goto L_0887A368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A368:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887A3EC;
      }
      goto L_0887A380;
    }
L_0887A380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A3B8;
    }
    goto L_0887A38C;
L_0887A38C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A398u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 763u, 0x0887A398u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A398u) goto L_0887A398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A398:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887A3B0;
      }
      goto L_0887A3A4;
    }
L_0887A3A4:
    aot_gpr_31 = (0x0887A3ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A3ACu) goto L_0887A3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A3AC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887A3B0;
L_0887A3B0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A3B8;
L_0887A3B8:
    aot_gpr_31 = (0x0887A3C0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 768u, 0x0887A3C0u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A3C0u) goto L_0887A3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A3C0:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0887A3D4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 769u, 0x0887A3D4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A3D4u) goto L_0887A3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A3D4:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A3E4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A3E4u) goto L_0887A3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A3E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887A450;
      }
      goto L_0887A3EC;
    }
L_0887A3EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A424;
    }
    goto L_0887A3F8;
L_0887A3F8:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A404u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 773u, 0x0887A404u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A404u) goto L_0887A404;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A404:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887A41C;
      }
      goto L_0887A410;
    }
L_0887A410:
    aot_gpr_31 = (0x0887A418u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A418u) goto L_0887A418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A418:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887A41C;
L_0887A41C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A424;
L_0887A424:
    aot_gpr_31 = (0x0887A42Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 778u, 0x0887A42Cu, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A42Cu) goto L_0887A42C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A42C:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0887A440u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 779u, 0x0887A440u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A440u) goto L_0887A440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A440:
    aot_gpr_6 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A450u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A450u) goto L_0887A450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A450:
    ctx.gpr[20] = (0u | 3u);
    goto L_0887A454;
L_0887A454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887A560;
      }
      goto L_0887A46C;
    }
L_0887A46C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A484u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 783u, 0x0887A484u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A484u) goto L_0887A484;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A484:
    aot_gpr_4 = (ctx.gpr[20] << 4u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_gpr_4 - ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887A4C4;
      }
      goto L_0887A49C;
    }
L_0887A49C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A4A8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 785u, 0x0887A4A8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A4A8u) goto L_0887A4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A4A8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887A4C0;
      }
      goto L_0887A4B4;
    }
L_0887A4B4:
    aot_gpr_31 = (0x0887A4BCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A4BCu) goto L_0887A4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A4BC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887A4C0;
L_0887A4C0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0887A4C4;
L_0887A4C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A4D0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26684));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 790u, 0x0887A4D0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A4D0u) goto L_0887A4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A4D0:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A4E0u);
    aot_gpr_5 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A4E0u) goto L_0887A4E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A4E0:
    aot_gpr_31 = (0x0887A4E8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A4E8u) goto L_0887A4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A4E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7076)));
        goto L_0887A520;
    }
    goto L_0887A4F4;
L_0887A4F4:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A500u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 794u, 0x0887A500u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A500u) goto L_0887A500;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A500:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887A518;
      }
      goto L_0887A50C;
    }
L_0887A50C:
    aot_gpr_31 = (0x0887A514u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A514u) goto L_0887A514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A514:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887A518;
L_0887A518:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7076)));
    goto L_0887A520;
L_0887A520:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (2233u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-20960));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0887A54Cu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 799u, 0x0887A54Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A54Cu) goto L_0887A54C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A54C:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A55Cu);
    aot_gpr_5 = (0u | 185u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A55Cu) goto L_0887A55C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A55C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0887A560;
L_0887A560:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887A6DC;
      }
      goto L_0887A578;
    }
L_0887A578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A590u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 803u, 0x0887A590u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A590u) goto L_0887A590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A590:
    aot_gpr_5 = (ctx.gpr[20] << 4u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[19] = (aot_gpr_5 - ctx.gpr[20]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-19192));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887A5D8;
      }
      goto L_0887A5B0;
    }
L_0887A5B0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A5BCu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 805u, 0x0887A5BCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A5BCu) goto L_0887A5BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A5BC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A5D4;
      }
      goto L_0887A5C8;
    }
L_0887A5C8:
    aot_gpr_31 = (0x0887A5D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A5D0u) goto L_0887A5D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A5D0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0887A5D4;
L_0887A5D4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0887A5D8;
L_0887A5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0887A5E4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26676));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 810u, 0x0887A5E4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A5E4u) goto L_0887A5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A5E4:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A5F4u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A5F4u) goto L_0887A5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A5F4:
    aot_gpr_31 = (0x0887A5FCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A5FCu) goto L_0887A5FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A5FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7072)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887A674;
      }
      goto L_0887A608;
    }
L_0887A608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A640;
    }
    goto L_0887A614;
L_0887A614:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A620u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 815u, 0x0887A620u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A620u) goto L_0887A620;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A620:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A638;
      }
      goto L_0887A62C;
    }
L_0887A62C:
    aot_gpr_31 = (0x0887A634u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A634u) goto L_0887A634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A634:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0887A638;
L_0887A638:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A640;
L_0887A640:
    aot_gpr_31 = (0x0887A648u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 820u, 0x0887A648u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A648u) goto L_0887A648;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A648:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0887A65Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 821u, 0x0887A65Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A65Cu) goto L_0887A65C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A65C:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A66Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A66Cu) goto L_0887A66C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A66C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887A6D8;
      }
      goto L_0887A674;
    }
L_0887A674:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A6AC;
    }
    goto L_0887A680;
L_0887A680:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A68Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 825u, 0x0887A68Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A68Cu) goto L_0887A68C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A68C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A6A4;
      }
      goto L_0887A698;
    }
L_0887A698:
    aot_gpr_31 = (0x0887A6A0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A6A0u) goto L_0887A6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A6A0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0887A6A4;
L_0887A6A4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A6AC;
L_0887A6AC:
    aot_gpr_31 = (0x0887A6B4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 830u, 0x0887A6B4u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A6B4u) goto L_0887A6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A6B4:
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0887A6C8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 831u, 0x0887A6C8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A6C8u) goto L_0887A6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A6C8:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(74));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887A6D8u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A6D8u) goto L_0887A6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A6D8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0887A6DC;
L_0887A6DC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A6F4u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 834u, 0x0887A6F4u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A6F4u) goto L_0887A6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A6F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887A70C;
    }
    goto L_0887A700;
L_0887A700:
    aot_gpr_31 = (0x0887A708u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A708u) goto L_0887A708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887A70C;
L_0887A70C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AB74;
      }
      goto L_0887A718;
    }
L_0887A718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887A730;
    }
    goto L_0887A724;
L_0887A724:
    aot_gpr_31 = (0x0887A72Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A72Cu) goto L_0887A72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A72C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887A730;
L_0887A730:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887A768;
      }
      goto L_0887A740;
    }
L_0887A740:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_0887A76C;
    }
    goto L_0887A750;
L_0887A750:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    ctx.gpr[7] = (2213u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887A770;
      }
      goto L_0887A768;
    }
L_0887A768:
    aot_gpr_5 = (0u | 1u);
    goto L_0887A76C;
L_0887A76C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0887A770;
L_0887A770:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0887A7F0;
    }
    goto L_0887A778;
L_0887A778:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887A7B4;
    }
    goto L_0887A788;
L_0887A788:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887A7B4;
    }
    goto L_0887A798;
L_0887A798:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21964));
    if (aot_gpr_6 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0887A7F0;
    }
    goto L_0887A7B0;
L_0887A7B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887A7B4;
L_0887A7B4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887A7EC;
    }
    goto L_0887A7C0;
L_0887A7C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887A7EC;
    }
    goto L_0887A7D0;
L_0887A7D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22528));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887A7F0;
      }
      goto L_0887A7E8;
    }
L_0887A7E8:
    aot_gpr_4 = (0u | 1u);
    goto L_0887A7EC;
L_0887A7EC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887A7F0;
L_0887A7F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AABC;
      }
      goto L_0887A7F8;
    }
L_0887A7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887A80Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 858u, 0x0887A80Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A80Cu) goto L_0887A80C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A80C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887A83C;
      }
      goto L_0887A818;
    }
L_0887A818:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1024), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1025), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1026), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1027), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887A834u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A834u) goto L_0887A834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A834:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887A85C;
      }
      goto L_0887A83C;
    }
L_0887A83C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1028), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1029), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1030), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1031), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887A85Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1028));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A85Cu) goto L_0887A85C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A85C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A898;
    }
    goto L_0887A868;
L_0887A868:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887A874u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 864u, 0x0887A874u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A874u) goto L_0887A874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A874:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887A88C;
      }
      goto L_0887A880;
    }
L_0887A880:
    aot_gpr_31 = (0x0887A888u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A888u) goto L_0887A888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A888:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0887A88C;
L_0887A88C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A898;
L_0887A898:
    aot_gpr_31 = (0x0887A8A0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26668));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 869u, 0x0887A8A0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A8A0u) goto L_0887A8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A8A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_31 = (0x0887A8B0u);
    aot_gpr_6 = (0u | 192u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A8B0u) goto L_0887A8B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A8B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_0887A8E0;
      }
      goto L_0887A8BC;
    }
L_0887A8BC:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1032), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1033), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1034), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1035), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887A8D8u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1032));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A8D8u) goto L_0887A8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A8D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887A900;
      }
      goto L_0887A8E0;
    }
L_0887A8E0:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1037), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1038), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1039), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887A900u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1036));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A900u) goto L_0887A900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887A914;
      }
      goto L_0887A90C;
    }
L_0887A90C:
    aot_gpr_31 = (0x0887A914u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A914u) goto L_0887A914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A914:
    aot_gpr_31 = (0x0887A91Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 877u, 0x0887A91Cu, 0x08A54FECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 256u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 256u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 256u, 0x08A54FECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A91Cu) goto L_0887A91C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A91C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(4188)));
        goto L_0887A96C;
    }
    goto L_0887A928;
L_0887A928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AA64;
      }
      goto L_0887A940;
    }
L_0887A940:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887A954;
      }
      goto L_0887A94C;
    }
L_0887A94C:
    aot_gpr_31 = (0x0887A954u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A954u) goto L_0887A954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A954:
    aot_gpr_31 = (0x0887A95Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 882u, 0x0887A95Cu, 0x08A550C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 267u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 267u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 267u, 0x08A550C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A95Cu) goto L_0887A95C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A95C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AA64;
      }
      goto L_0887A968;
    }
L_0887A968:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(4188)));
    goto L_0887A96C;
L_0887A96C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887AA64;
      }
      goto L_0887A974;
    }
L_0887A974:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AA0C;
      }
      goto L_0887A98C;
    }
L_0887A98C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887A9A0;
      }
      goto L_0887A998;
    }
L_0887A998:
    aot_gpr_31 = (0x0887A9A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A9A0u) goto L_0887A9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A9A0:
    aot_gpr_31 = (0x0887A9A8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 889u, 0x0887A9A8u, 0x08A550C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 267u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 267u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 267u, 0x08A550C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A9A8u) goto L_0887A9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A9A8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AA0C;
      }
      goto L_0887A9B4;
    }
L_0887A9B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887A9EC;
    }
    goto L_0887A9C0;
L_0887A9C0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887A9CCu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 892u, 0x0887A9CCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A9CCu) goto L_0887A9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A9CC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887A9E4;
      }
      goto L_0887A9D8;
    }
L_0887A9D8:
    aot_gpr_31 = (0x0887A9E0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A9E0u) goto L_0887A9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887A9E0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887A9E4;
L_0887A9E4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887A9EC;
L_0887A9EC:
    aot_gpr_31 = (0x0887A9F4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26660));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 897u, 0x0887A9F4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887A9F4u) goto L_0887A9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887A9F4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_31 = (0x0887AA04u);
    aot_gpr_6 = (0u | 208u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA04u) goto L_0887AA04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AA04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887AC24;
      }
      goto L_0887AA0C;
    }
L_0887AA0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887AA44;
    }
    goto L_0887AA18;
L_0887AA18:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887AA24u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 901u, 0x0887AA24u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA24u) goto L_0887AA24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AA24:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887AA3C;
      }
      goto L_0887AA30;
    }
L_0887AA30:
    aot_gpr_31 = (0x0887AA38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA38u) goto L_0887AA38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AA38:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887AA3C;
L_0887AA3C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887AA44;
L_0887AA44:
    aot_gpr_31 = (0x0887AA4Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26652));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 906u, 0x0887AA4Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA4Cu) goto L_0887AA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AA4C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_31 = (0x0887AA5Cu);
    aot_gpr_6 = (0u | 208u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA5Cu) goto L_0887AA5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AA5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887AC24;
      }
      goto L_0887AA64;
    }
L_0887AA64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887AA9C;
    }
    goto L_0887AA70;
L_0887AA70:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887AA7Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 910u, 0x0887AA7Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA7Cu) goto L_0887AA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AA7C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887AA94;
      }
      goto L_0887AA88;
    }
L_0887AA88:
    aot_gpr_31 = (0x0887AA90u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AA90u) goto L_0887AA90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AA90:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887AA94;
L_0887AA94:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887AA9C;
L_0887AA9C:
    aot_gpr_31 = (0x0887AAA4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26644));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 915u, 0x0887AAA4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AAA4u) goto L_0887AAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AAA4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_31 = (0x0887AAB4u);
    aot_gpr_6 = (0u | 208u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AAB4u) goto L_0887AAB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AAB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887AC24;
      }
      goto L_0887AABC;
    }
L_0887AABC:
    aot_gpr_31 = (0x0887AAC4u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 918u, 0x0887AAC4u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AAC4u) goto L_0887AAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AAC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_0887AAF4;
      }
      goto L_0887AAD0;
    }
L_0887AAD0:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1040), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1041), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1042), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1043), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887AAECu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AAECu) goto L_0887AAEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AAEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887AB14;
      }
      goto L_0887AAF4;
    }
L_0887AAF4:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1044), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1045), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1046), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1047), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887AB14u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1044));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB14u) goto L_0887AB14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AB14:
    aot_gpr_31 = (0x0887AB1Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB1Cu) goto L_0887AB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AB1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887AB54;
    }
    goto L_0887AB28;
L_0887AB28:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887AB34u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 925u, 0x0887AB34u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB34u) goto L_0887AB34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AB34:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887AB4C;
      }
      goto L_0887AB40;
    }
L_0887AB40:
    aot_gpr_31 = (0x0887AB48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB48u) goto L_0887AB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AB48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887AB4C;
L_0887AB4C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887AB54;
L_0887AB54:
    aot_gpr_31 = (0x0887AB5Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26636));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 930u, 0x0887AB5Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB5Cu) goto L_0887AB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AB5C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887AB6Cu);
    aot_gpr_6 = (0u | 210u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB6Cu) goto L_0887AB6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AB6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887AC24;
      }
      goto L_0887AB74;
    }
L_0887AB74:
    aot_gpr_31 = (0x0887AB7Cu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 933u, 0x0887AB7Cu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AB7Cu) goto L_0887AB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AB7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_0887ABAC;
      }
      goto L_0887AB88;
    }
L_0887AB88:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1048), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1049), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1050), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1051), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887ABA4u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1048));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ABA4u) goto L_0887ABA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887ABA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887ABCC;
      }
      goto L_0887ABAC;
    }
L_0887ABAC:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1052), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1053), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1054), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1055), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887ABCCu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ABCCu) goto L_0887ABCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887ABCC:
    aot_gpr_31 = (0x0887ABD4u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ABD4u) goto L_0887ABD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887ABD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0887AC0C;
    }
    goto L_0887ABE0;
L_0887ABE0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887ABECu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 940u, 0x0887ABECu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ABECu) goto L_0887ABEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887ABEC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887AC04;
      }
      goto L_0887ABF8;
    }
L_0887ABF8:
    aot_gpr_31 = (0x0887AC00u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AC00u) goto L_0887AC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AC00:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887AC04;
L_0887AC04:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0887AC0C;
L_0887AC0C:
    aot_gpr_31 = (0x0887AC14u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26628));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 945u, 0x0887AC14u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AC14u) goto L_0887AC14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AC14:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887AC24u);
    aot_gpr_6 = (0u | 210u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AC24u) goto L_0887AC24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AC24:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(1100), aot_run_words);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887AC54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0887AC94;
      }
      goto L_0887AC88;
    }
L_0887AC88:
    aot_gpr_31 = (0x0887AC90u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AC90u) goto L_0887AC90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AC90:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887AC94;
L_0887AC94:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887ACA0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 951u, 0x0887ACA0u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ACA0u) goto L_0887ACA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887ACA0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887ACACu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ACACu) goto L_0887ACAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887ACAC:
    aot_gpr_31 = (0x0887ACB4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 953u, 0x0887ACB4u, 0x0898C008u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 2u, 0x0898C008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ACB4u) goto L_0887ACB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887ACB4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0887AD18;
      }
      goto L_0887ACBC;
    }
L_0887ACBC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
        goto L_0887ACD8;
    }
    goto L_0887ACC8;
L_0887ACC8:
    aot_gpr_31 = (0x0887ACD0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ACD0u) goto L_0887ACD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887ACD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    goto L_0887ACD8;
L_0887ACD8:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0887AD00;
      }
      goto L_0887ACE0;
    }
L_0887ACE0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887AD04;
    }
    goto L_0887ACEC;
L_0887ACEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887AD08;
      }
      goto L_0887AD00;
    }
L_0887AD00:
    aot_gpr_4 = (0u | 1u);
    goto L_0887AD04;
L_0887AD04:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887AD08;
L_0887AD08:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887AD18;
      }
      goto L_0887AD10;
    }
L_0887AD10:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0887AD78;
      }
      goto L_0887AD18;
    }
L_0887AD18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0887AD2C;
      }
      goto L_0887AD24;
    }
L_0887AD24:
    aot_gpr_31 = (0x0887AD2Cu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AD2C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0887AD48;
      }
      goto L_0887AD3C;
    }
L_0887AD3C:
    aot_gpr_31 = (0x0887AD44u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AD44u) goto L_0887AD44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AD44:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887AD48;
L_0887AD48:
    aot_gpr_31 = (0x0887AD50u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 970u, 0x0887AD50u, 0x08A53F2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 764u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 764u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AD50u) goto L_0887AD50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AD50:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x0887AD60u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 971u, 0x0887AD60u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AD60u) goto L_0887AD60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AD60:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x0887AD70u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 972u, 0x0887AD70u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AD70u) goto L_0887AD70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AD70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887B048;
      }
      goto L_0887AD78;
    }
L_0887AD78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0887AF00;
      }
      goto L_0887AD84;
    }
L_0887AD84:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(270));
    goto L_0887AD94;
L_0887AD94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0887ADA8;
      }
      goto L_0887ADA0;
    }
L_0887ADA0:
    aot_gpr_31 = (0x0887ADA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ADA8u) goto L_0887ADA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887ADA8:
    aot_gpr_31 = (0x0887ADB0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 978u, 0x0887ADB0u, 0x08A54F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887ADB0u) goto L_0887ADB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887ADB0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887ADE8;
      }
      goto L_0887ADC4;
    }
L_0887ADC4:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_5 & 255u);
        goto L_0887ADEC;
    }
    goto L_0887ADD4;
L_0887ADD4:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887ADEC;
      }
      goto L_0887ADE4;
    }
L_0887ADE4:
    aot_gpr_5 = (0u | 1u);
    goto L_0887ADE8;
L_0887ADE8:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0887ADEC;
L_0887ADEC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 255u);
      if (branch_taken) {
          goto L_0887AE04;
      }
      goto L_0887ADF4;
    }
L_0887ADF4:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887AEF0;
      }
      goto L_0887AE04;
    }
L_0887AE04:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887AE54;
      }
      goto L_0887AE30;
    }
L_0887AE30:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_5 & 255u);
        goto L_0887AE58;
    }
    goto L_0887AE40;
L_0887AE40:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887AE58;
      }
      goto L_0887AE50;
    }
L_0887AE50:
    aot_gpr_5 = (0u | 1u);
    goto L_0887AE54;
L_0887AE54:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0887AE58;
L_0887AE58:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0887AEEC;
      }
      goto L_0887AE68;
    }
L_0887AE68:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887AEEC;
      }
      goto L_0887AE74;
    }
L_0887AE74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0887AE8C;
      }
      goto L_0887AE80;
    }
L_0887AE80:
    aot_gpr_31 = (0x0887AE88u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AE88u) goto L_0887AE88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AE88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887AE8C;
L_0887AE8C:
    aot_gpr_31 = (0x0887AE94u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 996u, 0x0887AE94u, 0x08A54F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AE94u) goto L_0887AE94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AE94:
    ctx.gpr[9] = (3u << 16u);
    ctx.gpr[10] = (3u << 16u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 66u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3392));
    aot_gpr_31 = (0x0887AEC0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(3392));
    ctx.pc = 0x08B7300Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AEC0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), aot_gpr_2);
      if (branch_taken) {
          goto L_0887AEE0;
      }
      goto L_0887AECC;
    }
L_0887AECC:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x0887AEDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 999u, 0x0887AEDCu, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887AEDCu) goto L_0887AEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887AEDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    goto L_0887AEE0;
L_0887AEE0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_0887AF00;
      }
      goto L_0887AEEC;
    }
L_0887AEEC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0887AEF0;
L_0887AEF0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887AD94;
      }
      goto L_0887AEFC;
    }
L_0887AEFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    goto L_0887AF00;
L_0887AF00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0887B038;
      }
      goto L_0887AF08;
    }
L_0887AF08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_0887AF4C;
      }
      goto L_0887AF1C;
    }
L_0887AF1C:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887AF28u);
    aot_gpr_6 = (0u | 1u);
    ctx.pc = 0x08B73054u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AF28:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    aot_gpr_4 = (32833u << 16u);
      if (branch_taken) {
          goto L_0887AF40;
      }
      goto L_0887AF34;
    }
L_0887AF34:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_0887AF4C;
      }
      goto L_0887AF40;
    }
L_0887AF40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_0887AF4C;
      }
      goto L_0887AF48;
    }
L_0887AF48:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[20]);
    goto L_0887AF4C;
L_0887AF4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_0887AFA4;
      }
      goto L_0887AF58;
    }
L_0887AF58:
    aot_gpr_4 = (0u | 136u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0887AF7Cu);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08B72FF4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AF7C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_5 = (32833u << 16u);
      if (branch_taken) {
          goto L_0887AF94;
      }
      goto L_0887AF88;
    }
L_0887AF88:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887AFA0;
      }
      goto L_0887AF94;
    }
L_0887AF94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0887AFA0;
      }
      goto L_0887AF9C;
    }
L_0887AF9C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[21]);
    goto L_0887AFA0;
L_0887AFA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    goto L_0887AFA4;
L_0887AFA4:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_0887AFEC;
      }
      goto L_0887AFAC;
    }
L_0887AFAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887AFBCu);
    aot_gpr_6 = (0u | 1u);
    ctx.pc = 0x08B7301Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AFBC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_5 = (32833u << 16u);
      if (branch_taken) {
          goto L_0887AFD4;
      }
      goto L_0887AFC8;
    }
L_0887AFC8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887AFEC;
      }
      goto L_0887AFD4;
    }
L_0887AFD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0887AFEC;
      }
      goto L_0887AFDC;
    }
L_0887AFDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_gpr_31 = (0x0887AFE8u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887AFE8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    goto L_0887AFEC;
L_0887AFEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    aot_gpr_4 = (32833u << 16u);
      if (branch_taken) {
          goto L_0887B000;
      }
      goto L_0887AFF4;
    }
L_0887AFF4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_0887B018;
      }
      goto L_0887B000;
    }
L_0887B000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 51 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B038;
      }
      goto L_0887B018;
    }
L_0887B018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_gpr_31 = (0x0887B024u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B024:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x0887B038u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1030u, 0x0887B038u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B038u) goto L_0887B038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B038:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887B048;
      }
      goto L_0887B040;
    }
L_0887B040:
    aot_gpr_31 = (0x0887B048u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1032u, 0x0887B048u, 0x0887C998u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 172u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 172u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 172u, 0x0887C998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B048u) goto L_0887B048;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B048:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_run_words);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887B070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0887B0B0;
      }
      goto L_0887B098;
    }
L_0887B098:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0887B0A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1035u, 0x0887B0A8u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B0A8u) goto L_0887B0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B0A8:
    aot_gpr_31 = (0x0887B0B0u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B0B0u) goto L_0887B0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B0B0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0887B0BCu);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1037u, 0x0887B0BCu, 0x0882E704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 553u, 0x0882E704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B0BCu) goto L_0887B0BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B0BC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
        goto L_0887B0D8;
    }
    goto L_0887B0C8;
L_0887B0C8:
    aot_gpr_31 = (0x0887B0D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B0D0u) goto L_0887B0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B0D0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    goto L_0887B0D8;
L_0887B0D8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
      if (branch_taken) {
          goto L_0887B108;
      }
      goto L_0887B0E8;
    }
L_0887B0E8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[8] != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_0887B10C;
    }
    goto L_0887B0F4;
L_0887B0F4:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (2213u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887B110;
      }
      goto L_0887B108;
    }
L_0887B108:
    aot_gpr_5 = (0u | 1u);
    goto L_0887B10C;
L_0887B10C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0887B110;
L_0887B110:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0887B170;
    }
    goto L_0887B118;
L_0887B118:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_0887B140;
      }
      goto L_0887B120;
    }
L_0887B120:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887B140;
      }
      goto L_0887B12C;
    }
L_0887B12C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2213u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(21964));
    if (ctx.gpr[8] == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0887B170;
    }
    goto L_0887B140;
L_0887B140:
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887B16C;
    }
    goto L_0887B148;
L_0887B148:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887B16C;
    }
    goto L_0887B154;
L_0887B154:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22528));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887B170;
      }
      goto L_0887B168;
    }
L_0887B168:
    aot_gpr_4 = (0u | 1u);
    goto L_0887B16C;
L_0887B16C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887B170;
L_0887B170:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887B20C;
      }
      goto L_0887B178;
    }
L_0887B178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887B1C0;
      }
      goto L_0887B188;
    }
L_0887B188:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_0887B1A4;
      }
      goto L_0887B190;
    }
L_0887B190:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x0887B1A0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1058u, 0x0887B1A0u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B1A0u) goto L_0887B1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B1A0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0887B1A4;
L_0887B1A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B1B8;
      }
      goto L_0887B1B0;
    }
L_0887B1B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_6);
      if (branch_taken) {
          goto L_0887B1C0;
      }
      goto L_0887B1B8;
    }
L_0887B1B8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_0887B1C0;
L_0887B1C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887B20C;
      }
      goto L_0887B1D0;
    }
L_0887B1D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_0887B1EC;
      }
      goto L_0887B1D8;
    }
L_0887B1D8:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x0887B1E8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1065u, 0x0887B1E8u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B1E8u) goto L_0887B1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B1E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0887B1EC;
L_0887B1EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887B204;
      }
      goto L_0887B1FC;
    }
L_0887B1FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          goto L_0887B20C;
      }
      goto L_0887B204;
    }
L_0887B204:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_0887B20C;
L_0887B20C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-26620)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0887B23C;
      }
      goto L_0887B21C;
    }
L_0887B21C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0887B23C;
      }
      goto L_0887B228;
    }
L_0887B228:
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
      if (branch_taken) {
          goto L_0887B23C;
      }
      goto L_0887B238;
    }
L_0887B238:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    goto L_0887B23C;
L_0887B23C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-26620), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887B270;
      }
      goto L_0887B254;
    }
L_0887B254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_0887B25C;
L_0887B25C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887B25C;
      }
      goto L_0887B26C;
    }
L_0887B26C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_6);
    goto L_0887B270;
L_0887B270:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
        goto L_0887B28C;
    }
    goto L_0887B27C;
L_0887B27C:
    aot_gpr_31 = (0x0887B284u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B284u) goto L_0887B284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B284:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    goto L_0887B28C;
L_0887B28C:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0887B2B4;
      }
      goto L_0887B294;
    }
L_0887B294:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887B2B8;
    }
    goto L_0887B2A0;
L_0887B2A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887B2BC;
      }
      goto L_0887B2B4;
    }
L_0887B2B4:
    aot_gpr_4 = (0u | 1u);
    goto L_0887B2B8;
L_0887B2B8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887B2BC;
L_0887B2BC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887B680;
      }
      goto L_0887B2C4;
    }
L_0887B2C4:
    aot_gpr_31 = (0x0887B2CCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B2CCu) goto L_0887B2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B2CC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887B2EC;
      }
      goto L_0887B2DC;
    }
L_0887B2DC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887B2F0;
      }
      goto L_0887B2E8;
    }
L_0887B2E8:
    aot_gpr_5 = (0u | 1u);
    goto L_0887B2EC;
L_0887B2EC:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0887B2F0;
L_0887B2F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887B3B8;
      }
      goto L_0887B2F8;
    }
L_0887B2F8:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 196u);
    aot_gpr_31 = (0x0887B308u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1093u, 0x0887B308u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B308u) goto L_0887B308;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887B340;
      }
      goto L_0887B318;
    }
L_0887B318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B330;
      }
      goto L_0887B324;
    }
L_0887B324:
    aot_gpr_31 = (0x0887B32Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B32Cu) goto L_0887B32C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B32C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B330;
L_0887B330:
    aot_gpr_31 = (0x0887B338u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1098u, 0x0887B338u, 0x08A54034u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 4u, 0x08A54034u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B338u) goto L_0887B338;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B338:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          goto L_0887B3B8;
      }
      goto L_0887B340;
    }
L_0887B340:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0887B348;
L_0887B348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
        goto L_0887B360;
    }
    goto L_0887B354;
L_0887B354:
    aot_gpr_31 = (0x0887B35Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B35Cu) goto L_0887B35C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B35C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B360;
L_0887B360:
    aot_gpr_31 = (0x0887B368u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1104u, 0x0887B368u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B368u) goto L_0887B368;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B368:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0887B3A8;
      }
      goto L_0887B370;
    }
L_0887B370:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_0887B3A4;
      }
      goto L_0887B37C;
    }
L_0887B37C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B394;
      }
      goto L_0887B388;
    }
L_0887B388:
    aot_gpr_31 = (0x0887B390u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B390u) goto L_0887B390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B394;
L_0887B394:
    aot_gpr_31 = (0x0887B39Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1110u, 0x0887B39Cu, 0x08A545ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 86u, 0x08A545ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B39Cu) goto L_0887B39C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B39C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887B3B8;
      }
      goto L_0887B3A4;
    }
L_0887B3A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0887B3A8;
L_0887B3A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B348;
      }
      goto L_0887B3B8;
    }
L_0887B3B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0887B3D0;
      }
      goto L_0887B3C4;
    }
L_0887B3C4:
    aot_gpr_31 = (0x0887B3CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B3CCu) goto L_0887B3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B3CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B3D0;
L_0887B3D0:
    aot_gpr_31 = (0x0887B3D8u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1117u, 0x0887B3D8u, 0x08A53CC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 730u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 730u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 730u, 0x08A53CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B3D8u) goto L_0887B3D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B3D8:
    aot_gpr_31 = (0x0887B3E0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B3E0u) goto L_0887B3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B3E0:
    aot_gpr_31 = (0x0887B3E8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1119u, 0x0887B3E8u, 0x0898C008u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 2u, 0x0898C008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B3E8u) goto L_0887B3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B3E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_0887B440;
      }
      goto L_0887B3F0;
    }
L_0887B3F0:
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
        goto L_0887B408;
    }
    goto L_0887B3F8;
L_0887B3F8:
    aot_gpr_31 = (0x0887B400u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B400u) goto L_0887B400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B400:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
    goto L_0887B408;
L_0887B408:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0887B430;
      }
      goto L_0887B410;
    }
L_0887B410:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887B434;
    }
    goto L_0887B41C;
L_0887B41C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887B438;
      }
      goto L_0887B430;
    }
L_0887B430:
    aot_gpr_4 = (0u | 1u);
    goto L_0887B434;
L_0887B434:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887B438;
L_0887B438:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B4E0;
      }
      goto L_0887B440;
    }
L_0887B440:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0887B454;
      }
      goto L_0887B448;
    }
L_0887B448:
    aot_gpr_31 = (0x0887B450u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B450u) goto L_0887B450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B450:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B454;
L_0887B454:
    aot_gpr_31 = (0x0887B45Cu);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1133u, 0x0887B45Cu, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B45Cu) goto L_0887B45C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B45C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0887B4AC;
      }
      goto L_0887B464;
    }
L_0887B464:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B47C;
      }
      goto L_0887B470;
    }
L_0887B470:
    aot_gpr_31 = (0x0887B478u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B478u) goto L_0887B478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B47C;
L_0887B47C:
    aot_gpr_31 = (0x0887B484u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1138u, 0x0887B484u, 0x08A546D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 93u, 0x08A546D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B484u) goto L_0887B484;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0887B498;
      }
      goto L_0887B490;
    }
L_0887B490:
    aot_gpr_31 = (0x0887B498u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0887B4AC;
      }
      goto L_0887B4A4;
    }
L_0887B4A4:
    aot_gpr_31 = (0x0887B4ACu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B4AC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x0887B4C8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1143u, 0x0887B4C8u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B4C8u) goto L_0887B4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B4C8:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x0887B4D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1144u, 0x0887B4D8u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B4D8u) goto L_0887B4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B4D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          goto L_0887B680;
      }
      goto L_0887B4E0;
    }
L_0887B4E0:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3164)));
        goto L_0887B4F8;
    }
    goto L_0887B4E8;
L_0887B4E8:
    aot_gpr_31 = (0x0887B4F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B4F0u) goto L_0887B4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B4F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3164)));
    goto L_0887B4F8;
L_0887B4F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887B554;
      }
      goto L_0887B500;
    }
L_0887B500:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B52C;
      }
      goto L_0887B50C;
    }
L_0887B50C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_0887B52C;
      }
      goto L_0887B518;
    }
L_0887B518:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2213u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23108));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_0887B558;
    }
    goto L_0887B52C;
L_0887B52C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887B55C;
      }
      goto L_0887B534;
    }
L_0887B534:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887B55C;
      }
      goto L_0887B540;
    }
L_0887B540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23100));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887B55C;
      }
      goto L_0887B554;
    }
L_0887B554:
    aot_gpr_5 = (0u | 1u);
    goto L_0887B558;
L_0887B558:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0887B55C;
L_0887B55C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887B680;
      }
      goto L_0887B564;
    }
L_0887B564:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887B578u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B578u) goto L_0887B578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B578:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B594;
      }
      goto L_0887B588;
    }
L_0887B588:
    aot_gpr_31 = (0x0887B590u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B590u) goto L_0887B590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B594;
L_0887B594:
    aot_gpr_31 = (0x0887B59Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1163u, 0x0887B59Cu, 0x08A551F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 283u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 283u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 283u, 0x08A551F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B59Cu) goto L_0887B59C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B59C:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27320));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27312));
    aot_gpr_31 = (0x0887B5ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1164u, 0x0887B5ACu, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B5ACu) goto L_0887B5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B5AC:
    aot_gpr_31 = (0x0887B5B4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1165u, 0x0887B5B4u, 0x0886F9ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 589u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 589u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 589u, 0x0886F9ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B5B4u) goto L_0887B5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B5B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
        goto L_0887B5D0;
    }
    goto L_0887B5C0;
L_0887B5C0:
    aot_gpr_31 = (0x0887B5C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B5C8u) goto L_0887B5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B5C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    goto L_0887B5D0;
L_0887B5D0:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887B680;
      }
      goto L_0887B5D8;
    }
L_0887B5D8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B5EC;
      }
      goto L_0887B5E0;
    }
L_0887B5E0:
    aot_gpr_31 = (0x0887B5E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B5E8u) goto L_0887B5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B5E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B5EC;
L_0887B5EC:
    aot_gpr_31 = (0x0887B5F4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1173u, 0x0887B5F4u, 0x08A54F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B5F4u) goto L_0887B5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B5F4:
    ctx.gpr[7] = (3u << 16u);
    ctx.gpr[8] = (3u << 16u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 66u);
    aot_gpr_6 = (0u | 16384u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3392));
    aot_gpr_31 = (0x0887B61Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3392));
    ctx.pc = 0x08B73044u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B61C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_2);
      if (branch_taken) {
          goto L_0887B634;
      }
      goto L_0887B624;
    }
L_0887B624:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x0887B634u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1176u, 0x0887B634u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B634u) goto L_0887B634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B634:
    aot_gpr_31 = (0x0887B63Cu);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B63C:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x0887B650u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B650:
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
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-27284), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0887B680;
L_0887B680:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887B698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7872)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(244), aot_run_words); }
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(7864));
    ctx.gpr[22] = (0u | 13u);
    ctx.gpr[21] = (0u | 103u);
    ctx.gpr[19] = (0u | 283u);
    ctx.gpr[18] = (0u | 393u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(216), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(264), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), aot_gpr_5);
      if (branch_taken) {
          goto L_0887B710;
      }
      goto L_0887B704;
    }
L_0887B704:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7872), aot_gpr_6);
    aot_gpr_31 = (0x0887B710u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1182u, 0x0887B710u, 0x089C6318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B710u) goto L_0887B710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B710:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7868)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_0887B720;
      }
      goto L_0887B71C;
    }
L_0887B71C:
    ctx.gpr[18] = (0u | 385u);
    goto L_0887B720;
L_0887B720:
    aot_gpr_31 = (0x0887B728u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1185u, 0x0887B728u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B728u) goto L_0887B728;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B728:
    aot_gpr_31 = (0x0887B730u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B730u) goto L_0887B730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B730:
    aot_gpr_4 = (0u | 237u);
    aot_gpr_5 = (0u | 130u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 180u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0887B758u);
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B758u) goto L_0887B758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B758:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26612));
      if (branch_taken) {
          goto L_0887B790;
      }
      goto L_0887B764;
    }
L_0887B764:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887B770u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1189u, 0x0887B770u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B770u) goto L_0887B770;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B770:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887B788;
      }
      goto L_0887B77C;
    }
L_0887B77C:
    aot_gpr_31 = (0x0887B784u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B784u) goto L_0887B784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B784:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887B788;
L_0887B788:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26612));
    goto L_0887B790;
L_0887B790:
    aot_gpr_31 = (0x0887B798u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1194u, 0x0887B798u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B798u) goto L_0887B798;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B798:
    aot_gpr_6 = (0u | 48u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887B7A8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B7A8u) goto L_0887B7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B7A8:
    aot_gpr_31 = (0x0887B7B0u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1196u, 0x0887B7B0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B7B0u) goto L_0887B7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B7B0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[23] = (0u | 72u);
      if (branch_taken) {
          goto L_0887B7E4;
      }
      goto L_0887B7BC;
    }
L_0887B7BC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887B7C8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1198u, 0x0887B7C8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B7C8u) goto L_0887B7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B7C8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887B7E0;
      }
      goto L_0887B7D4;
    }
L_0887B7D4:
    aot_gpr_31 = (0x0887B7DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B7DCu) goto L_0887B7DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B7DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887B7E0;
L_0887B7E0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0887B7E4;
L_0887B7E4:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26604));
    aot_gpr_31 = (0x0887B7F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1203u, 0x0887B7F4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B7F4u) goto L_0887B7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B7F4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0887B804u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B804u) goto L_0887B804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B804:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
        goto L_0887B83C;
    }
    goto L_0887B810;
L_0887B810:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887B81Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1206u, 0x0887B81Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B81Cu) goto L_0887B81C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B81C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887B834;
      }
      goto L_0887B828;
    }
L_0887B828:
    aot_gpr_31 = (0x0887B830u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B830u) goto L_0887B830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B830:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887B834;
L_0887B834:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    goto L_0887B83C;
L_0887B83C:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26928));
    aot_gpr_31 = (0x0887B848u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1211u, 0x0887B848u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B848u) goto L_0887B848;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B848:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0887B858u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B858u) goto L_0887B858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B858:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
        goto L_0887B890;
    }
    goto L_0887B864;
L_0887B864:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887B870u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1214u, 0x0887B870u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B870u) goto L_0887B870;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B870:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887B888;
      }
      goto L_0887B87C;
    }
L_0887B87C:
    aot_gpr_31 = (0x0887B884u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B884u) goto L_0887B884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B884:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887B888;
L_0887B888:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    goto L_0887B890;
L_0887B890:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26596));
    aot_gpr_31 = (0x0887B89Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1219u, 0x0887B89Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B89Cu) goto L_0887B89C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B89C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0887B8ACu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B8ACu) goto L_0887B8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B8AC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
        goto L_0887B8E4;
    }
    goto L_0887B8B8;
L_0887B8B8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887B8C4u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1222u, 0x0887B8C4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B8C4u) goto L_0887B8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B8C4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887B8DC;
      }
      goto L_0887B8D0;
    }
L_0887B8D0:
    aot_gpr_31 = (0x0887B8D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B8D8u) goto L_0887B8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B8D8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887B8DC;
L_0887B8DC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    goto L_0887B8E4;
L_0887B8E4:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26588));
    aot_gpr_31 = (0x0887B8F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1227u, 0x0887B8F0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B8F0u) goto L_0887B8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B8F0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887B900u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B900u) goto L_0887B900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B900:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (0u | 80u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0887B964;
      }
      goto L_0887B918;
    }
L_0887B918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887B93C;
      }
      goto L_0887B92C;
    }
L_0887B92C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(212), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), aot_gpr_4);
    goto L_0887B93C;
L_0887B93C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887B974;
      }
      goto L_0887B94C;
    }
L_0887B94C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(212), aot_gpr_4);
      if (branch_taken) {
          goto L_0887B974;
      }
      goto L_0887B964;
    }
L_0887B964:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(212), aot_gpr_4);
    goto L_0887B974;
L_0887B974:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-26940));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26936));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-26920));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-26896));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26580));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(5824));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), aot_gpr_6);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), aot_gpr_4);
    ctx.gpr[16] = (0u | 1u);
    goto L_0887B9C0;
L_0887B9C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B9D8;
      }
      goto L_0887B9CC;
    }
L_0887B9CC:
    aot_gpr_31 = (0x0887B9D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B9D4u) goto L_0887B9D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887B9D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    goto L_0887B9D8;
L_0887B9D8:
    aot_gpr_31 = (0x0887B9E0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1239u, 0x0887B9E0u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887B9E0u) goto L_0887B9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887B9E0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0887BCDC;
      }
      goto L_0887B9EC;
    }
L_0887B9EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887BCD8;
      }
      goto L_0887BA00;
    }
L_0887BA00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887BCD8;
      }
      goto L_0887BA10;
    }
L_0887BA10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0887BA2C;
      }
      goto L_0887BA1C;
    }
L_0887BA1C:
    aot_gpr_31 = (0x0887BA24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BA24u) goto L_0887BA24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BA24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0887BA2C;
L_0887BA2C:
    aot_gpr_31 = (0x0887BA34u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1246u, 0x0887BA34u, 0x08A54B14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 180u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 180u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 180u, 0x08A54B14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BA34u) goto L_0887BA34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887BA60;
      }
      goto L_0887BA48;
    }
L_0887BA48:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr_31 = (0x0887BA58u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BA58u) goto L_0887BA58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BA58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887BABC;
      }
      goto L_0887BA60;
    }
L_0887BA60:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
        goto L_0887BA9C;
    }
    goto L_0887BA6C;
L_0887BA6C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887BA78u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1251u, 0x0887BA78u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BA78u) goto L_0887BA78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BA78:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887BA90;
      }
      goto L_0887BA84;
    }
L_0887BA84:
    aot_gpr_31 = (0x0887BA8Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BA8Cu) goto L_0887BA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BA8C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887BA90;
L_0887BA90:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    goto L_0887BA9C;
L_0887BA9C:
    aot_gpr_31 = (0x0887BAA4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1256u, 0x0887BAA4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BAA4u) goto L_0887BAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BAA4:
    aot_gpr_31 = (0x0887BAACu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1257u, 0x0887BAACu, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BAACu) goto L_0887BAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BAAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0887BABCu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BABCu) goto L_0887BABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BABC:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(30));
    aot_gpr_31 = (0x0887BAC8u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1259u, 0x0887BAC8u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BAC8u) goto L_0887BAC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BAC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (ctx.gpr[21] ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887BAE0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1260u, 0x0887BAE0u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BAE0u) goto L_0887BAE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BAE0:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    goto L_0887BAF4;
L_0887BAF4:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BB48;
      }
      goto L_0887BB24;
    }
L_0887BB24:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (ctx.gpr[7] & 255u);
        goto L_0887BB4C;
    }
    goto L_0887BB34;
L_0887BB34:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_0887BB4C;
      }
      goto L_0887BB44;
    }
L_0887BB44:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_0887BB48;
L_0887BB48:
    aot_gpr_4 = (ctx.gpr[7] & 255u);
    goto L_0887BB4C;
L_0887BB4C:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887BB60;
      }
      goto L_0887BB5C;
    }
L_0887BB5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0887BB60;
L_0887BB60:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[9]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887BAF4;
      }
      goto L_0887BB70;
    }
L_0887BB70:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(30));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr_31 = (0x0887BB84u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BB84u) goto L_0887BB84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BB84:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr_31 = (0x0887BB98u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BB98u) goto L_0887BB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BB98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_0887BBD4;
    }
    goto L_0887BBA4;
L_0887BBA4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887BBB0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1273u, 0x0887BBB0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BBB0u) goto L_0887BBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BBB0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887BBC8;
      }
      goto L_0887BBBC;
    }
L_0887BBBC:
    aot_gpr_31 = (0x0887BBC4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BBC4u) goto L_0887BBC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BBC4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887BBC8;
L_0887BBC8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_0887BBD4;
L_0887BBD4:
    aot_gpr_31 = (0x0887BBDCu);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1278u, 0x0887BBDCu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BBDCu) goto L_0887BBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BBDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887BBECu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BBECu) goto L_0887BBEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BBEC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x0887BBFCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BBFCu) goto L_0887BBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BBFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887BC34;
      }
      goto L_0887BC08;
    }
L_0887BC08:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0887BC14u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1282u, 0x0887BC14u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC14u) goto L_0887BC14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BC14:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0887BC2C;
      }
      goto L_0887BC20;
    }
L_0887BC20:
    aot_gpr_31 = (0x0887BC28u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC28u) goto L_0887BC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BC28:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0887BC2C;
L_0887BC2C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0887BC34;
L_0887BC34:
    aot_gpr_31 = (0x0887BC3Cu);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1287u, 0x0887BC3Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC3Cu) goto L_0887BC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BC3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887BC4Cu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC4Cu) goto L_0887BC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BC4C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0887BC60u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC60u) goto L_0887BC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BC60:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0887BC70u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1290u, 0x0887BC70u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC70u) goto L_0887BC70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BC70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 25u);
      if (branch_taken) {
          goto L_0887BC8C;
      }
      goto L_0887BC7C;
    }
L_0887BC7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0887BC8Cu);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7872), aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1292u, 0x0887BC8Cu, 0x089C6318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BC8Cu) goto L_0887BC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BC8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887BCA0;
      }
      goto L_0887BC9C;
    }
L_0887BC9C:
    ctx.gpr[18] = (0u | 38u);
    goto L_0887BCA0;
L_0887BCA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_31 = (0x0887BCB4u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BCB4u) goto L_0887BCB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BCB4:
    aot_gpr_31 = (0x0887BCBCu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1296u, 0x0887BCBCu, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BCBCu) goto L_0887BCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BCBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0887BCD4;
      }
      goto L_0887BCCC;
    }
L_0887BCCC:
    aot_gpr_31 = (0x0887BCD4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BCD4u) goto L_0887BCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BCD4:
    ctx.gpr[16] = (0u | 1u);
    goto L_0887BCD8;
L_0887BCD8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0887BCDC;
L_0887BCDC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887B9C0;
      }
      goto L_0887BCEC;
    }
L_0887BCEC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0887BD10;
      }
      goto L_0887BD00;
    }
L_0887BD00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_0887BD10;
L_0887BD10:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887BD94;
      }
      goto L_0887BD18;
    }
L_0887BD18:
    aot_gpr_31 = (0x0887BD20u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BD20u) goto L_0887BD20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BD20:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(153), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887BD40u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(150));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BD40u) goto L_0887BD40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BD40:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26576));
      if (branch_taken) {
          goto L_0887BD78;
      }
      goto L_0887BD4C;
    }
L_0887BD4C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887BD58u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1308u, 0x0887BD58u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BD58u) goto L_0887BD58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BD58:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887BD70;
      }
      goto L_0887BD64;
    }
L_0887BD64:
    aot_gpr_31 = (0x0887BD6Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BD6Cu) goto L_0887BD6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BD6C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887BD70;
L_0887BD70:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26576));
    goto L_0887BD78;
L_0887BD78:
    aot_gpr_31 = (0x0887BD80u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1313u, 0x0887BD80u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BD80u) goto L_0887BD80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BD80:
    aot_gpr_6 = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887BD90u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BD90u) goto L_0887BD90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BD90:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    goto L_0887BD94;
L_0887BD94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x0887BDA8u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0028.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1316u, 0x0887BDA8u, 0x08874254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0028_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0028_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 47u, 0x08874254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BDA8u) goto L_0887BDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BDA8:
    aot_gpr_31 = (0x0887BDB0u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BDB0u) goto L_0887BDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BDB0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26568));
      if (branch_taken) {
          goto L_0887BDE8;
      }
      goto L_0887BDBC;
    }
L_0887BDBC:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887BDC8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1319u, 0x0887BDC8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BDC8u) goto L_0887BDC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BDC8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0887BDE0;
      }
      goto L_0887BDD4;
    }
L_0887BDD4:
    aot_gpr_31 = (0x0887BDDCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BDDCu) goto L_0887BDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BDDC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0887BDE0;
L_0887BDE0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-26568));
    goto L_0887BDE8;
L_0887BDE8:
    aot_gpr_31 = (0x0887BDF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1324u, 0x0887BDF0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BDF0u) goto L_0887BDF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BDF0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887BE00u);
    aot_gpr_6 = (0u | 192u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BE00u) goto L_0887BE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BE00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0887BEA4;
      }
      goto L_0887BE0C;
    }
L_0887BE0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-26616)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(601) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[9] = (17268u << 16u);
      if (branch_taken) {
          goto L_0887BEA4;
      }
      goto L_0887BE24;
    }
L_0887BE24:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (17084u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[9] = (17260u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_5 = (0u | 30u);
    ctx.gpr[9] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[9] = (17068u << 16u);
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_31 = (0x0887BE60u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BE60u) goto L_0887BE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BE60:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x0887BE88u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1329u, 0x0887BE88u, 0x08AF5238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 124u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 124u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BE88u) goto L_0887BE88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BE88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-26616)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1201) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887BEA4;
      }
      goto L_0887BEA0;
    }
L_0887BEA0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-26616), aot_gpr_4);
    goto L_0887BEA4;
L_0887BEA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887BF50;
      }
      goto L_0887BEB8;
    }
L_0887BEB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-26616)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(601) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[9] = (17268u << 16u);
      if (branch_taken) {
          goto L_0887BF50;
      }
      goto L_0887BED0;
    }
L_0887BED0:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (17204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (17260u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_5 = (0u | 30u);
    ctx.gpr[9] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[9] = (17212u << 16u);
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_31 = (0x0887BF0Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BF0Cu) goto L_0887BF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BF0C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x0887BF34u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1335u, 0x0887BF34u, 0x08AF5238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 124u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 124u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BF34u) goto L_0887BF34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BF34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-26616)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1201) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887BF50;
      }
      goto L_0887BF4C;
    }
L_0887BF4C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-26616), aot_gpr_4);
    goto L_0887BF50;
L_0887BF50:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(216), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.gpr[16] = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      ctx.gpr[23] = aot_run_words[12];
      ctx.gpr[30] = aot_run_words[13];
      aot_gpr_31 = aot_run_words[14];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887BF94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(340), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0887BFDC;
      }
      goto L_0887BFD4;
    }
L_0887BFD4:
    aot_gpr_31 = (0x0887BFDCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BFDCu) goto L_0887BFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BFDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    aot_gpr_31 = (0x0887BFE8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0029->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0029_entry, 1341u, 0x0887BFE8u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BFE8u) goto L_0887BFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887BFE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0887BFFC;
      }
      goto L_0887BFF4;
    }
L_0887BFF4:
    aot_gpr_31 = (0x0887BFFCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887BFFCu) goto L_0887BFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887BFFC:
    aot_gpr_31 = (0x0887C004u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5868)));
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0029(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0029_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_29(Runtime &runtime) {
    runtime.register_generated_unit(29u, 0x08878000u, 16384u, &recomp_unit_0029, &recomp_unit_0029_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08878000u, &recomp_unit_0029, "recomp_unit_0029",
                                          kEntryMasks_recomp_unit_0029, 64u);
}
} // namespace psprecomp
