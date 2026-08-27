#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0049[64] = {
    0x0025080080402101ull, 0x8944804068008440ull, 0xA404404080290012ull, 0x044528215202954Aull,
    0x01100A0141000140ull, 0x0000100884444110ull, 0x0022282101450280ull, 0x1008440114014000ull,
    0x8904400200029404ull, 0x1011080200010010ull, 0x8000044200083400ull, 0x4000022000800206ull,
    0x20D0004022100103ull, 0x1A00400040110800ull, 0x2A89022028440010ull, 0x1050252204600000ull,
    0x021080005002AA14ull, 0x1254808AD4490840ull, 0x1254894024890841ull, 0x4A52949040435209ull,
    0x94A5294A5294A529ull, 0x114A5294A5294A52ull, 0x0505058208015080ull, 0x82828282C1040095ull,
    0x420080800000004Aull, 0x0448080010800110ull, 0x1102202000092902ull, 0x4040040000840000ull,
    0x4001040000220840ull, 0x0000088022214800ull, 0x092400010C920201ull, 0x010C012412412014ull,
    0x01412A9000244090ull, 0x2524000808000882ull, 0x2A802A849009140Aull, 0x5100004855005509ull,
    0x05944621A9548024ull, 0x0255090051890100ull, 0x6840840000000080ull, 0x0000142822490981ull,
    0x00002A1200020020ull, 0xAA48842100004021ull, 0x000000000014A2AAull, 0x0088000004800000ull,
    0x40421104A6002000ull, 0x2529200203028200ull, 0x44155440920054A9ull, 0x052A2930A9242A09ull,
    0xA4B555042AA94822ull, 0x1A102A0450000201ull, 0x4949208940804040ull, 0xA4A4949292495149ull,
    0x85224A4A48A49290ull, 0x5492A44492492504ull, 0x4924252455249152ull, 0x0000102524925252ull,
    0x000022000A44A000ull, 0x40452010A40200C0ull, 0x4001408114152210ull, 0x9048002005108828ull,
    0x50000C2480102004ull, 0x9014080880001140ull, 0x25510CA948010200ull, 0x000400A801A912A2ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0049[64] = {
    1u, 10u, 23u, 35u, 54u, 63u, 72u, 84u, 93u, 104u, 111u, 119u, 126u, 137u, 145u, 158u,
    169u, 181u, 199u, 216u, 236u, 262u, 286u, 299u, 315u, 322u, 330u, 341u, 346u, 353u, 361u, 373u,
    386u, 399u, 409u, 426u, 441u, 461u, 475u, 482u, 495u, 502u, 515u, 524u, 528u, 539u, 552u, 571u,
    592u, 616u, 628u, 642u, 666u, 687u, 708u, 730u, 745u, 753u, 765u, 778u, 790u, 800u, 810u, 826u,
};
void recomp_unit_0049_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,16,6 fprs=12,13,20,14 gpr_occ=4134 fpr_occ=735 gpr_total=5337 fpr_total=882
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C8000u;
        entry_id = 0u;
        if (entry_delta < 16332u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0049[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0049[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088C8000;
    case 2u: goto L_088C8020;
    case 3u: goto L_088C8034;
    case 4u: goto L_088C8058;
    case 5u: goto L_088C807C;
    case 6u: goto L_088C80AC;
    case 7u: goto L_088C80C0;
    case 8u: goto L_088C80C8;
    case 9u: goto L_088C80D4;
    case 10u: goto L_088C8118;
    case 11u: goto L_088C8128;
    case 12u: goto L_088C813C;
    case 13u: goto L_088C816C;
    case 14u: goto L_088C8174;
    case 15u: goto L_088C8178;
    case 16u: goto L_088C8198;
    case 17u: goto L_088C81BC;
    case 18u: goto L_088C81C8;
    case 19u: goto L_088C81D8;
    case 20u: goto L_088C81E0;
    case 21u: goto L_088C81EC;
    case 22u: goto L_088C81FC;
    case 23u: goto L_088C8204;
    case 24u: goto L_088C8210;
    case 25u: goto L_088C8240;
    case 26u: goto L_088C824C;
    case 27u: goto L_088C8254;
    case 28u: goto L_088C827C;
    case 29u: goto L_088C8298;
    case 30u: goto L_088C82B8;
    case 31u: goto L_088C82C8;
    case 32u: goto L_088C82E8;
    case 33u: goto L_088C82F4;
    case 34u: goto L_088C82FC;
    case 35u: goto L_088C8304;
    case 36u: goto L_088C830C;
    case 37u: goto L_088C8318;
    case 38u: goto L_088C8320;
    case 39u: goto L_088C8328;
    case 40u: goto L_088C8330;
    case 41u: goto L_088C833C;
    case 42u: goto L_088C8344;
    case 43u: goto L_088C8364;
    case 44u: goto L_088C8370;
    case 45u: goto L_088C8378;
    case 46u: goto L_088C8380;
    case 47u: goto L_088C8394;
    case 48u: goto L_088C83AC;
    case 49u: goto L_088C83B4;
    case 50u: goto L_088C83C0;
    case 51u: goto L_088C83C8;
    case 52u: goto L_088C83D8;
    case 53u: goto L_088C83E8;
    case 54u: goto L_088C8418;
    case 55u: goto L_088C8420;
    case 56u: goto L_088C8460;
    case 57u: goto L_088C8478;
    case 58u: goto L_088C8480;
    case 59u: goto L_088C84A4;
    case 60u: goto L_088C84AC;
    case 61u: goto L_088C84D0;
    case 62u: goto L_088C84E0;
    case 63u: goto L_088C8510;
    case 64u: goto L_088C8520;
    case 65u: goto L_088C8538;
    case 66u: goto L_088C8548;
    case 67u: goto L_088C8558;
    case 68u: goto L_088C8568;
    case 69u: goto L_088C857C;
    case 70u: goto L_088C858C;
    case 71u: goto L_088C85B0;
    case 72u: goto L_088C861C;
    case 73u: goto L_088C8624;
    case 74u: goto L_088C8640;
    case 75u: goto L_088C8648;
    case 76u: goto L_088C8658;
    case 77u: goto L_088C8660;
    case 78u: goto L_088C8680;
    case 79u: goto L_088C8694;
    case 80u: goto L_088C86AC;
    case 81u: goto L_088C86B4;
    case 82u: goto L_088C86C4;
    case 83u: goto L_088C86D4;
    case 84u: goto L_088C8738;
    case 85u: goto L_088C8740;
    case 86u: goto L_088C8768;
    case 87u: goto L_088C8770;
    case 88u: goto L_088C8780;
    case 89u: goto L_088C87A8;
    case 90u: goto L_088C87B8;
    case 91u: goto L_088C87CC;
    case 92u: goto L_088C87F0;
    case 93u: goto L_088C8808;
    case 94u: goto L_088C8828;
    case 95u: goto L_088C8830;
    case 96u: goto L_088C883C;
    case 97u: goto L_088C8844;
    case 98u: goto L_088C8884;
    case 99u: goto L_088C88B8;
    case 100u: goto L_088C88C8;
    case 101u: goto L_088C88E0;
    case 102u: goto L_088C88EC;
    case 103u: goto L_088C88FC;
    case 104u: goto L_088C8910;
    case 105u: goto L_088C8940;
    case 106u: goto L_088C8984;
    case 107u: goto L_088C89AC;
    case 108u: goto L_088C89C0;
    case 109u: goto L_088C89D0;
    case 110u: goto L_088C89F0;
    case 111u: goto L_088C8A28;
    case 112u: goto L_088C8A30;
    case 113u: goto L_088C8A34;
    case 114u: goto L_088C8A4C;
    case 115u: goto L_088C8A84;
    case 116u: goto L_088C8A98;
    case 117u: goto L_088C8AA8;
    case 118u: goto L_088C8AFC;
    case 119u: goto L_088C8B04;
    case 120u: goto L_088C8B08;
    case 121u: goto L_088C8B24;
    case 122u: goto L_088C8B5C;
    case 123u: goto L_088C8B94;
    case 124u: goto L_088C8BA4;
    case 125u: goto L_088C8BF8;
    case 126u: goto L_088C8C00;
    case 127u: goto L_088C8C04;
    case 128u: goto L_088C8C20;
    case 129u: goto L_088C8C50;
    case 130u: goto L_088C8C64;
    case 131u: goto L_088C8C74;
    case 132u: goto L_088C8C98;
    case 133u: goto L_088C8CD0;
    case 134u: goto L_088C8CD8;
    case 135u: goto L_088C8CDC;
    case 136u: goto L_088C8CF4;
    case 137u: goto L_088C8D2C;
    case 138u: goto L_088C8D40;
    case 139u: goto L_088C8D50;
    case 140u: goto L_088C8D78;
    case 141u: goto L_088C8DB8;
    case 142u: goto L_088C8DE4;
    case 143u: goto L_088C8DEC;
    case 144u: goto L_088C8DF0;
    case 145u: goto L_088C8E10;
    case 146u: goto L_088C8E48;
    case 147u: goto L_088C8E58;
    case 148u: goto L_088C8E6C;
    case 149u: goto L_088C8E74;
    case 150u: goto L_088C8E94;
    case 151u: goto L_088C8EA4;
    case 152u: goto L_088C8EC0;
    case 153u: goto L_088C8ECC;
    case 154u: goto L_088C8EDC;
    case 155u: goto L_088C8EE4;
    case 156u: goto L_088C8EEC;
    case 157u: goto L_088C8EF4;
    case 158u: goto L_088C8F54;
    case 159u: goto L_088C8F58;
    case 160u: goto L_088C8F68;
    case 161u: goto L_088C8F84;
    case 162u: goto L_088C8F94;
    case 163u: goto L_088C8FA0;
    case 164u: goto L_088C8FA8;
    case 165u: goto L_088C8FB4;
    case 166u: goto L_088C8FD0;
    case 167u: goto L_088C8FD8;
    case 168u: goto L_088C8FF0;
    case 169u: goto L_088C9008;
    case 170u: goto L_088C9010;
    case 171u: goto L_088C9024;
    case 172u: goto L_088C902C;
    case 173u: goto L_088C9034;
    case 174u: goto L_088C903C;
    case 175u: goto L_088C9044;
    case 176u: goto L_088C9070;
    case 177u: goto L_088C9078;
    case 178u: goto L_088C90BC;
    case 179u: goto L_088C90D0;
    case 180u: goto L_088C90E4;
    case 181u: goto L_088C9118;
    case 182u: goto L_088C912C;
    case 183u: goto L_088C9140;
    case 184u: goto L_088C914C;
    case 185u: goto L_088C9158;
    case 186u: goto L_088C9168;
    case 187u: goto L_088C9170;
    case 188u: goto L_088C9178;
    case 189u: goto L_088C917C;
    case 190u: goto L_088C9184;
    case 191u: goto L_088C918C;
    case 192u: goto L_088C919C;
    case 193u: goto L_088C91BC;
    case 194u: goto L_088C91C8;
    case 195u: goto L_088C91D0;
    case 196u: goto L_088C91D8;
    case 197u: goto L_088C91E4;
    case 198u: goto L_088C91F0;
    case 199u: goto L_088C9200;
    case 200u: goto L_088C9218;
    case 201u: goto L_088C922C;
    case 202u: goto L_088C9240;
    case 203u: goto L_088C924C;
    case 204u: goto L_088C925C;
    case 205u: goto L_088C9268;
    case 206u: goto L_088C9274;
    case 207u: goto L_088C9298;
    case 208u: goto L_088C92A0;
    case 209u: goto L_088C92AC;
    case 210u: goto L_088C92BC;
    case 211u: goto L_088C92C8;
    case 212u: goto L_088C92D0;
    case 213u: goto L_088C92D8;
    case 214u: goto L_088C92E4;
    case 215u: goto L_088C92F0;
    case 216u: goto L_088C9300;
    case 217u: goto L_088C930C;
    case 218u: goto L_088C9324;
    case 219u: goto L_088C9330;
    case 220u: goto L_088C9338;
    case 221u: goto L_088C9340;
    case 222u: goto L_088C9344;
    case 223u: goto L_088C9358;
    case 224u: goto L_088C9378;
    case 225u: goto L_088C9390;
    case 226u: goto L_088C939C;
    case 227u: goto L_088C93A8;
    case 228u: goto L_088C93B0;
    case 229u: goto L_088C93BC;
    case 230u: goto L_088C93C4;
    case 231u: goto L_088C93D0;
    case 232u: goto L_088C93D8;
    case 233u: goto L_088C93E4;
    case 234u: goto L_088C93EC;
    case 235u: goto L_088C93F8;
    case 236u: goto L_088C9400;
    case 237u: goto L_088C940C;
    case 238u: goto L_088C9414;
    case 239u: goto L_088C9420;
    case 240u: goto L_088C9428;
    case 241u: goto L_088C9434;
    case 242u: goto L_088C943C;
    case 243u: goto L_088C9448;
    case 244u: goto L_088C9450;
    case 245u: goto L_088C945C;
    case 246u: goto L_088C9464;
    case 247u: goto L_088C9470;
    case 248u: goto L_088C9478;
    case 249u: goto L_088C9484;
    case 250u: goto L_088C948C;
    case 251u: goto L_088C9498;
    case 252u: goto L_088C94A0;
    case 253u: goto L_088C94AC;
    case 254u: goto L_088C94B4;
    case 255u: goto L_088C94C0;
    case 256u: goto L_088C94C8;
    case 257u: goto L_088C94D4;
    case 258u: goto L_088C94DC;
    case 259u: goto L_088C94E8;
    case 260u: goto L_088C94F0;
    case 261u: goto L_088C94FC;
    case 262u: goto L_088C9504;
    case 263u: goto L_088C9510;
    case 264u: goto L_088C9518;
    case 265u: goto L_088C9524;
    case 266u: goto L_088C952C;
    case 267u: goto L_088C9538;
    case 268u: goto L_088C9540;
    case 269u: goto L_088C954C;
    case 270u: goto L_088C9554;
    case 271u: goto L_088C9560;
    case 272u: goto L_088C9568;
    case 273u: goto L_088C9574;
    case 274u: goto L_088C957C;
    case 275u: goto L_088C9588;
    case 276u: goto L_088C9590;
    case 277u: goto L_088C959C;
    case 278u: goto L_088C95A4;
    case 279u: goto L_088C95B0;
    case 280u: goto L_088C95B8;
    case 281u: goto L_088C95C4;
    case 282u: goto L_088C95CC;
    case 283u: goto L_088C95D8;
    case 284u: goto L_088C95E0;
    case 285u: goto L_088C95F0;
    case 286u: goto L_088C961C;
    case 287u: goto L_088C9630;
    case 288u: goto L_088C9638;
    case 289u: goto L_088C9640;
    case 290u: goto L_088C966C;
    case 291u: goto L_088C9684;
    case 292u: goto L_088C969C;
    case 293u: goto L_088C96A0;
    case 294u: goto L_088C96A8;
    case 295u: goto L_088C96C0;
    case 296u: goto L_088C96C8;
    case 297u: goto L_088C96E0;
    case 298u: goto L_088C96E8;
    case 299u: goto L_088C9700;
    case 300u: goto L_088C9708;
    case 301u: goto L_088C9710;
    case 302u: goto L_088C971C;
    case 303u: goto L_088C9748;
    case 304u: goto L_088C9760;
    case 305u: goto L_088C9778;
    case 306u: goto L_088C977C;
    case 307u: goto L_088C9784;
    case 308u: goto L_088C979C;
    case 309u: goto L_088C97A4;
    case 310u: goto L_088C97BC;
    case 311u: goto L_088C97C4;
    case 312u: goto L_088C97DC;
    case 313u: goto L_088C97E4;
    case 314u: goto L_088C97FC;
    case 315u: goto L_088C9804;
    case 316u: goto L_088C980C;
    case 317u: goto L_088C9818;
    case 318u: goto L_088C989C;
    case 319u: goto L_088C98BC;
    case 320u: goto L_088C98E4;
    case 321u: goto L_088C98F8;
    case 322u: goto L_088C9910;
    case 323u: goto L_088C9920;
    case 324u: goto L_088C995C;
    case 325u: goto L_088C9970;
    case 326u: goto L_088C99AC;
    case 327u: goto L_088C99CC;
    case 328u: goto L_088C99D8;
    case 329u: goto L_088C99E8;
    case 330u: goto L_088C9A04;
    case 331u: goto L_088C9A20;
    case 332u: goto L_088C9A2C;
    case 333u: goto L_088C9A34;
    case 334u: goto L_088C9A40;
    case 335u: goto L_088C9A4C;
    case 336u: goto L_088C9A94;
    case 337u: goto L_088C9AB4;
    case 338u: goto L_088C9AC4;
    case 339u: goto L_088C9AE0;
    case 340u: goto L_088C9AF0;
    case 341u: goto L_088C9B48;
    case 342u: goto L_088C9B5C;
    case 343u: goto L_088C9BA8;
    case 344u: goto L_088C9BD8;
    case 345u: goto L_088C9BF8;
    case 346u: goto L_088C9C18;
    case 347u: goto L_088C9C2C;
    case 348u: goto L_088C9C44;
    case 349u: goto L_088C9C54;
    case 350u: goto L_088C9CA8;
    case 351u: goto L_088C9CC0;
    case 352u: goto L_088C9CF8;
    case 353u: goto L_088C9D2C;
    case 354u: goto L_088C9D38;
    case 355u: goto L_088C9D40;
    case 356u: goto L_088C9D54;
    case 357u: goto L_088C9D64;
    case 358u: goto L_088C9D74;
    case 359u: goto L_088C9D9C;
    case 360u: goto L_088C9DAC;
    case 361u: goto L_088C9E00;
    case 362u: goto L_088C9E24;
    case 363u: goto L_088C9E44;
    case 364u: goto L_088C9E50;
    case 365u: goto L_088C9E5C;
    case 366u: goto L_088C9E68;
    case 367u: goto L_088C9E6C;
    case 368u: goto L_088C9E80;
    case 369u: goto L_088C9EC8;
    case 370u: goto L_088C9ED4;
    case 371u: goto L_088C9EE0;
    case 372u: goto L_088C9EEC;
    case 373u: goto L_088C9F08;
    case 374u: goto L_088C9F10;
    case 375u: goto L_088C9F34;
    case 376u: goto L_088C9F40;
    case 377u: goto L_088C9F58;
    case 378u: goto L_088C9F64;
    case 379u: goto L_088C9F70;
    case 380u: goto L_088C9F88;
    case 381u: goto L_088C9F94;
    case 382u: goto L_088C9FA0;
    case 383u: goto L_088C9FC8;
    case 384u: goto L_088C9FCC;
    case 385u: goto L_088C9FE0;
    case 386u: goto L_088CA010;
    case 387u: goto L_088CA01C;
    case 388u: goto L_088CA038;
    case 389u: goto L_088CA048;
    case 390u: goto L_088CA054;
    case 391u: goto L_088CA090;
    case 392u: goto L_088CA09C;
    case 393u: goto L_088CA0A4;
    case 394u: goto L_088CA0AC;
    case 395u: goto L_088CA0B4;
    case 396u: goto L_088CA0C0;
    case 397u: goto L_088CA0D8;
    case 398u: goto L_088CA0E0;
    case 399u: goto L_088CA104;
    case 400u: goto L_088CA11C;
    case 401u: goto L_088CA12C;
    case 402u: goto L_088CA16C;
    case 403u: goto L_088CA18C;
    case 404u: goto L_088CA1C8;
    case 405u: goto L_088CA1D4;
    case 406u: goto L_088CA1E0;
    case 407u: goto L_088CA1E8;
    case 408u: goto L_088CA1F4;
    case 409u: goto L_088CA204;
    case 410u: goto L_088CA20C;
    case 411u: goto L_088CA228;
    case 412u: goto L_088CA230;
    case 413u: goto L_088CA240;
    case 414u: goto L_088CA24C;
    case 415u: goto L_088CA270;
    case 416u: goto L_088CA27C;
    case 417u: goto L_088CA288;
    case 418u: goto L_088CA29C;
    case 419u: goto L_088CA2A4;
    case 420u: goto L_088CA2AC;
    case 421u: goto L_088CA2B4;
    case 422u: goto L_088CA2DC;
    case 423u: goto L_088CA2E4;
    case 424u: goto L_088CA2EC;
    case 425u: goto L_088CA2F4;
    case 426u: goto L_088CA300;
    case 427u: goto L_088CA30C;
    case 428u: goto L_088CA320;
    case 429u: goto L_088CA328;
    case 430u: goto L_088CA330;
    case 431u: goto L_088CA338;
    case 432u: goto L_088CA360;
    case 433u: goto L_088CA368;
    case 434u: goto L_088CA370;
    case 435u: goto L_088CA378;
    case 436u: goto L_088CA38C;
    case 437u: goto L_088CA398;
    case 438u: goto L_088CA3E0;
    case 439u: goto L_088CA3F0;
    case 440u: goto L_088CA3F8;
    case 441u: goto L_088CA408;
    case 442u: goto L_088CA414;
    case 443u: goto L_088CA43C;
    case 444u: goto L_088CA448;
    case 445u: goto L_088CA450;
    case 446u: goto L_088CA458;
    case 447u: goto L_088CA460;
    case 448u: goto L_088CA46C;
    case 449u: goto L_088CA474;
    case 450u: goto L_088CA47C;
    case 451u: goto L_088CA480;
    case 452u: goto L_088CA494;
    case 453u: goto L_088CA4A4;
    case 454u: goto L_088CA4A8;
    case 455u: goto L_088CA4B8;
    case 456u: goto L_088CA4C8;
    case 457u: goto L_088CA4D0;
    case 458u: goto L_088CA4DC;
    case 459u: goto L_088CA4E0;
    case 460u: goto L_088CA4E8;
    case 461u: goto L_088CA520;
    case 462u: goto L_088CA540;
    case 463u: goto L_088CA54C;
    case 464u: goto L_088CA55C;
    case 465u: goto L_088CA560;
    case 466u: goto L_088CA570;
    case 467u: goto L_088CA578;
    case 468u: goto L_088CA5A0;
    case 469u: goto L_088CA5AC;
    case 470u: goto L_088CA5C0;
    case 471u: goto L_088CA5C8;
    case 472u: goto L_088CA5D0;
    case 473u: goto L_088CA5D8;
    case 474u: goto L_088CA5E4;
    case 475u: goto L_088CA61C;
    case 476u: goto L_088CA6A8;
    case 477u: goto L_088CA6BC;
    case 478u: goto L_088CA6D8;
    case 479u: goto L_088CA6EC;
    case 480u: goto L_088CA6F4;
    case 481u: goto L_088CA6F8;
    case 482u: goto L_088CA700;
    case 483u: goto L_088CA71C;
    case 484u: goto L_088CA720;
    case 485u: goto L_088CA72C;
    case 486u: goto L_088CA740;
    case 487u: goto L_088CA74C;
    case 488u: goto L_088CA758;
    case 489u: goto L_088CA764;
    case 490u: goto L_088CA774;
    case 491u: goto L_088CA78C;
    case 492u: goto L_088CA794;
    case 493u: goto L_088CA7A8;
    case 494u: goto L_088CA7B0;
    case 495u: goto L_088CA814;
    case 496u: goto L_088CA844;
    case 497u: goto L_088CA884;
    case 498u: goto L_088CA890;
    case 499u: goto L_088CA8A4;
    case 500u: goto L_088CA8AC;
    case 501u: goto L_088CA8B4;
    case 502u: goto L_088CA900;
    case 503u: goto L_088CA914;
    case 504u: goto L_088CA938;
    case 505u: goto L_088CA980;
    case 506u: goto L_088CA994;
    case 507u: goto L_088CA9A8;
    case 508u: goto L_088CA9BC;
    case 509u: goto L_088CA9CC;
    case 510u: goto L_088CA9D8;
    case 511u: goto L_088CA9E4;
    case 512u: goto L_088CA9EC;
    case 513u: goto L_088CA9F4;
    case 514u: goto L_088CA9FC;
    case 515u: goto L_088CAA04;
    case 516u: goto L_088CAA0C;
    case 517u: goto L_088CAA14;
    case 518u: goto L_088CAA1C;
    case 519u: goto L_088CAA24;
    case 520u: goto L_088CAA34;
    case 521u: goto L_088CAA3C;
    case 522u: goto L_088CAA48;
    case 523u: goto L_088CAA50;
    case 524u: goto L_088CAB5C;
    case 525u: goto L_088CAB68;
    case 526u: goto L_088CABCC;
    case 527u: goto L_088CABDC;
    case 528u: goto L_088CAC34;
    case 529u: goto L_088CAC64;
    case 530u: goto L_088CAC68;
    case 531u: goto L_088CAC74;
    case 532u: goto L_088CAC7C;
    case 533u: goto L_088CAC88;
    case 534u: goto L_088CACA0;
    case 535u: goto L_088CACB0;
    case 536u: goto L_088CACC4;
    case 537u: goto L_088CACD8;
    case 538u: goto L_088CACF8;
    case 539u: goto L_088CAD24;
    case 540u: goto L_088CAD3C;
    case 541u: goto L_088CAD44;
    case 542u: goto L_088CAD60;
    case 543u: goto L_088CAD64;
    case 544u: goto L_088CAD84;
    case 545u: goto L_088CADB4;
    case 546u: goto L_088CADC0;
    case 547u: goto L_088CADCC;
    case 548u: goto L_088CADD4;
    case 549u: goto L_088CADE0;
    case 550u: goto L_088CADE8;
    case 551u: goto L_088CADF4;
    case 552u: goto L_088CAE00;
    case 553u: goto L_088CAE0C;
    case 554u: goto L_088CAE14;
    case 555u: goto L_088CAE1C;
    case 556u: goto L_088CAE28;
    case 557u: goto L_088CAE30;
    case 558u: goto L_088CAE38;
    case 559u: goto L_088CAE64;
    case 560u: goto L_088CAE70;
    case 561u: goto L_088CAE7C;
    case 562u: goto L_088CAE98;
    case 563u: goto L_088CAEA8;
    case 564u: goto L_088CAEB0;
    case 565u: goto L_088CAEB8;
    case 566u: goto L_088CAEC0;
    case 567u: goto L_088CAEC8;
    case 568u: goto L_088CAED0;
    case 569u: goto L_088CAEE8;
    case 570u: goto L_088CAEF8;
    case 571u: goto L_088CAF00;
    case 572u: goto L_088CAF0C;
    case 573u: goto L_088CAF24;
    case 574u: goto L_088CAF2C;
    case 575u: goto L_088CAF34;
    case 576u: goto L_088CAF48;
    case 577u: goto L_088CAF54;
    case 578u: goto L_088CAF60;
    case 579u: goto L_088CAF6C;
    case 580u: goto L_088CAF74;
    case 581u: goto L_088CAF7C;
    case 582u: goto L_088CAF90;
    case 583u: goto L_088CAF94;
    case 584u: goto L_088CAFA0;
    case 585u: goto L_088CAFAC;
    case 586u: goto L_088CAFB4;
    case 587u: goto L_088CAFC4;
    case 588u: goto L_088CAFCC;
    case 589u: goto L_088CAFD4;
    case 590u: goto L_088CAFE0;
    case 591u: goto L_088CAFE8;
    case 592u: goto L_088CB004;
    case 593u: goto L_088CB014;
    case 594u: goto L_088CB02C;
    case 595u: goto L_088CB038;
    case 596u: goto L_088CB040;
    case 597u: goto L_088CB04C;
    case 598u: goto L_088CB054;
    case 599u: goto L_088CB05C;
    case 600u: goto L_088CB064;
    case 601u: goto L_088CB06C;
    case 602u: goto L_088CB074;
    case 603u: goto L_088CB088;
    case 604u: goto L_088CB0A0;
    case 605u: goto L_088CB0A8;
    case 606u: goto L_088CB0B0;
    case 607u: goto L_088CB0B8;
    case 608u: goto L_088CB0C0;
    case 609u: goto L_088CB0C8;
    case 610u: goto L_088CB0D0;
    case 611u: goto L_088CB0D4;
    case 612u: goto L_088CB0DC;
    case 613u: goto L_088CB0E8;
    case 614u: goto L_088CB0F4;
    case 615u: goto L_088CB0FC;
    case 616u: goto L_088CB100;
    case 617u: goto L_088CB124;
    case 618u: goto L_088CB170;
    case 619u: goto L_088CB178;
    case 620u: goto L_088CB188;
    case 621u: goto L_088CB1A4;
    case 622u: goto L_088CB1AC;
    case 623u: goto L_088CB1B4;
    case 624u: goto L_088CB1D0;
    case 625u: goto L_088CB1E4;
    case 626u: goto L_088CB1EC;
    case 627u: goto L_088CB1F0;
    case 628u: goto L_088CB218;
    case 629u: goto L_088CB238;
    case 630u: goto L_088CB25C;
    case 631u: goto L_088CB278;
    case 632u: goto L_088CB280;
    case 633u: goto L_088CB28C;
    case 634u: goto L_088CB29C;
    case 635u: goto L_088CB2B4;
    case 636u: goto L_088CB2C0;
    case 637u: goto L_088CB2CC;
    case 638u: goto L_088CB2D8;
    case 639u: goto L_088CB2E0;
    case 640u: goto L_088CB2EC;
    case 641u: goto L_088CB2F8;
    case 642u: goto L_088CB300;
    case 643u: goto L_088CB30C;
    case 644u: goto L_088CB318;
    case 645u: goto L_088CB320;
    case 646u: goto L_088CB330;
    case 647u: goto L_088CB338;
    case 648u: goto L_088CB340;
    case 649u: goto L_088CB34C;
    case 650u: goto L_088CB358;
    case 651u: goto L_088CB364;
    case 652u: goto L_088CB370;
    case 653u: goto L_088CB37C;
    case 654u: goto L_088CB384;
    case 655u: goto L_088CB390;
    case 656u: goto L_088CB39C;
    case 657u: goto L_088CB3A8;
    case 658u: goto L_088CB3B0;
    case 659u: goto L_088CB3BC;
    case 660u: goto L_088CB3C8;
    case 661u: goto L_088CB3D4;
    case 662u: goto L_088CB3DC;
    case 663u: goto L_088CB3E8;
    case 664u: goto L_088CB3F4;
    case 665u: goto L_088CB3FC;
    case 666u: goto L_088CB410;
    case 667u: goto L_088CB41C;
    case 668u: goto L_088CB424;
    case 669u: goto L_088CB430;
    case 670u: goto L_088CB43C;
    case 671u: goto L_088CB448;
    case 672u: goto L_088CB454;
    case 673u: goto L_088CB45C;
    case 674u: goto L_088CB46C;
    case 675u: goto L_088CB478;
    case 676u: goto L_088CB484;
    case 677u: goto L_088CB48C;
    case 678u: goto L_088CB498;
    case 679u: goto L_088CB4A4;
    case 680u: goto L_088CB4AC;
    case 681u: goto L_088CB4B8;
    case 682u: goto L_088CB4C4;
    case 683u: goto L_088CB4D4;
    case 684u: goto L_088CB4E0;
    case 685u: goto L_088CB4E8;
    case 686u: goto L_088CB4FC;
    case 687u: goto L_088CB508;
    case 688u: goto L_088CB520;
    case 689u: goto L_088CB528;
    case 690u: goto L_088CB534;
    case 691u: goto L_088CB540;
    case 692u: goto L_088CB54C;
    case 693u: goto L_088CB558;
    case 694u: goto L_088CB564;
    case 695u: goto L_088CB570;
    case 696u: goto L_088CB57C;
    case 697u: goto L_088CB588;
    case 698u: goto L_088CB598;
    case 699u: goto L_088CB5A8;
    case 700u: goto L_088CB5B4;
    case 701u: goto L_088CB5BC;
    case 702u: goto L_088CB5C4;
    case 703u: goto L_088CB5D0;
    case 704u: goto L_088CB5DC;
    case 705u: goto L_088CB5E8;
    case 706u: goto L_088CB5F0;
    case 707u: goto L_088CB5F8;
    case 708u: goto L_088CB604;
    case 709u: goto L_088CB610;
    case 710u: goto L_088CB618;
    case 711u: goto L_088CB620;
    case 712u: goto L_088CB630;
    case 713u: goto L_088CB63C;
    case 714u: goto L_088CB648;
    case 715u: goto L_088CB654;
    case 716u: goto L_088CB660;
    case 717u: goto L_088CB668;
    case 718u: goto L_088CB670;
    case 719u: goto L_088CB678;
    case 720u: goto L_088CB688;
    case 721u: goto L_088CB694;
    case 722u: goto L_088CB6A0;
    case 723u: goto L_088CB6A8;
    case 724u: goto L_088CB6B4;
    case 725u: goto L_088CB6C8;
    case 726u: goto L_088CB6D4;
    case 727u: goto L_088CB6E0;
    case 728u: goto L_088CB6EC;
    case 729u: goto L_088CB6F8;
    case 730u: goto L_088CB704;
    case 731u: goto L_088CB710;
    case 732u: goto L_088CB718;
    case 733u: goto L_088CB724;
    case 734u: goto L_088CB730;
    case 735u: goto L_088CB738;
    case 736u: goto L_088CB744;
    case 737u: goto L_088CB750;
    case 738u: goto L_088CB75C;
    case 739u: goto L_088CB768;
    case 740u: goto L_088CB774;
    case 741u: goto L_088CB780;
    case 742u: goto L_088CB788;
    case 743u: goto L_088CB794;
    case 744u: goto L_088CB7B0;
    case 745u: goto L_088CB834;
    case 746u: goto L_088CB83C;
    case 747u: goto L_088CB848;
    case 748u: goto L_088CB858;
    case 749u: goto L_088CB864;
    case 750u: goto L_088CB86C;
    case 751u: goto L_088CB8A4;
    case 752u: goto L_088CB8B4;
    case 753u: goto L_088CB918;
    case 754u: goto L_088CB91C;
    case 755u: goto L_088CB944;
    case 756u: goto L_088CB968;
    case 757u: goto L_088CB974;
    case 758u: goto L_088CB97C;
    case 759u: goto L_088CB990;
    case 760u: goto L_088CB9B4;
    case 761u: goto L_088CB9C0;
    case 762u: goto L_088CB9C8;
    case 763u: goto L_088CB9D8;
    case 764u: goto L_088CB9F8;
    case 765u: goto L_088CBA10;
    case 766u: goto L_088CBA24;
    case 767u: goto L_088CBA34;
    case 768u: goto L_088CBA40;
    case 769u: goto L_088CBA48;
    case 770u: goto L_088CBA50;
    case 771u: goto L_088CBA68;
    case 772u: goto L_088CBA70;
    case 773u: goto L_088CBA80;
    case 774u: goto L_088CBA9C;
    case 775u: goto L_088CBAB8;
    case 776u: goto L_088CBAC0;
    case 777u: goto L_088CBAF8;
    case 778u: goto L_088CBB0C;
    case 779u: goto L_088CBB14;
    case 780u: goto L_088CBB2C;
    case 781u: goto L_088CBB3C;
    case 782u: goto L_088CBB50;
    case 783u: goto L_088CBB60;
    case 784u: goto L_088CBB68;
    case 785u: goto L_088CBB94;
    case 786u: goto L_088CBBCC;
    case 787u: goto L_088CBBD8;
    case 788u: goto L_088CBBF0;
    case 789u: goto L_088CBBFC;
    case 790u: goto L_088CBC08;
    case 791u: goto L_088CBC34;
    case 792u: goto L_088CBC50;
    case 793u: goto L_088CBC7C;
    case 794u: goto L_088CBC88;
    case 795u: goto L_088CBC94;
    case 796u: goto L_088CBCA8;
    case 797u: goto L_088CBCAC;
    case 798u: goto L_088CBCF0;
    case 799u: goto L_088CBCF8;
    case 800u: goto L_088CBD18;
    case 801u: goto L_088CBD20;
    case 802u: goto L_088CBD30;
    case 803u: goto L_088CBD7C;
    case 804u: goto L_088CBD8C;
    case 805u: goto L_088CBDAC;
    case 806u: goto L_088CBDC8;
    case 807u: goto L_088CBDD0;
    case 808u: goto L_088CBDF0;
    case 809u: goto L_088CBDFC;
    case 810u: goto L_088CBE24;
    case 811u: goto L_088CBE40;
    case 812u: goto L_088CBE6C;
    case 813u: goto L_088CBE78;
    case 814u: goto L_088CBE80;
    case 815u: goto L_088CBE8C;
    case 816u: goto L_088CBE94;
    case 817u: goto L_088CBE9C;
    case 818u: goto L_088CBEA8;
    case 819u: goto L_088CBEAC;
    case 820u: goto L_088CBEC0;
    case 821u: goto L_088CBED0;
    case 822u: goto L_088CBED8;
    case 823u: goto L_088CBEE0;
    case 824u: goto L_088CBEE8;
    case 825u: goto L_088CBEF4;
    case 826u: goto L_088CBF04;
    case 827u: goto L_088CBF14;
    case 828u: goto L_088CBF1C;
    case 829u: goto L_088CBF24;
    case 830u: goto L_088CBF30;
    case 831u: goto L_088CBF40;
    case 832u: goto L_088CBF4C;
    case 833u: goto L_088CBF54;
    case 834u: goto L_088CBF5C;
    case 835u: goto L_088CBF60;
    case 836u: goto L_088CBF8C;
    case 837u: goto L_088CBF94;
    case 838u: goto L_088CBF9C;
    case 839u: goto L_088CBFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_088C8000:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_gpr_5 = (14851u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C816C;
      }
      goto L_088C8020;
    }
L_088C8020:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(619))))));
    aot_gpr_5 = (aot_gpr_5 & 32u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C816C;
      }
      goto L_088C8034;
    }
L_088C8034:
    aot_gpr_5 = (16192u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16384u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088C8058;
    }
    goto L_088C8058;
L_088C8058:
    aot_gpr_5 = (16191u << 16u);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_5 = (aot_gpr_5 | 57147u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[26] = aot_fpr_12 / aot_fpr_14;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C807Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C807Cu) goto L_088C807C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C807C:
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x088C80ACu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C80ACu) goto L_088C80AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C80AC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C80C8;
      }
      goto L_088C80C0;
    }
L_088C80C0:
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088C80C8;
L_088C80C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 38u);
      if (branch_taken) {
          goto L_088C816C;
      }
      goto L_088C80D4;
    }
L_088C80D4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 25u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (17853u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
        goto L_088C8128;
    }
    goto L_088C8118;
L_088C8118:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088C813C;
      }
      goto L_088C8128;
    }
L_088C8128:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    goto L_088C813C;
L_088C813C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{0u, std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C816Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C816Cu) goto L_088C816C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C816C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C8178;
      }
      goto L_088C8174;
    }
L_088C8174:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C8178;
L_088C8178:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
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
L_088C8198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(170));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < -961 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C81E0;
      }
      goto L_088C81BC;
    }
L_088C81BC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < -962 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C8204;
      }
      goto L_088C81C8;
    }
L_088C81C8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C81D8u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 602u, 0x088C6E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C81D8u) goto L_088C81D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C81D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8204;
      }
      goto L_088C81E0;
    }
L_088C81E0:
    ctx.gpr[7] = (0u | 280u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_088C8204;
      }
      goto L_088C81EC;
    }
L_088C81EC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C81FCu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_088C8210;
L_088C81FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8204;
      }
      goto L_088C8204;
    }
L_088C8204:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088C8210:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (18493u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 4096u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C8240;
    }
L_088C8240:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C824Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C824Cu) goto L_088C824C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C824C:
    aot_gpr_31 = (0x088C8254u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 337u, 0x088C5B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8254u) goto L_088C8254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8254:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(944))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9304)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8344;
      }
      goto L_088C827C;
    }
L_088C827C:
    aot_gpr_5 = (17302u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8330;
      }
      goto L_088C8298;
    }
L_088C8298:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (17327u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8320;
      }
      goto L_088C82B8;
    }
L_088C82B8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C830C;
      }
      goto L_088C82C8;
    }
L_088C82C8:
    aot_gpr_4 = (15827u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(952)));
    aot_gpr_4 = (aot_gpr_4 | 42501u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C82FC;
      }
      goto L_088C82E8;
    }
L_088C82E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C82F4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088C8808;
L_088C82F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C82FC;
    }
L_088C82FC:
    aot_gpr_31 = (0x088C8304u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C8394;
L_088C8304:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C830C;
    }
L_088C830C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C8318u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088C86D4;
L_088C8318:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C8320;
    }
L_088C8320:
    aot_gpr_31 = (0x088C8328u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C8694;
L_088C8328:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C8330;
    }
L_088C8330:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C833Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088C85B0;
L_088C833C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C8344;
    }
L_088C8344:
    aot_gpr_4 = (15827u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(952)));
    aot_gpr_4 = (aot_gpr_4 | 42501u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8378;
      }
      goto L_088C8364;
    }
L_088C8364:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C8370u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088C83E8;
L_088C8370:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C8378;
    }
L_088C8378:
    aot_gpr_31 = (0x088C8380u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C8394;
L_088C8380:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C8394:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088C83ACu);
    aot_gpr_5 = (0u | 20u);
    goto L_088C8C20;
L_088C83AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C83D8;
      }
      goto L_088C83B4;
    }
L_088C83B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C83C0u);
    aot_gpr_5 = (0u | 75u);
    goto L_088C8910;
L_088C83C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C83D8;
      }
      goto L_088C83C8;
    }
L_088C83C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_31 = (0x088C83D8u);
    aot_gpr_6 = (0u | 29500u);
    goto L_088C8A4C;
L_088C83D8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C83E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x088C8418u);
    aot_gpr_5 = (0u | 20u);
    goto L_088C8C20;
L_088C8418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (15827u << 16u);
      if (branch_taken) {
          goto L_088C858C;
      }
      goto L_088C8420;
    }
L_088C8420:
    aot_gpr_4 = (aot_gpr_4 | 42501u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(952)));
    aot_gpr_4 = (16152u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 48754u);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_14;
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_5 = (17150u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_088C8460;
    }
    goto L_088C8460;
L_088C8460:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C8478u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8CF4;
L_088C8478:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C858C;
      }
      goto L_088C8480;
    }
L_088C8480:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[22];
    aot_gpr_4 = (17046u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C84A4u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8910;
L_088C84A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_088C858C;
      }
      goto L_088C84AC;
    }
L_088C84AC:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (18020u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (20224u << 16u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088C84E0;
      }
      goto L_088C84D0;
    }
L_088C84D0:
    aot_gpr_4 = (0u | 127u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 22050u);
      if (branch_taken) {
          goto L_088C8538;
      }
      goto L_088C84E0;
    }
L_088C84E0:
    aot_fpr_20 = ctx.fpr[22] / aot_fpr_12;
    aot_gpr_4 = (17853u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[26])) ? 0x00800000u : 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088C8520;
      }
      goto L_088C8510;
    }
L_088C8510:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088C8538;
      }
      goto L_088C8520;
    }
L_088C8520:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[26];
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16000));
    goto L_088C8538;
L_088C8538:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C8548u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C8B24;
L_088C8548:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[26];
        goto L_088C8568;
    }
    goto L_088C8558;
L_088C8558:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29500));
      if (branch_taken) {
          goto L_088C857C;
      }
      goto L_088C8568;
    }
L_088C8568:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29500));
    goto L_088C857C;
L_088C857C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C858Cu);
    aot_gpr_5 = (0u | 18u);
    goto L_088C8A4C;
L_088C858C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
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
L_088C85B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(944))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9304)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (17302u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_5 = (17110u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088C861Cu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8C20;
L_088C861C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (17150u << 16u);
      if (branch_taken) {
          goto L_088C8680;
      }
      goto L_088C8624;
    }
L_088C8624:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C8640u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8CF4;
L_088C8640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C8680;
      }
      goto L_088C8648;
    }
L_088C8648:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 127u);
    aot_gpr_31 = (0x088C8658u);
    aot_gpr_6 = (0u | 22050u);
    goto L_088C8B24;
L_088C8658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (16784u << 16u);
      if (branch_taken) {
          goto L_088C8680;
      }
      goto L_088C8660;
    }
L_088C8660:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (0u | 44100u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C8680u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8A4C;
L_088C8680:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C8694:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088C86ACu);
    aot_gpr_5 = (0u | 127u);
    goto L_088C8C20;
L_088C86AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C86C4;
      }
      goto L_088C86B4;
    }
L_088C86B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 63u);
    aot_gpr_31 = (0x088C86C4u);
    aot_gpr_6 = (0u | 22050u);
    goto L_088C8B24;
L_088C86C4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C86D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9304)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(944))))));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (17327u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_14;
    aot_gpr_5 = (17110u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088C8738u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8C20;
L_088C8738:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_088C87F0;
      }
      goto L_088C8740;
    }
L_088C8740:
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 - ctx.fpr[22];
    aot_gpr_4 = (17046u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C8768u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8910;
L_088C8768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C87F0;
      }
      goto L_088C8770;
    }
L_088C8770:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 127u);
    aot_gpr_31 = (0x088C8780u);
    aot_gpr_6 = (0u | 22050u);
    goto L_088C8B24;
L_088C8780:
    aot_gpr_4 = (18020u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
        goto L_088C87B8;
    }
    goto L_088C87A8;
L_088C87A8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29500));
      if (branch_taken) {
          goto L_088C87CC;
      }
      goto L_088C87B8;
    }
L_088C87B8:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29500));
    goto L_088C87CC;
L_088C87CC:
    aot_gpr_5 = (16784u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C87F0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088C8A4C;
L_088C87F0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
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
L_088C8808:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x088C8828u);
    aot_gpr_5 = (0u | 20u);
    goto L_088C8C20;
L_088C8828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C88FC;
      }
      goto L_088C8830;
    }
L_088C8830:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C883Cu);
    aot_gpr_5 = (0u | 75u);
    goto L_088C8910;
L_088C883C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (15827u << 16u);
      if (branch_taken) {
          goto L_088C88FC;
      }
      goto L_088C8844;
    }
L_088C8844:
    aot_gpr_4 = (aot_gpr_4 | 42501u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(952)));
    aot_gpr_4 = (16152u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 48754u);
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088C8884;
    }
    goto L_088C8884;
L_088C8884:
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (17853u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088C88C8;
      }
      goto L_088C88B8;
    }
L_088C88B8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088C88E0;
      }
      goto L_088C88C8;
    }
L_088C88C8:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    goto L_088C88E0;
L_088C88E0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C88ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C8B24;
L_088C88EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_31 = (0x088C88FCu);
    aot_gpr_6 = (0u | 29500u);
    goto L_088C8A4C;
L_088C88FC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C8910:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (17204u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088C8A30;
      }
      goto L_088C8940;
    }
L_088C8940:
    aot_fpr_13 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    ctx.gpr[17] = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[15])) ? 0x00800000u : 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088C89AC;
      }
      goto L_088C8984;
    }
L_088C8984:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23835)));
    aot_gpr_6 = (0u | 100u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088C89AC;
L_088C89AC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C89C0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C89C0u) goto L_088C89C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C89C0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C8A28;
      }
      goto L_088C89D0;
    }
L_088C89D0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_gpr_4 = (0u | 228u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_gpr_31 = (0x088C89F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C8E10;
L_088C89F0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C8A28u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8A28u) goto L_088C8A28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C8A34;
      }
      goto L_088C8A30;
    }
L_088C8A30:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C8A34;
L_088C8A34:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
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
L_088C8A4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (17194u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088C8B04;
      }
      goto L_088C8A84;
    }
L_088C8A84:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C8A98u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8A98u) goto L_088C8A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8A98:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C8AFC;
      }
      goto L_088C8AA8;
    }
L_088C8AA8:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 229u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C8AFCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8AFCu) goto L_088C8AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8AFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C8B08;
      }
      goto L_088C8B04;
    }
L_088C8B04:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C8B08;
L_088C8B08:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
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
L_088C8B24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (17204u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088C8C00;
      }
      goto L_088C8B5C;
    }
L_088C8B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23835)));
    aot_gpr_5 = (0u | 100u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[18] - aot_gpr_5);
    aot_gpr_31 = (0x088C8B94u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8B94u) goto L_088C8B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8B94:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C8BF8;
      }
      goto L_088C8BA4;
    }
L_088C8BA4:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 225u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C8BF8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8BF8u) goto L_088C8BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C8C04;
      }
      goto L_088C8C00;
    }
L_088C8C00:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C8C04;
L_088C8C04:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
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
L_088C8C20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (17372u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088C8CD8;
      }
      goto L_088C8C50;
    }
L_088C8C50:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C8C64u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8C64u) goto L_088C8C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8C64:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C8CD0;
      }
      goto L_088C8C74;
    }
L_088C8C74:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), 0u);
    aot_gpr_4 = (0u | 224u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C8C98u);
    aot_gpr_5 = (0u | 224u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8C98u) goto L_088C8C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8C98:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C8CD0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8CD0u) goto L_088C8CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C8CDC;
      }
      goto L_088C8CD8;
    }
L_088C8CD8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C8CDC;
L_088C8CDC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
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
L_088C8CF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (17264u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088C8DEC;
      }
      goto L_088C8D2C;
    }
L_088C8D2C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C8D40u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8D40u) goto L_088C8D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8D40:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C8DE4;
      }
      goto L_088C8D50;
    }
L_088C8D50:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[18] = (0u | 227u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C8D78u);
    aot_gpr_5 = (0u | 227u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8D78u) goto L_088C8D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8D78:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C8DB8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8DB8u) goto L_088C8DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8DB8:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(200));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C8DE4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8DE4u) goto L_088C8DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C8DF0;
      }
      goto L_088C8DEC;
    }
L_088C8DEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C8DF0;
L_088C8DF0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
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
L_088C8E10:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17963u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 6144u);
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_088C8E58;
    }
    goto L_088C8E48;
L_088C8E48:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088C8E6C;
      }
      goto L_088C8E58;
    }
L_088C8E58:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22050));
    goto L_088C8E6C;
L_088C8E6C:
    jump_target = aot_gpr_31;
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
L_088C8E74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1872)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C8EEC;
      }
      goto L_088C8E94;
    }
L_088C8E94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C8EA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8EA4u) goto L_088C8EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8EA4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8EE4;
      }
      goto L_088C8EC0;
    }
L_088C8EC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C8ECCu);
    aot_gpr_5 = (0u | 60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8ECCu) goto L_088C8ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8ECC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_4 = (0u | 5000u);
      if (branch_taken) {
          goto L_088C8EF4;
      }
      goto L_088C8EDC;
    }
L_088C8EDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8F54;
      }
      goto L_088C8EE4;
    }
L_088C8EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C8F58;
      }
      goto L_088C8EEC;
    }
L_088C8EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C8F58;
      }
      goto L_088C8EF4;
    }
L_088C8EF4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (0u | 40u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 21u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (16384u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17136u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088C8F54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C8F54u) goto L_088C8F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C8F54:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C8F58;
L_088C8F58:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C8F68:
    aot_gpr_4 = (14061u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 34854u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8F94;
      }
      goto L_088C8F84;
    }
L_088C8F84:
    aot_gpr_4 = (48716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088C8FA0;
      }
      goto L_088C8F94;
    }
L_088C8F94:
    aot_gpr_4 = (49316u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    goto L_088C8FA0;
L_088C8FA0:
    jump_target = aot_gpr_31;
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
L_088C8FA8:
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-16560));
    goto L_088C8FB4;
L_088C8FB4:
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C8FD8;
      }
      goto L_088C8FD0;
    }
L_088C8FD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C8FF0;
      }
      goto L_088C8FD8;
    }
L_088C8FD8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C8FB4;
      }
      goto L_088C8FF0;
    }
L_088C8FF0:
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (0u | 5u);
      if (branch_taken) {
          goto L_088C902C;
      }
      goto L_088C9008;
    }
L_088C9008:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088C902C;
      }
      goto L_088C9010;
    }
L_088C9010:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C903C;
      }
      goto L_088C9024;
    }
L_088C9024:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C9034;
      }
      goto L_088C902C;
    }
L_088C902C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088C9070;
      }
      goto L_088C9034;
    }
L_088C9034:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_5 << 3u);
      if (branch_taken) {
          goto L_088C9044;
      }
      goto L_088C903C;
    }
L_088C903C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088C9070;
      }
      goto L_088C9044;
    }
L_088C9044:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[0];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_12;
    goto L_088C9070;
L_088C9070:
    jump_target = aot_gpr_31;
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
L_088C9078:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
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
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088C90BCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088CA7B0;
L_088C90BC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C90D0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0052_entry, 52u, 109u, 0x088D4AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C90D0u) goto L_088C90D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C90D0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C90E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
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
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088C9118u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088CA7B0;
L_088C9118:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C912Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 531u, 0x088D3090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C912Cu) goto L_088C912C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C912C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C9140:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088C9168;
      }
      goto L_088C914C;
    }
L_088C914C:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088C9168;
      }
      goto L_088C9158;
    }
L_088C9158:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(21532), aot_gpr_5);
    goto L_088C9168;
L_088C9168:
    jump_target = aot_gpr_31;
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
L_088C9170:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_088C917C;
      }
      goto L_088C9178;
    }
L_088C9178:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1972), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088C917C;
L_088C917C:
    jump_target = aot_gpr_31;
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
L_088C9184:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26352), static_cast<std::uint8_t>(aot_gpr_5));
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
L_088C918C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8624), static_cast<std::uint8_t>(aot_gpr_4));
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
L_088C919C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1008));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1540)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C91E4;
      }
      goto L_088C91BC;
    }
L_088C91BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C91C8u);
    aot_gpr_5 = (0u | 23u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 189u, 0x088888D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C91C8u) goto L_088C91C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C91C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C91D8;
      }
      goto L_088C91D0;
    }
L_088C91D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1536)));
      if (branch_taken) {
          goto L_088C91F0;
      }
      goto L_088C91D8;
    }
L_088C91D8:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088C91F0;
      }
      goto L_088C91E4;
    }
L_088C91E4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23248));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    goto L_088C91F0;
L_088C91F0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C9200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088C9218u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9218u) goto L_088C9218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9218:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2280), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C922C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088C9240u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1008));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 91u, 0x08888420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9240u) goto L_088C9240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9240:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088C924C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088C925Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C925Cu) goto L_088C925C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C925C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088C9268u);
    aot_gpr_5 = (0u | 158u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9268u) goto L_088C9268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9268:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088C9274:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(21532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088C92D0;
      }
      goto L_088C9298;
    }
L_088C9298:
    aot_gpr_31 = (0x088C92A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C92A0u) goto L_088C92A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C92A0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C92C8;
      }
      goto L_088C92AC;
    }
L_088C92AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C92D8;
      }
      goto L_088C92BC;
    }
L_088C92BC:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C92C8;
    }
L_088C92C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C92D0;
    }
L_088C92D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C92D8;
    }
L_088C92D8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C92F0;
      }
      goto L_088C92E4;
    }
L_088C92E4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C92F0;
    }
L_088C92F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7976)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C9340;
      }
      goto L_088C9300;
    }
L_088C9300:
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C9338;
      }
      goto L_088C930C;
    }
L_088C930C:
    aot_gpr_5 = (3u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16608));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C9330;
      }
      goto L_088C9324;
    }
L_088C9324:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C9330;
    }
L_088C9330:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C9338;
    }
L_088C9338:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7976), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088C9344;
      }
      goto L_088C9340;
    }
L_088C9340:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(0u));
    goto L_088C9344;
L_088C9344:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C9358:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2280)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(29) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (aot_gpr_6 & 65535u);
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9378;
    }
L_088C9378:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21032)));
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
L_088C9390:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C939C;
    }
L_088C939C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C93A8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 649u, 0x088528ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C93A8u) goto L_088C93A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C93A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C93B0;
    }
L_088C93B0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C93BCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 714u, 0x08852D08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C93BCu) goto L_088C93BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C93BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C93C4;
    }
L_088C93C4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C93D0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 874u, 0x08853764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C93D0u) goto L_088C93D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C93D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C93D8;
    }
L_088C93D8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C93E4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 889u, 0x08853840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C93E4u) goto L_088C93E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C93E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C93EC;
    }
L_088C93EC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C93F8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 967u, 0x08853D18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C93F8u) goto L_088C93F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C93F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9400;
    }
L_088C9400:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C940Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 982u, 0x08853DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C940Cu) goto L_088C940C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C940C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9414;
    }
L_088C9414:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9420u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 997u, 0x08853ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9420u) goto L_088C9420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9420:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9428;
    }
L_088C9428:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9434u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 1012u, 0x08853FACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9434u) goto L_088C9434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9434:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C943C;
    }
L_088C943C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9448u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 95u, 0x088545E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9448u) goto L_088C9448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9448:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9450;
    }
L_088C9450:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C945Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 110u, 0x088546BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C945Cu) goto L_088C945C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C945C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9464;
    }
L_088C9464:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9470u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 125u, 0x08854798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9470u) goto L_088C9470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9470:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9478;
    }
L_088C9478:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9484u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 460u, 0x08855D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9484u) goto L_088C9484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9484:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C948C;
    }
L_088C948C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9498u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 728u, 0x08856E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9498u) goto L_088C9498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9498:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C94A0;
    }
L_088C94A0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C94ACu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 758u, 0x08857028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C94ACu) goto L_088C94AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C94AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C94B4;
    }
L_088C94B4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C94C0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 773u, 0x08857104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C94C0u) goto L_088C94C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C94C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C94C8;
    }
L_088C94C8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C94D4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 47u, 0x088582B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C94D4u) goto L_088C94D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C94D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C94DC;
    }
L_088C94DC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C94E8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 122u, 0x088586FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C94E8u) goto L_088C94E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C94E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C94F0;
    }
L_088C94F0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C94FCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 187u, 0x08858B18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C94FCu) goto L_088C94FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C94FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9504;
    }
L_088C9504:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9510u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 192u, 0x08858B74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9510u) goto L_088C9510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9510:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9518;
    }
L_088C9518:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9524u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 197u, 0x08858BD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9524u) goto L_088C9524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9524:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C952C;
    }
L_088C952C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9538u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 202u, 0x08858C2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9538u) goto L_088C9538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9538:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9540;
    }
L_088C9540:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C954Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 327u, 0x08859368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C954Cu) goto L_088C954C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C954C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9554;
    }
L_088C9554:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9560u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 342u, 0x08859444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9560u) goto L_088C9560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9560:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9568;
    }
L_088C9568:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9574u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 411u, 0x08859840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9574u) goto L_088C9574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9574:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C957C;
    }
L_088C957C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C9588u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 426u, 0x0885991Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9588u) goto L_088C9588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9588:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C9590;
    }
L_088C9590:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C959Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 756u, 0x0885AE54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C959Cu) goto L_088C959C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C959C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C95A4;
    }
L_088C95A4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C95B0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 557u, 0x0885E3ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C95B0u) goto L_088C95B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C95B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C95B8;
    }
L_088C95B8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C95C4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 542u, 0x0885E310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C95C4u) goto L_088C95C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C95C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C95CC;
      }
      goto L_088C95CC;
    }
L_088C95CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088C95D8:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
        goto L_088C95F0;
    }
    goto L_088C95E0;
L_088C95E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C9638;
      }
      goto L_088C95F0;
    }
L_088C95F0:
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[9];
      if (branch_taken) {
          goto L_088C9638;
      }
      goto L_088C961C;
    }
L_088C961C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C9638;
      }
      goto L_088C9630;
    }
L_088C9630:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    goto L_088C9638;
L_088C9638:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
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
L_088C9640:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-102));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_6 < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C9708;
      }
      goto L_088C966C;
    }
L_088C966C:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20912)));
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
L_088C9684:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 2601u);
    aot_gpr_31 = (0x088C969Cu);
    ctx.gpr[8] = (0u | 51u);
    goto L_088C95D8;
L_088C969C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088C96A0;
L_088C96A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C9710;
      }
      goto L_088C96A8;
    }
L_088C96A8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 2573u);
    aot_gpr_31 = (0x088C96C0u);
    ctx.gpr[8] = (0u | 28u);
    goto L_088C95D8;
L_088C96C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C96A0;
      }
      goto L_088C96C8;
    }
L_088C96C8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 2652u);
    aot_gpr_31 = (0x088C96E0u);
    ctx.gpr[8] = (0u | 21u);
    goto L_088C95D8;
L_088C96E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C96A0;
      }
      goto L_088C96E8;
    }
L_088C96E8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 2673u);
    aot_gpr_31 = (0x088C9700u);
    ctx.gpr[8] = (0u | 23u);
    goto L_088C95D8;
L_088C9700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C96A0;
      }
      goto L_088C9708;
    }
L_088C9708:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
    goto L_088C9710;
L_088C9710:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C971C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-102));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_6 < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C9804;
      }
      goto L_088C9748;
    }
L_088C9748:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20760)));
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
L_088C9760:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 1574u);
    aot_gpr_31 = (0x088C9778u);
    ctx.gpr[8] = (0u | 34u);
    goto L_088C95D8;
L_088C9778:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088C977C;
L_088C977C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C980C;
      }
      goto L_088C9784;
    }
L_088C9784:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 1558u);
    aot_gpr_31 = (0x088C979Cu);
    ctx.gpr[8] = (0u | 16u);
    goto L_088C95D8;
L_088C979C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C977C;
      }
      goto L_088C97A4;
    }
L_088C97A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 1608u);
    aot_gpr_31 = (0x088C97BCu);
    ctx.gpr[8] = (0u | 11u);
    goto L_088C95D8;
L_088C97BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C977C;
      }
      goto L_088C97C4;
    }
L_088C97C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 1619u);
    aot_gpr_31 = (0x088C97DCu);
    ctx.gpr[8] = (0u | 13u);
    goto L_088C95D8;
L_088C97DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C977C;
      }
      goto L_088C97E4;
    }
L_088C97E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 1632u);
    aot_gpr_31 = (0x088C97FCu);
    ctx.gpr[8] = (0u | 11u);
    goto L_088C95D8;
L_088C97FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C977C;
      }
      goto L_088C9804;
    }
L_088C9804:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
    goto L_088C980C;
L_088C980C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088C9818:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (17761u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2246u << 16u);
    aot_gpr_4 = (17008u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(29008));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (16384u << 16u);
    ctx.gpr[20] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[30] = (0u | 218u);
    ctx.gpr[23] = (0u | 15591u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    goto L_088C989C;
L_088C989C:
    aot_gpr_4 = (ctx.gpr[17] << 5u);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088C995C;
      }
      goto L_088C98BC;
    }
L_088C98BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
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
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C98E4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088CA7B0;
L_088C98E4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C995C;
      }
      goto L_088C98F8;
    }
L_088C98F8:
    aot_fpr_13 = std::sqrt(aot_fpr_12);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C9910u);
    aot_gpr_5 = (0u | 100u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9910u) goto L_088C9910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9910:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C995C;
      }
      goto L_088C9920;
    }
L_088C9920:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C995Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C995Cu) goto L_088C995C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C995C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C989C;
      }
      goto L_088C9970;
    }
L_088C9970:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
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
L_088C99AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2237u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1400)));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_6;
      if (branch_taken) {
          goto L_088C99E8;
      }
      goto L_088C99CC;
    }
L_088C99CC:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2236u << 16u);
      if (branch_taken) {
          goto L_088C9A40;
      }
      goto L_088C99D8;
    }
L_088C99D8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32304));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088C9A40;
      }
      goto L_088C99E8;
    }
L_088C99E8:
    ctx.gpr[7] = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6260)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C9A40;
      }
      goto L_088C9A04;
    }
L_088C9A04:
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6308)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_088C9A34;
      }
      goto L_088C9A20;
    }
L_088C9A20:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6266)));
    aot_gpr_31 = (0x088C9A2Cu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 182u, 0x088D8C28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9A2Cu) goto L_088C9A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9A2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C9A40;
      }
      goto L_088C9A34;
    }
L_088C9A34:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088C9A40u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 296u, 0x088D9D9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9A40u) goto L_088C9A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9A40:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088C9A4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6260)));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088C9A94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088CA7B0;
L_088C9A94:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (17561u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C9B48;
      }
      goto L_088C9AB4;
    }
L_088C9AB4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C9AC4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9AC4u) goto L_088C9AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9AC4:
    aot_gpr_6 = (16908u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C9AE0u);
    aot_gpr_5 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9AE0u) goto L_088C9AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9AE0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C9B48;
      }
      goto L_088C9AF0;
    }
L_088C9AF0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), 0u);
    aot_gpr_4 = (0u | 228u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (0u | 15591u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C9B48u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9B48u) goto L_088C9B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9B48:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C9B5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[23] < aot_gpr_5 ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (17505u << 16u);
      if (branch_taken) {
          goto L_088C9CC0;
      }
      goto L_088C9BA8;
    }
L_088C9BA8:
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (2237u << 16u);
    aot_gpr_4 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (16448u << 16u);
    ctx.gpr[21] = (0u | 24u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (0u | 250u);
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    goto L_088C9BD8;
L_088C9BD8:
    aot_gpr_4 = (ctx.gpr[23] << 8u);
    aot_gpr_5 = (ctx.gpr[23] << 6u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8636)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C9CA8;
      }
      goto L_088C9BF8;
    }
L_088C9BF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8636)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
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
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C9C18u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_088CA7B0;
L_088C9C18:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C9CA8;
      }
      goto L_088C9C2C;
    }
L_088C9C2C:
    aot_fpr_13 = std::sqrt(aot_fpr_12);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C9C44u);
    aot_gpr_5 = (0u | 26u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9C44u) goto L_088C9C44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9C44:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (ctx.gpr[23] << 4u);
      if (branch_taken) {
          goto L_088C9CA8;
      }
      goto L_088C9C54;
    }
L_088C9C54:
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.hi);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(3973));
    aot_gpr_31 = (0x088C9CA8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9CA8u) goto L_088C9CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9CA8:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    aot_gpr_4 = (ctx.gpr[23] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C9BD8;
      }
      goto L_088C9CC0;
    }
L_088C9CC0:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
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
L_088C9CF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088C9E00;
      }
      goto L_088C9D2C;
    }
L_088C9D2C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C9E00;
      }
      goto L_088C9D38;
    }
L_088C9D38:
    aot_gpr_31 = (0x088C9D40u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 340u, 0x088C5B6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9D40u) goto L_088C9D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9D40:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C9D54u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 515u, 0x0880A41Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9D54u) goto L_088C9D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9D54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C9D64u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_088CA4E8;
L_088C9D64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_088C9E00;
      }
      goto L_088C9D74;
    }
L_088C9D74:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(26248), ctx.gpr[18]);
    ctx.gpr[21] = (aot_gpr_16 + ctx.gpr[19]);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C9D9Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9D9Cu) goto L_088C9D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9D9C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088C9DACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 515u, 0x0880A41Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9DACu) goto L_088C9DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26340)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(26240), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[28] + ctx.gpr[19]);
    aot_gpr_6 = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_6 << 3u);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(26284), aot_gpr_6);
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(26284), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(-23834), static_cast<std::uint8_t>(0u));
    goto L_088C9E00;
L_088C9E00:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088C9E24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088C9E68;
      }
      goto L_088C9E44;
    }
L_088C9E44:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C9E68;
      }
      goto L_088C9E50;
    }
L_088C9E50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C9E5Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 528u, 0x088DB3C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9E5Cu) goto L_088C9E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9E5C:
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26268)));
      if (branch_taken) {
          goto L_088C9E6C;
      }
      goto L_088C9E68;
    }
L_088C9E68:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C9E6C;
L_088C9E6C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C9E80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (2246u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(30640));
    ctx.gpr[10] = (aot_gpr_5 << 2u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[11] = (2246u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[11] + static_cast<std::uint32_t>(30664));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[28] + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(8624), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(8640), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088C9EC8u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(8648), static_cast<std::uint8_t>(0u));
    goto L_088C9CF8;
L_088C9EC8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088C9ED4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088C9F08;
      }
      goto L_088C9EE0;
    }
L_088C9EE0:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088C9F08;
      }
      goto L_088C9EEC;
    }
L_088C9EEC:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(26240), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(26160), aot_run_words); }
    goto L_088C9F08;
L_088C9F08:
    jump_target = aot_gpr_31;
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
L_088C9F10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C9FC8;
      }
      goto L_088C9F34;
    }
L_088C9F34:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C9FC8;
      }
      goto L_088C9F40;
    }
L_088C9F40:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26248)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C9F58u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 515u, 0x0880A41Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9F58u) goto L_088C9F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9F58:
    aot_fpr_20 = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
      if (branch_taken) {
          goto L_088C9F70;
      }
      goto L_088C9F64;
    }
L_088C9F64:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_088C9F70;
L_088C9F70:
    aot_gpr_4 = (16960u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_31 = (0x088C9F88u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C9F88u) goto L_088C9F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C9F88:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_088C9FA0;
      }
      goto L_088C9F94;
    }
L_088C9F94:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_088C9FA0;
L_088C9FA0:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C9FCC;
      }
      goto L_088C9FC8;
    }
L_088C9FC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C9FCC;
L_088C9FCC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088C9FE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_6 & 255u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CA16C;
      }
      goto L_088CA010;
    }
L_088CA010:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CA16C;
      }
      goto L_088CA01C;
    }
L_088CA01C:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26248)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[17] = (aot_gpr_16 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088CA16C;
      }
      goto L_088CA038;
    }
L_088CA038:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26268)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CA16C;
      }
      goto L_088CA048;
    }
L_088CA048:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26273)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CA16C;
      }
      goto L_088CA054;
    }
L_088CA054:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26314), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[28] + ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8640), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_5 = (2246u << 16u);
    ctx.gpr[20] = (aot_gpr_5 + static_cast<std::uint32_t>(30664));
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CA104;
      }
      goto L_088CA090;
    }
L_088CA090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA0A4;
      }
      goto L_088CA09C;
    }
L_088CA09C:
    aot_gpr_31 = (0x088CA0A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA0A4u) goto L_088CA0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA0A4:
    aot_gpr_31 = (0x088CA0ACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA0ACu) goto L_088CA0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA0AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CA0E0;
      }
      goto L_088CA0B4;
    }
L_088CA0B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CA0C0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088C9F10;
L_088CA0C0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088CA0D8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA0D8u) goto L_088CA0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA0D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CA104;
      }
      goto L_088CA0E0;
    }
L_088CA0E0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088CA104u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA104u) goto L_088CA104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA104:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26248)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CA11Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA11Cu) goto L_088CA11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA11C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088CA12Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 515u, 0x0880A41Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA12Cu) goto L_088CA12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA12C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26340)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 10u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26284), aot_gpr_5);
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26284), aot_gpr_4);
    goto L_088CA16C;
L_088CA16C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088CA18C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (2246u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(30640));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[21] = (0u | 0u);
    goto L_088CA1C8;
L_088CA1C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_088CA1F4;
      }
      goto L_088CA1D4;
    }
L_088CA1D4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088CA1E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA1E0u) goto L_088CA1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA1E0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
      if (branch_taken) {
          goto L_088CA1F4;
      }
      goto L_088CA1E8;
    }
L_088CA1E8:
    ctx.gpr[17] = (ctx.gpr[21] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
      if (branch_taken) {
          goto L_088CA204;
      }
      goto L_088CA1F4;
    }
L_088CA1F4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CA1C8;
      }
      goto L_088CA204;
    }
L_088CA204:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
      if (branch_taken) {
          goto L_088CA24C;
      }
      goto L_088CA20C;
    }
L_088CA20C:
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30664));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CA230;
      }
      goto L_088CA228;
    }
L_088CA228:
    aot_gpr_31 = (0x088CA230u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 405u, 0x08ABA450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA230u) goto L_088CA230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA230:
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CA240u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088CA378;
L_088CA240:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CA24Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088CA578;
L_088CA24C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088CA270:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088CA2B4;
      }
      goto L_088CA27C;
    }
L_088CA27C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088CA2AC;
      }
      goto L_088CA288;
    }
L_088CA288:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26273)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CA2A4;
      }
      goto L_088CA29C;
    }
L_088CA29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA2EC;
      }
      goto L_088CA2A4;
    }
L_088CA2A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA2EC;
      }
      goto L_088CA2AC;
    }
L_088CA2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA2EC;
      }
      goto L_088CA2B4;
    }
L_088CA2B4:
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16520));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 & 63u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA2E4;
      }
      goto L_088CA2DC;
    }
L_088CA2DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA2EC;
      }
      goto L_088CA2E4;
    }
L_088CA2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA2EC;
      }
      goto L_088CA2EC;
    }
L_088CA2EC:
    jump_target = aot_gpr_31;
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
L_088CA2F4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088CA338;
      }
      goto L_088CA300;
    }
L_088CA300:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088CA330;
      }
      goto L_088CA30C;
    }
L_088CA30C:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26273)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CA328;
      }
      goto L_088CA320;
    }
L_088CA320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA370;
      }
      goto L_088CA328;
    }
L_088CA328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA370;
      }
      goto L_088CA330;
    }
L_088CA330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA370;
      }
      goto L_088CA338;
    }
L_088CA338:
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16500));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 & 63u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA368;
      }
      goto L_088CA360;
    }
L_088CA360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA370;
      }
      goto L_088CA368;
    }
L_088CA368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA370;
      }
      goto L_088CA370;
    }
L_088CA370:
    jump_target = aot_gpr_31;
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
L_088CA378:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088CA408;
      }
      goto L_088CA38C;
    }
L_088CA38C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CA408;
      }
      goto L_088CA398;
    }
L_088CA398:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[7] = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26248), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26240), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26284), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26309), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26314)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CA3F8;
      }
      goto L_088CA3E0;
    }
L_088CA3E0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(19));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088CA3F0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA3F0u) goto L_088CA3F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA3F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CA408;
      }
      goto L_088CA3F8;
    }
L_088CA3F8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(22));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088CA408u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA408u) goto L_088CA408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA408:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088CA414:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1008));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CA474;
      }
      goto L_088CA43C;
    }
L_088CA43C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CA448u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088CA2F4;
L_088CA448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088CA46C;
      }
      goto L_088CA450;
    }
L_088CA450:
    aot_gpr_31 = (0x088CA458u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088CA494;
L_088CA458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CA46C;
      }
      goto L_088CA460;
    }
L_088CA460:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7700)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA47C;
      }
      goto L_088CA46C;
    }
L_088CA46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA480;
      }
      goto L_088CA474;
    }
L_088CA474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA480;
      }
      goto L_088CA47C;
    }
L_088CA47C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088CA480;
L_088CA480:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088CA494:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_4);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8640)));
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
L_088CA4A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CA4A8;
L_088CA4A8:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[28]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8656)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CA4D0;
      }
      goto L_088CA4B8;
    }
L_088CA4B8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA4A8;
      }
      goto L_088CA4C8;
    }
L_088CA4C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CA4DC;
      }
      goto L_088CA4D0;
    }
L_088CA4D0:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8656), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088CA4E0;
      }
      goto L_088CA4DC;
    }
L_088CA4DC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088CA4E0;
L_088CA4E0:
    jump_target = aot_gpr_31;
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
L_088CA4E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16348)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16348), aot_gpr_4);
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30688));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088CA520u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA520u) goto L_088CA520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA520:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23168));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
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
L_088CA540:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 1u);
    goto L_088CA54C;
L_088CA54C:
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[28]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(8656)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_088CA560;
      }
      goto L_088CA55C;
    }
L_088CA55C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088CA560;
L_088CA560:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088CA54C;
      }
      goto L_088CA570;
    }
L_088CA570:
    jump_target = aot_gpr_31;
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
L_088CA578:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_5 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23168));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (ctx.gpr[28] + aot_gpr_5);
      if (branch_taken) {
          goto L_088CA5C8;
      }
      goto L_088CA5A0;
    }
L_088CA5A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(8648)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_088CA5C8;
      }
      goto L_088CA5AC;
    }
L_088CA5AC:
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(26268)));
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
      if (branch_taken) {
          goto L_088CA5D0;
      }
      goto L_088CA5C0;
    }
L_088CA5C0:
    aot_gpr_31 = (0x088CA5C8u);
    goto L_088CA5E4;
L_088CA5C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CA5D8;
      }
      goto L_088CA5D0;
    }
L_088CA5D0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(8648), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CA5D8;
L_088CA5D8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
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
L_088CA5E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23168));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x088CA61Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA61Cu) goto L_088CA61C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA61C:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30688));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16348)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16348), aot_gpr_4);
    aot_gpr_6 = (2246u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_16);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(30640));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8656), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (2246u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8640), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(30664));
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8624), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8648), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(6028));
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(26248), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
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
L_088CA6A8:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(8624)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (2246u << 16u);
      if (branch_taken) {
          goto L_088CA6F4;
      }
      goto L_088CA6BC;
    }
L_088CA6BC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30640));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (2246u << 16u);
      if (branch_taken) {
          goto L_088CA6EC;
      }
      goto L_088CA6D8;
    }
L_088CA6D8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30664));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CA6F4;
      }
      goto L_088CA6EC;
    }
L_088CA6EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA6F8;
      }
      goto L_088CA6F4;
    }
L_088CA6F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CA6F8;
L_088CA6F8:
    jump_target = aot_gpr_31;
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
L_088CA700:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CA794;
      }
      goto L_088CA71C;
    }
L_088CA71C:
    ctx.gpr[17] = (0u | 0u);
    goto L_088CA720;
L_088CA720:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CA72Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 528u, 0x088DB3C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA72Cu) goto L_088CA72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA72C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA720;
      }
      goto L_088CA740;
    }
L_088CA740:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26309)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA758;
      }
      goto L_088CA74C;
    }
L_088CA74C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26310)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CA764;
      }
      goto L_088CA758;
    }
L_088CA758:
    aot_gpr_4 = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(26319), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088CA794;
      }
      goto L_088CA764;
    }
L_088CA764:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CA794;
      }
      goto L_088CA774;
    }
L_088CA774:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(26319), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA794;
      }
      goto L_088CA78C;
    }
L_088CA78C:
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(26319), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CA794;
L_088CA794:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
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
L_088CA7A8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
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
L_088CA7B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16166u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[0] = aot_fpr_12 + ctx.fpr[0];
    jump_target = aot_gpr_31;
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
L_088CA814:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6048)));
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CA884;
      }
      goto L_088CA844;
    }
L_088CA844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6048), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-20624), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20624));
    { const std::uint32_t aot_run_words[9]{aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words); }
    goto L_088CA884;
L_088CA884:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA8AC;
      }
      goto L_088CA890;
    }
L_088CA890:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
        goto L_088CA8B4;
    }
    goto L_088CA8A4;
L_088CA8A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CA8AC;
    }
L_088CA8AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAD64;
      }
      goto L_088CA8B4;
    }
L_088CA8B4:
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA994;
      }
      goto L_088CA900;
    }
L_088CA900:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20624));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23761)));
    goto L_088CA914;
L_088CA914:
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[19];
      if (branch_taken) {
          goto L_088CA980;
      }
      goto L_088CA938;
    }
L_088CA938:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[7] << 4u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CA980;
    }
L_088CA980:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 10 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23761)));
        goto L_088CA914;
    }
    goto L_088CA994;
L_088CA994:
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-31074));
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CA9D8;
      }
      goto L_088CA9A8;
    }
L_088CA9A8:
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-31073));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CA9D8;
      }
      goto L_088CA9BC;
    }
L_088CA9BC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_31 = (0x088CA9CCu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 502u, 0x0880A390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA9CCu) goto L_088CA9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA9CC:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_088CA9EC;
      }
      goto L_088CA9D8;
    }
L_088CA9D8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088CA9E4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 495u, 0x0880A330u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CA9E4u) goto L_088CA9E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CA9E4:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_gpr_5 = (0u | 0u);
    goto L_088CA9EC;
L_088CA9EC:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
        goto L_088CAA04;
    }
    goto L_088CA9F4;
L_088CA9F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CA9FC;
    }
L_088CA9FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAA1C;
      }
      goto L_088CAA04;
    }
L_088CAA04:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CAA50;
      }
      goto L_088CAA0C;
    }
L_088CAA0C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CAA14;
    }
L_088CAA14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CAA1C;
    }
L_088CAA1C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CAA3C;
      }
      goto L_088CAA24;
    }
L_088CAA24:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_31 = (0x088CAA34u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 497u, 0x0880A350u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAA34u) goto L_088CAA34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAA34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAA48;
      }
      goto L_088CAA3C;
    }
L_088CAA3C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088CAA48u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 483u, 0x0880A2A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAA48u) goto L_088CAA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAA48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CAA50;
    }
L_088CAA50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16448u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16928u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 158u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CAB68;
      }
      goto L_088CAB5C;
    }
L_088CAB5C:
    aot_gpr_5 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088CAB68;
L_088CAB68:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_6 = (aot_gpr_5 << 6u);
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1920)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
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
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_31 = (0x088CABCCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CABCCu) goto L_088CABCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CABCC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088CABDCu);
    aot_gpr_5 = (0u | 750u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CABDCu) goto L_088CABDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CABDC:
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_6 = (aot_gpr_5 << 6u);
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1920)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CAC68;
      }
      goto L_088CAC34;
    }
L_088CAC34:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23761)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20624));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23761), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23761)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CAC68;
      }
      goto L_088CAC64;
    }
L_088CAC64:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23761), static_cast<std::uint8_t>(0u));
    goto L_088CAC68;
L_088CAC68:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088CAC74u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAC74u) goto L_088CAC74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAC74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CAC7C;
    }
L_088CAC7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CACA0;
      }
      goto L_088CAC88;
    }
L_088CAC88:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1962), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088CACB0;
      }
      goto L_088CACA0;
    }
L_088CACA0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1962), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    goto L_088CACB0;
L_088CACB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_088CAD3C;
      }
      goto L_088CACC4;
    }
L_088CACC4:
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    ctx.gpr[18] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_16 + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[20]);
    goto L_088CACD8;
L_088CACD8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(37))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088CAD24;
      }
      goto L_088CACF8;
    }
L_088CACF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1920)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(37))))));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_31 = (0x088CAD24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 364u, 0x088C5CF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAD24u) goto L_088CAD24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAD24:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088CACD8;
      }
      goto L_088CAD3C;
    }
L_088CAD3C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 20u);
    goto L_088CAD44;
L_088CAD44:
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088CAD44;
      }
      goto L_088CAD60;
    }
L_088CAD60:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(0u));
    goto L_088CAD64;
L_088CAD64:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088CAD84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26341)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CAE30;
      }
      goto L_088CADB4;
    }
L_088CADB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26342)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CADE8;
      }
      goto L_088CADC0;
    }
L_088CADC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CADCCu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CADCCu) goto L_088CADCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CADCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CADD4;
    }
L_088CADD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CADE0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CADE0u) goto L_088CADE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CADE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CADE8;
    }
L_088CADE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CADF4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CADF4u) goto L_088CADF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CADF4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_088CAE14;
      }
      goto L_088CAE00;
    }
L_088CAE00:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CAE0C;
    }
L_088CAE0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CAE14;
    }
L_088CAE14:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CAE1C;
    }
L_088CAE1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088CAE28u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAE28u) goto L_088CAE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAE28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CAE30;
    }
L_088CAE30:
    aot_gpr_31 = (0x088CAE38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C9274;
L_088CAE38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x088CAE64u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAE64u) goto L_088CAE64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAE64:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CAE70;
    }
L_088CAE70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CAE7C;
    }
L_088CAE7C:
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6264)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CAE98;
    }
L_088CAE98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 59u);
      if (branch_taken) {
          goto L_088CAEC8;
      }
      goto L_088CAEA8;
    }
L_088CAEA8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CAEC8;
      }
      goto L_088CAEB0;
    }
L_088CAEB0:
    aot_gpr_31 = (0x088CAEB8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAEB8u) goto L_088CAEB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAEB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088CAEC8;
      }
      goto L_088CAEC0;
    }
L_088CAEC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088CB040;
      }
      goto L_088CAEC8;
    }
L_088CAEC8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088CAF00;
      }
      goto L_088CAED0;
    }
L_088CAED0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CAEF8;
      }
      goto L_088CAEE8;
    }
L_088CAEE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088CAEF8;
L_088CAEF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_088CAF48;
      }
      goto L_088CAF00;
    }
L_088CAF00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CAF2C;
      }
      goto L_088CAF0C;
    }
L_088CAF0C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CAF34;
      }
      goto L_088CAF24;
    }
L_088CAF24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_088CAF48;
      }
      goto L_088CAF2C;
    }
L_088CAF2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CAF34;
    }
L_088CAF34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    goto L_088CAF48;
L_088CAF48:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088CAF54u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAF54u) goto L_088CAF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAF54:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_088CAF74;
      }
      goto L_088CAF60;
    }
L_088CAF60:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CAF6C;
    }
L_088CAF6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CAF74;
    }
L_088CAF74:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CAF7C;
    }
L_088CAF7C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_088CAFC4;
      }
      goto L_088CAF90;
    }
L_088CAF90:
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088CAF94;
L_088CAF94:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(4312)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088CAFB4;
      }
      goto L_088CAFA0;
    }
L_088CAFA0:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(4252)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
      if (branch_taken) {
          goto L_088CAFB4;
      }
      goto L_088CAFAC;
    }
L_088CAFAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CAFC4;
      }
      goto L_088CAFB4;
    }
L_088CAFB4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088CAF94;
      }
      goto L_088CAFC4;
    }
L_088CAFC4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088CB038;
      }
      goto L_088CAFCC;
    }
L_088CAFCC:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1152)));
        goto L_088CAFE8;
    }
    goto L_088CAFD4;
L_088CAFD4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    aot_gpr_31 = (0x088CAFE0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CAFE0u) goto L_088CAFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CAFE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB038;
      }
      goto L_088CAFE8;
    }
L_088CAFE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 4u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CB038;
      }
      goto L_088CB004;
    }
L_088CB004:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CB038;
      }
      goto L_088CB014;
    }
L_088CB014:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20608)));
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
L_088CB02C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    aot_gpr_31 = (0x088CB038u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB038u) goto L_088CB038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB038:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CB040;
    }
L_088CB040:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CB05C;
      }
      goto L_088CB04C;
    }
L_088CB04C:
    aot_gpr_31 = (0x088CB054u);
    aot_gpr_5 = (0u | 21u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB054u) goto L_088CB054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB054:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB064;
      }
      goto L_088CB05C;
    }
L_088CB05C:
    aot_gpr_31 = (0x088CB064u);
    aot_gpr_5 = (0u | 27u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB064u) goto L_088CB064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB064:
    aot_gpr_31 = (0x088CB06Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB06Cu) goto L_088CB06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB06C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CB074;
    }
L_088CB074:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(311)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (ctx.gpr[20] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CB0D0;
      }
      goto L_088CB088;
    }
L_088CB088:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20568)));
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
L_088CB0A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 61u);
      if (branch_taken) {
          goto L_088CB0D4;
      }
      goto L_088CB0A8;
    }
L_088CB0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 66u);
      if (branch_taken) {
          goto L_088CB0D4;
      }
      goto L_088CB0B0;
    }
L_088CB0B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 62u);
      if (branch_taken) {
          goto L_088CB0D4;
      }
      goto L_088CB0B8;
    }
L_088CB0B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 63u);
      if (branch_taken) {
          goto L_088CB0D4;
      }
      goto L_088CB0C0;
    }
L_088CB0C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 64u);
      if (branch_taken) {
          goto L_088CB0D4;
      }
      goto L_088CB0C8;
    }
L_088CB0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 65u);
      if (branch_taken) {
          goto L_088CB0D4;
      }
      goto L_088CB0D0;
    }
L_088CB0D0:
    ctx.gpr[17] = (0u | 0u);
    goto L_088CB0D4;
L_088CB0D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CB0DC;
    }
L_088CB0DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CB0E8;
    }
L_088CB0E8:
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    aot_gpr_31 = (0x088CB0F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 7u, 0x089B8068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB0F4u) goto L_088CB0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB0F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CB0FC;
    }
L_088CB0FC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(27028), ctx.gpr[17]);
    goto L_088CB100;
L_088CB100:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088CB124:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x088CB170u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB170u) goto L_088CB170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB170:
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_16;
      if (branch_taken) {
          goto L_088CB1B4;
      }
      goto L_088CB178;
    }
L_088CB178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CB1AC;
      }
      goto L_088CB188;
    }
L_088CB188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20440)));
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
L_088CB1A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB1B4;
      }
      goto L_088CB1AC;
    }
L_088CB1AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB794;
      }
      goto L_088CB1B4;
    }
L_088CB1B4:
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
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088CB1D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088CA7B0;
L_088CB1D0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_088CB1EC;
      }
      goto L_088CB1E4;
    }
L_088CB1E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_088CB1F0;
      }
      goto L_088CB1EC;
    }
L_088CB1EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    goto L_088CB1F0;
L_088CB1F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-170));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CB238;
      }
      goto L_088CB218;
    }
L_088CB218:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (16968u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(136)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CB25C;
      }
      goto L_088CB238;
    }
L_088CB238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088CB25C;
L_088CB25C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CB28C;
      }
      goto L_088CB278;
    }
L_088CB278:
    aot_gpr_31 = (0x088CB280u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB280u) goto L_088CB280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB280:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CB2B4;
      }
      goto L_088CB28C;
    }
L_088CB28C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB29C;
    }
L_088CB29C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20368)));
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
L_088CB2B4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB2C0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB2C0u) goto L_088CB2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB2C0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB2CCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 41u, 0x088D02ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB2CCu) goto L_088CB2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB2CC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB2D8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB2D8u) goto L_088CB2D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB2D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB794;
      }
      goto L_088CB2E0;
    }
L_088CB2E0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB2ECu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 780u, 0x088C7C54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB2ECu) goto L_088CB2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB2EC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB2F8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB2F8u) goto L_088CB2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB2F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB300;
    }
L_088CB300:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB30Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088CB7B0;
L_088CB30C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB318u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB318u) goto L_088CB318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB318:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB320;
    }
L_088CB320:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 278u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 222u);
      if (branch_taken) {
          goto L_088CB384;
      }
      goto L_088CB330;
    }
L_088CB330:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 198u);
      if (branch_taken) {
          goto L_088CB384;
      }
      goto L_088CB338;
    }
L_088CB338:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CB3B0;
      }
      goto L_088CB340;
    }
L_088CB340:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB34Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 247u, 0x088CD55Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB34Cu) goto L_088CB34C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB34C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB358u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 834u, 0x088CFFF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB358u) goto L_088CB358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB358:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB364u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB364u) goto L_088CB364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB364:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB370u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 805u, 0x088C7FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB370u) goto L_088CB370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB370:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB37Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB37Cu) goto L_088CB37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB37C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB3D4;
      }
      goto L_088CB384;
    }
L_088CB384:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB390u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088CB7B0;
L_088CB390:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB39Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB39Cu) goto L_088CB39C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB39C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB3A8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB3A8u) goto L_088CB3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB3A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB3D4;
      }
      goto L_088CB3B0;
    }
L_088CB3B0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB3BCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088C8198;
L_088CB3BC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB3C8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB3C8u) goto L_088CB3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB3C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB3D4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 735u, 0x088CF7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB3D4u) goto L_088CB3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB3D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB3DC;
    }
L_088CB3DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB3E8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 386u, 0x088D2248u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB3E8u) goto L_088CB3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB3E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB3F4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB3F4u) goto L_088CB3F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB3F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB3FC;
    }
L_088CB3FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 278u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CB424;
      }
      goto L_088CB410;
    }
L_088CB410:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB41Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088CB7B0;
L_088CB41C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB430;
      }
      goto L_088CB424;
    }
L_088CB424:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB430u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 299u, 0x088D1C48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB430u) goto L_088CB430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB430:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB43Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 791u, 0x088C7E1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB43Cu) goto L_088CB43C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB43C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB448u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB448u) goto L_088CB448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB448:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB454u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB454u) goto L_088CB454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB454:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB45C;
    }
L_088CB45C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088CB46Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 650u, 0x088C7360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB46Cu) goto L_088CB46C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB46C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB478u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 769u, 0x088CFAC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB478u) goto L_088CB478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB478:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB484u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 834u, 0x088CFFF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB484u) goto L_088CB484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB484:
    aot_gpr_31 = (0x088CB48Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB48Cu) goto L_088CB48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB48C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CB4AC;
      }
      goto L_088CB498;
    }
L_088CB498:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB4A4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 441u, 0x088D2660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB4A4u) goto L_088CB4A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB4A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB4B8;
      }
      goto L_088CB4AC;
    }
L_088CB4AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB4B8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 488u, 0x088D2BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB4B8u) goto L_088CB4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB4B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1396), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB4C4;
    }
L_088CB4C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088CB4D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 650u, 0x088C7360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB4D4u) goto L_088CB4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB4D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB4E0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 292u, 0x088CD96Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB4E0u) goto L_088CB4E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB4E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CB570;
      }
      goto L_088CB4E8;
    }
L_088CB4E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CB508;
      }
      goto L_088CB4FC;
    }
L_088CB4FC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB508u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 294u, 0x088CD97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB508u) goto L_088CB508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088CB528;
      }
      goto L_088CB520;
    }
L_088CB520:
    aot_gpr_31 = (0x088CB528u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 769u, 0x088CFAC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB528u) goto L_088CB528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB528:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB534u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 834u, 0x088CFFF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB534u) goto L_088CB534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB534:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB540u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 41u, 0x088D02ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB540u) goto L_088CB540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB540:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB54Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 762u, 0x088C7AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB54Cu) goto L_088CB54C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB54C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB558u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB558u) goto L_088CB558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB558:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB564u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 318u, 0x088CDBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB564u) goto L_088CB564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB564:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB570u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 735u, 0x088CF7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB570u) goto L_088CB570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB570:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB57Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB57Cu) goto L_088CB57C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB57C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1396), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CB788;
      }
      goto L_088CB588;
    }
L_088CB588:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088CB598u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 650u, 0x088C7360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB598u) goto L_088CB598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB598:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -972 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -943 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CB5BC;
      }
      goto L_088CB5A8;
    }
L_088CB5A8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CB5F8;
      }
      goto L_088CB5B4;
    }
L_088CB5B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB618;
      }
      goto L_088CB5BC;
    }
L_088CB5BC:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -942 ? 1u : 0u);
        goto L_088CB5F0;
    }
    goto L_088CB5C4;
L_088CB5C4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -970 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CB618;
      }
      goto L_088CB5D0;
    }
L_088CB5D0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB5DCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 534u, 0x088C686Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB5DCu) goto L_088CB5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB5DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB5E8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB5E8u) goto L_088CB5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB5E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB774;
      }
      goto L_088CB5F0;
    }
L_088CB5F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CB618;
      }
      goto L_088CB5F8;
    }
L_088CB5F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB604u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 150u, 0x088CCD9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB604u) goto L_088CB604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB604:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB610u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB610u) goto L_088CB610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB610:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB774;
      }
      goto L_088CB618;
    }
L_088CB618:
    aot_gpr_31 = (0x088CB620u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB620u) goto L_088CB620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB620:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
        goto L_088CB668;
    }
    goto L_088CB630;
L_088CB630:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CB678;
      }
      goto L_088CB63C;
    }
L_088CB63C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB648u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088CB7B0;
L_088CB648:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB654u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 735u, 0x088CF7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB654u) goto L_088CB654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB654:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB660u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB660u) goto L_088CB660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB774;
      }
      goto L_088CB668;
    }
L_088CB668:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CB678;
      }
      goto L_088CB670;
    }
L_088CB670:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CB774;
      }
      goto L_088CB678;
    }
L_088CB678:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 251u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CB694;
      }
      goto L_088CB688;
    }
L_088CB688:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB694u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088C8E74;
L_088CB694:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB6A0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 292u, 0x088CD96Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB6A0u) goto L_088CB6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB6A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CB774;
      }
      goto L_088CB6A8;
    }
L_088CB6A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB6B4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 567u, 0x088C6ADCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB6B4u) goto L_088CB6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB6B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CB6D4;
      }
      goto L_088CB6C8;
    }
L_088CB6C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB6D4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 294u, 0x088CD97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB6D4u) goto L_088CB6D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB6D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB6E0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 769u, 0x088CFAC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB6E0u) goto L_088CB6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB6E0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB6ECu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 735u, 0x088CF7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB6ECu) goto L_088CB6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB6EC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB6F8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 834u, 0x088CFFF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB6F8u) goto L_088CB6F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB6F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB704u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 41u, 0x088D02ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB704u) goto L_088CB704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB704:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088CB710u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 687u, 0x088C7638u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB710u) goto L_088CB710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB710:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CB724;
      }
      goto L_088CB718;
    }
L_088CB718:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB724u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 616u, 0x088C6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB724u) goto L_088CB724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB724:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088CB730u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 726u, 0x088C78A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB730u) goto L_088CB730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CB744;
      }
      goto L_088CB738;
    }
L_088CB738:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB744u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 710u, 0x088C7710u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB744u) goto L_088CB744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB744:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB750u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 762u, 0x088C7AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB750u) goto L_088CB750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB750:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB75Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 318u, 0x088CDBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB75Cu) goto L_088CB75C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB75C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB768u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 743u, 0x088C7944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB768u) goto L_088CB768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB768:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB774u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 630u, 0x088C7120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB774u) goto L_088CB774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB774:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB780u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 97u, 0x088D0610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB780u) goto L_088CB780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB780:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1724), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088CB788;
L_088CB788:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088CB794u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 517u, 0x088C66C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB794u) goto L_088CB794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB794:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
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
L_088CB7B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-368));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_6);
    aot_gpr_6 = (18292u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 9216u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), ctx.gpr[20]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_run_words); }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 145u, 0x088CCD34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088CB834;
    }
L_088CB834:
    aot_gpr_31 = (0x088CB83Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB83Cu) goto L_088CB83C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB83C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088CB86C;
    }
    goto L_088CB848;
L_088CB848:
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    aot_gpr_31 = (0x088CB858u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB858u) goto L_088CB858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB858:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088CB864u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB864u) goto L_088CB864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088CB8A4;
      }
      goto L_088CB86C;
    }
L_088CB86C:
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(608)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_4 << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_088CB8A4;
L_088CB8A4:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x088CB8B4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB8B4u) goto L_088CB8B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB8B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CB91C;
      }
      goto L_088CB918;
    }
L_088CB918:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    goto L_088CB91C;
L_088CB91C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16128u << 16u);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 278u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088CB97C;
      }
      goto L_088CB944;
    }
L_088CB944:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (15969u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(948)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    aot_gpr_31 = (0x088CB968u);
    aot_gpr_5 = (0u | 35u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB968u) goto L_088CB968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB968:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CBA10;
      }
      goto L_088CB974;
    }
L_088CB974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088CBA10;
      }
      goto L_088CB97C;
    }
L_088CB97C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 222u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CB9C8;
      }
      goto L_088CB990;
    }
L_088CB990:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (15969u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    aot_gpr_31 = (0x088CB9B4u);
    aot_gpr_5 = (0u | 35u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CB9B4u) goto L_088CB9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CB9B4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CBA10;
      }
      goto L_088CB9C0;
    }
L_088CB9C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088CBA10;
      }
      goto L_088CB9C8;
    }
L_088CB9C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CB9F8;
      }
      goto L_088CB9D8;
    }
L_088CB9D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (15969u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (aot_gpr_5 | 18350u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CBA10;
      }
      goto L_088CB9F8;
    }
L_088CB9F8:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (15969u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1640)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    goto L_088CBA10;
L_088CBA10:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[24]) || std::isnan(aot_fpr_12)) && ctx.fpr[24] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CBA50;
      }
      goto L_088CBA24;
    }
L_088CBA24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBA48;
      }
      goto L_088CBA34;
    }
L_088CBA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBA48;
      }
      goto L_088CBA40;
    }
L_088CBA40:
    aot_gpr_31 = (0x088CBA48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBA48u) goto L_088CBA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 149u, 0x088CCD5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088CBA50;
    }
L_088CBA50:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CBA70;
      }
      goto L_088CBA68;
    }
L_088CBA68:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_088CBA70;
L_088CBA70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088CBA80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBA80u) goto L_088CBA80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBA80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17046u << 16u);
      if (branch_taken) {
          goto L_088CBAF8;
      }
      goto L_088CBA9C;
    }
L_088CBA9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16840u << 16u);
      if (branch_taken) {
          goto L_088CBAC0;
      }
      goto L_088CBAB8;
    }
L_088CBAB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088CBB0C;
      }
      goto L_088CBAC0;
    }
L_088CBAC0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CBB0C;
      }
      goto L_088CBAF8;
    }
L_088CBAF8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088CBB0C;
L_088CBB0C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CBCF0;
      }
      goto L_088CBB14;
    }
L_088CBB14:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (17274u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x088CBB2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBB2Cu) goto L_088CBB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBB2C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CBCF0;
      }
      goto L_088CBB3C;
    }
L_088CBB3C:
    aot_gpr_4 = (0u | 88u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBC94;
      }
      goto L_088CBB50;
    }
L_088CBB50:
    aot_gpr_4 = (0u | 305u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CBB68;
      }
      goto L_088CBB60;
    }
L_088CBB60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    aot_gpr_4 = (17517u << 16u);
      if (branch_taken) {
          goto L_088CBC08;
      }
      goto L_088CBB68;
    }
L_088CBB68:
    aot_gpr_4 = (17420u << 16u);
    aot_gpr_5 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (0u | 4600u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_6);
    aot_gpr_4 = (0u | 563u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (ctx.gpr[18] | 0u);
        goto L_088CBB94;
    }
    goto L_088CBB94;
L_088CBB94:
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    ctx.gpr[7] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.lo);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (20224u << 16u);
      if (branch_taken) {
          goto L_088CBBD8;
      }
      goto L_088CBBCC;
    }
L_088CBBCC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CBBF0;
      }
      goto L_088CBBD8;
    }
L_088CBBD8:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_088CBBF0;
L_088CBBF0:
    ctx.gpr[7] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088CBBFC;
    }
    goto L_088CBBFC;
L_088CBBFC:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CBCAC;
      }
      goto L_088CBC08;
    }
L_088CBC08:
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (20224u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (0u | 3651u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 949u);
      if (branch_taken) {
          goto L_088CBC50;
      }
      goto L_088CBC34;
    }
L_088CBC34:
    aot_gpr_5 = (17517u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CBC7C;
      }
      goto L_088CBC50;
    }
L_088CBC50:
    aot_gpr_5 = (17517u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_088CBC7C;
L_088CBC7C:
    ctx.gpr[7] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088CBC88;
    }
    goto L_088CBC88;
L_088CBC88:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CBCAC;
      }
      goto L_088CBC94;
    }
L_088CBC94:
    aot_gpr_5 = (0u | 216u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088CBCA8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBCA8u) goto L_088CBCA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBCA8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_088CBCAC;
L_088CBCAC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (16576u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17274u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088CBCF0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBCF0u) goto L_088CBCF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBCF0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088CBD20;
      }
      goto L_088CBCF8;
    }
L_088CBCF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_5);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088CBD18u);
    aot_gpr_5 = (0u | 19u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBD18u) goto L_088CBD18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBD18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CBD8C;
      }
      goto L_088CBD20;
    }
L_088CBD20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CBD7C;
      }
      goto L_088CBD30;
    }
L_088CBD30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (49440u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CBD8C;
      }
      goto L_088CBD7C;
    }
L_088CBD7C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(96));
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
    goto L_088CBD8C;
L_088CBD8C:
    aot_gpr_4 = (18073u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 141u, 0x088CCD08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088CBDAC;
    }
L_088CBDAC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CBDD0;
      }
      goto L_088CBDC8;
    }
L_088CBDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088CBDF0;
      }
      goto L_088CBDD0;
    }
L_088CBDD0:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16153u << 16u);
    ctx.fpr[26] = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[26] / aot_fpr_13;
    goto L_088CBDF0;
L_088CBDF0:
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_088CBF60;
      }
      goto L_088CBDFC;
    }
L_088CBDFC:
    aot_gpr_4 = (17882u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (20224u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 1300u);
      if (branch_taken) {
          goto L_088CBE40;
      }
      goto L_088CBE24;
    }
L_088CBE24:
    aot_gpr_5 = (17882u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CBE6C;
      }
      goto L_088CBE40;
    }
L_088CBE40:
    aot_gpr_5 = (17882u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[22] = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[22] = (aot_gpr_5 + ctx.gpr[22]);
    goto L_088CBE6C;
L_088CBE6C:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[22] ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[22] = (aot_gpr_4 | 0u);
        goto L_088CBE78;
    }
    goto L_088CBE78;
L_088CBE78:
    aot_gpr_31 = (0x088CBE80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBE80u) goto L_088CBE80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBE80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CBEAC;
      }
      goto L_088CBE8C;
    }
L_088CBE8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
      if (branch_taken) {
          goto L_088CBE9C;
      }
      goto L_088CBE94;
    }
L_088CBE94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
      if (branch_taken) {
          goto L_088CBEAC;
      }
      goto L_088CBE9C;
    }
L_088CBE9C:
    aot_gpr_4 = (ctx.gpr[22] < static_cast<std::uint32_t>(1300) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBEAC;
      }
      goto L_088CBEA8;
    }
L_088CBEA8:
    ctx.gpr[22] = (0u | 1300u);
    goto L_088CBEAC;
L_088CBEAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 275u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CBF5C;
      }
      goto L_088CBEC0;
    }
L_088CBEC0:
    ctx.gpr[30] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088CBED0u);
    aot_gpr_5 = (0u | 30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBED0u) goto L_088CBED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBED0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
      if (branch_taken) {
          goto L_088CBEE0;
      }
      goto L_088CBED8;
    }
L_088CBED8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CBF5C;
      }
      goto L_088CBEE0;
    }
L_088CBEE0:
    aot_gpr_31 = (0x088CBEE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBEE8u) goto L_088CBEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBEE8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBF30;
      }
      goto L_088CBEF4;
    }
L_088CBEF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 61u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088CBF30;
      }
      goto L_088CBF04;
    }
L_088CBF04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 59u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088CBF30;
      }
      goto L_088CBF14;
    }
L_088CBF14:
    aot_gpr_31 = (0x088CBF1Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBF1Cu) goto L_088CBF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBF1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088CBF30;
      }
      goto L_088CBF24;
    }
L_088CBF24:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088CBF30u);
    aot_gpr_5 = (0u | 30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBF30u) goto L_088CBF30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBF30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBF54;
      }
      goto L_088CBF40;
    }
L_088CBF40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CBF54;
      }
      goto L_088CBF4C;
    }
L_088CBF4C:
    aot_gpr_31 = (0x088CBF54u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CBF54u) goto L_088CBF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CBF54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 149u, 0x088CCD5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088CBF5C;
    }
L_088CBF5C:
    aot_gpr_4 = (16256u << 16u);
    goto L_088CBF60;
L_088CBF60:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 25u, 0x088CC1BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088CBF8C;
    }
L_088CBF8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
      if (branch_taken) {
          goto L_088CBF9C;
      }
      goto L_088CBF94;
    }
L_088CBF94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    aot_gpr_4 = (17768u << 16u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 5u, 0x088CC03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088CBF9C;
    }
L_088CBF9C:
    aot_gpr_4 = (17673u << 16u);
    aot_gpr_5 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (0u | 18000u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_6);
    aot_gpr_4 = (0u | 2204u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_5 = (ctx.gpr[18] | 0u);
        goto L_088CBFC8;
    }
    goto L_088CBFC8;
L_088CBFC8:
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.lo);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (20224u << 16u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 2u, 0x088CC00Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0050_entry, 50u, 1u, 0x088CC000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0049(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0049_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_49(Runtime &runtime) {
    runtime.register_generated_unit(49u, 0x088C8000u, 16384u, &recomp_unit_0049, &recomp_unit_0049_entry);
    runtime.register_function(0x088C8000u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8020u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8034u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8058u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C807Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8118u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8128u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C813Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C816Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8174u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8178u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8198u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8204u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8210u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8240u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C824Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8254u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C827Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8298u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8304u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C830Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8318u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8320u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8328u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8330u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C833Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8344u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8364u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8370u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8378u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8380u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8394u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8418u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8420u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8460u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8478u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8480u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8510u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8538u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8548u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8558u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8568u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C857Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C858Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C861Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8624u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8640u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8648u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8658u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8660u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8680u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8694u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8738u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8740u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8768u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8770u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8780u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8808u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8828u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8830u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C883Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8844u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8884u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8910u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8940u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8984u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8ECCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9008u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9010u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9024u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C902Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9034u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C903Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9044u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9070u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9078u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9118u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C912Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9140u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C914Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9158u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9168u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9170u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9178u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C917Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9184u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C918Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C919Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9200u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9218u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C922Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9240u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C924Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C925Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9268u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9274u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9298u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9300u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C930Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9324u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9330u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9338u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9340u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9344u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9358u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9378u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C939Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9400u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C940Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9414u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9420u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9428u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9434u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C943Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9448u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9450u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C945Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9464u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9470u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9478u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9484u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C948Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9498u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9504u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9510u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9518u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9524u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C952Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9538u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9540u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C954Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9554u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9560u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9568u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9574u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C957Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9588u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9590u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C959Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C961Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9630u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9638u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9640u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C966Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9684u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C969Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9700u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9708u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9710u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C971Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9748u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9760u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9778u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C977Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9784u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C979Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9804u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C980Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9818u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C989Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9910u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9920u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C995Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9970u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9ED4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA010u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA01Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA038u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA048u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA054u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA090u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA09Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA104u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA11Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA12Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA16Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA18Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA204u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA20Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA228u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA230u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA240u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA24Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA270u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA27Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA288u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA29Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA300u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA30Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA320u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA328u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA330u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA338u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA360u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA368u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA370u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA378u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA38Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA398u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA408u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA414u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA43Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA448u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA450u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA460u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA46Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA474u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA47Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA480u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA494u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA540u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA54Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA55Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA560u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA570u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA578u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA61Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA700u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA71Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA720u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA72Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA740u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA74Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA758u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA764u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA774u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA78Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA814u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA844u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA884u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA890u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA900u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA914u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA938u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA980u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA994u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAED0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB004u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB014u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB02Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB038u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB040u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB04Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB054u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB05Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB064u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB06Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB074u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB088u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB100u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB124u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB170u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB178u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB188u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB218u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB238u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB25Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB278u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB280u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB28Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB29Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB300u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB30Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB318u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB320u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB330u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB338u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB340u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB34Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB358u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB364u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB370u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB37Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB384u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB39Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB410u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB41Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB424u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB430u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB43Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB448u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB454u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB45Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB46Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB478u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB484u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB48Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB498u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB508u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB528u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB534u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB540u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB54Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB558u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB564u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB570u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB57Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB588u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB598u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB604u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB610u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB618u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB620u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB630u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB63Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB648u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB654u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB660u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB668u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB670u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB678u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB688u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB694u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB704u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB710u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB718u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB724u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB730u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB738u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB744u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB750u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB75Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB768u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB774u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB780u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB788u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB834u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB83Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB848u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB858u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB864u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB86Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB918u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB91Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB944u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB968u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB974u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB97Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB990u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBED0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBED8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFC8u, &recomp_unit_0049, "recomp_unit_0049");
}
} // namespace psprecomp
