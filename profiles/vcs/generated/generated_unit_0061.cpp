#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0061[64] = {
    0x00142A0042084001ull, 0x0000400880340015ull, 0x8000000000094911ull, 0xA108400000000000ull,
    0x81080A800010000Aull, 0x8AA9034200022100ull, 0x9015494A22210202ull, 0x4295000249492AA4ull,
    0x5254A280014A8001ull, 0x0008035080822AAAull, 0x4482885095200080ull, 0x4A284A08A325484Bull,
    0x90288610104A4000ull, 0x4508082164A48968ull, 0x5450A4A284008005ull, 0x42AA8545512A2A89ull,
    0x244000581160440Dull, 0x15082084954A2222ull, 0x8005255409454A00ull, 0x69228A2928514942ull,
    0xA4A0002018154249ull, 0x252825294125088Aull, 0x80012812812C0941ull, 0x88000801420208AAull,
    0x581408A1262924A0ull, 0x0952A20122A140A9ull, 0x5050222908002003ull, 0x2280010A41020081ull,
    0x0092248000406902ull, 0x82A252000101A400ull, 0x5504A5000222088Aull, 0x0002851429348000ull,
    0x9A40001421429348ull, 0x0020034000A50A14ull, 0x04114B05054A2288ull, 0x94D2081006905484ull,
    0x0845100435500042ull, 0x69248D2424400008ull, 0x11A4111044411104ull, 0x40022208D2491A4Aull,
    0x12028022144A2469ull, 0x800100450885000Cull, 0x82921282888A8294ull, 0x0A111A4149129292ull,
    0x450A4692422148D2ull, 0x4150000248D20A34ull, 0x4B48D2050524011Aull, 0x0001004D291A40AAull,
    0x94A4084850408920ull, 0xACAA8804895040A6ull, 0x004005350A85254Cull, 0x41505042048A8884ull,
    0x54C1525555525005ull, 0x0A108802010A1104ull, 0xA14284A0A1421145ull, 0x004AA0A150004000ull,
    0x4885240040C10508ull, 0x000418282180601Aull, 0x2020241A48852020ull, 0x404000800400C02Aull,
    0x34020180692214AAull, 0x010182821A805000ull, 0x8148852094802000ull, 0x4000801805440404ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0061[64] = {
    1u, 11u, 20u, 28u, 33u, 42u, 56u, 73u, 92u, 108u, 123u, 137u, 159u, 172u, 191u, 207u,
    231u, 246u, 264u, 281u, 303u, 319u, 339u, 354u, 366u, 385u, 404u, 417u, 428u, 440u, 453u, 469u,
    482u, 499u, 511u, 529u, 547u, 561u, 577u, 592u, 610u, 627u, 638u, 657u, 677u, 698u, 714u, 734u,
    750u, 766u, 787u, 805u, 821u, 845u, 857u, 876u, 887u, 901u, 914u, 928u, 937u, 955u, 967u, 980u,
};
void recomp_unit_0061_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,6,16 fprs=12,20,13,14 gpr_occ=3949 fpr_occ=130 gpr_total=6315 fpr_total=164
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[20] = aot_fpr_20; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F8000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0061[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0061[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088F8000;
    case 2u: goto L_088F8038;
    case 3u: goto L_088F804C;
    case 4u: goto L_088F8064;
    case 5u: goto L_088F8078;
    case 6u: goto L_088F80A4;
    case 7u: goto L_088F80AC;
    case 8u: goto L_088F80B4;
    case 9u: goto L_088F80C8;
    case 10u: goto L_088F80D0;
    case 11u: goto L_088F8100;
    case 12u: goto L_088F8108;
    case 13u: goto L_088F8110;
    case 14u: goto L_088F8148;
    case 15u: goto L_088F8150;
    case 16u: goto L_088F8154;
    case 17u: goto L_088F817C;
    case 18u: goto L_088F818C;
    case 19u: goto L_088F81B8;
    case 20u: goto L_088F8200;
    case 21u: goto L_088F8210;
    case 22u: goto L_088F8220;
    case 23u: goto L_088F822C;
    case 24u: goto L_088F8238;
    case 25u: goto L_088F8240;
    case 26u: goto L_088F824C;
    case 27u: goto L_088F82FC;
    case 28u: goto L_088F83B8;
    case 29u: goto L_088F83CC;
    case 30u: goto L_088F83E0;
    case 31u: goto L_088F83F4;
    case 32u: goto L_088F83FC;
    case 33u: goto L_088F8404;
    case 34u: goto L_088F840C;
    case 35u: goto L_088F8450;
    case 36u: goto L_088F849C;
    case 37u: goto L_088F84A4;
    case 38u: goto L_088F84AC;
    case 39u: goto L_088F84CC;
    case 40u: goto L_088F84E0;
    case 41u: goto L_088F84FC;
    case 42u: goto L_088F8520;
    case 43u: goto L_088F8534;
    case 44u: goto L_088F8544;
    case 45u: goto L_088F8584;
    case 46u: goto L_088F8598;
    case 47u: goto L_088F85A0;
    case 48u: goto L_088F85A4;
    case 49u: goto L_088F85C0;
    case 50u: goto L_088F85CC;
    case 51u: goto L_088F85D4;
    case 52u: goto L_088F85DC;
    case 53u: goto L_088F85E4;
    case 54u: goto L_088F85EC;
    case 55u: goto L_088F85FC;
    case 56u: goto L_088F8604;
    case 57u: goto L_088F8624;
    case 58u: goto L_088F8640;
    case 59u: goto L_088F8654;
    case 60u: goto L_088F8664;
    case 61u: goto L_088F8674;
    case 62u: goto L_088F8684;
    case 63u: goto L_088F868C;
    case 64u: goto L_088F8698;
    case 65u: goto L_088F86A0;
    case 66u: goto L_088F86AC;
    case 67u: goto L_088F86B8;
    case 68u: goto L_088F86C0;
    case 69u: goto L_088F86C8;
    case 70u: goto L_088F86D0;
    case 71u: goto L_088F86F0;
    case 72u: goto L_088F86FC;
    case 73u: goto L_088F8708;
    case 74u: goto L_088F8714;
    case 75u: goto L_088F871C;
    case 76u: goto L_088F8724;
    case 77u: goto L_088F872C;
    case 78u: goto L_088F8734;
    case 79u: goto L_088F8740;
    case 80u: goto L_088F874C;
    case 81u: goto L_088F8758;
    case 82u: goto L_088F8760;
    case 83u: goto L_088F876C;
    case 84u: goto L_088F8778;
    case 85u: goto L_088F8784;
    case 86u: goto L_088F87C0;
    case 87u: goto L_088F87C8;
    case 88u: goto L_088F87D0;
    case 89u: goto L_088F87DC;
    case 90u: goto L_088F87E4;
    case 91u: goto L_088F87F8;
    case 92u: goto L_088F8800;
    case 93u: goto L_088F883C;
    case 94u: goto L_088F8844;
    case 95u: goto L_088F884C;
    case 96u: goto L_088F8858;
    case 97u: goto L_088F8860;
    case 98u: goto L_088F889C;
    case 99u: goto L_088F88A4;
    case 100u: goto L_088F88B4;
    case 101u: goto L_088F88BC;
    case 102u: goto L_088F88C8;
    case 103u: goto L_088F88D0;
    case 104u: goto L_088F88D8;
    case 105u: goto L_088F88E4;
    case 106u: goto L_088F88F0;
    case 107u: goto L_088F88F8;
    case 108u: goto L_088F8904;
    case 109u: goto L_088F890C;
    case 110u: goto L_088F8914;
    case 111u: goto L_088F891C;
    case 112u: goto L_088F8924;
    case 113u: goto L_088F892C;
    case 114u: goto L_088F8934;
    case 115u: goto L_088F8944;
    case 116u: goto L_088F895C;
    case 117u: goto L_088F897C;
    case 118u: goto L_088F8990;
    case 119u: goto L_088F8998;
    case 120u: goto L_088F89A0;
    case 121u: goto L_088F89A4;
    case 122u: goto L_088F89CC;
    case 123u: goto L_088F8A1C;
    case 124u: goto L_088F8A54;
    case 125u: goto L_088F8A60;
    case 126u: goto L_088F8A68;
    case 127u: goto L_088F8A70;
    case 128u: goto L_088F8A7C;
    case 129u: goto L_088F8A90;
    case 130u: goto L_088F8A98;
    case 131u: goto L_088F8AAC;
    case 132u: goto L_088F8ABC;
    case 133u: goto L_088F8AC4;
    case 134u: goto L_088F8ADC;
    case 135u: goto L_088F8AE8;
    case 136u: goto L_088F8AF8;
    case 137u: goto L_088F8B00;
    case 138u: goto L_088F8B04;
    case 139u: goto L_088F8B0C;
    case 140u: goto L_088F8B18;
    case 141u: goto L_088F8B2C;
    case 142u: goto L_088F8B38;
    case 143u: goto L_088F8B40;
    case 144u: goto L_088F8B48;
    case 145u: goto L_088F8B54;
    case 146u: goto L_088F8B60;
    case 147u: goto L_088F8B64;
    case 148u: goto L_088F8B74;
    case 149u: goto L_088F8B7C;
    case 150u: goto L_088F8B8C;
    case 151u: goto L_088F8BA4;
    case 152u: goto L_088F8BAC;
    case 153u: goto L_088F8BB8;
    case 154u: goto L_088F8BCC;
    case 155u: goto L_088F8BD4;
    case 156u: goto L_088F8BE4;
    case 157u: goto L_088F8BEC;
    case 158u: goto L_088F8BF8;
    case 159u: goto L_088F8C38;
    case 160u: goto L_088F8C44;
    case 161u: goto L_088F8C4C;
    case 162u: goto L_088F8C58;
    case 163u: goto L_088F8C70;
    case 164u: goto L_088F8C90;
    case 165u: goto L_088F8CA4;
    case 166u: goto L_088F8CA8;
    case 167u: goto L_088F8CBC;
    case 168u: goto L_088F8CCC;
    case 169u: goto L_088F8CD4;
    case 170u: goto L_088F8CF0;
    case 171u: goto L_088F8CFC;
    case 172u: goto L_088F8D0C;
    case 173u: goto L_088F8D14;
    case 174u: goto L_088F8D18;
    case 175u: goto L_088F8D20;
    case 176u: goto L_088F8D2C;
    case 177u: goto L_088F8D3C;
    case 178u: goto L_088F8D48;
    case 179u: goto L_088F8D54;
    case 180u: goto L_088F8D5C;
    case 181u: goto L_088F8D68;
    case 182u: goto L_088F8D74;
    case 183u: goto L_088F8D78;
    case 184u: goto L_088F8D80;
    case 185u: goto L_088F8D94;
    case 186u: goto L_088F8DAC;
    case 187u: goto L_088F8DCC;
    case 188u: goto L_088F8DE0;
    case 189u: goto L_088F8DE8;
    case 190u: goto L_088F8DF8;
    case 191u: goto L_088F8E00;
    case 192u: goto L_088F8E08;
    case 193u: goto L_088F8E3C;
    case 194u: goto L_088F8E68;
    case 195u: goto L_088F8E7C;
    case 196u: goto L_088F8E84;
    case 197u: goto L_088F8E94;
    case 198u: goto L_088F8E9C;
    case 199u: goto L_088F8EA8;
    case 200u: goto L_088F8EB4;
    case 201u: goto L_088F8EBC;
    case 202u: goto L_088F8ED0;
    case 203u: goto L_088F8ED8;
    case 204u: goto L_088F8EE8;
    case 205u: goto L_088F8EF0;
    case 206u: goto L_088F8EF8;
    case 207u: goto L_088F8F00;
    case 208u: goto L_088F8F0C;
    case 209u: goto L_088F8F1C;
    case 210u: goto L_088F8F24;
    case 211u: goto L_088F8F2C;
    case 212u: goto L_088F8F34;
    case 213u: goto L_088F8F44;
    case 214u: goto L_088F8F4C;
    case 215u: goto L_088F8F54;
    case 216u: goto L_088F8F60;
    case 217u: goto L_088F8F70;
    case 218u: goto L_088F8F78;
    case 219u: goto L_088F8F80;
    case 220u: goto L_088F8F88;
    case 221u: goto L_088F8F98;
    case 222u: goto L_088F8FA0;
    case 223u: goto L_088F8FA8;
    case 224u: goto L_088F8FBC;
    case 225u: goto L_088F8FC4;
    case 226u: goto L_088F8FCC;
    case 227u: goto L_088F8FD4;
    case 228u: goto L_088F8FDC;
    case 229u: goto L_088F8FE4;
    case 230u: goto L_088F8FF8;
    case 231u: goto L_088F9000;
    case 232u: goto L_088F9008;
    case 233u: goto L_088F900C;
    case 234u: goto L_088F9028;
    case 235u: goto L_088F9038;
    case 236u: goto L_088F9054;
    case 237u: goto L_088F9058;
    case 238u: goto L_088F9060;
    case 239u: goto L_088F9070;
    case 240u: goto L_088F908C;
    case 241u: goto L_088F9090;
    case 242u: goto L_088F9098;
    case 243u: goto L_088F90D8;
    case 244u: goto L_088F90E8;
    case 245u: goto L_088F90F4;
    case 246u: goto L_088F9104;
    case 247u: goto L_088F9114;
    case 248u: goto L_088F9124;
    case 249u: goto L_088F9134;
    case 250u: goto L_088F9144;
    case 251u: goto L_088F914C;
    case 252u: goto L_088F9158;
    case 253u: goto L_088F9160;
    case 254u: goto L_088F9168;
    case 255u: goto L_088F9170;
    case 256u: goto L_088F917C;
    case 257u: goto L_088F9188;
    case 258u: goto L_088F919C;
    case 259u: goto L_088F91B4;
    case 260u: goto L_088F91CC;
    case 261u: goto L_088F91E0;
    case 262u: goto L_088F91E8;
    case 263u: goto L_088F91F0;
    case 264u: goto L_088F9224;
    case 265u: goto L_088F922C;
    case 266u: goto L_088F9238;
    case 267u: goto L_088F9240;
    case 268u: goto L_088F9248;
    case 269u: goto L_088F9258;
    case 270u: goto L_088F9260;
    case 271u: goto L_088F926C;
    case 272u: goto L_088F9288;
    case 273u: goto L_088F9290;
    case 274u: goto L_088F9298;
    case 275u: goto L_088F92A0;
    case 276u: goto L_088F92A8;
    case 277u: goto L_088F92B4;
    case 278u: goto L_088F92C0;
    case 279u: goto L_088F92C8;
    case 280u: goto L_088F92FC;
    case 281u: goto L_088F9304;
    case 282u: goto L_088F9318;
    case 283u: goto L_088F9320;
    case 284u: goto L_088F932C;
    case 285u: goto L_088F9338;
    case 286u: goto L_088F9340;
    case 287u: goto L_088F9350;
    case 288u: goto L_088F9358;
    case 289u: goto L_088F936C;
    case 290u: goto L_088F9374;
    case 291u: goto L_088F9380;
    case 292u: goto L_088F938C;
    case 293u: goto L_088F9394;
    case 294u: goto L_088F93A4;
    case 295u: goto L_088F93AC;
    case 296u: goto L_088F93BC;
    case 297u: goto L_088F93C4;
    case 298u: goto L_088F93D4;
    case 299u: goto L_088F93E0;
    case 300u: goto L_088F93EC;
    case 301u: goto L_088F93F4;
    case 302u: goto L_088F93F8;
    case 303u: goto L_088F9400;
    case 304u: goto L_088F940C;
    case 305u: goto L_088F9418;
    case 306u: goto L_088F9424;
    case 307u: goto L_088F9438;
    case 308u: goto L_088F9440;
    case 309u: goto L_088F9448;
    case 310u: goto L_088F9450;
    case 311u: goto L_088F946C;
    case 312u: goto L_088F9470;
    case 313u: goto L_088F9494;
    case 314u: goto L_088F94D4;
    case 315u: goto L_088F94DC;
    case 316u: goto L_088F94E8;
    case 317u: goto L_088F94F4;
    case 318u: goto L_088F94FC;
    case 319u: goto L_088F9504;
    case 320u: goto L_088F950C;
    case 321u: goto L_088F951C;
    case 322u: goto L_088F952C;
    case 323u: goto L_088F9540;
    case 324u: goto L_088F9548;
    case 325u: goto L_088F9554;
    case 326u: goto L_088F9560;
    case 327u: goto L_088F9578;
    case 328u: goto L_088F9580;
    case 329u: goto L_088F958C;
    case 330u: goto L_088F9594;
    case 331u: goto L_088F95A0;
    case 332u: goto L_088F95A8;
    case 333u: goto L_088F95B4;
    case 334u: goto L_088F95CC;
    case 335u: goto L_088F95D4;
    case 336u: goto L_088F95E0;
    case 337u: goto L_088F95E8;
    case 338u: goto L_088F95F4;
    case 339u: goto L_088F9600;
    case 340u: goto L_088F9618;
    case 341u: goto L_088F9620;
    case 342u: goto L_088F962C;
    case 343u: goto L_088F9648;
    case 344u: goto L_088F964C;
    case 345u: goto L_088F9654;
    case 346u: goto L_088F9660;
    case 347u: goto L_088F967C;
    case 348u: goto L_088F9684;
    case 349u: goto L_088F9690;
    case 350u: goto L_088F96AC;
    case 351u: goto L_088F96B4;
    case 352u: goto L_088F96C0;
    case 353u: goto L_088F96FC;
    case 354u: goto L_088F9704;
    case 355u: goto L_088F970C;
    case 356u: goto L_088F9714;
    case 357u: goto L_088F971C;
    case 358u: goto L_088F972C;
    case 359u: goto L_088F9744;
    case 360u: goto L_088F9764;
    case 361u: goto L_088F9778;
    case 362u: goto L_088F9780;
    case 363u: goto L_088F97AC;
    case 364u: goto L_088F97EC;
    case 365u: goto L_088F97FC;
    case 366u: goto L_088F9814;
    case 367u: goto L_088F981C;
    case 368u: goto L_088F9828;
    case 369u: goto L_088F9834;
    case 370u: goto L_088F9840;
    case 371u: goto L_088F984C;
    case 372u: goto L_088F9854;
    case 373u: goto L_088F9864;
    case 374u: goto L_088F9868;
    case 375u: goto L_088F9874;
    case 376u: goto L_088F9880;
    case 377u: goto L_088F9894;
    case 378u: goto L_088F989C;
    case 379u: goto L_088F98AC;
    case 380u: goto L_088F98C8;
    case 381u: goto L_088F98D0;
    case 382u: goto L_088F98EC;
    case 383u: goto L_088F98F0;
    case 384u: goto L_088F98F8;
    case 385u: goto L_088F9900;
    case 386u: goto L_088F990C;
    case 387u: goto L_088F9914;
    case 388u: goto L_088F991C;
    case 389u: goto L_088F9938;
    case 390u: goto L_088F9940;
    case 391u: goto L_088F9954;
    case 392u: goto L_088F995C;
    case 393u: goto L_088F9964;
    case 394u: goto L_088F9974;
    case 395u: goto L_088F9980;
    case 396u: goto L_088F99A4;
    case 397u: goto L_088F99B4;
    case 398u: goto L_088F99BC;
    case 399u: goto L_088F99C4;
    case 400u: goto L_088F99D0;
    case 401u: goto L_088F99D8;
    case 402u: goto L_088F99E0;
    case 403u: goto L_088F99EC;
    case 404u: goto L_088F9A00;
    case 405u: goto L_088F9A04;
    case 406u: goto L_088F9A34;
    case 407u: goto L_088F9A6C;
    case 408u: goto L_088F9A80;
    case 409u: goto L_088F9A8C;
    case 410u: goto L_088F9A94;
    case 411u: goto L_088F9AA4;
    case 412u: goto L_088F9AB4;
    case 413u: goto L_088F9AD0;
    case 414u: goto L_088F9AD8;
    case 415u: goto L_088F9AF0;
    case 416u: goto L_088F9AF8;
    case 417u: goto L_088F9B00;
    case 418u: goto L_088F9B1C;
    case 419u: goto L_088F9B44;
    case 420u: goto L_088F9B60;
    case 421u: goto L_088F9B78;
    case 422u: goto L_088F9B84;
    case 423u: goto L_088F9B8C;
    case 424u: goto L_088F9BA0;
    case 425u: goto L_088F9BDC;
    case 426u: goto L_088F9BE4;
    case 427u: goto L_088F9BF4;
    case 428u: goto L_088F9C04;
    case 429u: goto L_088F9C20;
    case 430u: goto L_088F9C2C;
    case 431u: goto L_088F9C34;
    case 432u: goto L_088F9C38;
    case 433u: goto L_088F9C58;
    case 434u: goto L_088F9C9C;
    case 435u: goto L_088F9CA8;
    case 436u: goto L_088F9CB4;
    case 437u: goto L_088F9CC4;
    case 438u: goto L_088F9CD0;
    case 439u: goto L_088F9CDC;
    case 440u: goto L_088F9D28;
    case 441u: goto L_088F9D34;
    case 442u: goto L_088F9D3C;
    case 443u: goto L_088F9D40;
    case 444u: goto L_088F9D60;
    case 445u: goto L_088F9DA4;
    case 446u: goto L_088F9DB0;
    case 447u: goto L_088F9DB8;
    case 448u: goto L_088F9DC4;
    case 449u: goto L_088F9DD4;
    case 450u: goto L_088F9DDC;
    case 451u: goto L_088F9DE4;
    case 452u: goto L_088F9DFC;
    case 453u: goto L_088F9E04;
    case 454u: goto L_088F9E0C;
    case 455u: goto L_088F9E1C;
    case 456u: goto L_088F9E2C;
    case 457u: goto L_088F9E44;
    case 458u: goto L_088F9E54;
    case 459u: goto L_088F9E64;
    case 460u: goto L_088F9EA0;
    case 461u: goto L_088F9EA8;
    case 462u: goto L_088F9EB4;
    case 463u: goto L_088F9EBC;
    case 464u: goto L_088F9EC8;
    case 465u: goto L_088F9EE0;
    case 466u: goto L_088F9EE8;
    case 467u: goto L_088F9EF0;
    case 468u: goto L_088F9EF8;
    case 469u: goto L_088F9F3C;
    case 470u: goto L_088F9F48;
    case 471u: goto L_088F9F50;
    case 472u: goto L_088F9F54;
    case 473u: goto L_088F9F60;
    case 474u: goto L_088F9F6C;
    case 475u: goto L_088F9F74;
    case 476u: goto L_088F9F88;
    case 477u: goto L_088F9F90;
    case 478u: goto L_088F9FA0;
    case 479u: goto L_088F9FA8;
    case 480u: goto L_088F9FBC;
    case 481u: goto L_088F9FC4;
    case 482u: goto L_088FA00C;
    case 483u: goto L_088FA018;
    case 484u: goto L_088FA020;
    case 485u: goto L_088FA024;
    case 486u: goto L_088FA030;
    case 487u: goto L_088FA03C;
    case 488u: goto L_088FA044;
    case 489u: goto L_088FA058;
    case 490u: goto L_088FA060;
    case 491u: goto L_088FA074;
    case 492u: goto L_088FA088;
    case 493u: goto L_088FA090;
    case 494u: goto L_088FA0D8;
    case 495u: goto L_088FA0E4;
    case 496u: goto L_088FA0EC;
    case 497u: goto L_088FA0F0;
    case 498u: goto L_088FA0FC;
    case 499u: goto L_088FA108;
    case 500u: goto L_088FA110;
    case 501u: goto L_088FA124;
    case 502u: goto L_088FA12C;
    case 503u: goto L_088FA140;
    case 504u: goto L_088FA148;
    case 505u: goto L_088FA154;
    case 506u: goto L_088FA15C;
    case 507u: goto L_088FA198;
    case 508u: goto L_088FA1A0;
    case 509u: goto L_088FA1A4;
    case 510u: goto L_088FA1D4;
    case 511u: goto L_088FA20C;
    case 512u: goto L_088FA21C;
    case 513u: goto L_088FA224;
    case 514u: goto L_088FA234;
    case 515u: goto L_088FA244;
    case 516u: goto L_088FA24C;
    case 517u: goto L_088FA258;
    case 518u: goto L_088FA260;
    case 519u: goto L_088FA268;
    case 520u: goto L_088FA280;
    case 521u: goto L_088FA288;
    case 522u: goto L_088FA2A0;
    case 523u: goto L_088FA2A4;
    case 524u: goto L_088FA2AC;
    case 525u: goto L_088FA2B8;
    case 526u: goto L_088FA2C0;
    case 527u: goto L_088FA2D0;
    case 528u: goto L_088FA2E8;
    case 529u: goto L_088FA308;
    case 530u: goto L_088FA31C;
    case 531u: goto L_088FA328;
    case 532u: goto L_088FA330;
    case 533u: goto L_088FA338;
    case 534u: goto L_088FA350;
    case 535u: goto L_088FA35C;
    case 536u: goto L_088FA364;
    case 537u: goto L_088FA368;
    case 538u: goto L_088FA390;
    case 539u: goto L_088FA3AC;
    case 540u: goto L_088FA3C4;
    case 541u: goto L_088FA3D0;
    case 542u: goto L_088FA3D8;
    case 543u: goto L_088FA3DC;
    case 544u: goto L_088FA3E8;
    case 545u: goto L_088FA3F0;
    case 546u: goto L_088FA3FC;
    case 547u: goto L_088FA404;
    case 548u: goto L_088FA418;
    case 549u: goto L_088FA450;
    case 550u: goto L_088FA458;
    case 551u: goto L_088FA460;
    case 552u: goto L_088FA468;
    case 553u: goto L_088FA470;
    case 554u: goto L_088FA474;
    case 555u: goto L_088FA488;
    case 556u: goto L_088FA4B0;
    case 557u: goto L_088FA4C0;
    case 558u: goto L_088FA4C8;
    case 559u: goto L_088FA4D8;
    case 560u: goto L_088FA4EC;
    case 561u: goto L_088FA50C;
    case 562u: goto L_088FA558;
    case 563u: goto L_088FA568;
    case 564u: goto L_088FA574;
    case 565u: goto L_088FA588;
    case 566u: goto L_088FA594;
    case 567u: goto L_088FA5A0;
    case 568u: goto L_088FA5A8;
    case 569u: goto L_088FA5AC;
    case 570u: goto L_088FA5BC;
    case 571u: goto L_088FA5C8;
    case 572u: goto L_088FA5D4;
    case 573u: goto L_088FA5E0;
    case 574u: goto L_088FA5EC;
    case 575u: goto L_088FA5F4;
    case 576u: goto L_088FA5F8;
    case 577u: goto L_088FA608;
    case 578u: goto L_088FA620;
    case 579u: goto L_088FA630;
    case 580u: goto L_088FA640;
    case 581u: goto L_088FA658;
    case 582u: goto L_088FA668;
    case 583u: goto L_088FA678;
    case 584u: goto L_088FA690;
    case 585u: goto L_088FA6A0;
    case 586u: goto L_088FA6B0;
    case 587u: goto L_088FA6C8;
    case 588u: goto L_088FA6D4;
    case 589u: goto L_088FA6DC;
    case 590u: goto L_088FA6E0;
    case 591u: goto L_088FA6F0;
    case 592u: goto L_088FA704;
    case 593u: goto L_088FA70C;
    case 594u: goto L_088FA718;
    case 595u: goto L_088FA724;
    case 596u: goto L_088FA72C;
    case 597u: goto L_088FA730;
    case 598u: goto L_088FA740;
    case 599u: goto L_088FA74C;
    case 600u: goto L_088FA758;
    case 601u: goto L_088FA764;
    case 602u: goto L_088FA770;
    case 603u: goto L_088FA778;
    case 604u: goto L_088FA77C;
    case 605u: goto L_088FA78C;
    case 606u: goto L_088FA7A4;
    case 607u: goto L_088FA7B4;
    case 608u: goto L_088FA7C4;
    case 609u: goto L_088FA7F8;
    case 610u: goto L_088FA800;
    case 611u: goto L_088FA80C;
    case 612u: goto L_088FA814;
    case 613u: goto L_088FA818;
    case 614u: goto L_088FA828;
    case 615u: goto L_088FA834;
    case 616u: goto L_088FA844;
    case 617u: goto L_088FA84C;
    case 618u: goto L_088FA858;
    case 619u: goto L_088FA868;
    case 620u: goto L_088FA870;
    case 621u: goto L_088FA884;
    case 622u: goto L_088FA894;
    case 623u: goto L_088FA8BC;
    case 624u: goto L_088FA8C4;
    case 625u: goto L_088FA8E4;
    case 626u: goto L_088FA8F0;
    case 627u: goto L_088FA908;
    case 628u: goto L_088FA90C;
    case 629u: goto L_088FA940;
    case 630u: goto L_088FA948;
    case 631u: goto L_088FA95C;
    case 632u: goto L_088FA96C;
    case 633u: goto L_088FA980;
    case 634u: goto L_088FA988;
    case 635u: goto L_088FA998;
    case 636u: goto L_088FA9C0;
    case 637u: goto L_088FA9FC;
    case 638u: goto L_088FAA08;
    case 639u: goto L_088FAA10;
    case 640u: goto L_088FAA1C;
    case 641u: goto L_088FAA24;
    case 642u: goto L_088FAA3C;
    case 643u: goto L_088FAA44;
    case 644u: goto L_088FAA4C;
    case 645u: goto L_088FAA5C;
    case 646u: goto L_088FAA6C;
    case 647u: goto L_088FAA7C;
    case 648u: goto L_088FAA84;
    case 649u: goto L_088FAA9C;
    case 650u: goto L_088FAAA4;
    case 651u: goto L_088FAAB0;
    case 652u: goto L_088FAAC4;
    case 653u: goto L_088FAAD0;
    case 654u: goto L_088FAADC;
    case 655u: goto L_088FAAE4;
    case 656u: goto L_088FAAFC;
    case 657u: goto L_088FAB04;
    case 658u: goto L_088FAB10;
    case 659u: goto L_088FAB1C;
    case 660u: goto L_088FAB24;
    case 661u: goto L_088FAB30;
    case 662u: goto L_088FAB3C;
    case 663u: goto L_088FAB44;
    case 664u: goto L_088FAB50;
    case 665u: goto L_088FAB60;
    case 666u: goto L_088FAB6C;
    case 667u: goto L_088FAB78;
    case 668u: goto L_088FAB80;
    case 669u: goto L_088FAB98;
    case 670u: goto L_088FABA4;
    case 671u: goto L_088FABAC;
    case 672u: goto L_088FABB0;
    case 673u: goto L_088FABC0;
    case 674u: goto L_088FABD0;
    case 675u: goto L_088FABE4;
    case 676u: goto L_088FABEC;
    case 677u: goto L_088FAC04;
    case 678u: goto L_088FAC10;
    case 679u: goto L_088FAC18;
    case 680u: goto L_088FAC1C;
    case 681u: goto L_088FAC2C;
    case 682u: goto L_088FAC38;
    case 683u: goto L_088FAC40;
    case 684u: goto L_088FAC54;
    case 685u: goto L_088FAC64;
    case 686u: goto L_088FAC78;
    case 687u: goto L_088FAC84;
    case 688u: goto L_088FAC90;
    case 689u: goto L_088FAC9C;
    case 690u: goto L_088FACA4;
    case 691u: goto L_088FACA8;
    case 692u: goto L_088FACB8;
    case 693u: goto L_088FACC4;
    case 694u: goto L_088FACCC;
    case 695u: goto L_088FACE0;
    case 696u: goto L_088FACE8;
    case 697u: goto L_088FACF8;
    case 698u: goto L_088FAD08;
    case 699u: goto L_088FAD10;
    case 700u: goto L_088FAD14;
    case 701u: goto L_088FAD24;
    case 702u: goto L_088FAD2C;
    case 703u: goto L_088FAD44;
    case 704u: goto L_088FAD50;
    case 705u: goto L_088FAD58;
    case 706u: goto L_088FAD5C;
    case 707u: goto L_088FAD6C;
    case 708u: goto L_088FAD78;
    case 709u: goto L_088FAD84;
    case 710u: goto L_088FADD0;
    case 711u: goto L_088FADD8;
    case 712u: goto L_088FADE0;
    case 713u: goto L_088FADF8;
    case 714u: goto L_088FAE04;
    case 715u: goto L_088FAE0C;
    case 716u: goto L_088FAE10;
    case 717u: goto L_088FAE20;
    case 718u: goto L_088FAE48;
    case 719u: goto L_088FAE54;
    case 720u: goto L_088FAE60;
    case 721u: goto L_088FAE68;
    case 722u: goto L_088FAE80;
    case 723u: goto L_088FAE88;
    case 724u: goto L_088FAEA4;
    case 725u: goto L_088FAEB0;
    case 726u: goto L_088FAEB8;
    case 727u: goto L_088FAEBC;
    case 728u: goto L_088FAECC;
    case 729u: goto L_088FAED8;
    case 730u: goto L_088FAEE0;
    case 731u: goto L_088FAEE4;
    case 732u: goto L_088FAEEC;
    case 733u: goto L_088FAEF8;
    case 734u: goto L_088FAF04;
    case 735u: goto L_088FAF0C;
    case 736u: goto L_088FAF14;
    case 737u: goto L_088FAF1C;
    case 738u: goto L_088FAF38;
    case 739u: goto L_088FAF44;
    case 740u: goto L_088FAF4C;
    case 741u: goto L_088FAF50;
    case 742u: goto L_088FAF60;
    case 743u: goto L_088FAF6C;
    case 744u: goto L_088FAF74;
    case 745u: goto L_088FAF80;
    case 746u: goto L_088FAF88;
    case 747u: goto L_088FAF8C;
    case 748u: goto L_088FAF98;
    case 749u: goto L_088FAFC0;
    case 750u: goto L_088FB014;
    case 751u: goto L_088FB020;
    case 752u: goto L_088FB02C;
    case 753u: goto L_088FB03C;
    case 754u: goto L_088FB058;
    case 755u: goto L_088FB070;
    case 756u: goto L_088FB078;
    case 757u: goto L_088FB08C;
    case 758u: goto L_088FB098;
    case 759u: goto L_088FB0AC;
    case 760u: goto L_088FB0C8;
    case 761u: goto L_088FB0D4;
    case 762u: goto L_088FB0DC;
    case 763u: goto L_088FB0E8;
    case 764u: goto L_088FB0F0;
    case 765u: goto L_088FB0FC;
    case 766u: goto L_088FB104;
    case 767u: goto L_088FB108;
    case 768u: goto L_088FB114;
    case 769u: goto L_088FB11C;
    case 770u: goto L_088FB138;
    case 771u: goto L_088FB150;
    case 772u: goto L_088FB158;
    case 773u: goto L_088FB160;
    case 774u: goto L_088FB16C;
    case 775u: goto L_088FB17C;
    case 776u: goto L_088FB188;
    case 777u: goto L_088FB1AC;
    case 778u: goto L_088FB1BC;
    case 779u: goto L_088FB1C4;
    case 780u: goto L_088FB1CC;
    case 781u: goto L_088FB1D4;
    case 782u: goto L_088FB1DC;
    case 783u: goto L_088FB1E8;
    case 784u: goto L_088FB1EC;
    case 785u: goto L_088FB1F4;
    case 786u: goto L_088FB1FC;
    case 787u: goto L_088FB208;
    case 788u: goto L_088FB20C;
    case 789u: goto L_088FB218;
    case 790u: goto L_088FB220;
    case 791u: goto L_088FB228;
    case 792u: goto L_088FB234;
    case 793u: goto L_088FB240;
    case 794u: goto L_088FB248;
    case 795u: goto L_088FB25C;
    case 796u: goto L_088FB264;
    case 797u: goto L_088FB26C;
    case 798u: goto L_088FB280;
    case 799u: goto L_088FB288;
    case 800u: goto L_088FB290;
    case 801u: goto L_088FB294;
    case 802u: goto L_088FB2A0;
    case 803u: goto L_088FB2A8;
    case 804u: goto L_088FB2D8;
    case 805u: goto L_088FB308;
    case 806u: goto L_088FB31C;
    case 807u: goto L_088FB32C;
    case 808u: goto L_088FB33C;
    case 809u: goto L_088FB344;
    case 810u: goto L_088FB34C;
    case 811u: goto L_088FB35C;
    case 812u: goto L_088FB368;
    case 813u: goto L_088FB384;
    case 814u: goto L_088FB398;
    case 815u: goto L_088FB3B0;
    case 816u: goto L_088FB3B8;
    case 817u: goto L_088FB3D0;
    case 818u: goto L_088FB3D8;
    case 819u: goto L_088FB3E0;
    case 820u: goto L_088FB3F8;
    case 821u: goto L_088FB400;
    case 822u: goto L_088FB408;
    case 823u: goto L_088FB430;
    case 824u: goto L_088FB438;
    case 825u: goto L_088FB444;
    case 826u: goto L_088FB450;
    case 827u: goto L_088FB458;
    case 828u: goto L_088FB460;
    case 829u: goto L_088FB468;
    case 830u: goto L_088FB470;
    case 831u: goto L_088FB478;
    case 832u: goto L_088FB480;
    case 833u: goto L_088FB488;
    case 834u: goto L_088FB490;
    case 835u: goto L_088FB498;
    case 836u: goto L_088FB4A4;
    case 837u: goto L_088FB4B0;
    case 838u: goto L_088FB4B8;
    case 839u: goto L_088FB4C0;
    case 840u: goto L_088FB4D8;
    case 841u: goto L_088FB4DC;
    case 842u: goto L_088FB4E8;
    case 843u: goto L_088FB4F0;
    case 844u: goto L_088FB4F8;
    case 845u: goto L_088FB508;
    case 846u: goto L_088FB520;
    case 847u: goto L_088FB530;
    case 848u: goto L_088FB544;
    case 849u: goto L_088FB54C;
    case 850u: goto L_088FB560;
    case 851u: goto L_088FB584;
    case 852u: goto L_088FB5AC;
    case 853u: goto L_088FB5BC;
    case 854u: goto L_088FB5D0;
    case 855u: goto L_088FB5E4;
    case 856u: goto L_088FB5EC;
    case 857u: goto L_088FB600;
    case 858u: goto L_088FB608;
    case 859u: goto L_088FB618;
    case 860u: goto L_088FB620;
    case 861u: goto L_088FB630;
    case 862u: goto L_088FB644;
    case 863u: goto L_088FB658;
    case 864u: goto L_088FB660;
    case 865u: goto L_088FB674;
    case 866u: goto L_088FB67C;
    case 867u: goto L_088FB694;
    case 868u: goto L_088FB69C;
    case 869u: goto L_088FB6A8;
    case 870u: goto L_088FB6BC;
    case 871u: goto L_088FB6C4;
    case 872u: goto L_088FB6D8;
    case 873u: goto L_088FB6E0;
    case 874u: goto L_088FB6F4;
    case 875u: goto L_088FB6FC;
    case 876u: goto L_088FB738;
    case 877u: goto L_088FB770;
    case 878u: goto L_088FB778;
    case 879u: goto L_088FB780;
    case 880u: goto L_088FB794;
    case 881u: goto L_088FB79C;
    case 882u: goto L_088FB7B4;
    case 883u: goto L_088FB7BC;
    case 884u: goto L_088FB7C4;
    case 885u: goto L_088FB7CC;
    case 886u: goto L_088FB7D8;
    case 887u: goto L_088FB80C;
    case 888u: goto L_088FB820;
    case 889u: goto L_088FB828;
    case 890u: goto L_088FB840;
    case 891u: goto L_088FB858;
    case 892u: goto L_088FB85C;
    case 893u: goto L_088FB878;
    case 894u: goto L_088FB8A8;
    case 895u: goto L_088FB8B4;
    case 896u: goto L_088FB8C0;
    case 897u: goto L_088FB8C8;
    case 898u: goto L_088FB8DC;
    case 899u: goto L_088FB8EC;
    case 900u: goto L_088FB8F8;
    case 901u: goto L_088FB904;
    case 902u: goto L_088FB90C;
    case 903u: goto L_088FB910;
    case 904u: goto L_088FB934;
    case 905u: goto L_088FB938;
    case 906u: goto L_088FB95C;
    case 907u: goto L_088FB960;
    case 908u: goto L_088FB974;
    case 909u: goto L_088FB98C;
    case 910u: goto L_088FB994;
    case 911u: goto L_088FB9AC;
    case 912u: goto L_088FB9B0;
    case 913u: goto L_088FB9C8;
    case 914u: goto L_088FBA14;
    case 915u: goto L_088FBA34;
    case 916u: goto L_088FBA40;
    case 917u: goto L_088FBA48;
    case 918u: goto L_088FBA5C;
    case 919u: goto L_088FBA6C;
    case 920u: goto L_088FBA78;
    case 921u: goto L_088FBA84;
    case 922u: goto L_088FBA8C;
    case 923u: goto L_088FBA90;
    case 924u: goto L_088FBAA8;
    case 925u: goto L_088FBAB4;
    case 926u: goto L_088FBAD4;
    case 927u: goto L_088FBAF4;
    case 928u: goto L_088FBB04;
    case 929u: goto L_088FBB0C;
    case 930u: goto L_088FBB14;
    case 931u: goto L_088FBB38;
    case 932u: goto L_088FBB3C;
    case 933u: goto L_088FBB68;
    case 934u: goto L_088FBB9C;
    case 935u: goto L_088FBBD8;
    case 936u: goto L_088FBBF8;
    case 937u: goto L_088FBC04;
    case 938u: goto L_088FBC0C;
    case 939u: goto L_088FBC14;
    case 940u: goto L_088FBC1C;
    case 941u: goto L_088FBC28;
    case 942u: goto L_088FBC30;
    case 943u: goto L_088FBC44;
    case 944u: goto L_088FBC54;
    case 945u: goto L_088FBC60;
    case 946u: goto L_088FBC6C;
    case 947u: goto L_088FBC74;
    case 948u: goto L_088FBC78;
    case 949u: goto L_088FBC9C;
    case 950u: goto L_088FBCA0;
    case 951u: goto L_088FBCC4;
    case 952u: goto L_088FBCE8;
    case 953u: goto L_088FBCF0;
    case 954u: goto L_088FBCF4;
    case 955u: goto L_088FBD30;
    case 956u: goto L_088FBD38;
    case 957u: goto L_088FBD5C;
    case 958u: goto L_088FBD64;
    case 959u: goto L_088FBD6C;
    case 960u: goto L_088FBD70;
    case 961u: goto L_088FBD84;
    case 962u: goto L_088FBD9C;
    case 963u: goto L_088FBDA4;
    case 964u: goto L_088FBDBC;
    case 965u: goto L_088FBDC0;
    case 966u: goto L_088FBDE0;
    case 967u: goto L_088FBE34;
    case 968u: goto L_088FBE5C;
    case 969u: goto L_088FBE68;
    case 970u: goto L_088FBE70;
    case 971u: goto L_088FBE7C;
    case 972u: goto L_088FBE94;
    case 973u: goto L_088FBEA0;
    case 974u: goto L_088FBEA8;
    case 975u: goto L_088FBEBC;
    case 976u: goto L_088FBECC;
    case 977u: goto L_088FBED8;
    case 978u: goto L_088FBEE0;
    case 979u: goto L_088FBEFC;
    case 980u: goto L_088FBF08;
    case 981u: goto L_088FBF28;
    case 982u: goto L_088FBF48;
    case 983u: goto L_088FBF58;
    case 984u: goto L_088FBF60;
    case 985u: goto L_088FBF68;
    case 986u: goto L_088FBF8C;
    case 987u: goto L_088FBF90;
    case 988u: goto L_088FBFBC;
    case 989u: goto L_088FBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_088F8000:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088F8038u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8038u) goto L_088F8038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8038:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x088F804Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F804Cu) goto L_088F804C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F804C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_31 = (0x088F8064u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8064u) goto L_088F8064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8064:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[28] = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x088F8078u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8078u) goto L_088F8078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8078:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = ctx.fpr[26] + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_13);
    aot_gpr_16 = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[30])) ? 0x00800000u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_088F80AC;
      }
      goto L_088F80A4;
    }
L_088F80A4:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_088F817C;
      }
      goto L_088F80AC;
    }
L_088F80AC:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F80D0;
      }
      goto L_088F80B4;
    }
L_088F80B4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x088F80C8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 638u, 0x088F33A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F80C8u) goto L_088F80C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F80C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F817C;
      }
      goto L_088F80D0;
    }
L_088F80D0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x088F8100u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8100u) goto L_088F8100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8100:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088F817C;
      }
      goto L_088F8108;
    }
L_088F8108:
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
        goto L_088F8154;
    }
    goto L_088F8110;
L_088F8110:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x088F8148u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8148u) goto L_088F8148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F817C;
      }
      goto L_088F8150;
    }
L_088F8150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    goto L_088F8154;
L_088F8154:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F81B8;
      }
      goto L_088F817C;
    }
L_088F817C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 870u, 0x088F7EACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_088F818C;
L_088F818C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088F81B8;
L_088F81B8:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_run_words);
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
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
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
L_088F8200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8240;
      }
      goto L_088F8210;
    }
L_088F8210:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22640));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
      if (branch_taken) {
          goto L_088F822C;
      }
      goto L_088F8220;
    }
L_088F8220:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    goto L_088F822C;
L_088F822C:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F8240;
      }
      goto L_088F8238;
    }
L_088F8238:
    aot_gpr_31 = (0x088F8240u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8240u) goto L_088F8240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8240:
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
L_088F824C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    ctx.gpr[7] = (0u | 65535u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-193));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5))))));
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[7] & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22640));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
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
L_088F82FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 65535u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-193));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(5))))));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22640));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088F83B8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F83B8u) goto L_088F83B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F83B8:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
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
L_088F83CC:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_088F83E0:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
L_088F83F4:
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(0u);
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
L_088F83FC:
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
L_088F8404:
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
L_088F840C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & 192u);
    ctx.gpr[8] = (ctx.gpr[8] & 192u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] >> 6u);
    ctx.gpr[8] = (ctx.gpr[8] >> 6u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088F84A4;
      }
      goto L_088F8450;
    }
L_088F8450:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u != ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088F84AC;
      }
      goto L_088F849C;
    }
L_088F849C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
      if (branch_taken) {
          goto L_088F84CC;
      }
      goto L_088F84A4;
    }
L_088F84A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F85A4;
      }
      goto L_088F84AC;
    }
L_088F84AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    goto L_088F84CC;
L_088F84CC:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088F84FC;
      }
      goto L_088F84E0;
    }
L_088F84E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088F84FC;
L_088F84FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_gpr_31 = (0x088F8520u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 597u, 0x08A2FBA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8520u) goto L_088F8520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8520:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3964)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F85A0;
      }
      goto L_088F8534;
    }
L_088F8534:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_31 = (0x088F8544u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8544u) goto L_088F8544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8544:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088F8584u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8584u) goto L_088F8584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8584:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088F8598u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8598u) goto L_088F8598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F85A4;
      }
      goto L_088F85A0;
    }
L_088F85A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088F85A4;
L_088F85A4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
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
L_088F85C0:
    aot_gpr_4 = (0u | 2u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_4);
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
L_088F85CC:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 2u);
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
L_088F85D4:
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
L_088F85DC:
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
L_088F85E4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_088F85EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (0u | 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_088F85FC;
    }
    goto L_088F85FC;
L_088F85FC:
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
L_088F8604:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(-12480));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088F8624u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8624u) goto L_088F8624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8624:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27492));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_31 = (0x088F8640u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22920));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8640u) goto L_088F8640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8640:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8736));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22908));
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F8654u);
    ctx.gpr[7] = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8654u) goto L_088F8654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8654:
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
L_088F8664:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_088F868C;
      }
      goto L_088F8674;
    }
L_088F8674:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27396));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
      if (branch_taken) {
          goto L_088F868C;
      }
      goto L_088F8684;
    }
L_088F8684:
    aot_gpr_31 = (0x088F868Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F868Cu) goto L_088F868C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F868C:
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
L_088F8698:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F86C0;
      }
      goto L_088F86A0;
    }
L_088F86A0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088F86C0;
      }
      goto L_088F86AC;
    }
L_088F86AC:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088F86C8;
      }
      goto L_088F86B8;
    }
L_088F86B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F87E4;
      }
      goto L_088F86C0;
    }
L_088F86C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F8858;
      }
      goto L_088F86C8;
    }
L_088F86C8:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (2234u << 16u);
      if (branch_taken) {
          goto L_088F8724;
      }
      goto L_088F86D0;
    }
L_088F86D0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14520));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-69));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-66));
    ctx.gpr[7] = (0u | 10u);
    aot_gpr_5 = (0u | 13u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088F86F0;
L_088F86F0:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088F872C;
      }
      goto L_088F86FC;
    }
L_088F86FC:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[11];
      if (branch_taken) {
          goto L_088F872C;
      }
      goto L_088F8708;
    }
L_088F8708:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[10];
      if (branch_taken) {
          goto L_088F872C;
      }
      goto L_088F8714;
    }
L_088F8714:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    goto L_088F871C;
L_088F871C:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088F86F0;
      }
      goto L_088F8724;
    }
L_088F8724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088F8858;
      }
      goto L_088F872C;
    }
L_088F872C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088F8758;
      }
      goto L_088F8734;
    }
L_088F8734:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[10];
      if (branch_taken) {
          goto L_088F8758;
      }
      goto L_088F8740;
    }
L_088F8740:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[9];
      if (branch_taken) {
          goto L_088F8758;
      }
      goto L_088F874C;
    }
L_088F874C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F871C;
      }
      goto L_088F8758;
    }
L_088F8758:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.gpr[3] = (aot_gpr_6 << 24u);
      if (branch_taken) {
          goto L_088F8784;
      }
      goto L_088F8760;
    }
L_088F8760:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[10];
    ctx.gpr[3] = (aot_gpr_6 << 24u);
      if (branch_taken) {
          goto L_088F8784;
      }
      goto L_088F876C;
    }
L_088F876C:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[10];
    ctx.gpr[3] = (aot_gpr_6 << 24u);
      if (branch_taken) {
          goto L_088F8784;
      }
      goto L_088F8778;
    }
L_088F8778:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F871C;
      }
      goto L_088F8784;
    }
L_088F8784:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 24u));
    ctx.gpr[12] = (ctx.gpr[3] & 255u);
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[13] = (ctx.gpr[3] ^ 10u);
    ctx.gpr[12] = (ctx.gpr[12] & 8u);
    ctx.gpr[12] = (0u < ctx.gpr[12] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] ^ 13u);
    ctx.gpr[12] = (ctx.gpr[12] | ctx.gpr[13]);
    ctx.gpr[3] = (ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[12] | ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
      if (branch_taken) {
          goto L_088F87D0;
      }
      goto L_088F87C0;
    }
L_088F87C0:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088F87D0;
      }
      goto L_088F87C8;
    }
L_088F87C8:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F87DC;
      }
      goto L_088F87D0;
    }
L_088F87D0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F871C;
      }
      goto L_088F87DC;
    }
L_088F87DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8724;
      }
      goto L_088F87E4;
    }
L_088F87E4:
    ctx.gpr[8] = (2234u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14520));
    ctx.gpr[7] = (0u | 10u);
    aot_gpr_5 = (0u | 13u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088F87F8;
L_088F87F8:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[9] = (aot_gpr_6 << 24u);
      if (branch_taken) {
          goto L_088F883C;
      }
      goto L_088F8800;
    }
L_088F8800:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 24u));
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[9] ^ 10u);
    ctx.gpr[10] = (ctx.gpr[10] & 8u);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 13u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[10] | ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_088F884C;
      }
      goto L_088F883C;
    }
L_088F883C:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088F884C;
      }
      goto L_088F8844;
    }
L_088F8844:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F8724;
      }
      goto L_088F884C;
    }
L_088F884C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F87F8;
      }
      goto L_088F8858;
    }
L_088F8858:
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
L_088F8860:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x088F889Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F889Cu) goto L_088F889C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F889C:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088F88B4;
      }
      goto L_088F88A4;
    }
L_088F88A4:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22844));
    aot_gpr_5 = (0u | 384u);
    aot_gpr_31 = (0x088F88B4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F88B4u) goto L_088F88B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F88B4:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F89A0;
      }
      goto L_088F88BC;
    }
L_088F88BC:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_088F89A0;
      }
      goto L_088F88C8;
    }
L_088F88C8:
    aot_gpr_31 = (0x088F88D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F9028;
L_088F88D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (0u | 95u);
      if (branch_taken) {
          goto L_088F88E4;
      }
      goto L_088F88D8;
    }
L_088F88D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088F89A0;
      }
      goto L_088F88E4;
    }
L_088F88E4:
    ctx.gpr[20] = (0u | 45u);
    ctx.gpr[21] = (0u | 46u);
    ctx.gpr[22] = (0u | 58u);
    goto L_088F88F0;
L_088F88F0:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F8998;
      }
      goto L_088F88F8;
    }
L_088F88F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088F8998;
      }
      goto L_088F8904;
    }
L_088F8904:
    aot_gpr_31 = (0x088F890Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F9060;
L_088F890C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F8934;
      }
      goto L_088F8914;
    }
L_088F8914:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_088F8934;
      }
      goto L_088F891C;
    }
L_088F891C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088F8934;
      }
      goto L_088F8924;
    }
L_088F8924:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088F8934;
      }
      goto L_088F892C;
    }
L_088F892C:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_088F8998;
      }
      goto L_088F8934;
    }
L_088F8934:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_088F897C;
      }
      goto L_088F8944;
    }
L_088F8944:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
      if (branch_taken) {
          goto L_088F897C;
      }
      goto L_088F895C;
    }
L_088F895C:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F8990;
      }
      goto L_088F897C;
    }
L_088F897C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F8990u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8990u) goto L_088F8990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8990:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F88F0;
      }
      goto L_088F8998;
    }
L_088F8998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088F89A4;
      }
      goto L_088F89A0;
    }
L_088F89A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088F89A4;
L_088F89A4:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
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
L_088F89CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (aot_gpr_6 & 255u);
    ctx.gpr[22] = (ctx.gpr[8] & 255u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_gpr_31 = (0x088F8A1Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8A1Cu) goto L_088F8A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8A1C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22844));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-15784));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[23] = (0u | 38u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-14692));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-14672));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088F8A60;
      }
      goto L_088F8A54;
    }
L_088F8A54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16552)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F8B7C;
      }
      goto L_088F8A60;
    }
L_088F8A60:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088F8A68;
L_088F8A68:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F8E00;
      }
      goto L_088F8A70;
    }
L_088F8A70:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8E00;
      }
      goto L_088F8A7C;
    }
L_088F8A7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F8A90u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_088F8E3C;
L_088F8A90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F8E00;
      }
      goto L_088F8A98;
    }
L_088F8A98:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F8ABC;
      }
      goto L_088F8AAC;
    }
L_088F8AAC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088F8ABCu);
    aot_gpr_5 = (0u | 238u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8ABCu) goto L_088F8ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8ABC:
    if (ctx.gpr[20] != ctx.gpr[19]) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
        goto L_088F8B00;
    }
    goto L_088F8AC4;
L_088F8AC4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088F8AE8;
      }
      goto L_088F8ADC;
    }
L_088F8ADC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088F8B04;
      }
      goto L_088F8AE8;
    }
L_088F8AE8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 242u);
    aot_gpr_31 = (0x088F8AF8u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8AF8u) goto L_088F8AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8AF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F8B04;
      }
      goto L_088F8B00;
    }
L_088F8B00:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_088F8B04;
L_088F8B04:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088F8B40;
      }
      goto L_088F8B0C;
    }
L_088F8B0C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_5 != ctx.gpr[23]) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
        goto L_088F8B38;
    }
    goto L_088F8B18;
L_088F8B18:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088F8B2Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_088FA50C;
L_088F8B2C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F8B64;
      }
      goto L_088F8B38;
    }
L_088F8B38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F8B64;
      }
      goto L_088F8B40;
    }
L_088F8B40:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088F8B60;
      }
      goto L_088F8B48;
    }
L_088F8B48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F8B54u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8B54u) goto L_088F8B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8B54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_16);
      if (branch_taken) {
          goto L_088F8B64;
      }
      goto L_088F8B60;
    }
L_088F8B60:
    aot_gpr_16 = (0u | 0u);
    goto L_088F8B64;
L_088F8B64:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F8B74u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8B74u) goto L_088F8B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8B74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8A68;
      }
      goto L_088F8B7C;
    }
L_088F8B7C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F8B8Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_088F8698;
L_088F8B8C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    goto L_088F8BA4;
L_088F8BA4:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F8E00;
      }
      goto L_088F8BAC;
    }
L_088F8BAC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8E00;
      }
      goto L_088F8BB8;
    }
L_088F8BB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F8BCCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_088F8E3C;
L_088F8BCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F8E00;
      }
      goto L_088F8BD4;
    }
L_088F8BD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 10u);
      if (branch_taken) {
          goto L_088F8BEC;
      }
      goto L_088F8BE4;
    }
L_088F8BE4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 << 24u);
      if (branch_taken) {
          goto L_088F8BF8;
      }
      goto L_088F8BEC;
    }
L_088F8BEC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F8DF8;
      }
      goto L_088F8BF8;
    }
L_088F8BF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_gpr_6 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 ^ 10u);
    aot_gpr_5 = (aot_gpr_5 & 8u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 13u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8C44;
      }
      goto L_088F8C38;
    }
L_088F8C38:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F8DF8;
      }
      goto L_088F8C44;
    }
L_088F8C44:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088F8CA8;
      }
      goto L_088F8C4C;
    }
L_088F8C4C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 32u);
      if (branch_taken) {
          goto L_088F8C90;
      }
      goto L_088F8C58;
    }
L_088F8C58:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_088F8C90;
      }
      goto L_088F8C70;
    }
L_088F8C70:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F8CA4;
      }
      goto L_088F8C90;
    }
L_088F8C90:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088F8CA4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8CA4u) goto L_088F8CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8CA4:
    ctx.gpr[18] = (0u | 0u);
    goto L_088F8CA8;
L_088F8CA8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F8CCC;
      }
      goto L_088F8CBC;
    }
L_088F8CBC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088F8CCCu);
    aot_gpr_5 = (0u | 238u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8CCCu) goto L_088F8CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8CCC:
    if (ctx.gpr[20] != ctx.gpr[19]) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
        goto L_088F8D14;
    }
    goto L_088F8CD4;
L_088F8CD4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
      if (branch_taken) {
          goto L_088F8CFC;
      }
      goto L_088F8CF0;
    }
L_088F8CF0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F8D18;
      }
      goto L_088F8CFC;
    }
L_088F8CFC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 242u);
    aot_gpr_31 = (0x088F8D0Cu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8D0Cu) goto L_088F8D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8D0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088F8D18;
      }
      goto L_088F8D14;
    }
L_088F8D14:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8D18;
L_088F8D18:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088F8D54;
      }
      goto L_088F8D20;
    }
L_088F8D20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088F8D48;
      }
      goto L_088F8D2C;
    }
L_088F8D2C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F8D3Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_088FA50C;
L_088F8D3C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088F8D78;
      }
      goto L_088F8D48;
    }
L_088F8D48:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F8D78;
      }
      goto L_088F8D54;
    }
L_088F8D54:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088F8D74;
      }
      goto L_088F8D5C;
    }
L_088F8D5C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F8D68u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8D68u) goto L_088F8D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8D68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_5 + aot_gpr_16);
      if (branch_taken) {
          goto L_088F8D78;
      }
      goto L_088F8D74;
    }
L_088F8D74:
    aot_gpr_16 = (0u | 0u);
    goto L_088F8D78;
L_088F8D78:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088F8DE8;
      }
      goto L_088F8D80;
    }
L_088F8D80:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 24u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 24u));
      if (branch_taken) {
          goto L_088F8DCC;
      }
      goto L_088F8D94;
    }
L_088F8D94:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_088F8DCC;
      }
      goto L_088F8DAC;
    }
L_088F8DAC:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F8DF8;
      }
      goto L_088F8DCC;
    }
L_088F8DCC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x088F8DE0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8DE0u) goto L_088F8DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8DE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8DF8;
      }
      goto L_088F8DE8;
    }
L_088F8DE8:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F8DF8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8DF8u) goto L_088F8DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8DF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8BA4;
      }
      goto L_088F8E00;
    }
L_088F8E00:
    aot_gpr_31 = (0x088F8E08u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8E08u) goto L_088F8E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8E08:
    ctx.gpr[2] = (aot_gpr_16 + ctx.gpr[2]);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
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
L_088F8E3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_6 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088F8E7C;
      }
      goto L_088F8E68;
    }
L_088F8E68:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22844));
    aot_gpr_5 = (0u | 510u);
    aot_gpr_31 = (0x088F8E7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8E7Cu) goto L_088F8E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8E7C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088F8E94;
      }
      goto L_088F8E84;
    }
L_088F8E84:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22840));
    aot_gpr_5 = (0u | 511u);
    aot_gpr_31 = (0x088F8E94u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8E94u) goto L_088F8E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8E94:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F8EBC;
      }
      goto L_088F8E9C;
    }
L_088F8E9C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8EBC;
      }
      goto L_088F8EA8;
    }
L_088F8EA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F8ED8;
      }
      goto L_088F8EB4;
    }
L_088F8EB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8FCC;
      }
      goto L_088F8EBC;
    }
L_088F8EBC:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22836));
    aot_gpr_5 = (0u | 514u);
    aot_gpr_31 = (0x088F8ED0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F8ED0u) goto L_088F8ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F8ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F900C;
      }
      goto L_088F8ED8;
    }
L_088F8ED8:
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14520));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088F8EE8;
L_088F8EE8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8FBC;
      }
      goto L_088F8EF0;
    }
L_088F8EF0:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F8FBC;
      }
      goto L_088F8EF8;
    }
L_088F8EF8:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    ctx.gpr[8] = (ctx.gpr[7] + aot_gpr_4);
      if (branch_taken) {
          goto L_088F8F34;
      }
      goto L_088F8F00;
    }
L_088F8F00:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + aot_gpr_4);
      if (branch_taken) {
          goto L_088F8F2C;
      }
      goto L_088F8F0C;
    }
L_088F8F0C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088F8F24;
      }
      goto L_088F8F1C;
    }
L_088F8F1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088F8F24;
      }
      goto L_088F8F24;
    }
L_088F8F24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8F4C;
      }
      goto L_088F8F2C;
    }
L_088F8F2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8F4C;
      }
      goto L_088F8F34;
    }
L_088F8F34:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088F8F4C;
      }
      goto L_088F8F44;
    }
L_088F8F44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088F8F4C;
      }
      goto L_088F8F4C;
    }
L_088F8F4C:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    ctx.gpr[8] = (ctx.gpr[7] + aot_gpr_5);
      if (branch_taken) {
          goto L_088F8F88;
      }
      goto L_088F8F54;
    }
L_088F8F54:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + aot_gpr_5);
      if (branch_taken) {
          goto L_088F8F80;
      }
      goto L_088F8F60;
    }
L_088F8F60:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088F8F78;
      }
      goto L_088F8F70;
    }
L_088F8F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088F8F78;
      }
      goto L_088F8F78;
    }
L_088F8F78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F8FA0;
      }
      goto L_088F8F80;
    }
L_088F8F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088F8FA0;
      }
      goto L_088F8F88;
    }
L_088F8F88:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088F8FA0;
      }
      goto L_088F8F98;
    }
L_088F8F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088F8FA0;
      }
      goto L_088F8FA0;
    }
L_088F8FA0:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[8];
      if (branch_taken) {
          goto L_088F8FBC;
      }
      goto L_088F8FA8;
    }
L_088F8FA8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F8EE8;
      }
      goto L_088F8FBC;
    }
L_088F8FBC:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088F9008;
      }
      goto L_088F8FC4;
    }
L_088F8FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088F900C;
      }
      goto L_088F8FCC;
    }
L_088F8FCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F8FF8;
      }
      goto L_088F8FD4;
    }
L_088F8FD4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F8FF8;
      }
      goto L_088F8FDC;
    }
L_088F8FDC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F8FF8;
      }
      goto L_088F8FE4;
    }
L_088F8FE4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088F8FCC;
      }
      goto L_088F8FF8;
    }
L_088F8FF8:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088F9008;
      }
      goto L_088F9000;
    }
L_088F9000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088F900C;
      }
      goto L_088F9008;
    }
L_088F9008:
    ctx.gpr[2] = (0u | 0u);
    goto L_088F900C;
L_088F900C:
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
L_088F9028:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F9054;
      }
      goto L_088F9038;
    }
L_088F9038:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_088F9058;
      }
      goto L_088F9054;
    }
L_088F9054:
    ctx.gpr[2] = (0u | 1u);
    goto L_088F9058;
L_088F9058:
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
L_088F9060:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F908C;
      }
      goto L_088F9070;
    }
L_088F9070:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
      if (branch_taken) {
          goto L_088F9090;
      }
      goto L_088F908C;
    }
L_088F908C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088F9090;
L_088F9090:
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
L_088F9098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (0u | 192u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[8] = (0u | 224u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 240u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 248u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 252u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088F90E8;
      }
      goto L_088F90D8;
    }
L_088F90D8:
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F914C;
      }
      goto L_088F90E8;
    }
L_088F90E8:
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088F9104;
      }
      goto L_088F90F4;
    }
L_088F90F4:
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088F914C;
      }
      goto L_088F9104;
    }
L_088F9104:
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088F9124;
      }
      goto L_088F9114;
    }
L_088F9114:
    ctx.gpr[8] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088F914C;
      }
      goto L_088F9124;
    }
L_088F9124:
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088F9144;
      }
      goto L_088F9134;
    }
L_088F9134:
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F914C;
      }
      goto L_088F9144;
    }
L_088F9144:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088F91E0;
      }
      goto L_088F914C;
    }
L_088F914C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_5 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088F9170;
      }
      goto L_088F9158;
    }
L_088F9158:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F91E0;
      }
      goto L_088F9160;
    }
L_088F9160:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F91CC;
      }
      goto L_088F9168;
    }
L_088F9168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F91B4;
      }
      goto L_088F9170;
    }
L_088F9170:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_088F919C;
      }
      goto L_088F917C;
    }
L_088F917C:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F91E0;
      }
      goto L_088F9188;
    }
L_088F9188:
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_4 | 128u);
    ctx.gpr[7] = (ctx.gpr[7] & 191u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    goto L_088F919C;
L_088F919C:
    ctx.gpr[7] = (aot_gpr_4 | 128u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & 191u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    goto L_088F91B4;
L_088F91B4:
    ctx.gpr[7] = (aot_gpr_4 | 128u);
    ctx.gpr[7] = (ctx.gpr[7] & 191u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    goto L_088F91CC;
L_088F91CC:
    aot_gpr_6 = (ctx.gpr[8] << 2u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088F91E0;
L_088F91E0:
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
L_088F91E8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
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
L_088F91F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x088F9224u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F8698;
L_088F9224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F92A0;
      }
      goto L_088F922C;
    }
L_088F922C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 60u);
      if (branch_taken) {
          goto L_088F92A0;
      }
      goto L_088F9238;
    }
L_088F9238:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F92A0;
      }
      goto L_088F9240;
    }
L_088F9240:
    aot_gpr_31 = (0x088F9248u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 140u, 0x0898474Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9248u) goto L_088F9248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9248:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F9258u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F8698;
L_088F9258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9298;
      }
      goto L_088F9260;
    }
L_088F9260:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F9298;
      }
      goto L_088F926C;
    }
L_088F926C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22832));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22824));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22816));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088F9288u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088F8E3C;
L_088F9288:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F92A8;
      }
      goto L_088F9290;
    }
L_088F9290:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F9304;
      }
      goto L_088F9298;
    }
L_088F9298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9470;
      }
      goto L_088F92A0;
    }
L_088F92A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9470;
      }
      goto L_088F92A8;
    }
L_088F92A8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F92B4u);
    aot_gpr_4 = (0u | 88u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F92B4u) goto L_088F92B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F92B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088F92FC;
      }
      goto L_088F92C0;
    }
L_088F92C0:
    aot_gpr_31 = (0x088F92C8u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 152u, 0x089847ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F92C8u) goto L_088F92C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F92C8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24952));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088F92FC;
L_088F92FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F9438;
      }
      goto L_088F9304;
    }
L_088F9304:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088F9318u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088F8E3C;
L_088F9318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088F9358;
      }
      goto L_088F9320;
    }
L_088F9320:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F932Cu);
    aot_gpr_4 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F932Cu) goto L_088F932C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F932C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088F9350;
      }
      goto L_088F9338;
    }
L_088F9338:
    aot_gpr_31 = (0x088F9340u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 152u, 0x089847ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9340u) goto L_088F9340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9340:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24904));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088F9350;
L_088F9350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F9438;
      }
      goto L_088F9358;
    }
L_088F9358:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088F936Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088F8E3C;
L_088F936C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088F93AC;
      }
      goto L_088F9374;
    }
L_088F9374:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F9380u);
    aot_gpr_4 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9380u) goto L_088F9380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9380:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088F93A4;
      }
      goto L_088F938C;
    }
L_088F938C:
    aot_gpr_31 = (0x088F9394u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 152u, 0x089847ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9394u) goto L_088F9394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9394:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25000));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088F93A4;
L_088F93A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F9438;
      }
      goto L_088F93AC;
    }
L_088F93AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F93BCu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088F9028;
L_088F93BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F93D4;
      }
      goto L_088F93C4;
    }
L_088F93C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (0u | 95u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F9400;
      }
      goto L_088F93D4;
    }
L_088F93D4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F93E0u);
    aot_gpr_4 = (0u | 104u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F93E0u) goto L_088F93E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F93E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
      if (branch_taken) {
          goto L_088F93F8;
      }
      goto L_088F93EC;
    }
L_088F93EC:
    aot_gpr_31 = (0x088F93F4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 226u, 0x08984C44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F93F4u) goto L_088F93F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F93F4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088F93F8;
L_088F93F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F9438;
      }
      goto L_088F9400;
    }
L_088F9400:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F940Cu);
    aot_gpr_4 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F940Cu) goto L_088F940C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F940C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F9438;
      }
      goto L_088F9418;
    }
L_088F9418:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9424u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 152u, 0x089847ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9424u) goto L_088F9424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9424:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25000));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088F9438;
L_088F9438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088F9448;
      }
      goto L_088F9440;
    }
L_088F9440:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), aot_gpr_16);
      if (branch_taken) {
          goto L_088F9470;
      }
      goto L_088F9448;
    }
L_088F9448:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088F9470;
      }
      goto L_088F9450;
    }
L_088F9450:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F946Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_088FA418;
L_088F946C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088F9470;
L_088F9470:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_088F9494:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x088F94D4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F94D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F94FC;
      }
      goto L_088F94DC;
    }
L_088F94DC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F94FC;
      }
      goto L_088F94E8;
    }
L_088F94E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F9504;
      }
      goto L_088F94F4;
    }
L_088F94F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F9504;
      }
      goto L_088F94FC;
    }
L_088F94FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9780;
      }
      goto L_088F9504;
    }
L_088F9504:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088F952C;
      }
      goto L_088F950C;
    }
L_088F950C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F951Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088FB2D8;
L_088F951C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088F952C;
L_088F952C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F9540u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088F8860;
L_088F9540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9554;
      }
      goto L_088F9548;
    }
L_088F9548:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F9580;
      }
      goto L_088F9554;
    }
L_088F9554:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F9578;
      }
      goto L_088F9560;
    }
L_088F9560:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9578u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088F9578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9780;
      }
      goto L_088F9580;
    }
L_088F9580:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F958Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F958C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F95A8;
      }
      goto L_088F9594;
    }
L_088F9594:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 61u);
      if (branch_taken) {
          goto L_088F95A8;
      }
      goto L_088F95A0;
    }
L_088F95A0:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F95D4;
      }
      goto L_088F95A8;
    }
L_088F95A8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F95CC;
      }
      goto L_088F95B4;
    }
L_088F95B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F95CCu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088F95CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9780;
      }
      goto L_088F95D4;
    }
L_088F95D4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088F95E0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F95E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F95F4;
      }
      goto L_088F95E8;
    }
L_088F95E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F9620;
      }
      goto L_088F95F4;
    }
L_088F95F4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F9618;
      }
      goto L_088F9600;
    }
L_088F9600:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9618u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088F9618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9780;
      }
      goto L_088F9620;
    }
L_088F9620:
    aot_gpr_5 = (0u | 39u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088F9654;
      }
      goto L_088F962C;
    }
L_088F962C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22812));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088F9648u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_088F89CC;
L_088F9648:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088F964C;
L_088F964C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F9780;
      }
      goto L_088F9654;
    }
L_088F9654:
    aot_gpr_5 = (0u | 34u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F9684;
      }
      goto L_088F9660;
    }
L_088F9660:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22808));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088F967Cu);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_088F89CC;
L_088F967C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F9684;
    }
L_088F9684:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    aot_gpr_31 = (0x088F9690u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9690u) goto L_088F9690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9690:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    ctx.gpr[20] = (0u | 10u);
    ctx.gpr[21] = (0u | 13u);
    ctx.gpr[22] = (0u | 47u);
    ctx.gpr[23] = (0u | 62u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088F96AC;
L_088F96AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F96B4;
    }
L_088F96B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 << 24u);
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F96C0;
    }
L_088F96C0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_5 ^ 10u);
    aot_gpr_6 = (aot_gpr_6 & 8u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 13u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F96FC;
    }
L_088F96FC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F9704;
    }
L_088F9704:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F970C;
    }
L_088F970C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F9714;
    }
L_088F9714:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_088F964C;
      }
      goto L_088F971C;
    }
L_088F971C:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_088F9764;
      }
      goto L_088F972C;
    }
L_088F972C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
      if (branch_taken) {
          goto L_088F9764;
      }
      goto L_088F9744;
    }
L_088F9744:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F9778;
      }
      goto L_088F9764;
    }
L_088F9764:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9778u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9778u) goto L_088F9778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F96AC;
      }
      goto L_088F9780;
    }
L_088F9780:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
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
L_088F97AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x088F97ECu);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 140u, 0x0898474Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F97ECu) goto L_088F97EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F97EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F97FCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F97FC:
    ctx.gpr[30] = (2234u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22804));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22784));
    goto L_088F9814;
L_088F9814:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088F99D8;
      }
      goto L_088F981C;
    }
L_088F981C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F99D8;
      }
      goto L_088F9828;
    }
L_088F9828:
    aot_gpr_5 = (0u | 60u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F9940;
      }
      goto L_088F9834;
    }
L_088F9834:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F9840u);
    aot_gpr_4 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9840u) goto L_088F9840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9840:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088F9868;
      }
      goto L_088F984C;
    }
L_088F984C:
    aot_gpr_31 = (0x088F9854u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 152u, 0x089847ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9854u) goto L_088F9854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9854:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), ctx.gpr[30]);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x088F9864u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9864u) goto L_088F9864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9864:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_088F9868;
L_088F9868:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_088F989C;
      }
      goto L_088F9874;
    }
L_088F9874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F9894;
      }
      goto L_088F9880;
    }
L_088F9880:
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F9894u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088F9894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9A04;
      }
      goto L_088F989C;
    }
L_088F989C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16552)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F98D0;
      }
      goto L_088F98AC;
    }
L_088F98AC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088F98C8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F98C8u) goto L_088F98C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F98C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F98F0;
      }
      goto L_088F98D0;
    }
L_088F98D0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088F98ECu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F98ECu) goto L_088F98EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F98EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088F98F0;
L_088F98F0:
    aot_gpr_31 = (0x088F98F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088F9C58;
L_088F98F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F9914;
      }
      goto L_088F9900;
    }
L_088F9900:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088F990Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 99u, 0x0898458Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F990Cu) goto L_088F990C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F990C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F9938;
      }
      goto L_088F9914;
    }
L_088F9914:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F9938;
      }
      goto L_088F991C;
    }
L_088F991C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088F9938u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9938u) goto L_088F9938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9938:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F99C4;
      }
      goto L_088F9940;
    }
L_088F9940:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088F9954u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F8E3C;
L_088F9954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088F9964;
      }
      goto L_088F995C;
    }
L_088F995C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088F9A04;
      }
      goto L_088F9964;
    }
L_088F9964:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9974u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088F91F0;
L_088F9974:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F99BC;
      }
      goto L_088F9980;
    }
L_088F9980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088F99A4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F99A4u) goto L_088F99A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F99A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088F99B4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 99u, 0x0898458Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F99B4u) goto L_088F99B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F99B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F99C4;
      }
      goto L_088F99BC;
    }
L_088F99BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9A04;
      }
      goto L_088F99C4;
    }
L_088F99C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F99D0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F99D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9814;
      }
      goto L_088F99D8;
    }
L_088F99D8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088F9A00;
      }
      goto L_088F99E0;
    }
L_088F99E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F9A00;
      }
      goto L_088F99EC;
    }
L_088F99EC:
    aot_gpr_5 = (0u | 6u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F9A00u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088F9A00:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_088F9A04;
L_088F9A04:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088F9A34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x088F9A6Cu);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 140u, 0x0898474Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9A6Cu) goto L_088F9A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9A6C:
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    aot_gpr_31 = (0x088F9A80u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9A80u) goto L_088F9A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9A80:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9A8Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088F8698;
L_088F9A8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9AB4;
      }
      goto L_088F9A94;
    }
L_088F9A94:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088F9AA4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088FB2D8;
L_088F9AA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088F9AB4;
L_088F9AB4:
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22824));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22800));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088F9AD0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_088F8E3C;
L_088F9AD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F9AF8;
      }
      goto L_088F9AD8;
    }
L_088F9AD8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F9AF0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088FA418;
L_088F9AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9B1C;
      }
      goto L_088F9AF8;
    }
L_088F9AF8:
    aot_gpr_31 = (0x088F9B00u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9B00u) goto L_088F9B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9B00:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088F9B1Cu);
    ctx.gpr[9] = (aot_gpr_16 | 0u);
    goto L_088F89CC;
L_088F9B1C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088F9B44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088F9B8C;
      }
      goto L_088F9B60;
    }
L_088F9B60:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22784));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F9B78u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9B78u) goto L_088F9B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9B78:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F9B8C;
      }
      goto L_088F9B84;
    }
L_088F9B84:
    aot_gpr_31 = (0x088F9B8Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9B8Cu) goto L_088F9B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9B8C:
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
L_088F9BA0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088F9BDCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9BDCu) goto L_088F9BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9BDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088F9C04;
      }
      goto L_088F9BE4;
    }
L_088F9BE4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F9BF4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088FB2D8;
L_088F9BF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088F9C04;
L_088F9C04:
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22796));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088F9C20u);
    ctx.gpr[9] = (aot_gpr_16 | 0u);
    goto L_088F89CC;
L_088F9C20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F9C34;
      }
      goto L_088F9C2C;
    }
L_088F9C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F9C38;
      }
      goto L_088F9C34;
    }
L_088F9C34:
    ctx.gpr[2] = (0u | 0u);
    goto L_088F9C38;
L_088F9C38:
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
L_088F9C58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (2234u << 16u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14760));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14740));
    goto L_088F9C9C;
L_088F9C9C:
    aot_gpr_5 = (0u | 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
        goto L_088F9CA8;
    }
    goto L_088F9CA8;
L_088F9CA8:
    aot_gpr_5 = (ctx.gpr[20] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F9D3C;
      }
      goto L_088F9CB4;
    }
L_088F9CB4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
        goto L_088F9CC4;
    }
    goto L_088F9CC4;
L_088F9CC4:
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F9CDC;
      }
      goto L_088F9CD0;
    }
L_088F9CD0:
    aot_gpr_5 = (0u | 153u);
    aot_gpr_31 = (0x088F9CDCu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9CDCu) goto L_088F9CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9CDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 ^ 10u);
    aot_gpr_5 = (aot_gpr_5 & 8u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 13u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F9D34;
      }
      goto L_088F9D28;
    }
L_088F9D28:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088F9C9C;
      }
      goto L_088F9D34;
    }
L_088F9D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9D40;
      }
      goto L_088F9D3C;
    }
L_088F9D3C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088F9D40;
L_088F9D40:
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
L_088F9D60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), ctx.gpr[30]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[30] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_gpr_31);
    aot_gpr_31 = (0x088F9DA4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F9DA4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088F9DB0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 140u, 0x0898474Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9DB0u) goto L_088F9DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9DB0:
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9DDC;
      }
      goto L_088F9DB8;
    }
L_088F9DB8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22832));
      if (branch_taken) {
          goto L_088F9DDC;
      }
      goto L_088F9DC4;
    }
L_088F9DC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088F9DD4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F8E3C;
L_088F9DD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088F9E04;
      }
      goto L_088F9DDC;
    }
L_088F9DDC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088F9DFC;
      }
      goto L_088F9DE4;
    }
L_088F9DE4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F9DFCu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088F9DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA1A4;
      }
      goto L_088F9E04;
    }
L_088F9E04:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088F9E2C;
      }
      goto L_088F9E0C;
    }
L_088F9E0C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F9E1Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088FB2D8;
L_088F9E1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088F9E2C;
L_088F9E2C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_4);
    aot_gpr_31 = (0x088F9E44u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9E44u) goto L_088F9E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9E44:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_31 = (0x088F9E54u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9E54u) goto L_088F9E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9E54:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_31 = (0x088F9E64u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9E64u) goto L_088F9E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9E64:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22792));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22772));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22784));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    ctx.gpr[23] = (2235u << 16u);
    ctx.gpr[20] = (2234u << 16u);
    ctx.gpr[17] = (0u | 62u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-27396));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22752));
    goto L_088F9EA0;
L_088F9EA0:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088FA1A0;
      }
      goto L_088F9EA8;
    }
L_088F9EA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA1A0;
      }
      goto L_088F9EB4;
    }
L_088F9EB4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_088F9EF0;
      }
      goto L_088F9EBC;
    }
L_088F9EBC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088F9EC8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088F9EC8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088F9EE0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F8E3C;
L_088F9EE0:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[21]);
        goto L_088F9EF8;
    }
    goto L_088F9EE8;
L_088F9EE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F9FA8;
      }
      goto L_088F9EF0;
    }
L_088F9EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FA1A4;
      }
      goto L_088F9EF8;
    }
L_088F9EF8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088F9F3Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F9494;
L_088F9F3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9F50;
      }
      goto L_088F9F48;
    }
L_088F9F48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088F9F54;
      }
      goto L_088F9F50;
    }
L_088F9F50:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_088F9F54;
L_088F9F54:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088F9F60u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9F60u) goto L_088F9F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9F60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088F9F74;
      }
      goto L_088F9F6C;
    }
L_088F9F6C:
    aot_gpr_31 = (0x088F9F74u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9F74u) goto L_088F9F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9F74:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_088F9F90;
      }
      goto L_088F9F88;
    }
L_088F9F88:
    aot_gpr_31 = (0x088F9F90u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F9F90u) goto L_088F9F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F9F90:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    goto L_088F9FA0;
L_088F9FA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F9EA0;
      }
      goto L_088F9FA8;
    }
L_088F9FA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088F9FBCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F8E3C;
L_088F9FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FA074;
      }
      goto L_088F9FC4;
    }
L_088F9FC4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088FA00Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F9494;
L_088FA00C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FA020;
      }
      goto L_088FA018;
    }
L_088FA018:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088FA024;
      }
      goto L_088FA020;
    }
L_088FA020:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_088FA024;
L_088FA024:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FA030u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA030u) goto L_088FA030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088FA044;
      }
      goto L_088FA03C;
    }
L_088FA03C:
    aot_gpr_31 = (0x088FA044u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA044u) goto L_088FA044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA044:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_088FA060;
      }
      goto L_088FA058;
    }
L_088FA058:
    aot_gpr_31 = (0x088FA060u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA060u) goto L_088FA060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA060:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088F9FA0;
      }
      goto L_088FA074;
    }
L_088FA074:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088FA088u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F8E3C;
L_088FA088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FA140;
      }
      goto L_088FA090;
    }
L_088FA090:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(104));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088FA0D8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F9494;
L_088FA0D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FA0EC;
      }
      goto L_088FA0E4;
    }
L_088FA0E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_088FA0F0;
      }
      goto L_088FA0EC;
    }
L_088FA0EC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_088FA0F0;
L_088FA0F0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FA0FCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA0FCu) goto L_088FA0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA0FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088FA110;
      }
      goto L_088FA108;
    }
L_088FA108:
    aot_gpr_31 = (0x088FA110u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA110u) goto L_088FA110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA110:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), 0u);
      if (branch_taken) {
          goto L_088FA12C;
      }
      goto L_088FA124;
    }
L_088FA124:
    aot_gpr_31 = (0x088FA12Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA12Cu) goto L_088FA12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA12C:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088F9FA0;
      }
      goto L_088FA140;
    }
L_088FA140:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088F9FA0;
      }
      goto L_088FA148;
    }
L_088FA148:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F9FA0;
      }
      goto L_088FA154;
    }
L_088FA154:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_4 = (aot_gpr_4 << 24u);
      if (branch_taken) {
          goto L_088F9FA0;
      }
      goto L_088FA15C;
    }
L_088FA15C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 ^ 10u);
    aot_gpr_5 = (aot_gpr_5 & 8u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 13u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F9FA0;
      }
      goto L_088FA198;
    }
L_088FA198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FA140;
      }
      goto L_088FA1A0;
    }
L_088FA1A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088FA1A4;
L_088FA1A4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088FA1D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x088FA20Cu);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 140u, 0x0898474Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA20Cu) goto L_088FA20C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA20C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FA21Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F8698;
L_088FA21C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FA244;
      }
      goto L_088FA224;
    }
L_088FA224:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FA234u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_088FB2D8;
L_088FA234:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088FA244;
L_088FA244:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FA260;
      }
      goto L_088FA24C;
    }
L_088FA24C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 60u);
      if (branch_taken) {
          goto L_088FA260;
      }
      goto L_088FA258;
    }
L_088FA258:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088FA288;
      }
      goto L_088FA260;
    }
L_088FA260:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088FA280;
      }
      goto L_088FA268;
    }
L_088FA268:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088FA280u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_088FA418;
L_088FA280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA368;
      }
      goto L_088FA288;
    }
L_088FA288:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    aot_gpr_31 = (0x088FA2A0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA2A0u) goto L_088FA2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA2A0:
    ctx.gpr[22] = (0u | 62u);
    goto L_088FA2A4;
L_088FA2A4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FA328;
      }
      goto L_088FA2AC;
    }
L_088FA2AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA328;
      }
      goto L_088FA2B8;
    }
L_088FA2B8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088FA328;
      }
      goto L_088FA2C0;
    }
L_088FA2C0:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_088FA308;
      }
      goto L_088FA2D0;
    }
L_088FA2D0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
      if (branch_taken) {
          goto L_088FA308;
      }
      goto L_088FA2E8;
    }
L_088FA2E8:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FA31C;
      }
      goto L_088FA308;
    }
L_088FA308:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088FA31Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA31Cu) goto L_088FA31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA31C:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088FA2A4;
      }
      goto L_088FA328;
    }
L_088FA328:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088FA350;
      }
      goto L_088FA330;
    }
L_088FA330:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088FA350;
      }
      goto L_088FA338;
    }
L_088FA338:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088FA350u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_088FA418;
L_088FA350:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_088FA364;
      }
      goto L_088FA35C;
    }
L_088FA35C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FA368;
      }
      goto L_088FA364;
    }
L_088FA364:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_088FA368;
L_088FA368:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
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
L_088FA390:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088FA404;
      }
      goto L_088FA3AC;
    }
L_088FA3AC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22832));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FA3E8;
      }
      goto L_088FA3C4;
    }
L_088FA3C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
        goto L_088FA3DC;
    }
    goto L_088FA3D0;
L_088FA3D0:
    aot_gpr_31 = (0x088FA3D8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA3D8u) goto L_088FA3D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA3D8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    goto L_088FA3DC;
L_088FA3DC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088FA3E8;
L_088FA3E8:
    aot_gpr_31 = (0x088FA3F0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA3F0u) goto L_088FA3F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA3F0:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA404;
      }
      goto L_088FA3FC;
    }
L_088FA3FC:
    aot_gpr_31 = (0x088FA404u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA404u) goto L_088FA404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA404:
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
L_088FA418:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_16 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_088FA460;
      }
      goto L_088FA450;
    }
L_088FA450:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FA468;
      }
      goto L_088FA458;
    }
L_088FA458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088FA474;
      }
      goto L_088FA460;
    }
L_088FA460:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FA4EC;
      }
      goto L_088FA468;
    }
L_088FA468:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FA488;
      }
      goto L_088FA470;
    }
L_088FA470:
    aot_gpr_4 = (2232u << 16u);
    goto L_088FA474;
L_088FA474:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 765u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    aot_gpr_31 = (0x088FA488u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14644));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA488u) goto L_088FA488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA488:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7344));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x088FA4B0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA4B0u) goto L_088FA4B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA4B0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), aot_gpr_4);
      if (branch_taken) {
          goto L_088FA4EC;
      }
      goto L_088FA4C0;
    }
L_088FA4C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FA4EC;
      }
      goto L_088FA4C8;
    }
L_088FA4C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FA4D8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088FB2D8;
L_088FA4D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(76));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088FA4EC;
L_088FA4EC:
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
L_088FA50C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088FA884;
      }
      goto L_088FA558;
    }
L_088FA558:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (0u | 35u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FA884;
      }
      goto L_088FA568;
    }
L_088FA568:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA884;
      }
      goto L_088FA574;
    }
L_088FA574:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (0u | 120u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088FA70C;
      }
      goto L_088FA588;
    }
L_088FA588:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FA5BC;
      }
      goto L_088FA594;
    }
L_088FA594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FA5AC;
    }
    goto L_088FA5A0;
L_088FA5A0:
    aot_gpr_31 = (0x088FA5A8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA5A8u) goto L_088FA5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA5A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FA5AC;
L_088FA5AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA5BC;
    }
L_088FA5BC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(3));
    aot_gpr_31 = (0x088FA5C8u);
    aot_gpr_5 = (0u | 59u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA5C8u) goto L_088FA5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA5C8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA5E0;
      }
      goto L_088FA5D4;
    }
L_088FA5D4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088FA608;
      }
      goto L_088FA5E0;
    }
L_088FA5E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FA5F8;
    }
    goto L_088FA5EC;
L_088FA5EC:
    aot_gpr_31 = (0x088FA5F4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA5F4u) goto L_088FA5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA5F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FA5F8;
L_088FA5F8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA608;
    }
L_088FA608:
    ctx.gpr[21] = (aot_gpr_4 - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 120u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088FA704;
      }
      goto L_088FA620;
    }
L_088FA620:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088FA658;
      }
      goto L_088FA630;
    }
L_088FA630:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FA658;
      }
      goto L_088FA640;
    }
L_088FA640:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
      if (branch_taken) {
          goto L_088FA6F0;
      }
      goto L_088FA658;
    }
L_088FA658:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088FA690;
      }
      goto L_088FA668;
    }
L_088FA668:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FA690;
      }
      goto L_088FA678;
    }
L_088FA678:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-87));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
      if (branch_taken) {
          goto L_088FA6F0;
      }
      goto L_088FA690;
    }
L_088FA690:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088FA6C8;
      }
      goto L_088FA6A0;
    }
L_088FA6A0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 71 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FA6C8;
      }
      goto L_088FA6B0;
    }
L_088FA6B0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-55));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
      if (branch_taken) {
          goto L_088FA6F0;
      }
      goto L_088FA6C8;
    }
L_088FA6C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FA6E0;
    }
    goto L_088FA6D4;
L_088FA6D4:
    aot_gpr_31 = (0x088FA6DCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA6DCu) goto L_088FA6DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA6DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FA6E0;
L_088FA6E0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA6F0;
    }
L_088FA6F0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 120u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[22] = (ctx.gpr[22] << 4u);
      if (branch_taken) {
          goto L_088FA620;
      }
      goto L_088FA704;
    }
L_088FA704:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FA828;
      }
      goto L_088FA70C;
    }
L_088FA70C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FA740;
      }
      goto L_088FA718;
    }
L_088FA718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FA730;
    }
    goto L_088FA724;
L_088FA724:
    aot_gpr_31 = (0x088FA72Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA72Cu) goto L_088FA72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA72C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FA730;
L_088FA730:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA740;
    }
L_088FA740:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_31 = (0x088FA74Cu);
    aot_gpr_5 = (0u | 59u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA74Cu) goto L_088FA74C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA74C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA764;
      }
      goto L_088FA758;
    }
L_088FA758:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088FA78C;
      }
      goto L_088FA764;
    }
L_088FA764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FA77C;
    }
    goto L_088FA770;
L_088FA770:
    aot_gpr_31 = (0x088FA778u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA778u) goto L_088FA778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA778:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FA77C;
L_088FA77C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA78C;
    }
L_088FA78C:
    ctx.gpr[21] = (aot_gpr_4 - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 35u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088FA828;
      }
      goto L_088FA7A4;
    }
L_088FA7A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088FA800;
      }
      goto L_088FA7B4;
    }
L_088FA7B4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FA800;
      }
      goto L_088FA7C4;
    }
L_088FA7C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.gpr[22] << 3u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 35u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088FA7A4;
      }
      goto L_088FA7F8;
    }
L_088FA7F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FA828;
      }
      goto L_088FA800;
    }
L_088FA800:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FA818;
    }
    goto L_088FA80C;
L_088FA80C:
    aot_gpr_31 = (0x088FA814u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA814u) goto L_088FA814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA814:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FA818;
L_088FA818:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA828;
    }
L_088FA828:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_088FA84C;
      }
      goto L_088FA834;
    }
L_088FA834:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FA844u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_088F9098;
L_088FA844:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FA858;
      }
      goto L_088FA84C;
    }
L_088FA84C:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088FA858;
L_088FA858:
    aot_gpr_16 = (aot_gpr_16 + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FA870;
      }
      goto L_088FA868;
    }
L_088FA868:
    aot_gpr_31 = (0x088FA870u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA870u) goto L_088FA870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA870:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA884;
    }
L_088FA884:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FA96C;
      }
      goto L_088FA894;
    }
L_088FA894:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4560));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088FA8BCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA8BCu) goto L_088FA8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA8BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088FA95C;
      }
      goto L_088FA8C4;
    }
L_088FA8C4:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4560));
    ctx.gpr[20] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x088FA8E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA8E4u) goto L_088FA8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA8E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088FA90C;
      }
      goto L_088FA8F0;
    }
L_088FA8F0:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 492u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    aot_gpr_31 = (0x088FA908u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14600));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA908u) goto L_088FA908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA908:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    goto L_088FA90C;
L_088FA90C:
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4560));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
      if (branch_taken) {
          goto L_088FA948;
      }
      goto L_088FA940;
    }
L_088FA940:
    aot_gpr_31 = (0x088FA948u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA948u) goto L_088FA948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA948:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088FA998;
      }
      goto L_088FA95C;
    }
L_088FA95C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FA894;
      }
      goto L_088FA96C;
    }
L_088FA96C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FA988;
      }
      goto L_088FA980;
    }
L_088FA980:
    aot_gpr_31 = (0x088FA988u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FA988u) goto L_088FA988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FA988:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_088FA998;
L_088FA998:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
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
L_088FA9C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_31 = (0x088FA9FCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088FA9FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088FAA08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 140u, 0x0898474Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAA08u) goto L_088FAA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAA08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FAA1C;
      }
      goto L_088FAA10;
    }
L_088FAA10:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FAA44;
      }
      goto L_088FAA1C;
    }
L_088FAA1C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAA3C;
      }
      goto L_088FAA24;
    }
L_088FAA24:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088FAA3Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAA44;
    }
L_088FAA44:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088FAA6C;
      }
      goto L_088FAA4C;
    }
L_088FAA4C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FAA5Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088FB2D8;
L_088FAA5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088FAA6C;
L_088FAA6C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 60u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088FAAA4;
      }
      goto L_088FAA7C;
    }
L_088FAA7C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAA9C;
      }
      goto L_088FAA84;
    }
L_088FAA84:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAA9Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAAA4;
    }
L_088FAAA4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088FAAB0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088FAAB0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088FAAC4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088F8860;
L_088FAAC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FAADC;
      }
      goto L_088FAAD0;
    }
L_088FAAD0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FAB04;
      }
      goto L_088FAADC;
    }
L_088FAADC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAAFC;
      }
      goto L_088FAAE4;
    }
L_088FAAE4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAAFCu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAB04;
    }
L_088FAB04:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22804));
    aot_gpr_31 = (0x088FAB10u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAB10u) goto L_088FAB10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAB10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
      if (branch_taken) {
          goto L_088FAB24;
      }
      goto L_088FAB1C;
    }
L_088FAB1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088FAB24;
      }
      goto L_088FAB24;
    }
L_088FAB24:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FAB30u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAB30u) goto L_088FAB30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAB30:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22752));
    aot_gpr_31 = (0x088FAB3Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAB3Cu) goto L_088FAB3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAB3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FAF74;
      }
      goto L_088FAB44;
    }
L_088FAB44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FAF74;
      }
      goto L_088FAB50;
    }
L_088FAB50:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FAB60u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088F8698;
L_088FAB60:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FAB78;
      }
      goto L_088FAB6C;
    }
L_088FAB6C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FABC0;
      }
      goto L_088FAB78;
    }
L_088FAB78:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAB98;
      }
      goto L_088FAB80;
    }
L_088FAB80:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAB98u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAB98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FABB0;
    }
    goto L_088FABA4;
L_088FABA4:
    aot_gpr_31 = (0x088FABACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FABACu) goto L_088FABAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FABAC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FABB0;
L_088FABB0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FABC0;
    }
L_088FABC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 47u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FAC54;
      }
      goto L_088FABD0;
    }
L_088FABD0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 62u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088FAC2C;
      }
      goto L_088FABE4;
    }
L_088FABE4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAC04;
      }
      goto L_088FABEC;
    }
L_088FABEC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAC04u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAC04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAC1C;
    }
    goto L_088FAC10;
L_088FAC10:
    aot_gpr_31 = (0x088FAC18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAC18u) goto L_088FAC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAC18:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAC1C;
L_088FAC1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAC2C;
    }
L_088FAC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FAC40;
      }
      goto L_088FAC38;
    }
L_088FAC38:
    aot_gpr_31 = (0x088FAC40u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAC40u) goto L_088FAC40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAC40:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAC54;
    }
L_088FAC54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 62u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FAD6C;
      }
      goto L_088FAC64;
    }
L_088FAC64:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAC78u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F97AC;
L_088FAC78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FAC90;
      }
      goto L_088FAC84;
    }
L_088FAC84:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FACB8;
      }
      goto L_088FAC90;
    }
L_088FAC90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FACA8;
    }
    goto L_088FAC9C;
L_088FAC9C:
    aot_gpr_31 = (0x088FACA4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FACA4u) goto L_088FACA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FACA4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FACA8;
L_088FACA8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FACB8;
    }
L_088FACB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
      if (branch_taken) {
          goto L_088FACCC;
      }
      goto L_088FACC4;
    }
L_088FACC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088FACCC;
      }
      goto L_088FACCC;
    }
L_088FACCC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088FACE0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088F8E3C;
L_088FACE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FAD24;
      }
      goto L_088FACE8;
    }
L_088FACE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
        goto L_088FACF8;
    }
    goto L_088FACF8;
L_088FACF8:
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAD14;
    }
    goto L_088FAD08;
L_088FAD08:
    aot_gpr_31 = (0x088FAD10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAD10u) goto L_088FAD10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAD10:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAD14;
L_088FAD14:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAD24;
    }
L_088FAD24:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAD44;
      }
      goto L_088FAD2C;
    }
L_088FAD2C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAD44u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAD44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAD5C;
    }
    goto L_088FAD50;
L_088FAD50:
    aot_gpr_31 = (0x088FAD58u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAD58u) goto L_088FAD58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAD58:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAD5C;
L_088FAD5C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAD6C;
    }
L_088FAD6C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x088FAD78u);
    aot_gpr_4 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAD78u) goto L_088FAD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAD78:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_088FADD0;
      }
      goto L_088FAD84;
    }
L_088FAD84:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22752));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    goto L_088FADD0;
L_088FADD0:
    if (ctx.gpr[22] != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
        goto L_088FAE20;
    }
    goto L_088FADD8;
L_088FADD8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FADF8;
      }
      goto L_088FADE0;
    }
L_088FADE0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FADF8u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FADF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAE10;
    }
    goto L_088FAE04;
L_088FAE04:
    aot_gpr_31 = (0x088FAE0Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAE0Cu) goto L_088FAE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAE0C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAE10;
L_088FAE10:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAE20;
    }
L_088FAE20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088FAE48u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAE48u) goto L_088FAE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAE48:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FAE60;
      }
      goto L_088FAE54;
    }
L_088FAE54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FAECC;
      }
      goto L_088FAE60;
    }
L_088FAE60:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FAE80;
      }
      goto L_088FAE68;
    }
L_088FAE68:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FAE80u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088FA418;
L_088FAE80:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088FAEA4;
      }
      goto L_088FAE88;
    }
L_088FAE88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088FAEA4u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAEA4u) goto L_088FAEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAEA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAEBC;
    }
    goto L_088FAEB0;
L_088FAEB0:
    aot_gpr_31 = (0x088FAEB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAEB8u) goto L_088FAEB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAEB8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAEBC;
L_088FAEBC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAECC;
    }
L_088FAECC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088FAEE0;
      }
      goto L_088FAED8;
    }
L_088FAED8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088FAEE4;
      }
      goto L_088FAEE0;
    }
L_088FAEE0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    goto L_088FAEE4;
L_088FAEE4:
    aot_gpr_31 = (0x088FAEECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 216u, 0x08984BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAEECu) goto L_088FAEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAEEC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FAF60;
      }
      goto L_088FAEF8;
    }
L_088FAEF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
      if (branch_taken) {
          goto L_088FAF0C;
      }
      goto L_088FAF04;
    }
L_088FAF04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088FAF0C;
      }
      goto L_088FAF0C;
    }
L_088FAF0C:
    aot_gpr_31 = (0x088FAF14u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAF14u) goto L_088FAF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAF14:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088FAF38;
      }
      goto L_088FAF1C;
    }
L_088FAF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088FAF38u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAF38u) goto L_088FAF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAF38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAF50;
    }
    goto L_088FAF44;
L_088FAF44:
    aot_gpr_31 = (0x088FAF4Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAF4Cu) goto L_088FAF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAF4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAF50;
L_088FAF50:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAF98;
      }
      goto L_088FAF60;
    }
L_088FAF60:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(52));
    aot_gpr_31 = (0x088FAF6Cu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 202u, 0x08984AC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAF6Cu) goto L_088FAF6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAF6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FAB3C;
      }
      goto L_088FAF74;
    }
L_088FAF74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_088FAF8C;
    }
    goto L_088FAF80;
L_088FAF80:
    aot_gpr_31 = (0x088FAF88u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FAF88u) goto L_088FAF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FAF88:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_088FAF8C;
L_088FAF8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088FAF98;
L_088FAF98:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
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
L_088FAFC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22848));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(60));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_31 = (0x088FB014u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB014u) goto L_088FB014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB014:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          goto L_088FB058;
      }
      goto L_088FB020;
    }
L_088FB020:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FB058;
      }
      goto L_088FB02C;
    }
L_088FB02C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088FB078;
      }
      goto L_088FB03C;
    }
L_088FB03C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088FB08C;
      }
      goto L_088FB058;
    }
L_088FB058:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088FB070u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088FA418;
L_088FB070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB2A8;
      }
      goto L_088FB078;
    }
L_088FB078:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    goto L_088FB08C;
L_088FB08C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088FB0AC;
      }
      goto L_088FB098;
    }
L_088FB098:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22760));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x088FB0ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB0ACu) goto L_088FB0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB0AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB0C8;
    }
L_088FB0C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB0D4;
    }
L_088FB0D4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB0DC;
    }
L_088FB0DC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB0E8;
    }
L_088FB0E8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB0F0;
    }
L_088FB0F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB0FC;
    }
L_088FB0FC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FB108;
      }
      goto L_088FB104;
    }
L_088FB104:
    ctx.gpr[17] = (0u | 1u);
    goto L_088FB108;
L_088FB108:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FB114u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088F8698;
L_088FB114:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FB138;
      }
      goto L_088FB11C;
    }
L_088FB11C:
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22748));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22744));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22736));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-14720));
      if (branch_taken) {
          goto L_088FB158;
      }
      goto L_088FB138;
    }
L_088FB138:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088FB150u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088FA418;
L_088FB150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB2A8;
      }
      goto L_088FB158;
    }
L_088FB158:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088FB1CC;
      }
      goto L_088FB160;
    }
L_088FB160:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FB1CC;
      }
      goto L_088FB16C;
    }
L_088FB16C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FB17Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088F91F0;
L_088FB17C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088FB1CC;
      }
      goto L_088FB188;
    }
L_088FB188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088FB1ACu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB1ACu) goto L_088FB1AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB1AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FB1BCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 99u, 0x0898458Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB1BCu) goto L_088FB1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB1BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FB1D4;
      }
      goto L_088FB1C4;
    }
L_088FB1C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FB294;
      }
      goto L_088FB1CC;
    }
L_088FB1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088FB2A8;
      }
      goto L_088FB1D4;
    }
L_088FB1D4:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088FB1EC;
      }
      goto L_088FB1DC;
    }
L_088FB1DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088FB1EC;
      }
      goto L_088FB1E8;
    }
L_088FB1E8:
    aot_gpr_4 = (0u < aot_gpr_16 ? 1u : 0u);
    goto L_088FB1EC;
L_088FB1EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FB294;
      }
      goto L_088FB1F4;
    }
L_088FB1F4:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088FB20C;
      }
      goto L_088FB1FC;
    }
L_088FB1FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088FB20C;
      }
      goto L_088FB208;
    }
L_088FB208:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088FB20C;
L_088FB20C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
        goto L_088FB220;
    }
    goto L_088FB218;
L_088FB218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088FB220;
      }
      goto L_088FB220;
    }
L_088FB220:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_4 = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_088FB234;
      }
      goto L_088FB228;
    }
L_088FB228:
    aot_gpr_5 = (0u | 740u);
    aot_gpr_31 = (0x088FB234u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB234u) goto L_088FB234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB234:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FB248;
      }
      goto L_088FB240;
    }
L_088FB240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088FB294;
      }
      goto L_088FB248;
    }
L_088FB248:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088FB25Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088F8E3C;
L_088FB25C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FB26C;
      }
      goto L_088FB264;
    }
L_088FB264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088FB294;
      }
      goto L_088FB26C;
    }
L_088FB26C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088FB280u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088F8E3C;
L_088FB280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FB290;
      }
      goto L_088FB288;
    }
L_088FB288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088FB294;
      }
      goto L_088FB290;
    }
L_088FB290:
    ctx.gpr[17] = (0u | 2u);
    goto L_088FB294;
L_088FB294:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FB2A0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088F8698;
L_088FB2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FB158;
      }
      goto L_088FB2A8;
    }
L_088FB2A8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088FB2D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088FB31C;
      }
      goto L_088FB308;
    }
L_088FB308:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22728));
    aot_gpr_5 = (0u | 186u);
    aot_gpr_31 = (0x088FB31Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB31Cu) goto L_088FB31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB31C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FB344;
      }
      goto L_088FB32C;
    }
L_088FB32C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088FB35C;
      }
      goto L_088FB33C;
    }
L_088FB33C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088FB34C;
      }
      goto L_088FB344;
    }
L_088FB344:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FB560;
      }
      goto L_088FB34C;
    }
L_088FB34C:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22844));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x088FB35Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB35Cu) goto L_088FB35C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB35C:
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[3] = (2232u << 16u);
      if (branch_taken) {
          goto L_088FB4F8;
      }
      goto L_088FB368;
    }
L_088FB368:
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 13u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-69));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-66));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-15784));
    goto L_088FB384;
L_088FB384:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088FB4B8;
      }
      goto L_088FB398;
    }
L_088FB398:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14512)));
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
L_088FB3B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FB560;
      }
      goto L_088FB3B8;
    }
L_088FB3B8:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_5;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB3D8;
      }
      goto L_088FB3D0;
    }
L_088FB3D0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    goto L_088FB3D8;
L_088FB3D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4F0;
      }
      goto L_088FB3E0;
    }
L_088FB3E0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB400;
      }
      goto L_088FB3F8;
    }
L_088FB3F8:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    goto L_088FB400;
L_088FB400:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4F0;
      }
      goto L_088FB408;
    }
L_088FB408:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4F0;
      }
      goto L_088FB430;
    }
L_088FB430:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[7];
      if (branch_taken) {
          goto L_088FB4A4;
      }
      goto L_088FB438;
    }
L_088FB438:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088FB4B0;
      }
      goto L_088FB444;
    }
L_088FB444:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088FB4B0;
      }
      goto L_088FB450;
    }
L_088FB450:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088FB468;
      }
      goto L_088FB458;
    }
L_088FB458:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[11];
      if (branch_taken) {
          goto L_088FB468;
      }
      goto L_088FB460;
    }
L_088FB460:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4B0;
      }
      goto L_088FB468;
    }
L_088FB468:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[11];
      if (branch_taken) {
          goto L_088FB480;
      }
      goto L_088FB470;
    }
L_088FB470:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088FB480;
      }
      goto L_088FB478;
    }
L_088FB478:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4B0;
      }
      goto L_088FB480;
    }
L_088FB480:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[11];
      if (branch_taken) {
          goto L_088FB498;
      }
      goto L_088FB488;
    }
L_088FB488:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[11];
      if (branch_taken) {
          goto L_088FB498;
      }
      goto L_088FB490;
    }
L_088FB490:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4B0;
      }
      goto L_088FB498;
    }
L_088FB498:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4B0;
      }
      goto L_088FB4A4;
    }
L_088FB4A4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
    goto L_088FB4B0;
L_088FB4B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FB4F0;
      }
      goto L_088FB4B8;
    }
L_088FB4B8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[7];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FB4E8;
      }
      goto L_088FB4C0;
    }
L_088FB4C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[3]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FB4DC;
      }
      goto L_088FB4D8;
    }
L_088FB4D8:
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    goto L_088FB4DC;
L_088FB4DC:
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB4F0;
      }
      goto L_088FB4E8;
    }
L_088FB4E8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
    goto L_088FB4F0;
L_088FB4F0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FB384;
      }
      goto L_088FB4F8;
    }
L_088FB4F8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < -1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088FB520;
      }
      goto L_088FB508;
    }
L_088FB508:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 292u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    aot_gpr_31 = (0x088FB520u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14552));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB520u) goto L_088FB520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088FB544;
      }
      goto L_088FB530;
    }
L_088FB530:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 293u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    aot_gpr_31 = (0x088FB544u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14532));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB544u) goto L_088FB544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB544:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088FB560;
      }
      goto L_088FB54C;
    }
L_088FB54C:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22724));
    aot_gpr_5 = (0u | 295u);
    aot_gpr_31 = (0x088FB560u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB560u) goto L_088FB560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB560:
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
L_088FB584:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_088FB5AC:
    aot_gpr_5 = (256u << 16u);
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088FB620;
      }
      goto L_088FB5BC;
    }
L_088FB5BC:
    aot_gpr_5 = (128u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088FB5E4;
      }
      goto L_088FB5D0;
    }
L_088FB5D0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
        goto L_088FB5EC;
    }
    goto L_088FB5E4;
L_088FB5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB618;
      }
      goto L_088FB5EC;
    }
L_088FB5EC:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 << 5u);
      if (branch_taken) {
          goto L_088FB608;
      }
      goto L_088FB600;
    }
L_088FB600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB618;
      }
      goto L_088FB608;
    }
L_088FB608:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    goto L_088FB618;
L_088FB618:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FB6F4;
      }
      goto L_088FB620;
    }
L_088FB620:
    aot_gpr_5 = (128u << 16u);
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088FB69C;
      }
      goto L_088FB630;
    }
L_088FB630:
    aot_gpr_5 = (128u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088FB658;
      }
      goto L_088FB644;
    }
L_088FB644:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
        goto L_088FB660;
    }
    goto L_088FB658;
L_088FB658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB694;
      }
      goto L_088FB660;
    }
L_088FB660:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
      if (branch_taken) {
          goto L_088FB67C;
      }
      goto L_088FB674;
    }
L_088FB674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB694;
      }
      goto L_088FB67C;
    }
L_088FB67C:
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    goto L_088FB694;
L_088FB694:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FB6F4;
      }
      goto L_088FB69C;
    }
L_088FB69C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088FB6BC;
      }
      goto L_088FB6A8;
    }
L_088FB6A8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
        goto L_088FB6C4;
    }
    goto L_088FB6BC;
L_088FB6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB6F4;
      }
      goto L_088FB6C4;
    }
L_088FB6C4:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 << 5u);
      if (branch_taken) {
          goto L_088FB6E0;
      }
      goto L_088FB6D8;
    }
L_088FB6D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB6F4;
      }
      goto L_088FB6E0;
    }
L_088FB6E0:
    aot_gpr_5 = (0u + aot_gpr_4);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    goto L_088FB6F4;
L_088FB6F4:
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
L_088FB6FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_31);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x088FB738u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB738u) goto L_088FB738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB738:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_088FB840;
      }
      goto L_088FB770;
    }
L_088FB770:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 0u);
    goto L_088FB778;
L_088FB778:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
      if (branch_taken) {
          goto L_088FB794;
      }
      goto L_088FB780;
    }
L_088FB780:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
        goto L_088FB79C;
    }
    goto L_088FB794;
L_088FB794:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088FB7C4;
      }
      goto L_088FB79C;
    }
L_088FB79C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
        goto L_088FB7BC;
    }
    goto L_088FB7B4;
L_088FB7B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088FB7C4;
      }
      goto L_088FB7BC;
    }
L_088FB7BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    goto L_088FB7C4;
L_088FB7C4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FB828;
      }
      goto L_088FB7CC;
    }
L_088FB7CC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
      if (branch_taken) {
          goto L_088FB828;
      }
      goto L_088FB7D8;
    }
L_088FB7D8:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088FB828;
      }
      goto L_088FB80C;
    }
L_088FB80C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FB820u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB820u) goto L_088FB820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB85C;
      }
      goto L_088FB828;
    }
L_088FB828:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_088FB778;
      }
      goto L_088FB840;
    }
L_088FB840:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FB858u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB858u) goto L_088FB858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB858:
    ctx.gpr[2] = (0u | 0u);
    goto L_088FB85C;
L_088FB85C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
L_088FB878:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088FB8A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB8A8u) goto L_088FB8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_31 = (0x088FB8B4u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_088FB5AC;
L_088FB8B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088FB994;
      }
      goto L_088FB8C0;
    }
L_088FB8C0:
    aot_gpr_31 = (0x088FB8C8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 1090u, 0x08ACFCB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB8C8u) goto L_088FB8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB8C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB8EC;
      }
      goto L_088FB8DC;
    }
L_088FB8DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088FB8EC;
L_088FB8EC:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_088FB994;
      }
      goto L_088FB8F8;
    }
L_088FB8F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
        goto L_088FB910;
    }
    goto L_088FB904;
L_088FB904:
    aot_gpr_31 = (0x088FB90Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 324u, 0x08B6A238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB90Cu) goto L_088FB90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB90C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    goto L_088FB910;
L_088FB910:
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088FB974;
      }
      goto L_088FB934;
    }
L_088FB934:
    aot_gpr_6 = (ctx.gpr[18] & 255u);
    goto L_088FB938;
L_088FB938:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088FB960;
      }
      goto L_088FB95C;
    }
L_088FB95C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_088FB960;
L_088FB960:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088FB938;
      }
      goto L_088FB974;
    }
L_088FB974:
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FB98Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB98Cu) goto L_088FB98C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB9B0;
      }
      goto L_088FB994;
    }
L_088FB994:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29704), 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FB9ACu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FB9ACu) goto L_088FB9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FB9AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088FB9B0;
L_088FB9B0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
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
L_088FB9C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_gpr_31 = (0x088FBA14u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBA14u) goto L_088FBA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBA14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FBA34u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_088FB5AC;
L_088FBA34:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[22] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088FBB3C;
    }
    goto L_088FBA40;
L_088FBA40:
    aot_gpr_31 = (0x088FBA48u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 1090u, 0x08ACFCB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBA48u) goto L_088FBA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBA48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBA6C;
      }
      goto L_088FBA5C;
    }
L_088FBA5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088FBA6C;
L_088FBA6C:
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
      if (branch_taken) {
          goto L_088FBB38;
      }
      goto L_088FBA78;
    }
L_088FBA78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
        goto L_088FBA90;
    }
    goto L_088FBA84;
L_088FBA84:
    aot_gpr_31 = (0x088FBA8Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 324u, 0x08B6A238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBA8Cu) goto L_088FBA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBA8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    goto L_088FBA90;
L_088FBA90:
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088FBAA8u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 319u, 0x088C59F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBAA8u) goto L_088FBAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBAA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088FBB38;
      }
      goto L_088FBAB4;
    }
L_088FBAB4:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088FBAD4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_088FB584;
L_088FBAD4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088FBB04;
      }
      goto L_088FBAF4;
    }
L_088FBAF4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088FBB14;
      }
      goto L_088FBB04;
    }
L_088FBB04:
    aot_gpr_31 = (0x088FBB0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBB0Cu) goto L_088FBB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBB0C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088FBB14;
      }
      goto L_088FBB14;
    }
L_088FBB14:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_5 = (16457u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 4059u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 / aot_fpr_20;
    goto L_088FBB38;
L_088FBB38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088FBB3C;
L_088FBB3C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FBB68u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBB68u) goto L_088FBB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBB68:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
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
L_088FBB9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x088FBBD8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBBD8u) goto L_088FBBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBBD8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088FBBF8u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBBF8u) goto L_088FBBF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBBF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088FBC0C;
    }
    goto L_088FBC04;
L_088FBC04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBC14;
      }
      goto L_088FBC0C;
    }
L_088FBC0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    goto L_088FBC14;
L_088FBC14:
    aot_gpr_31 = (0x088FBC1Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088FB5AC;
L_088FBC1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FBDA4;
      }
      goto L_088FBC28;
    }
L_088FBC28:
    aot_gpr_31 = (0x088FBC30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 1090u, 0x08ACFCB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBC30u) goto L_088FBC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBC30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBC54;
      }
      goto L_088FBC44;
    }
L_088FBC44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088FBC54;
L_088FBC54:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_088FBDA4;
      }
      goto L_088FBC60;
    }
L_088FBC60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
        goto L_088FBC78;
    }
    goto L_088FBC6C;
L_088FBC6C:
    aot_gpr_31 = (0x088FBC74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 324u, 0x08B6A238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBC74u) goto L_088FBC74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBC74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    goto L_088FBC78;
L_088FBC78:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088FBD84;
      }
      goto L_088FBC9C;
    }
L_088FBC9C:
    aot_gpr_6 = (aot_gpr_5 & 255u);
    goto L_088FBCA0;
L_088FBCA0:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_gpr_6 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088FBD70;
      }
      goto L_088FBCC4;
    }
L_088FBCC4:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[19];
    aot_gpr_6 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088FBCF4;
      }
      goto L_088FBCE8;
    }
L_088FBCE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
      if (branch_taken) {
          goto L_088FBD70;
      }
      goto L_088FBCF0;
    }
L_088FBCF0:
    aot_gpr_6 = (aot_gpr_5 & 255u);
    goto L_088FBCF4;
L_088FBCF4:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[7] = (2234u << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14520));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088FBD38;
      }
      goto L_088FBD30;
    }
L_088FBD30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088FBD38;
      }
      goto L_088FBD38;
    }
L_088FBD38:
    ctx.gpr[8] = (2234u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14520));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088FBD64;
      }
      goto L_088FBD5C;
    }
L_088FBD5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088FBD64;
      }
      goto L_088FBD64;
    }
L_088FBD64:
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_088FBD70;
      }
      goto L_088FBD6C;
    }
L_088FBD6C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_088FBD70;
L_088FBD70:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088FBCA0;
      }
      goto L_088FBD84;
    }
L_088FBD84:
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FBD9Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBD9Cu) goto L_088FBD9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBD9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBDC0;
      }
      goto L_088FBDA4;
    }
L_088FBDA4:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29704), 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FBDBCu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBDBCu) goto L_088FBDBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBDBC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088FBDC0;
L_088FBDC0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_088FBDE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 4u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    aot_gpr_31 = (0x088FBE34u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBE34u) goto L_088FBE34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBE34:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088FBE5Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBE5Cu) goto L_088FBE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBE5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088FBE70;
      }
      goto L_088FBE68;
    }
L_088FBE68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBE7C;
      }
      goto L_088FBE70;
    }
L_088FBE70:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_088FBE7C;
L_088FBE7C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FBE94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088FB5AC;
L_088FBE94:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088FBF90;
    }
    goto L_088FBEA0;
L_088FBEA0:
    aot_gpr_31 = (0x088FBEA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 1090u, 0x08ACFCB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBEA8u) goto L_088FBEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBEA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBECC;
      }
      goto L_088FBEBC;
    }
L_088FBEBC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088FBECC;
L_088FBECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_088FBEE0;
      }
      goto L_088FBED8;
    }
L_088FBED8:
    aot_gpr_31 = (0x088FBEE0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 324u, 0x08B6A238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBEE0u) goto L_088FBEE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBEE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088FBEFCu);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 319u, 0x088C59F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBEFCu) goto L_088FBEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBEFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FBF8C;
      }
      goto L_088FBF08;
    }
L_088FBF08:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FBF28u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_088FB584;
L_088FBF28:
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088FBF58;
      }
      goto L_088FBF48;
    }
L_088FBF48:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088FBF68;
      }
      goto L_088FBF58;
    }
L_088FBF58:
    aot_gpr_31 = (0x088FBF60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBF60u) goto L_088FBF60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBF60:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088FBF68;
      }
      goto L_088FBF68;
    }
L_088FBF68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_5 = (16457u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = aot_fpr_12 / ctx.fpr[22];
    goto L_088FBF8C;
L_088FBF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088FBF90;
L_088FBF90:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088FBFBCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FBFBCu) goto L_088FBFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FBFBC:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
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
L_088FBFF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.pc = 0x088FC000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0061(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0061_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_61(Runtime &runtime) {
    runtime.register_generated_unit(61u, 0x088F8000u, 16384u, &recomp_unit_0061, &recomp_unit_0061_entry);
    runtime.register_function(0x088F8000u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8038u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F804Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8064u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8078u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8100u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8108u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8110u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8148u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8150u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8154u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F817Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F818Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8200u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8210u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8220u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F822Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8238u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8240u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F824Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8404u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F840Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8450u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F849Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8520u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8534u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8544u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8584u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8598u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8604u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8624u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8640u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8654u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8664u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8674u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8684u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F868Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8698u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8708u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8714u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F871Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8724u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F872Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8734u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8740u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F874Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8758u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8760u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F876Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8778u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8784u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8800u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F883Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8844u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F884Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8858u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8860u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F889Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8904u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F890Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8914u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F891Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8924u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F892Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8934u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8944u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F895Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F897Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8990u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8998u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A98u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8ABCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8ADCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8ED0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8ED8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F98u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9000u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9008u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F900Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9028u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9038u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9054u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9058u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9060u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9070u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F908Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9090u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9098u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9104u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9114u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9124u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9134u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9144u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F914Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9158u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9160u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9168u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9170u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F917Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9188u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F919Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9224u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F922Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9238u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9240u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9248u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9258u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9260u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F926Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9288u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9290u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9298u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9304u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9318u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9320u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F932Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9338u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9340u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9350u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9358u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F936Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9374u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9380u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F938Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9394u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9400u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F940Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9418u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9424u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9438u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9440u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9448u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9450u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F946Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9470u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9494u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9504u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F950Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F951Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F952Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9540u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9548u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9554u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9560u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9578u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9580u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F958Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9594u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9600u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9618u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9620u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F962Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9648u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F964Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9654u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9660u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F967Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9684u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9690u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9704u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F970Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9714u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F971Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F972Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9744u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9764u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9778u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9780u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F97ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F97ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F97FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9814u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F981Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9828u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9834u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9840u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F984Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9854u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9864u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9868u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9874u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9880u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9894u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F989Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9900u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F990Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9914u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F991Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9938u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9940u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9954u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F995Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9964u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9974u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9980u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AD8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9BA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9BDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9BE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9BF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9D28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9D34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9D3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9D40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9D60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EC8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9FA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9FA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9FBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9FC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA00Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA018u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA020u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA024u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA030u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA03Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA044u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA058u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA060u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA074u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA088u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA090u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA0D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA0E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA0ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA0F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA0FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA108u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA110u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA124u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA12Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA140u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA148u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA154u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA15Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA198u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA1A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA1A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA1D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA20Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA21Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA224u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA234u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA244u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA24Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA258u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA260u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA268u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA280u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA288u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA308u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA31Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA328u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA330u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA338u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA350u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA35Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA364u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA368u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA390u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA404u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA418u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA450u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA458u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA460u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA468u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA470u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA474u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA488u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA4B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA4C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA4C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA4D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA4ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA50Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA558u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA568u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA574u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA588u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA594u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA608u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA620u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA630u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA640u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA658u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA668u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA678u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA690u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA704u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA70Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA718u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA724u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA72Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA730u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA740u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA74Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA758u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA764u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA770u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA778u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA77Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA78Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA7A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA7B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA7C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA7F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA800u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA80Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA814u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA818u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA828u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA834u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA844u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA84Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA858u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA868u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA870u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA884u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA894u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA908u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA90Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA940u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA948u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA95Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA96Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA980u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA988u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA998u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA9C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA9FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAADCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB98u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABC0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADD8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAECCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAED8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF98u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAFC0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB014u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB020u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB02Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB03Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB058u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB070u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB078u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB08Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB098u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB0FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB104u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB108u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB114u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB11Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB138u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB150u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB158u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB160u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB16Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB17Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB188u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB208u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB20Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB218u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB220u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB228u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB234u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB240u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB248u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB25Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB264u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB26Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB280u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB288u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB290u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB294u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB2A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB2A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB2D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB308u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB31Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB32Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB33Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB344u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB34Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB35Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB368u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB384u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB398u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB400u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB408u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB430u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB438u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB444u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB450u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB458u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB460u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB468u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB470u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB478u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB480u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB488u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB490u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB498u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB508u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB520u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB530u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB544u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB54Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB560u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB584u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB600u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB608u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB618u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB620u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB630u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB644u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB658u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB660u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB674u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB67Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB694u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB69Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB738u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB770u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB778u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB780u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB794u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB79Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB80Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB820u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB828u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB840u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB858u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB85Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB878u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB904u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB90Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB910u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB934u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB938u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB95Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB960u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB974u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB98Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB994u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBD8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDC0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBECCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBED8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBFBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBFF8u, &recomp_unit_0061, "recomp_unit_0061");
}
} // namespace psprecomp
