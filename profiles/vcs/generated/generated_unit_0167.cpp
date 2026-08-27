#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0167[64] = {
    0x1080800C00081AA9ull, 0x2004884A49102830ull, 0x08402000404D20E9ull, 0x000404D20E920042ull,
    0x4490900204280804ull, 0x22494A2010344A44ull, 0x02109020890086A5ull, 0x804484442384A484ull,
    0x0628885488904800ull, 0xA948C99408208004ull, 0x4492802110080288ull, 0xA4A2888A000208A2ull,
    0x848A4A2889451100ull, 0x889292511A494468ull, 0xA424040051122108ull, 0x000016A488810448ull,
    0x24C4489511228950ull, 0x52010AA540533406ull, 0x0A2A0010A28042AAull, 0x0201429249280821ull,
    0x944A0200010A1208ull, 0x24A920020B084248ull, 0x92480541224900A8ull, 0xA40422A500800808ull,
    0xA51004008002865Aull, 0x043010AA44808542ull, 0x852202154A0A9420ull, 0x0322223012041C00ull,
    0x9005030031111030ull, 0x0100040802000814ull, 0x88A2128001000404ull, 0x0106004001008888ull,
    0x0800204020008290ull, 0x0857111171111310ull, 0x1080800180040010ull, 0x5A552A94AA910409ull,
    0x0002C84152042108ull, 0x414021890900A210ull, 0x81009144A2512894ull, 0x54A5145144B15454ull,
    0x451451020102528Aull, 0xA94A28A28962A8A9ull, 0x8B1545440204A514ull, 0x1024A295294528A2ull,
    0x28A5144A5144A408ull, 0x4B15454A28810209ull, 0x2020928A5144A514ull, 0x290021888104A545ull,
    0x0D40148011801A80ull, 0x046006A00A4008C0ull, 0x2000023003500520ull, 0x2108841082244112ull,
    0x2411121201441022ull, 0x408010C444444049ull, 0x2485110120000441ull, 0x0042400000808282ull,
    0x2A82804840420420ull, 0x0880002020100001ull, 0x2AA9008040020102ull, 0x0210A810215142A2ull,
    0x2D140300829204A2ull, 0x8494204034210284ull, 0x241A2D1100440016ull, 0x80400149400C0005ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0167[64] = {
    1u, 14u, 29u, 43u, 57u, 69u, 87u, 102u, 119u, 134u, 151u, 164u, 180u, 198u, 220u, 234u,
    247u, 267u, 287u, 303u, 318u, 331u, 347u, 364u, 377u, 392u, 408u, 426u, 440u, 454u, 461u, 472u,
    481u, 489u, 509u, 516u, 540u, 553u, 567u, 585u, 609u, 626u, 651u, 671u, 692u, 712u, 732u, 751u,
    768u, 782u, 795u, 806u, 820u, 834u, 848u, 860u, 868u, 881u, 887u, 899u, 915u, 932u, 947u, 963u,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,6,29,2 fprs=12,13,14,0 gpr_occ=4210 fpr_occ=77 gpr_total=6564 fpr_total=86
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA0000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0167[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0167[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AA0000;
    case 2u: goto L_08AA000C;
    case 3u: goto L_08AA0014;
    case 4u: goto L_08AA001C;
    case 5u: goto L_08AA0024;
    case 6u: goto L_08AA002C;
    case 7u: goto L_08AA0030;
    case 8u: goto L_08AA004C;
    case 9u: goto L_08AA0088;
    case 10u: goto L_08AA008C;
    case 11u: goto L_08AA00BC;
    case 12u: goto L_08AA00DC;
    case 13u: goto L_08AA00F0;
    case 14u: goto L_08AA0110;
    case 15u: goto L_08AA0114;
    case 16u: goto L_08AA012C;
    case 17u: goto L_08AA0134;
    case 18u: goto L_08AA0150;
    case 19u: goto L_08AA0160;
    case 20u: goto L_08AA016C;
    case 21u: goto L_08AA0178;
    case 22u: goto L_08AA0184;
    case 23u: goto L_08AA018C;
    case 24u: goto L_08AA0198;
    case 25u: goto L_08AA01AC;
    case 26u: goto L_08AA01BC;
    case 27u: goto L_08AA01C8;
    case 28u: goto L_08AA01F4;
    case 29u: goto L_08AA0200;
    case 30u: goto L_08AA020C;
    case 31u: goto L_08AA0214;
    case 32u: goto L_08AA0218;
    case 33u: goto L_08AA021C;
    case 34u: goto L_08AA0234;
    case 35u: goto L_08AA0240;
    case 36u: goto L_08AA0248;
    case 37u: goto L_08AA024C;
    case 38u: goto L_08AA0258;
    case 39u: goto L_08AA0278;
    case 40u: goto L_08AA02B4;
    case 41u: goto L_08AA02D8;
    case 42u: goto L_08AA02EC;
    case 43u: goto L_08AA0304;
    case 44u: goto L_08AA0318;
    case 45u: goto L_08AA0344;
    case 46u: goto L_08AA0350;
    case 47u: goto L_08AA035C;
    case 48u: goto L_08AA0364;
    case 49u: goto L_08AA0368;
    case 50u: goto L_08AA036C;
    case 51u: goto L_08AA0384;
    case 52u: goto L_08AA0390;
    case 53u: goto L_08AA0398;
    case 54u: goto L_08AA039C;
    case 55u: goto L_08AA03A8;
    case 56u: goto L_08AA03C8;
    case 57u: goto L_08AA0408;
    case 58u: goto L_08AA042C;
    case 59u: goto L_08AA044C;
    case 60u: goto L_08AA0454;
    case 61u: goto L_08AA0468;
    case 62u: goto L_08AA0484;
    case 63u: goto L_08AA04B0;
    case 64u: goto L_08AA04BC;
    case 65u: goto L_08AA04D0;
    case 66u: goto L_08AA04DC;
    case 67u: goto L_08AA04E8;
    case 68u: goto L_08AA04F8;
    case 69u: goto L_08AA0508;
    case 70u: goto L_08AA0518;
    case 71u: goto L_08AA0524;
    case 72u: goto L_08AA052C;
    case 73u: goto L_08AA0538;
    case 74u: goto L_08AA0548;
    case 75u: goto L_08AA0550;
    case 76u: goto L_08AA0554;
    case 77u: goto L_08AA0570;
    case 78u: goto L_08AA0594;
    case 79u: goto L_08AA05A4;
    case 80u: goto L_08AA05AC;
    case 81u: goto L_08AA05B8;
    case 82u: goto L_08AA05C0;
    case 83u: goto L_08AA05CC;
    case 84u: goto L_08AA05D8;
    case 85u: goto L_08AA05E4;
    case 86u: goto L_08AA05F4;
    case 87u: goto L_08AA0600;
    case 88u: goto L_08AA0608;
    case 89u: goto L_08AA0614;
    case 90u: goto L_08AA061C;
    case 91u: goto L_08AA0624;
    case 92u: goto L_08AA0628;
    case 93u: goto L_08AA063C;
    case 94u: goto L_08AA0660;
    case 95u: goto L_08AA066C;
    case 96u: goto L_08AA067C;
    case 97u: goto L_08AA0694;
    case 98u: goto L_08AA06B0;
    case 99u: goto L_08AA06BC;
    case 100u: goto L_08AA06D0;
    case 101u: goto L_08AA06E4;
    case 102u: goto L_08AA0708;
    case 103u: goto L_08AA071C;
    case 104u: goto L_08AA0728;
    case 105u: goto L_08AA0734;
    case 106u: goto L_08AA073C;
    case 107u: goto L_08AA0748;
    case 108u: goto L_08AA075C;
    case 109u: goto L_08AA0760;
    case 110u: goto L_08AA0764;
    case 111u: goto L_08AA0774;
    case 112u: goto L_08AA0788;
    case 113u: goto L_08AA0798;
    case 114u: goto L_08AA07A8;
    case 115u: goto L_08AA07BC;
    case 116u: goto L_08AA07C8;
    case 117u: goto L_08AA07D8;
    case 118u: goto L_08AA07FC;
    case 119u: goto L_08AA082C;
    case 120u: goto L_08AA0838;
    case 121u: goto L_08AA0850;
    case 122u: goto L_08AA085C;
    case 123u: goto L_08AA086C;
    case 124u: goto L_08AA087C;
    case 125u: goto L_08AA0888;
    case 126u: goto L_08AA0890;
    case 127u: goto L_08AA0898;
    case 128u: goto L_08AA08AC;
    case 129u: goto L_08AA08BC;
    case 130u: goto L_08AA08CC;
    case 131u: goto L_08AA08D4;
    case 132u: goto L_08AA08E4;
    case 133u: goto L_08AA08E8;
    case 134u: goto L_08AA0908;
    case 135u: goto L_08AA093C;
    case 136u: goto L_08AA0954;
    case 137u: goto L_08AA096C;
    case 138u: goto L_08AA0988;
    case 139u: goto L_08AA0990;
    case 140u: goto L_08AA099C;
    case 141u: goto L_08AA09A0;
    case 142u: goto L_08AA09AC;
    case 143u: goto L_08AA09B8;
    case 144u: goto L_08AA09BC;
    case 145u: goto L_08AA09CC;
    case 146u: goto L_08AA09D8;
    case 147u: goto L_08AA09E0;
    case 148u: goto L_08AA09EC;
    case 149u: goto L_08AA09F4;
    case 150u: goto L_08AA09FC;
    case 151u: goto L_08AA0A0C;
    case 152u: goto L_08AA0A1C;
    case 153u: goto L_08AA0A24;
    case 154u: goto L_08AA0A4C;
    case 155u: goto L_08AA0A70;
    case 156u: goto L_08AA0A80;
    case 157u: goto L_08AA0A94;
    case 158u: goto L_08AA0ABC;
    case 159u: goto L_08AA0AC4;
    case 160u: goto L_08AA0AD0;
    case 161u: goto L_08AA0ADC;
    case 162u: goto L_08AA0AE8;
    case 163u: goto L_08AA0AF8;
    case 164u: goto L_08AA0B04;
    case 165u: goto L_08AA0B14;
    case 166u: goto L_08AA0B1C;
    case 167u: goto L_08AA0B2C;
    case 168u: goto L_08AA0B44;
    case 169u: goto L_08AA0B84;
    case 170u: goto L_08AA0B8C;
    case 171u: goto L_08AA0B9C;
    case 172u: goto L_08AA0BAC;
    case 173u: goto L_08AA0BBC;
    case 174u: goto L_08AA0BC4;
    case 175u: goto L_08AA0BD4;
    case 176u: goto L_08AA0BDC;
    case 177u: goto L_08AA0BE8;
    case 178u: goto L_08AA0BF4;
    case 179u: goto L_08AA0BFC;
    case 180u: goto L_08AA0C20;
    case 181u: goto L_08AA0C30;
    case 182u: goto L_08AA0C40;
    case 183u: goto L_08AA0C48;
    case 184u: goto L_08AA0C58;
    case 185u: goto L_08AA0C60;
    case 186u: goto L_08AA0C6C;
    case 187u: goto L_08AA0C7C;
    case 188u: goto L_08AA0C8C;
    case 189u: goto L_08AA0C94;
    case 190u: goto L_08AA0CA4;
    case 191u: goto L_08AA0CAC;
    case 192u: goto L_08AA0CB8;
    case 193u: goto L_08AA0CC4;
    case 194u: goto L_08AA0CCC;
    case 195u: goto L_08AA0CDC;
    case 196u: goto L_08AA0CE8;
    case 197u: goto L_08AA0CFC;
    case 198u: goto L_08AA0D0C;
    case 199u: goto L_08AA0D14;
    case 200u: goto L_08AA0D18;
    case 201u: goto L_08AA0D28;
    case 202u: goto L_08AA0D38;
    case 203u: goto L_08AA0D40;
    case 204u: goto L_08AA0D4C;
    case 205u: goto L_08AA0D58;
    case 206u: goto L_08AA0D64;
    case 207u: goto L_08AA0D6C;
    case 208u: goto L_08AA0D70;
    case 209u: goto L_08AA0D80;
    case 210u: goto L_08AA0D90;
    case 211u: goto L_08AA0D98;
    case 212u: goto L_08AA0DA4;
    case 213u: goto L_08AA0DB0;
    case 214u: goto L_08AA0DBC;
    case 215u: goto L_08AA0DC4;
    case 216u: goto L_08AA0DD0;
    case 217u: goto L_08AA0DDC;
    case 218u: goto L_08AA0DEC;
    case 219u: goto L_08AA0DFC;
    case 220u: goto L_08AA0E0C;
    case 221u: goto L_08AA0E20;
    case 222u: goto L_08AA0E34;
    case 223u: goto L_08AA0E44;
    case 224u: goto L_08AA0E50;
    case 225u: goto L_08AA0E60;
    case 226u: goto L_08AA0E70;
    case 227u: goto L_08AA0E78;
    case 228u: goto L_08AA0EA8;
    case 229u: goto L_08AA0EC8;
    case 230u: goto L_08AA0ED4;
    case 231u: goto L_08AA0EE8;
    case 232u: goto L_08AA0EF4;
    case 233u: goto L_08AA0EFC;
    case 234u: goto L_08AA0F0C;
    case 235u: goto L_08AA0F18;
    case 236u: goto L_08AA0F28;
    case 237u: goto L_08AA0F40;
    case 238u: goto L_08AA0F5C;
    case 239u: goto L_08AA0F6C;
    case 240u: goto L_08AA0F7C;
    case 241u: goto L_08AA0F88;
    case 242u: goto L_08AA0F94;
    case 243u: goto L_08AA0F9C;
    case 244u: goto L_08AA0FA4;
    case 245u: goto L_08AA0FA8;
    case 246u: goto L_08AA0FB0;
    case 247u: goto L_08AA1010;
    case 248u: goto L_08AA1018;
    case 249u: goto L_08AA1020;
    case 250u: goto L_08AA102C;
    case 251u: goto L_08AA103C;
    case 252u: goto L_08AA1044;
    case 253u: goto L_08AA1054;
    case 254u: goto L_08AA1060;
    case 255u: goto L_08AA1070;
    case 256u: goto L_08AA1080;
    case 257u: goto L_08AA1088;
    case 258u: goto L_08AA1090;
    case 259u: goto L_08AA109C;
    case 260u: goto L_08AA10AC;
    case 261u: goto L_08AA10B8;
    case 262u: goto L_08AA10C8;
    case 263u: goto L_08AA10D8;
    case 264u: goto L_08AA10DC;
    case 265u: goto L_08AA10E8;
    case 266u: goto L_08AA10F4;
    case 267u: goto L_08AA1104;
    case 268u: goto L_08AA1108;
    case 269u: goto L_08AA1128;
    case 270u: goto L_08AA1130;
    case 271u: goto L_08AA1134;
    case 272u: goto L_08AA1140;
    case 273u: goto L_08AA1144;
    case 274u: goto L_08AA1150;
    case 275u: goto L_08AA1158;
    case 276u: goto L_08AA1178;
    case 277u: goto L_08AA1180;
    case 278u: goto L_08AA1188;
    case 279u: goto L_08AA1194;
    case 280u: goto L_08AA119C;
    case 281u: goto L_08AA11A4;
    case 282u: goto L_08AA11AC;
    case 283u: goto L_08AA11C0;
    case 284u: goto L_08AA11E4;
    case 285u: goto L_08AA11F0;
    case 286u: goto L_08AA11F8;
    case 287u: goto L_08AA1204;
    case 288u: goto L_08AA120C;
    case 289u: goto L_08AA1214;
    case 290u: goto L_08AA121C;
    case 291u: goto L_08AA1224;
    case 292u: goto L_08AA1238;
    case 293u: goto L_08AA125C;
    case 294u: goto L_08AA1264;
    case 295u: goto L_08AA1274;
    case 296u: goto L_08AA127C;
    case 297u: goto L_08AA1290;
    case 298u: goto L_08AA12C4;
    case 299u: goto L_08AA12CC;
    case 300u: goto L_08AA12D4;
    case 301u: goto L_08AA12E4;
    case 302u: goto L_08AA12EC;
    case 303u: goto L_08AA1300;
    case 304u: goto L_08AA1314;
    case 305u: goto L_08AA132C;
    case 306u: goto L_08AA134C;
    case 307u: goto L_08AA1354;
    case 308u: goto L_08AA1360;
    case 309u: goto L_08AA136C;
    case 310u: goto L_08AA1378;
    case 311u: goto L_08AA1384;
    case 312u: goto L_08AA1390;
    case 313u: goto L_08AA139C;
    case 314u: goto L_08AA13A4;
    case 315u: goto L_08AA13B8;
    case 316u: goto L_08AA13C0;
    case 317u: goto L_08AA13E4;
    case 318u: goto L_08AA140C;
    case 319u: goto L_08AA1424;
    case 320u: goto L_08AA1430;
    case 321u: goto L_08AA1444;
    case 322u: goto L_08AA144C;
    case 323u: goto L_08AA1460;
    case 324u: goto L_08AA14A4;
    case 325u: goto L_08AA14C4;
    case 326u: goto L_08AA14CC;
    case 327u: goto L_08AA14D8;
    case 328u: goto L_08AA14E8;
    case 329u: goto L_08AA14F0;
    case 330u: goto L_08AA14FC;
    case 331u: goto L_08AA150C;
    case 332u: goto L_08AA1518;
    case 333u: goto L_08AA1524;
    case 334u: goto L_08AA1538;
    case 335u: goto L_08AA154C;
    case 336u: goto L_08AA1560;
    case 337u: goto L_08AA1564;
    case 338u: goto L_08AA156C;
    case 339u: goto L_08AA1584;
    case 340u: goto L_08AA15B4;
    case 341u: goto L_08AA15C0;
    case 342u: goto L_08AA15CC;
    case 343u: goto L_08AA15D4;
    case 344u: goto L_08AA15DC;
    case 345u: goto L_08AA15E8;
    case 346u: goto L_08AA15F4;
    case 347u: goto L_08AA160C;
    case 348u: goto L_08AA1614;
    case 349u: goto L_08AA161C;
    case 350u: goto L_08AA1640;
    case 351u: goto L_08AA164C;
    case 352u: goto L_08AA1658;
    case 353u: goto L_08AA1664;
    case 354u: goto L_08AA1674;
    case 355u: goto L_08AA1680;
    case 356u: goto L_08AA1698;
    case 357u: goto L_08AA16A0;
    case 358u: goto L_08AA16A8;
    case 359u: goto L_08AA16CC;
    case 360u: goto L_08AA16D8;
    case 361u: goto L_08AA16E4;
    case 362u: goto L_08AA16F0;
    case 363u: goto L_08AA16FC;
    case 364u: goto L_08AA170C;
    case 365u: goto L_08AA172C;
    case 366u: goto L_08AA175C;
    case 367u: goto L_08AA1780;
    case 368u: goto L_08AA1788;
    case 369u: goto L_08AA1794;
    case 370u: goto L_08AA179C;
    case 371u: goto L_08AA17A4;
    case 372u: goto L_08AA17B4;
    case 373u: goto L_08AA17C8;
    case 374u: goto L_08AA17E8;
    case 375u: goto L_08AA17F4;
    case 376u: goto L_08AA17FC;
    case 377u: goto L_08AA1804;
    case 378u: goto L_08AA180C;
    case 379u: goto L_08AA1810;
    case 380u: goto L_08AA1818;
    case 381u: goto L_08AA1824;
    case 382u: goto L_08AA1828;
    case 383u: goto L_08AA183C;
    case 384u: goto L_08AA1844;
    case 385u: goto L_08AA187C;
    case 386u: goto L_08AA18A8;
    case 387u: goto L_08AA18D0;
    case 388u: goto L_08AA18E0;
    case 389u: goto L_08AA18E8;
    case 390u: goto L_08AA18F4;
    case 391u: goto L_08AA18FC;
    case 392u: goto L_08AA1904;
    case 393u: goto L_08AA1918;
    case 394u: goto L_08AA1920;
    case 395u: goto L_08AA1928;
    case 396u: goto L_08AA193C;
    case 397u: goto L_08AA195C;
    case 398u: goto L_08AA1968;
    case 399u: goto L_08AA1978;
    case 400u: goto L_08AA1984;
    case 401u: goto L_08AA198C;
    case 402u: goto L_08AA1994;
    case 403u: goto L_08AA199C;
    case 404u: goto L_08AA19B0;
    case 405u: goto L_08AA19D0;
    case 406u: goto L_08AA19D4;
    case 407u: goto L_08AA19E8;
    case 408u: goto L_08AA1A14;
    case 409u: goto L_08AA1A28;
    case 410u: goto L_08AA1A30;
    case 411u: goto L_08AA1A3C;
    case 412u: goto L_08AA1A44;
    case 413u: goto L_08AA1A4C;
    case 414u: goto L_08AA1A64;
    case 415u: goto L_08AA1A6C;
    case 416u: goto L_08AA1A78;
    case 417u: goto L_08AA1A80;
    case 418u: goto L_08AA1A88;
    case 419u: goto L_08AA1A90;
    case 420u: goto L_08AA1AA4;
    case 421u: goto L_08AA1AC4;
    case 422u: goto L_08AA1AD4;
    case 423u: goto L_08AA1AE0;
    case 424u: goto L_08AA1AE8;
    case 425u: goto L_08AA1AFC;
    case 426u: goto L_08AA1B28;
    case 427u: goto L_08AA1B2C;
    case 428u: goto L_08AA1B30;
    case 429u: goto L_08AA1B48;
    case 430u: goto L_08AA1B64;
    case 431u: goto L_08AA1B70;
    case 432u: goto L_08AA1B90;
    case 433u: goto L_08AA1B94;
    case 434u: goto L_08AA1BA4;
    case 435u: goto L_08AA1BB4;
    case 436u: goto L_08AA1BC4;
    case 437u: goto L_08AA1BD4;
    case 438u: goto L_08AA1BE0;
    case 439u: goto L_08AA1BE4;
    case 440u: goto L_08AA1C10;
    case 441u: goto L_08AA1C14;
    case 442u: goto L_08AA1C30;
    case 443u: goto L_08AA1C40;
    case 444u: goto L_08AA1C50;
    case 445u: goto L_08AA1C60;
    case 446u: goto L_08AA1C70;
    case 447u: goto L_08AA1C74;
    case 448u: goto L_08AA1CA0;
    case 449u: goto L_08AA1CA4;
    case 450u: goto L_08AA1CC0;
    case 451u: goto L_08AA1CC8;
    case 452u: goto L_08AA1CF0;
    case 453u: goto L_08AA1CFC;
    case 454u: goto L_08AA1D08;
    case 455u: goto L_08AA1D10;
    case 456u: goto L_08AA1D2C;
    case 457u: goto L_08AA1D64;
    case 458u: goto L_08AA1D8C;
    case 459u: goto L_08AA1DA8;
    case 460u: goto L_08AA1DE0;
    case 461u: goto L_08AA1E08;
    case 462u: goto L_08AA1E28;
    case 463u: goto L_08AA1E60;
    case 464u: goto L_08AA1E9C;
    case 465u: goto L_08AA1EA4;
    case 466u: goto L_08AA1EB0;
    case 467u: goto L_08AA1EC4;
    case 468u: goto L_08AA1ED4;
    case 469u: goto L_08AA1EDC;
    case 470u: goto L_08AA1EEC;
    case 471u: goto L_08AA1EFC;
    case 472u: goto L_08AA1F0C;
    case 473u: goto L_08AA1F1C;
    case 474u: goto L_08AA1F2C;
    case 475u: goto L_08AA1F3C;
    case 476u: goto L_08AA1F60;
    case 477u: goto L_08AA1F98;
    case 478u: goto L_08AA1FC4;
    case 479u: goto L_08AA1FC8;
    case 480u: goto L_08AA1FE0;
    case 481u: goto L_08AA2010;
    case 482u: goto L_08AA201C;
    case 483u: goto L_08AA2024;
    case 484u: goto L_08AA203C;
    case 485u: goto L_08AA2074;
    case 486u: goto L_08AA2098;
    case 487u: goto L_08AA20B4;
    case 488u: goto L_08AA20EC;
    case 489u: goto L_08AA2110;
    case 490u: goto L_08AA2120;
    case 491u: goto L_08AA2124;
    case 492u: goto L_08AA2130;
    case 493u: goto L_08AA2140;
    case 494u: goto L_08AA2150;
    case 495u: goto L_08AA2160;
    case 496u: goto L_08AA2170;
    case 497u: goto L_08AA2174;
    case 498u: goto L_08AA2178;
    case 499u: goto L_08AA2180;
    case 500u: goto L_08AA2190;
    case 501u: goto L_08AA21A0;
    case 502u: goto L_08AA21B0;
    case 503u: goto L_08AA21C0;
    case 504u: goto L_08AA21C4;
    case 505u: goto L_08AA21C8;
    case 506u: goto L_08AA21D0;
    case 507u: goto L_08AA21D8;
    case 508u: goto L_08AA21EC;
    case 509u: goto L_08AA2210;
    case 510u: goto L_08AA2248;
    case 511u: goto L_08AA227C;
    case 512u: goto L_08AA2280;
    case 513u: goto L_08AA22BC;
    case 514u: goto L_08AA22DC;
    case 515u: goto L_08AA22F0;
    case 516u: goto L_08AA2300;
    case 517u: goto L_08AA230C;
    case 518u: goto L_08AA2328;
    case 519u: goto L_08AA2340;
    case 520u: goto L_08AA2350;
    case 521u: goto L_08AA235C;
    case 522u: goto L_08AA2364;
    case 523u: goto L_08AA236C;
    case 524u: goto L_08AA2374;
    case 525u: goto L_08AA237C;
    case 526u: goto L_08AA2388;
    case 527u: goto L_08AA2390;
    case 528u: goto L_08AA239C;
    case 529u: goto L_08AA23A4;
    case 530u: goto L_08AA23AC;
    case 531u: goto L_08AA23B4;
    case 532u: goto L_08AA23C0;
    case 533u: goto L_08AA23C8;
    case 534u: goto L_08AA23D0;
    case 535u: goto L_08AA23D8;
    case 536u: goto L_08AA23E4;
    case 537u: goto L_08AA23EC;
    case 538u: goto L_08AA23F0;
    case 539u: goto L_08AA23F8;
    case 540u: goto L_08AA240C;
    case 541u: goto L_08AA2420;
    case 542u: goto L_08AA2434;
    case 543u: goto L_08AA2448;
    case 544u: goto L_08AA2464;
    case 545u: goto L_08AA2470;
    case 546u: goto L_08AA2478;
    case 547u: goto L_08AA2480;
    case 548u: goto L_08AA2498;
    case 549u: goto L_08AA24AC;
    case 550u: goto L_08AA24B8;
    case 551u: goto L_08AA24BC;
    case 552u: goto L_08AA24C4;
    case 553u: goto L_08AA2510;
    case 554u: goto L_08AA2524;
    case 555u: goto L_08AA2534;
    case 556u: goto L_08AA253C;
    case 557u: goto L_08AA2560;
    case 558u: goto L_08AA256C;
    case 559u: goto L_08AA2580;
    case 560u: goto L_08AA258C;
    case 561u: goto L_08AA259C;
    case 562u: goto L_08AA25A0;
    case 563u: goto L_08AA25B4;
    case 564u: goto L_08AA25D8;
    case 565u: goto L_08AA25E0;
    case 566u: goto L_08AA25F8;
    case 567u: goto L_08AA2608;
    case 568u: goto L_08AA2610;
    case 569u: goto L_08AA261C;
    case 570u: goto L_08AA262C;
    case 571u: goto L_08AA2634;
    case 572u: goto L_08AA2640;
    case 573u: goto L_08AA2650;
    case 574u: goto L_08AA2658;
    case 575u: goto L_08AA2664;
    case 576u: goto L_08AA2674;
    case 577u: goto L_08AA267C;
    case 578u: goto L_08AA2688;
    case 579u: goto L_08AA2698;
    case 580u: goto L_08AA26A0;
    case 581u: goto L_08AA26B0;
    case 582u: goto L_08AA26BC;
    case 583u: goto L_08AA26E0;
    case 584u: goto L_08AA26FC;
    case 585u: goto L_08AA2708;
    case 586u: goto L_08AA2710;
    case 587u: goto L_08AA2718;
    case 588u: goto L_08AA2728;
    case 589u: goto L_08AA2730;
    case 590u: goto L_08AA2738;
    case 591u: goto L_08AA2740;
    case 592u: goto L_08AA2750;
    case 593u: goto L_08AA2754;
    case 594u: goto L_08AA275C;
    case 595u: goto L_08AA2768;
    case 596u: goto L_08AA2778;
    case 597u: goto L_08AA2780;
    case 598u: goto L_08AA2790;
    case 599u: goto L_08AA2798;
    case 600u: goto L_08AA27A8;
    case 601u: goto L_08AA27B0;
    case 602u: goto L_08AA27C0;
    case 603u: goto L_08AA27C8;
    case 604u: goto L_08AA27D4;
    case 605u: goto L_08AA27DC;
    case 606u: goto L_08AA27E8;
    case 607u: goto L_08AA27F0;
    case 608u: goto L_08AA27F8;
    case 609u: goto L_08AA2804;
    case 610u: goto L_08AA280C;
    case 611u: goto L_08AA281C;
    case 612u: goto L_08AA2824;
    case 613u: goto L_08AA2830;
    case 614u: goto L_08AA2838;
    case 615u: goto L_08AA2844;
    case 616u: goto L_08AA2860;
    case 617u: goto L_08AA2884;
    case 618u: goto L_08AA28A0;
    case 619u: goto L_08AA28B0;
    case 620u: goto L_08AA28B8;
    case 621u: goto L_08AA28C8;
    case 622u: goto L_08AA28D0;
    case 623u: goto L_08AA28E0;
    case 624u: goto L_08AA28E8;
    case 625u: goto L_08AA28F8;
    case 626u: goto L_08AA2900;
    case 627u: goto L_08AA290C;
    case 628u: goto L_08AA2914;
    case 629u: goto L_08AA291C;
    case 630u: goto L_08AA292C;
    case 631u: goto L_08AA2934;
    case 632u: goto L_08AA293C;
    case 633u: goto L_08AA2944;
    case 634u: goto L_08AA2954;
    case 635u: goto L_08AA2958;
    case 636u: goto L_08AA2960;
    case 637u: goto L_08AA296C;
    case 638u: goto L_08AA297C;
    case 639u: goto L_08AA2984;
    case 640u: goto L_08AA2994;
    case 641u: goto L_08AA299C;
    case 642u: goto L_08AA29AC;
    case 643u: goto L_08AA29B4;
    case 644u: goto L_08AA29C4;
    case 645u: goto L_08AA29CC;
    case 646u: goto L_08AA29D8;
    case 647u: goto L_08AA29E0;
    case 648u: goto L_08AA29EC;
    case 649u: goto L_08AA29F4;
    case 650u: goto L_08AA29FC;
    case 651u: goto L_08AA2A08;
    case 652u: goto L_08AA2A10;
    case 653u: goto L_08AA2A20;
    case 654u: goto L_08AA2A28;
    case 655u: goto L_08AA2A34;
    case 656u: goto L_08AA2A3C;
    case 657u: goto L_08AA2A48;
    case 658u: goto L_08AA2A64;
    case 659u: goto L_08AA2A88;
    case 660u: goto L_08AA2A98;
    case 661u: goto L_08AA2AA0;
    case 662u: goto L_08AA2AA8;
    case 663u: goto L_08AA2AB8;
    case 664u: goto L_08AA2AC0;
    case 665u: goto L_08AA2AC8;
    case 666u: goto L_08AA2AD0;
    case 667u: goto L_08AA2AE0;
    case 668u: goto L_08AA2AE4;
    case 669u: goto L_08AA2AEC;
    case 670u: goto L_08AA2AFC;
    case 671u: goto L_08AA2B04;
    case 672u: goto L_08AA2B14;
    case 673u: goto L_08AA2B1C;
    case 674u: goto L_08AA2B2C;
    case 675u: goto L_08AA2B34;
    case 676u: goto L_08AA2B40;
    case 677u: goto L_08AA2B48;
    case 678u: goto L_08AA2B58;
    case 679u: goto L_08AA2B60;
    case 680u: goto L_08AA2B6C;
    case 681u: goto L_08AA2B74;
    case 682u: goto L_08AA2B80;
    case 683u: goto L_08AA2B88;
    case 684u: goto L_08AA2B90;
    case 685u: goto L_08AA2B9C;
    case 686u: goto L_08AA2BA4;
    case 687u: goto L_08AA2BB4;
    case 688u: goto L_08AA2BBC;
    case 689u: goto L_08AA2BC8;
    case 690u: goto L_08AA2BD4;
    case 691u: goto L_08AA2BF0;
    case 692u: goto L_08AA2C0C;
    case 693u: goto L_08AA2C28;
    case 694u: goto L_08AA2C34;
    case 695u: goto L_08AA2C3C;
    case 696u: goto L_08AA2C48;
    case 697u: goto L_08AA2C58;
    case 698u: goto L_08AA2C60;
    case 699u: goto L_08AA2C70;
    case 700u: goto L_08AA2C78;
    case 701u: goto L_08AA2C84;
    case 702u: goto L_08AA2C8C;
    case 703u: goto L_08AA2C98;
    case 704u: goto L_08AA2CA8;
    case 705u: goto L_08AA2CB0;
    case 706u: goto L_08AA2CC0;
    case 707u: goto L_08AA2CC8;
    case 708u: goto L_08AA2CD4;
    case 709u: goto L_08AA2CDC;
    case 710u: goto L_08AA2CEC;
    case 711u: goto L_08AA2CF4;
    case 712u: goto L_08AA2D00;
    case 713u: goto L_08AA2D0C;
    case 714u: goto L_08AA2D24;
    case 715u: goto L_08AA2D40;
    case 716u: goto L_08AA2D5C;
    case 717u: goto L_08AA2D6C;
    case 718u: goto L_08AA2D74;
    case 719u: goto L_08AA2D84;
    case 720u: goto L_08AA2D8C;
    case 721u: goto L_08AA2D98;
    case 722u: goto L_08AA2DA0;
    case 723u: goto L_08AA2DA8;
    case 724u: goto L_08AA2DB8;
    case 725u: goto L_08AA2DC0;
    case 726u: goto L_08AA2DC8;
    case 727u: goto L_08AA2DD0;
    case 728u: goto L_08AA2DE0;
    case 729u: goto L_08AA2DE4;
    case 730u: goto L_08AA2DEC;
    case 731u: goto L_08AA2DF8;
    case 732u: goto L_08AA2E08;
    case 733u: goto L_08AA2E10;
    case 734u: goto L_08AA2E20;
    case 735u: goto L_08AA2E28;
    case 736u: goto L_08AA2E34;
    case 737u: goto L_08AA2E3C;
    case 738u: goto L_08AA2E48;
    case 739u: goto L_08AA2E58;
    case 740u: goto L_08AA2E60;
    case 741u: goto L_08AA2E70;
    case 742u: goto L_08AA2E78;
    case 743u: goto L_08AA2E84;
    case 744u: goto L_08AA2E8C;
    case 745u: goto L_08AA2E9C;
    case 746u: goto L_08AA2EA4;
    case 747u: goto L_08AA2EB0;
    case 748u: goto L_08AA2EBC;
    case 749u: goto L_08AA2ED4;
    case 750u: goto L_08AA2EF4;
    case 751u: goto L_08AA2F00;
    case 752u: goto L_08AA2F08;
    case 753u: goto L_08AA2F18;
    case 754u: goto L_08AA2F20;
    case 755u: goto L_08AA2F28;
    case 756u: goto L_08AA2F34;
    case 757u: goto L_08AA2F3C;
    case 758u: goto L_08AA2F48;
    case 759u: goto L_08AA2F60;
    case 760u: goto L_08AA2F7C;
    case 761u: goto L_08AA2F8C;
    case 762u: goto L_08AA2F9C;
    case 763u: goto L_08AA2FA0;
    case 764u: goto L_08AA2FB4;
    case 765u: goto L_08AA2FE0;
    case 766u: goto L_08AA2FEC;
    case 767u: goto L_08AA2FF4;
    case 768u: goto L_08AA301C;
    case 769u: goto L_08AA3024;
    case 770u: goto L_08AA302C;
    case 771u: goto L_08AA3030;
    case 772u: goto L_08AA305C;
    case 773u: goto L_08AA3060;
    case 774u: goto L_08AA3070;
    case 775u: goto L_08AA309C;
    case 776u: goto L_08AA30A8;
    case 777u: goto L_08AA30B0;
    case 778u: goto L_08AA30D8;
    case 779u: goto L_08AA30E0;
    case 780u: goto L_08AA30E8;
    case 781u: goto L_08AA30EC;
    case 782u: goto L_08AA3118;
    case 783u: goto L_08AA311C;
    case 784u: goto L_08AA312C;
    case 785u: goto L_08AA3158;
    case 786u: goto L_08AA3164;
    case 787u: goto L_08AA316C;
    case 788u: goto L_08AA3194;
    case 789u: goto L_08AA319C;
    case 790u: goto L_08AA31A4;
    case 791u: goto L_08AA31A8;
    case 792u: goto L_08AA31D4;
    case 793u: goto L_08AA31D8;
    case 794u: goto L_08AA31E8;
    case 795u: goto L_08AA3214;
    case 796u: goto L_08AA3220;
    case 797u: goto L_08AA3228;
    case 798u: goto L_08AA3250;
    case 799u: goto L_08AA3258;
    case 800u: goto L_08AA3260;
    case 801u: goto L_08AA3264;
    case 802u: goto L_08AA3290;
    case 803u: goto L_08AA3294;
    case 804u: goto L_08AA32A4;
    case 805u: goto L_08AA32F4;
    case 806u: goto L_08AA3304;
    case 807u: goto L_08AA3310;
    case 808u: goto L_08AA3320;
    case 809u: goto L_08AA3338;
    case 810u: goto L_08AA3348;
    case 811u: goto L_08AA3354;
    case 812u: goto L_08AA3364;
    case 813u: goto L_08AA337C;
    case 814u: goto L_08AA3390;
    case 815u: goto L_08AA33A8;
    case 816u: goto L_08AA33BC;
    case 817u: goto L_08AA33CC;
    case 818u: goto L_08AA33E0;
    case 819u: goto L_08AA33F4;
    case 820u: goto L_08AA3404;
    case 821u: goto L_08AA3414;
    case 822u: goto L_08AA3430;
    case 823u: goto L_08AA3448;
    case 824u: goto L_08AA3458;
    case 825u: goto L_08AA3460;
    case 826u: goto L_08AA3484;
    case 827u: goto L_08AA3490;
    case 828u: goto L_08AA34A4;
    case 829u: goto L_08AA34B0;
    case 830u: goto L_08AA34C0;
    case 831u: goto L_08AA34D0;
    case 832u: goto L_08AA34E8;
    case 833u: goto L_08AA34F4;
    case 834u: goto L_08AA3500;
    case 835u: goto L_08AA350C;
    case 836u: goto L_08AA3518;
    case 837u: goto L_08AA3538;
    case 838u: goto L_08AA3548;
    case 839u: goto L_08AA3558;
    case 840u: goto L_08AA3568;
    case 841u: goto L_08AA3578;
    case 842u: goto L_08AA3588;
    case 843u: goto L_08AA3598;
    case 844u: goto L_08AA359C;
    case 845u: goto L_08AA35B0;
    case 846u: goto L_08AA35DC;
    case 847u: goto L_08AA35F8;
    case 848u: goto L_08AA3600;
    case 849u: goto L_08AA3618;
    case 850u: goto L_08AA3628;
    case 851u: goto L_08AA3674;
    case 852u: goto L_08AA3680;
    case 853u: goto L_08AA36A0;
    case 854u: goto L_08AA36B0;
    case 855u: goto L_08AA36C0;
    case 856u: goto L_08AA36C8;
    case 857u: goto L_08AA36DC;
    case 858u: goto L_08AA36E8;
    case 859u: goto L_08AA36F4;
    case 860u: goto L_08AA3704;
    case 861u: goto L_08AA371C;
    case 862u: goto L_08AA3724;
    case 863u: goto L_08AA373C;
    case 864u: goto L_08AA375C;
    case 865u: goto L_08AA37B8;
    case 866u: goto L_08AA37C4;
    case 867u: goto L_08AA37D8;
    case 868u: goto L_08AA3814;
    case 869u: goto L_08AA3828;
    case 870u: goto L_08AA3844;
    case 871u: goto L_08AA3858;
    case 872u: goto L_08AA3878;
    case 873u: goto L_08AA388C;
    case 874u: goto L_08AA3898;
    case 875u: goto L_08AA38BC;
    case 876u: goto L_08AA38C4;
    case 877u: goto L_08AA38DC;
    case 878u: goto L_08AA38E4;
    case 879u: goto L_08AA38EC;
    case 880u: goto L_08AA38F4;
    case 881u: goto L_08AA3900;
    case 882u: goto L_08AA3950;
    case 883u: goto L_08AA3974;
    case 884u: goto L_08AA3994;
    case 885u: goto L_08AA39DC;
    case 886u: goto L_08AA39EC;
    case 887u: goto L_08AA3A04;
    case 888u: goto L_08AA3A20;
    case 889u: goto L_08AA3A44;
    case 890u: goto L_08AA3A78;
    case 891u: goto L_08AA3A9C;
    case 892u: goto L_08AA3AC0;
    case 893u: goto L_08AA3ACC;
    case 894u: goto L_08AA3AD4;
    case 895u: goto L_08AA3ADC;
    case 896u: goto L_08AA3AE4;
    case 897u: goto L_08AA3AEC;
    case 898u: goto L_08AA3AF4;
    case 899u: goto L_08AA3B04;
    case 900u: goto L_08AA3B14;
    case 901u: goto L_08AA3B1C;
    case 902u: goto L_08AA3B24;
    case 903u: goto L_08AA3B38;
    case 904u: goto L_08AA3B40;
    case 905u: goto L_08AA3B50;
    case 906u: goto L_08AA3B58;
    case 907u: goto L_08AA3B60;
    case 908u: goto L_08AA3B74;
    case 909u: goto L_08AA3B90;
    case 910u: goto L_08AA3BAC;
    case 911u: goto L_08AA3BB4;
    case 912u: goto L_08AA3BBC;
    case 913u: goto L_08AA3BD0;
    case 914u: goto L_08AA3BE4;
    case 915u: goto L_08AA3C04;
    case 916u: goto L_08AA3C14;
    case 917u: goto L_08AA3C1C;
    case 918u: goto L_08AA3C28;
    case 919u: goto L_08AA3C44;
    case 920u: goto L_08AA3C50;
    case 921u: goto L_08AA3C5C;
    case 922u: goto L_08AA3C64;
    case 923u: goto L_08AA3C7C;
    case 924u: goto L_08AA3CA0;
    case 925u: goto L_08AA3CA4;
    case 926u: goto L_08AA3CC8;
    case 927u: goto L_08AA3CD0;
    case 928u: goto L_08AA3CE0;
    case 929u: goto L_08AA3CE8;
    case 930u: goto L_08AA3CEC;
    case 931u: goto L_08AA3CF4;
    case 932u: goto L_08AA3D08;
    case 933u: goto L_08AA3D1C;
    case 934u: goto L_08AA3D24;
    case 935u: goto L_08AA3D40;
    case 936u: goto L_08AA3D54;
    case 937u: goto L_08AA3D68;
    case 938u: goto L_08AA3D70;
    case 939u: goto L_08AA3D74;
    case 940u: goto L_08AA3D98;
    case 941u: goto L_08AA3DB4;
    case 942u: goto L_08AA3DC8;
    case 943u: goto L_08AA3DD0;
    case 944u: goto L_08AA3DDC;
    case 945u: goto L_08AA3DE8;
    case 946u: goto L_08AA3DFC;
    case 947u: goto L_08AA3E04;
    case 948u: goto L_08AA3E08;
    case 949u: goto L_08AA3E10;
    case 950u: goto L_08AA3E48;
    case 951u: goto L_08AA3E58;
    case 952u: goto L_08AA3E80;
    case 953u: goto L_08AA3E90;
    case 954u: goto L_08AA3EA0;
    case 955u: goto L_08AA3EA8;
    case 956u: goto L_08AA3EAC;
    case 957u: goto L_08AA3EB4;
    case 958u: goto L_08AA3EC4;
    case 959u: goto L_08AA3ECC;
    case 960u: goto L_08AA3ED0;
    case 961u: goto L_08AA3EE8;
    case 962u: goto L_08AA3EF4;
    case 963u: goto L_08AA3F00;
    case 964u: goto L_08AA3F08;
    case 965u: goto L_08AA3F48;
    case 966u: goto L_08AA3F4C;
    case 967u: goto L_08AA3F78;
    case 968u: goto L_08AA3F80;
    case 969u: goto L_08AA3F8C;
    case 970u: goto L_08AA3F98;
    case 971u: goto L_08AA3FA0;
    case 972u: goto L_08AA3FD8;
    case 973u: goto L_08AA3FFC;
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
L_08AA0000:
    aot_gpr_4 = (aot_gpr_4 & 192u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08AA002C;
      }
      goto L_08AA000C;
    }
L_08AA000C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA0014;
    }
L_08AA0014:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA001C;
    }
L_08AA001C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA0024;
    }
L_08AA0024:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA002C;
    }
L_08AA002C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AA0030;
L_08AA0030:
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
L_08AA004C:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_4 << 3u);
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 15u);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA012C;
      }
      goto L_08AA0088;
    }
L_08AA0088:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
    goto L_08AA008C;
L_08AA008C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_4);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(30040)));
    aot_gpr_2 = (ctx.gpr[11] + ctx.gpr[11]);
    aot_gpr_2 = (ctx.gpr[10] + aot_gpr_2);
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_2 = (aot_gpr_2 & 16383u);
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[3];
      if (branch_taken) {
          goto L_08AA0114;
      }
      goto L_08AA00BC;
    }
L_08AA00BC:
    aot_gpr_2 = (ctx.gpr[11] + ctx.gpr[11]);
    aot_gpr_2 = (ctx.gpr[10] + aot_gpr_2);
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_2 & 32768u);
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 & 255u);
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA00F0;
      }
      goto L_08AA00DC;
    }
L_08AA00DC:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(30040)));
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_4);
    goto L_08AA00F0;
L_08AA00F0:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 16384u);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08AA0114;
      }
      goto L_08AA0110;
    }
L_08AA0110:
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08AA0114;
L_08AA0114:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] & 15u);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
        goto L_08AA008C;
    }
    goto L_08AA012C;
L_08AA012C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0134:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AA0150u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 580u, 0x08A9FAA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0150u) goto L_08AA0150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0150:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA0160u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 653u, 0x08A9FF94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0160u) goto L_08AA0160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA018C;
      }
      goto L_08AA016C;
    }
L_08AA016C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AA018C;
      }
      goto L_08AA0178;
    }
L_08AA0178:
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0184u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08AA004C;
L_08AA0184:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0198;
      }
      goto L_08AA018C;
    }
L_08AA018C:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_2 = (0u | 0u);
    goto L_08AA0198;
L_08AA0198:
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
L_08AA01AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AA01BCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10184));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0206_entry, 206u, 557u, 0x08B3E8BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA01BCu) goto L_08AA01BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA01BC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA01C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AA021C;
      }
      goto L_08AA01F4;
    }
L_08AA01F4:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08AA0200u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0200u) goto L_08AA0200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0200:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AA0218;
      }
      goto L_08AA020C;
    }
L_08AA020C:
    aot_gpr_31 = (0x08AA0214u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0214u) goto L_08AA0214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0214:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AA0218;
L_08AA0218:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AA021C;
L_08AA021C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0234u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0234u) goto L_08AA0234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0234:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AA0248;
    }
    goto L_08AA0240;
L_08AA0240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA024C;
      }
      goto L_08AA0248;
    }
L_08AA0248:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08AA024C;
L_08AA024C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AA0258u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0258u) goto L_08AA0258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0258:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 8u);
    aot_gpr_31 = (0x08AA0278u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0278u) goto L_08AA0278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[20] + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
    }
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr_2 = (ctx.gpr[8] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA02B4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 405u, 0x08A35A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA02B4u) goto L_08AA02B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA02B4:
    aot_gpr_2 = (0u | 0u);
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA02D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA02ECu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 404u, 0x08A35A58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA02ECu) goto L_08AA02EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA02EC:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29704), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0304u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0304u) goto L_08AA0304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0304:
    aot_gpr_2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0318:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AA036C;
      }
      goto L_08AA0344;
    }
L_08AA0344:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08AA0350u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0350u) goto L_08AA0350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0350:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AA0368;
      }
      goto L_08AA035C;
    }
L_08AA035C:
    aot_gpr_31 = (0x08AA0364u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0364u) goto L_08AA0364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0364:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AA0368;
L_08AA0368:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AA036C;
L_08AA036C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0384u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0384u) goto L_08AA0384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0384:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AA0398;
    }
    goto L_08AA0390;
L_08AA0390:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA039C;
      }
      goto L_08AA0398;
    }
L_08AA0398:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08AA039C;
L_08AA039C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AA03A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA03A8u) goto L_08AA03A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA03A8:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 8u);
    aot_gpr_31 = (0x08AA03C8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA03C8u) goto L_08AA03C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA03C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[20] + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
    }
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr_2 = (ctx.gpr[8] & 255u);
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA0408u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 405u, 0x08A35A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0408u) goto L_08AA0408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0408:
    aot_gpr_2 = (0u | 0u);
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA042C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA044Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA044Cu) goto L_08AA044C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA044C:
    aot_gpr_31 = (0x08AA0454u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 229u, 0x08991098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0454u) goto L_08AA0454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0454:
    aot_gpr_2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0468:
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0484:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AA04B0u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA04B0u) goto L_08AA04B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA04B0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA04BCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA04BCu) goto L_08AA04BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA04BC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA04D0u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA04D0u) goto L_08AA04D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA04D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA0548;
      }
      goto L_08AA04DC;
    }
L_08AA04DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA04E8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA04E8u) goto L_08AA04E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA04E8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA04F8u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA04F8u) goto L_08AA04F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA04F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0508u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0508u) goto L_08AA0508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0508:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA0518u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0518u) goto L_08AA0518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0518:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0524u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0524u) goto L_08AA0524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0524:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA0550;
      }
      goto L_08AA052C;
    }
L_08AA052C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0538u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0538u) goto L_08AA0538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0538:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA04DC;
      }
      goto L_08AA0548;
    }
L_08AA0548:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0554;
      }
      goto L_08AA0550;
    }
L_08AA0550:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    goto L_08AA0554;
L_08AA0554:
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
L_08AA0570:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA0594u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0594u) goto L_08AA0594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0594:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA05A4u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05A4u) goto L_08AA05A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05A4:
    aot_gpr_31 = (0x08AA05ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05ACu) goto L_08AA05AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA05B8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 540u, 0x088078B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05B8u) goto L_08AA05B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA0624;
      }
      goto L_08AA05C0;
    }
L_08AA05C0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA05CCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05CCu) goto L_08AA05CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA05D8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05D8u) goto L_08AA05D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA05E4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05E4u) goto L_08AA05E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05E4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA05F4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA05F4u) goto L_08AA05F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA05F4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0600u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0600u) goto L_08AA0600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0600:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA061C;
      }
      goto L_08AA0608;
    }
L_08AA0608:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0614u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0614u) goto L_08AA0614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0614:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA05AC;
      }
      goto L_08AA061C;
    }
L_08AA061C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA0628;
      }
      goto L_08AA0624;
    }
L_08AA0624:
    aot_gpr_2 = (0u | 0u);
    goto L_08AA0628;
L_08AA0628:
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
L_08AA063C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA0660u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0660u) goto L_08AA0660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0660:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA066Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA066Cu) goto L_08AA066C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA066C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA067Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA067Cu) goto L_08AA067C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA067C:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
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
L_08AA0694:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA06B0u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA06B0u) goto L_08AA06B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA06B0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA06BCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA06BCu) goto L_08AA06BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA06BC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA06D0u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA06D0u) goto L_08AA06D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA06D0:
    aot_gpr_2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA06E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08AA0708u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0708u) goto L_08AA0708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0708:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA071Cu);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA071Cu) goto L_08AA071C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA071C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0728u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0728u) goto L_08AA0728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0728:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_4;
    ctx.gpr[19] = (aot_gpr_2 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA073C;
      }
      goto L_08AA0734;
    }
L_08AA0734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA0764;
      }
      goto L_08AA073C;
    }
L_08AA073C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0748u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0748u) goto L_08AA0748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0748:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA0760;
      }
      goto L_08AA075C;
    }
L_08AA075C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AA0760;
L_08AA0760:
    ctx.gpr[20] = (0u | 3u);
    goto L_08AA0764;
L_08AA0764:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0774u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0774u) goto L_08AA0774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0774:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA07BC;
      }
      goto L_08AA0788;
    }
L_08AA0788:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0798u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0798u) goto L_08AA0798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0798:
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA07A8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA07A8u) goto L_08AA07A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA07A8:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA0788;
      }
      goto L_08AA07BC;
    }
L_08AA07BC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA07C8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA07C8u) goto L_08AA07C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA07C8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA07D8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA07D8u) goto L_08AA07D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA07D8:
    aot_gpr_2 = (0u | 0u);
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
L_08AA07FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08AA082Cu);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA082Cu) goto L_08AA082C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA082C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0838u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0838u) goto L_08AA0838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0838:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08AA0850u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0850u) goto L_08AA0850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0850:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AA0890;
      }
      goto L_08AA085C;
    }
L_08AA085C:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA086Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA086Cu) goto L_08AA086C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA086C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA087Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA087Cu) goto L_08AA087C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA087C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA0898;
      }
      goto L_08AA0888;
    }
L_08AA0888:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA08CC;
      }
      goto L_08AA0890;
    }
L_08AA0890:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA08E8;
      }
      goto L_08AA0898;
    }
L_08AA0898:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA08ACu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA08ACu) goto L_08AA08AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA08AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA08BCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA08BCu) goto L_08AA08BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA08BC:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA0898;
      }
      goto L_08AA08CC;
    }
L_08AA08CC:
    aot_gpr_31 = (0x08AA08D4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA08D4u) goto L_08AA08D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA08D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA08E4u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA08E4u) goto L_08AA08E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA08E4:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    goto L_08AA08E8;
L_08AA08E8:
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
L_08AA0908:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4628));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(1036));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_run_words); }
    aot_gpr_31 = (0x08AA093Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA093Cu) goto L_08AA093C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA093C:
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0954u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0954u) goto L_08AA0954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0954:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x08AA096Cu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA096Cu) goto L_08AA096C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA096C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08AA0988u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0988u) goto L_08AA0988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0988:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08AA09A0;
      }
      goto L_08AA0990;
    }
L_08AA0990:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA099Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA099Cu) goto L_08AA099C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA099C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    goto L_08AA09A0;
L_08AA09A0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA09ACu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA09ACu) goto L_08AA09AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA09AC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AA0A1C;
      }
      goto L_08AA09B8;
    }
L_08AA09B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(9680));
    goto L_08AA09BC;
L_08AA09BC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA09CCu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA09CCu) goto L_08AA09CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA09CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA09D8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA09D8u) goto L_08AA09D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA09D8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA09EC;
      }
      goto L_08AA09E0;
    }
L_08AA09E0:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA09ECu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA09ECu) goto L_08AA09EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA09EC:
    aot_gpr_31 = (0x08AA09F4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA09F4u) goto L_08AA09F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA09F4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08AA0A0C;
      }
      goto L_08AA09FC;
    }
L_08AA09FC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1036)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA0A0Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0A0Cu) goto L_08AA0A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0A0C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA09BC;
      }
      goto L_08AA0A1C;
    }
L_08AA0A1C:
    aot_gpr_31 = (0x08AA0A24u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0A24u) goto L_08AA0A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0A24:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0A4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA0A70u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0A70u) goto L_08AA0A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0A70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0A80u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0A80u) goto L_08AA0A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0A80:
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
L_08AA0A94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AA0ABCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0ABCu) goto L_08AA0ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0ABC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA0B1C;
      }
      goto L_08AA0AC4;
    }
L_08AA0AC4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA0AD0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0AD0u) goto L_08AA0AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0AD0:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AA0ADCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0ADCu) goto L_08AA0ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0ADC:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    aot_gpr_31 = (0x08AA0AE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0AE8u) goto L_08AA0AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0AE8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA0AF8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0AF8u) goto L_08AA0AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0AF8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA0B04u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0B04u) goto L_08AA0B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0B04:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA0B14u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0B14u) goto L_08AA0B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0B14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA0B2C;
      }
      goto L_08AA0B1C;
    }
L_08AA0B1C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0B2Cu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 353u, 0x08806A1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0B2Cu) goto L_08AA0B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0B2C:
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
L_08AA0B44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[23] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[22] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA0E78;
      }
      goto L_08AA0B84;
    }
L_08AA0B84:
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(9708));
    goto L_08AA0B8C;
L_08AA0B8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0B9Cu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0B9Cu) goto L_08AA0B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0B9C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0BACu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0BACu) goto L_08AA0BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0BAC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AA0BBCu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AA0A94;
L_08AA0BBC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AA0BDC;
      }
      goto L_08AA0BC4;
    }
L_08AA0BC4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08AA0BD4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08AA0A4C;
L_08AA0BD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0BE8;
      }
      goto L_08AA0BDC;
    }
L_08AA0BDC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0BE8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0BE8u) goto L_08AA0BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0BE8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AA0BFC;
      }
      goto L_08AA0BF4;
    }
L_08AA0BF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0E78;
      }
      goto L_08AA0BFC;
    }
L_08AA0BFC:
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[22]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    ctx.gpr[20] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0C20u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0C20u) goto L_08AA0C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0C20:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0C30u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0C30u) goto L_08AA0C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0C30:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_31 = (0x08AA0C40u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AA0A94;
L_08AA0C40:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA0C60;
      }
      goto L_08AA0C48;
    }
L_08AA0C48:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AA0C58u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    goto L_08AA0A4C;
L_08AA0C58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0CB8;
      }
      goto L_08AA0C60;
    }
L_08AA0C60:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0C6Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0C6Cu) goto L_08AA0C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0C6C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0C7Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0C7Cu) goto L_08AA0C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0C7C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AA0C8Cu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AA0A94;
L_08AA0C8C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA0CAC;
      }
      goto L_08AA0C94;
    }
L_08AA0C94:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AA0CA4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08AA0A4C;
L_08AA0CA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0CB8;
      }
      goto L_08AA0CAC;
    }
L_08AA0CAC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0CB8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0CB8u) goto L_08AA0CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0CB8:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AA0CCC;
      }
      goto L_08AA0CC4;
    }
L_08AA0CC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA0E78;
      }
      goto L_08AA0CCC;
    }
L_08AA0CCC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0CDCu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0CDCu) goto L_08AA0CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0CDC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0CE8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0CE8u) goto L_08AA0CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0CE8:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0CFCu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0CFCu) goto L_08AA0CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0CFC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AA0D0Cu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_08AA0A4C;
L_08AA0D0C:
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    goto L_08AA0D14;
L_08AA0D14:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_08AA0D18;
L_08AA0D18:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0D28u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0D28u) goto L_08AA0D28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0D28:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AA0D38u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AA0A94;
L_08AA0D38:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA0D6C;
      }
      goto L_08AA0D40;
    }
L_08AA0D40:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0D58;
      }
      goto L_08AA0D4C;
    }
L_08AA0D4C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0D58u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0D58u) goto L_08AA0D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0D58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0D64u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0D64u) goto L_08AA0D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AA0D18;
      }
      goto L_08AA0D6C;
    }
L_08AA0D6C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08AA0D70;
L_08AA0D70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0D80u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0D80u) goto L_08AA0D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0D80:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_31 = (0x08AA0D90u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AA0A94;
L_08AA0D90:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA0DC4;
      }
      goto L_08AA0D98;
    }
L_08AA0D98:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0DB0;
      }
      goto L_08AA0DA4;
    }
L_08AA0DA4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0DB0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0DB0u) goto L_08AA0DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0DB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0DBCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0DBCu) goto L_08AA0DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA0D70;
      }
      goto L_08AA0DC4;
    }
L_08AA0DC4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA0E34;
      }
      goto L_08AA0DD0;
    }
L_08AA0DD0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0DDCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0DDCu) goto L_08AA0DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0DDC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0DECu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0DECu) goto L_08AA0DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0DEC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0DFCu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0DFCu) goto L_08AA0DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0DFC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08AA0E0Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08AA0A4C;
L_08AA0E0C:
    aot_gpr_4 = (ctx.gpr[20] - ctx.gpr[23]);
    aot_gpr_5 = (ctx.gpr[22] - ctx.gpr[20]);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA0E50;
      }
      goto L_08AA0E20;
    }
L_08AA0E20:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA0E60;
      }
      goto L_08AA0E34;
    }
L_08AA0E34:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA0E44u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_08AA0A4C;
L_08AA0E44:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0D14;
      }
      goto L_08AA0E50;
    }
L_08AA0E50:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    goto L_08AA0E60;
L_08AA0E60:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA0E70u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08AA0B44;
L_08AA0E70:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08AA0B8C;
      }
      goto L_08AA0E78;
    }
L_08AA0E78:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
L_08AA0EA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA0EC8u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0EC8u) goto L_08AA0EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0EC8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0ED4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0ED4u) goto L_08AA0ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0ED4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4628));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0EE8u);
    aot_gpr_5 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 265u, 0x0889D420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0EE8u) goto L_08AA0EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0EE8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0EF4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0EF4u) goto L_08AA0EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0EF4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08AA0F0C;
      }
      goto L_08AA0EFC;
    }
L_08AA0EFC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA0F0Cu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0F0Cu) goto L_08AA0F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0F0C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA0F18u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0F18u) goto L_08AA0F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0F18:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AA0F28u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08AA0B44;
L_08AA0F28:
    aot_gpr_2 = (0u | 0u);
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
L_08AA0F40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4624));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AA0F5Cu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(9608));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA0F5Cu) goto L_08AA0F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA0F5C:
    aot_gpr_2 = (0u | 1u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0F6C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AA0FA4;
      }
      goto L_08AA0F7C;
    }
L_08AA0F7C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08AA0F94;
      }
      goto L_08AA0F88;
    }
L_08AA0F88:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AA0F9C;
      }
      goto L_08AA0F94;
    }
L_08AA0F94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0FA8;
      }
      goto L_08AA0F9C;
    }
L_08AA0F9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0FA8;
      }
      goto L_08AA0FA4;
    }
L_08AA0FA4:
    aot_gpr_2 = (0u | 1u);
    goto L_08AA0FA8;
L_08AA0FA8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA0FB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_4 & 61440u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA1070;
      }
      goto L_08AA1010;
    }
L_08AA1010:
    aot_gpr_31 = (0x08AA1018u);
    aot_gpr_4 = (ctx.gpr[20] >> 12u);
    goto L_08AA0F6C;
L_08AA1018:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA1070;
      }
      goto L_08AA1020;
    }
L_08AA1020:
    aot_gpr_4 = (0u | 16384u);
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AA103C;
      }
      goto L_08AA102C;
    }
L_08AA102C:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA103C;
    }
L_08AA103C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1108;
      }
      goto L_08AA1044;
    }
L_08AA1044:
    aot_gpr_5 = (ctx.gpr[16] >> (aot_gpr_4 & 31u));
    aot_gpr_5 = (aot_gpr_5 & 15u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AA1060;
      }
      goto L_08AA1054;
    }
L_08AA1054:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08AA1060;
L_08AA1060:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA1070;
    }
L_08AA1070:
    aot_gpr_4 = (61440u << 16u);
    aot_gpr_4 = (ctx.gpr[16] & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA10C8;
      }
      goto L_08AA1080;
    }
L_08AA1080:
    aot_gpr_31 = (0x08AA1088u);
    aot_gpr_4 = (aot_gpr_4 >> 28u);
    goto L_08AA0F6C;
L_08AA1088:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA10C8;
      }
      goto L_08AA1090;
    }
L_08AA1090:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 15u);
    aot_gpr_4 = (0u | 16u);
    goto L_08AA109C;
L_08AA109C:
    aot_gpr_5 = (ctx.gpr[16] >> (aot_gpr_4 & 31u));
    aot_gpr_5 = (aot_gpr_5 & 15u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AA10B8;
      }
      goto L_08AA10AC;
    }
L_08AA10AC:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08AA10B8;
L_08AA10B8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA109C;
      }
      goto L_08AA10C8;
    }
L_08AA10C8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 15u);
      if (branch_taken) {
          goto L_08AA1104;
      }
      goto L_08AA10D8;
    }
L_08AA10D8:
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08AA10DC;
L_08AA10DC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
      if (branch_taken) {
          goto L_08AA10F4;
      }
      goto L_08AA10E8;
    }
L_08AA10E8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AA10F4;
L_08AA10F4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA10DC;
      }
      goto L_08AA1104;
    }
L_08AA1104:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    goto L_08AA1108;
L_08AA1108:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
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
L_08AA1128:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1150;
      }
      goto L_08AA1130;
    }
L_08AA1130:
    aot_gpr_5 = (0u | 15u);
    goto L_08AA1134;
L_08AA1134:
    aot_gpr_6 = (aot_gpr_4 & 15u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1144;
      }
      goto L_08AA1140;
    }
L_08AA1140:
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    goto L_08AA1144;
L_08AA1144:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA1134;
      }
      goto L_08AA1150;
    }
L_08AA1150:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA1158:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AA11E4;
      }
      goto L_08AA1178;
    }
L_08AA1178:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA120C;
      }
      goto L_08AA1180;
    }
L_08AA1180:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA119C;
      }
      goto L_08AA1188;
    }
L_08AA1188:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA1214;
      }
      goto L_08AA1194;
    }
L_08AA1194:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA119C;
    }
L_08AA119C:
    aot_gpr_31 = (0x08AA11A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA1128;
L_08AA11A4:
    aot_gpr_31 = (0x08AA11ACu);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA11ACu) goto L_08AA11AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA11AC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AA11C0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA11C0u) goto L_08AA11C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA11C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (aot_gpr_4 & 31u)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & 15u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA11E4;
    }
L_08AA11E4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA125C;
      }
      goto L_08AA11F0;
    }
L_08AA11F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA120C;
      }
      goto L_08AA11F8;
    }
L_08AA11F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA12E4;
      }
      goto L_08AA1204;
    }
L_08AA1204:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA120C;
    }
L_08AA120C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA1214;
    }
L_08AA1214:
    aot_gpr_31 = (0x08AA121Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA1128;
L_08AA121C:
    aot_gpr_31 = (0x08AA1224u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1224u) goto L_08AA1224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1224:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AA1238u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1238u) goto L_08AA1238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1238:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (aot_gpr_4 & 31u)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & 15u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA125C;
    }
L_08AA125C:
    aot_gpr_31 = (0x08AA1264u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA1128;
L_08AA1264:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA12CC;
      }
      goto L_08AA1274;
    }
L_08AA1274:
    aot_gpr_31 = (0x08AA127Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA127Cu) goto L_08AA127C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA127C:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AA1290u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1290u) goto L_08AA1290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1290:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3196)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3200)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (aot_gpr_2 >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08AA12D4;
      }
      goto L_08AA12C4;
    }
L_08AA12C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA12CC;
    }
L_08AA12CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA12D4;
    }
L_08AA12D4:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (aot_gpr_4 & 31u)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & 15u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA12E4;
    }
L_08AA12E4:
    aot_gpr_31 = (0x08AA12ECu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA12ECu) goto L_08AA12EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA12EC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3188)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3192)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA1300u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1300u) goto L_08AA1300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1300:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_2 = (aot_gpr_4 | 0u);
    goto L_08AA1314;
L_08AA1314:
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
L_08AA132C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AA13A4;
      }
      goto L_08AA134C;
    }
L_08AA134C:
    aot_gpr_31 = (0x08AA1354u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1354u) goto L_08AA1354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1354:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08AA1360u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1360u) goto L_08AA1360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1360:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08AA136Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA136Cu) goto L_08AA136C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA136C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AA1378u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1378u) goto L_08AA1378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1378:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08AA1384u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1384u) goto L_08AA1384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1384:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AA1390u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1390u) goto L_08AA1390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1390:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08AA139Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA139Cu) goto L_08AA139C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA139C:
    aot_gpr_31 = (0x08AA13A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA13A4u) goto L_08AA13A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA13A4:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA13B8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA13C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA13E4u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA13E4u) goto L_08AA13E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA13E4:
    aot_gpr_4 = (2234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31336));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    goto L_08AA140C;
L_08AA140C:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA140C;
      }
      goto L_08AA1424;
    }
L_08AA1424:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(353), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA1430;
L_08AA1430:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(396), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA1430;
      }
      goto L_08AA1444;
    }
L_08AA1444:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA144C;
L_08AA144C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(516), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA144C;
      }
      goto L_08AA1460;
    }
L_08AA1460:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(620), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr_2 = (ctx.gpr[16] | 0u);
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
L_08AA14A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08AA14C4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA24C4;
L_08AA14C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(396));
    goto L_08AA14CC;
L_08AA14CC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA14D8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA14D8u) goto L_08AA14D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA14D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA14CC;
      }
      goto L_08AA14E8;
    }
L_08AA14E8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    goto L_08AA14F0;
L_08AA14F0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA14FCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA14FCu) goto L_08AA14FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA14FC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA14F0;
      }
      goto L_08AA150C;
    }
L_08AA150C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AA1564;
      }
      goto L_08AA1518;
    }
L_08AA1518:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(616));
    aot_gpr_31 = (0x08AA1524u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1524u) goto L_08AA1524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1524:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1560;
      }
      goto L_08AA1538;
    }
L_08AA1538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x08AA154Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 715u, 0x0887F4DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA154Cu) goto L_08AA154C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA154C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA1538;
      }
      goto L_08AA1560;
    }
L_08AA1560:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), 0u);
    goto L_08AA1564;
L_08AA1564:
    aot_gpr_31 = (0x08AA156Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 855u, 0x0885F484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA156Cu) goto L_08AA156C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA156C:
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
L_08AA1584:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08AA15B4u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 835u, 0x0885F354u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA15B4u) goto L_08AA15B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA15B4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA16FC;
      }
      goto L_08AA15C0;
    }
L_08AA15C0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_08AA16FC;
      }
      goto L_08AA15CC;
    }
L_08AA15CC:
    aot_gpr_31 = (0x08AA15D4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3184));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA15D4u) goto L_08AA15D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA15D4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA16FC;
      }
      goto L_08AA15DC;
    }
L_08AA15DC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AA15E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA18A8;
L_08AA15E8:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
      if (branch_taken) {
          goto L_08AA1664;
      }
      goto L_08AA15F4;
    }
L_08AA15F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA1664;
      }
      goto L_08AA160C;
    }
L_08AA160C:
    aot_gpr_31 = (0x08AA1614u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1614u) goto L_08AA1614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1614:
    aot_gpr_31 = (0x08AA161Cu);
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA161Cu) goto L_08AA161C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA161C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AA1640u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1640u) goto L_08AA1640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1640:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AA164Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA164Cu) goto L_08AA164C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA164C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AA1658u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 101u, 0x089D8830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1658u) goto L_08AA1658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1658:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AA1664u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 638u, 0x08972F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1664u) goto L_08AA1664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1664:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA1674u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08AA19E8;
L_08AA1674:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
      if (branch_taken) {
          goto L_08AA16F0;
      }
      goto L_08AA1680;
    }
L_08AA1680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA16F0;
      }
      goto L_08AA1698;
    }
L_08AA1698:
    aot_gpr_31 = (0x08AA16A0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA16A0u) goto L_08AA16A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA16A0:
    aot_gpr_31 = (0x08AA16A8u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA16A8u) goto L_08AA16A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA16A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AA16CCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA16CCu) goto L_08AA16CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA16CC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA16D8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA16D8u) goto L_08AA16D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA16D8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AA16E4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 101u, 0x089D8830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA16E4u) goto L_08AA16E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA16E4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AA16F0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 638u, 0x08972F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA16F0u) goto L_08AA16F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA16F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08AA170C;
      }
      goto L_08AA16FC;
    }
L_08AA16FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08AA170C;
L_08AA170C:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(390), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AA172Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 700u, 0x0887F39Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA172Cu) goto L_08AA172C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA172C:
    aot_gpr_2 = (ctx.gpr[21] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA175C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA1780u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1780u) goto L_08AA1780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1780:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA1794;
      }
      goto L_08AA1788;
    }
L_08AA1788:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(620), aot_gpr_4);
      if (branch_taken) {
          goto L_08AA17B4;
      }
      goto L_08AA1794;
    }
L_08AA1794:
    aot_gpr_31 = (0x08AA179Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA179Cu) goto L_08AA179C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA179C:
    aot_gpr_31 = (0x08AA17A4u);
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA17A4u) goto L_08AA17A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA17A4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(620), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA17B4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA17B4u) goto L_08AA17B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA17B4:
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
L_08AA17C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(620)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AA17FC;
      }
      goto L_08AA17E8;
    }
L_08AA17E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA1804;
      }
      goto L_08AA17F4;
    }
L_08AA17F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08AA1810;
      }
      goto L_08AA17FC;
    }
L_08AA17FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA1828;
      }
      goto L_08AA1804;
    }
L_08AA1804:
    aot_gpr_31 = (0x08AA180Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA180Cu) goto L_08AA180C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA180C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08AA1810;
L_08AA1810:
    aot_gpr_31 = (0x08AA1818u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(620)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1818u) goto L_08AA1818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(620)));
    aot_gpr_31 = (0x08AA1824u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1824u) goto L_08AA1824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1824:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(620), ctx.gpr[17]);
    goto L_08AA1828;
L_08AA1828:
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
L_08AA183C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(620)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA1844:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-3236)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AA187Cu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 886u, 0x0885F634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA187Cu) goto L_08AA187C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA187C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA18A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA18E8;
      }
      goto L_08AA18D0;
    }
L_08AA18D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA18F4;
      }
      goto L_08AA18E0;
    }
L_08AA18E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA1920;
      }
      goto L_08AA18E8;
    }
L_08AA18E8:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AA19D4;
      }
      goto L_08AA18F4;
    }
L_08AA18F4:
    aot_gpr_31 = (0x08AA18FCu);
    aot_gpr_4 = (aot_gpr_4 >> 12u);
    goto L_08AA0F6C;
L_08AA18FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA1920;
      }
      goto L_08AA1904;
    }
L_08AA1904:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (aot_gpr_5 & 61440u);
    aot_gpr_4 = (aot_gpr_4 >> 12u);
    aot_gpr_31 = (0x08AA1918u);
    aot_gpr_5 = (aot_gpr_5 & 4095u);
    goto L_08AA1158;
L_08AA1918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AA19D0;
      }
      goto L_08AA1920;
    }
L_08AA1920:
    aot_gpr_31 = (0x08AA1928u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1928u) goto L_08AA1928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1928:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3164)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3168)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA193Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA193Cu) goto L_08AA193C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA193C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA19D0;
      }
      goto L_08AA195C;
    }
L_08AA195C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA198C;
      }
      goto L_08AA1968;
    }
L_08AA1968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    aot_gpr_31 = (0x08AA1978u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08AA0FB0;
L_08AA1978:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08AA1994;
      }
      goto L_08AA1984;
    }
L_08AA1984:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA19D0;
      }
      goto L_08AA198C;
    }
L_08AA198C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA19D4;
      }
      goto L_08AA1994;
    }
L_08AA1994:
    aot_gpr_31 = (0x08AA199Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA199Cu) goto L_08AA199C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA199C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AA19B0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA19B0u) goto L_08AA19B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA19B0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AA19D0;
L_08AA19D0:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_08AA19D4;
L_08AA19D4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA19E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA1A30;
      }
      goto L_08AA1A14;
    }
L_08AA1A14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (61440u << 16u);
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AA1A3C;
      }
      goto L_08AA1A28;
    }
L_08AA1A28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA1A6C;
      }
      goto L_08AA1A30;
    }
L_08AA1A30:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AA1B30;
      }
      goto L_08AA1A3C;
    }
L_08AA1A3C:
    aot_gpr_31 = (0x08AA1A44u);
    aot_gpr_4 = (aot_gpr_5 >> 28u);
    goto L_08AA0F6C;
L_08AA1A44:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08AA1A6C;
      }
      goto L_08AA1A4C;
    }
L_08AA1A4C:
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_5 >> 28u);
    aot_gpr_5 = (aot_gpr_4 >> 16u);
    aot_gpr_5 = (aot_gpr_5 & 4095u);
    aot_gpr_31 = (0x08AA1A64u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08AA1158;
L_08AA1A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1A6C;
    }
L_08AA1A6C:
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1A78;
    }
L_08AA1A78:
    aot_gpr_31 = (0x08AA1A80u);
    aot_gpr_4 = (aot_gpr_4 >> 12u);
    goto L_08AA0F6C;
L_08AA1A80:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1A88;
    }
L_08AA1A88:
    aot_gpr_31 = (0x08AA1A90u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1A90u) goto L_08AA1A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1A90:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3164)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3168)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA1AA4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1AA4u) goto L_08AA1AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1AA4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1AC4;
    }
L_08AA1AC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    aot_gpr_31 = (0x08AA1AD4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08AA0FB0;
L_08AA1AD4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1AE0;
    }
L_08AA1AE0:
    aot_gpr_31 = (0x08AA1AE8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1AE8u) goto L_08AA1AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1AE8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AA1AFCu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1AFCu) goto L_08AA1AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1AFC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1B28;
    }
L_08AA1B28:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08AA1B2C;
L_08AA1B2C:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_08AA1B30;
L_08AA1B30:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA1B48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA1B64u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 886u, 0x0885F634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1B64u) goto L_08AA1B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1B64:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA1B90;
      }
      goto L_08AA1B70;
    }
L_08AA1B70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_2 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AA1B94;
      }
      goto L_08AA1B90;
    }
L_08AA1B90:
    aot_gpr_2 = (0u | 0u);
    goto L_08AA1B94;
L_08AA1B94:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA1BA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(396));
      if (branch_taken) {
          goto L_08AA1BD4;
      }
      goto L_08AA1BB4;
    }
L_08AA1BB4:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(389)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
      if (branch_taken) {
          goto L_08AA1BD4;
      }
      goto L_08AA1BC4;
    }
L_08AA1BC4:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(390)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
      if (branch_taken) {
          goto L_08AA1C30;
      }
      goto L_08AA1BD4;
    }
L_08AA1BD4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_08AA1C14;
    }
    goto L_08AA1BE0;
L_08AA1BE0:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08AA1BE4;
L_08AA1BE4:
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_08AA1BE4;
    }
    goto L_08AA1C10;
L_08AA1C10:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08AA1C14;
L_08AA1C14:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(390), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(391), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AA1C30;
L_08AA1C30:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA1C60;
      }
      goto L_08AA1C40;
    }
L_08AA1C40:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(393)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA1C60;
      }
      goto L_08AA1C50;
    }
L_08AA1C50:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(394)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA1CC0;
      }
      goto L_08AA1C60;
    }
L_08AA1C60:
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(516));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_08AA1CA4;
    }
    goto L_08AA1C70;
L_08AA1C70:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08AA1C74;
L_08AA1C74:
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_08AA1C74;
    }
    goto L_08AA1CA0;
L_08AA1CA0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08AA1CA4;
L_08AA1CA4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AA1CC0;
L_08AA1CC0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA1CC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(353)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA1D10;
      }
      goto L_08AA1CF0;
    }
L_08AA1CF0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3212)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA1D10;
      }
      goto L_08AA1CFC;
    }
L_08AA1CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3211)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA1D8C;
      }
      goto L_08AA1D08;
    }
L_08AA1D08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
      if (branch_taken) {
          goto L_08AA1E08;
      }
      goto L_08AA1D10;
    }
L_08AA1D10:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    aot_gpr_31 = (0x08AA1D2Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1D2Cu) goto L_08AA1D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    aot_gpr_31 = (0x08AA1D64u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1D64u) goto L_08AA1D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1D64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_2 = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AA1FC8;
      }
      goto L_08AA1D8C;
    }
L_08AA1D8C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AA1DA8u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1DA8u) goto L_08AA1DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1DA8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AA1DE0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1DE0u) goto L_08AA1DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1DE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_2 = (0u | 101u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AA1FC8;
      }
      goto L_08AA1E08;
    }
L_08AA1E08:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x08AA1E28u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    goto L_08AA2FB4;
L_08AA1E28:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    aot_gpr_31 = (0x08AA1E60u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08AA3070;
L_08AA1E60:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1E9C;
    }
L_08AA1E9C:
    aot_gpr_31 = (0x08AA1EA4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA1EA4u) goto L_08AA1EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA1EA4:
    aot_gpr_6 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EB0;
    }
L_08AA1EB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1ED4;
      }
      goto L_08AA1EC4;
    }
L_08AA1EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AA1ED4;
L_08AA1ED4:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EDC;
    }
L_08AA1EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(548)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EEC;
    }
L_08AA1EEC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(552)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EFC;
    }
L_08AA1EFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(549)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F0C;
    }
L_08AA1F0C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(553)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F1C;
    }
L_08AA1F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(550)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F2C;
    }
L_08AA1F2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(554)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F3C;
    }
L_08AA1F3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x08AA1F60u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    goto L_08AA2FB4;
L_08AA1F60:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(13)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(14)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(15)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    aot_gpr_31 = (0x08AA1F98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08AA3070;
L_08AA1F98:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(13)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(14)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(15)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AA1FC4;
L_08AA1FC4:
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    goto L_08AA1FC8;
L_08AA1FC8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA1FE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3212)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA2024;
      }
      goto L_08AA2010;
    }
L_08AA2010:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3211)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA2098;
      }
      goto L_08AA201C;
    }
L_08AA201C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2110;
      }
      goto L_08AA2024;
    }
L_08AA2024:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    aot_gpr_31 = (0x08AA203Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA203Cu) goto L_08AA203C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA203C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    aot_gpr_31 = (0x08AA2074u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2074u) goto L_08AA2074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2074:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AA22BC;
      }
      goto L_08AA2098;
    }
L_08AA2098:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AA20B4u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA20B4u) goto L_08AA20B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA20B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AA20ECu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA20ECu) goto L_08AA20EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA20EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AA22BC;
      }
      goto L_08AA2110;
    }
L_08AA2110:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA2280;
    }
    goto L_08AA2120;
L_08AA2120:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AA2124;
L_08AA2124:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA2130;
    }
L_08AA2130:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2174;
      }
      goto L_08AA2140;
    }
L_08AA2140:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(49)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08AA2178;
    }
    goto L_08AA2150;
L_08AA2150:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08AA2178;
    }
    goto L_08AA2160;
L_08AA2160:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AA2178;
      }
      goto L_08AA2170;
    }
L_08AA2170:
    aot_gpr_4 = (0u | 1u);
    goto L_08AA2174;
L_08AA2174:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08AA2178;
L_08AA2178:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA2180;
    }
L_08AA2180:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA21C4;
      }
      goto L_08AA2190;
    }
L_08AA2190:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08AA21C8;
    }
    goto L_08AA21A0;
L_08AA21A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08AA21C8;
    }
    goto L_08AA21B0;
L_08AA21B0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AA21C8;
      }
      goto L_08AA21C0;
    }
L_08AA21C0:
    aot_gpr_4 = (0u | 1u);
    goto L_08AA21C4;
L_08AA21C4:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08AA21C8;
L_08AA21C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA21D0;
    }
L_08AA21D0:
    aot_gpr_31 = (0x08AA21D8u);
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA21D8u) goto L_08AA21D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA21D8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AA21ECu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA21ECu) goto L_08AA21EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA21EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA2210u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08AA2FB4;
L_08AA2210:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(10)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(11)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA2248u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08AA3070;
L_08AA2248:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(10)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(11)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2124;
      }
      goto L_08AA227C;
    }
L_08AA227C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA2280;
L_08AA2280:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AA22BC;
L_08AA22BC:
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA22DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_2 = (0u | 8u);
      if (branch_taken) {
          goto L_08AA2300;
      }
      goto L_08AA22F0;
    }
L_08AA22F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08AA2300;
L_08AA2300:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_2;
      if (branch_taken) {
          goto L_08AA2374;
      }
      goto L_08AA230C;
    }
L_08AA230C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (ctx.gpr[8] & 512u);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AA236C;
      }
      goto L_08AA2328;
    }
L_08AA2328:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AA236C;
      }
      goto L_08AA2340;
    }
L_08AA2340:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
      if (branch_taken) {
          goto L_08AA2364;
      }
      goto L_08AA2350;
    }
L_08AA2350:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA237C;
      }
      goto L_08AA235C;
    }
L_08AA235C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA2364;
    }
L_08AA2364:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA236C;
    }
L_08AA236C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA2374;
    }
L_08AA2374:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA237C;
    }
L_08AA237C:
    ctx.gpr[7] = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA2390;
      }
      goto L_08AA2388;
    }
L_08AA2388:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA2390;
    }
L_08AA2390:
    ctx.gpr[7] = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA23A4;
      }
      goto L_08AA239C;
    }
L_08AA239C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA23A4;
    }
L_08AA23A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(628))))));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08AA23AC;
L_08AA23AC:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AA23D8;
      }
      goto L_08AA23B4;
    }
L_08AA23B4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 174u);
      if (branch_taken) {
          goto L_08AA23C8;
      }
      goto L_08AA23C0;
    }
L_08AA23C0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA23D0;
      }
      goto L_08AA23C8;
    }
L_08AA23C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA23D0;
    }
L_08AA23D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA23D8;
    }
L_08AA23D8:
    aot_gpr_6 = (0u | 237u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AA23EC;
      }
      goto L_08AA23E4;
    }
L_08AA23E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA23EC;
    }
L_08AA23EC:
    aot_gpr_2 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    goto L_08AA23F0;
L_08AA23F0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA23F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA240Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 186u, 0x089452D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA240Cu) goto L_08AA240C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA240C:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA2420:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA2434u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 187u, 0x089452E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2434u) goto L_08AA2434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2434:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA2448:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA2464u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 188u, 0x089452F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2464u) goto L_08AA2464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2464:
    aot_gpr_4 = (aot_gpr_2 & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2478;
      }
      goto L_08AA2470;
    }
L_08AA2470:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA2480;
      }
      goto L_08AA2478;
    }
L_08AA2478:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AA2480;
L_08AA2480:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
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
L_08AA2498:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 3u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AA24B8;
      }
      goto L_08AA24AC;
    }
L_08AA24AC:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA24BC;
      }
      goto L_08AA24B8;
    }
L_08AA24B8:
    aot_gpr_2 = (aot_gpr_4 | 0u);
    goto L_08AA24BC;
L_08AA24BC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA24C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (2234u << 16u);
    ctx.gpr[21] = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(12460));
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA25B4;
      }
      goto L_08AA2510;
    }
L_08AA2510:
    ctx.gpr[19] = (2182u << 16u);
    ctx.gpr[17] = (2218u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2328));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4908));
    goto L_08AA2524;
L_08AA2524:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 520u);
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
        goto L_08AA253C;
    }
    goto L_08AA2534;
L_08AA2534:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA253C;
    }
L_08AA253C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AA2560u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2560u) goto L_08AA2560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2560:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA256C;
    }
L_08AA256C:
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 & 4u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA2580;
    }
L_08AA2580:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(624))))));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA258C;
    }
L_08AA258C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08AA259Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA259Cu) goto L_08AA259C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA259C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08AA25A0;
L_08AA25A0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AA2524;
      }
      goto L_08AA25B4;
    }
L_08AA25B4:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_08AA25D8:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA25E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_6 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AA2610;
      }
      goto L_08AA25F8;
    }
L_08AA25F8:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AA2608u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(11248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2608u) goto L_08AA2608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2608:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA2610;
    }
L_08AA2610:
    aot_gpr_6 = (0u | 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AA2634;
      }
      goto L_08AA261C;
    }
L_08AA261C:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AA262Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10336));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA262Cu) goto L_08AA262C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA262C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA2634;
    }
L_08AA2634:
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AA2658;
      }
      goto L_08AA2640;
    }
L_08AA2640:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AA2650u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(11556));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2650u) goto L_08AA2650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2650:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA2658;
    }
L_08AA2658:
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AA267C;
      }
      goto L_08AA2664;
    }
L_08AA2664:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AA2674u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10852));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2674u) goto L_08AA2674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2674:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA267C;
    }
L_08AA267C:
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AA26A0;
      }
      goto L_08AA2688;
    }
L_08AA2688:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AA2698u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10852));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2698u) goto L_08AA2698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2698:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA26A0;
    }
L_08AA26A0:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AA26B0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9916));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA26B0u) goto L_08AA26B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA26B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA26BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AA26E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA26E0u) goto L_08AA26E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA26E0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (2218u << 16u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA26FCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA26FCu) goto L_08AA26FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA26FC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    aot_gpr_31 = (0x08AA2708u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2708u) goto L_08AA2708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2708:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA275C;
      }
      goto L_08AA2710;
    }
L_08AA2710:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2718;
L_08AA2718:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AA2730;
      }
      goto L_08AA2728;
    }
L_08AA2728:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2754;
      }
      goto L_08AA2730;
    }
L_08AA2730:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2740;
      }
      goto L_08AA2738;
    }
L_08AA2738:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2754;
      }
      goto L_08AA2740;
    }
L_08AA2740:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2718;
      }
      goto L_08AA2750;
    }
L_08AA2750:
    aot_gpr_4 = (0u | 0u);
    goto L_08AA2754;
L_08AA2754:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA27C8;
      }
      goto L_08AA275C;
    }
L_08AA275C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2780;
      }
      goto L_08AA2768;
    }
L_08AA2768:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2778u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21820));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2778u) goto L_08AA2778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2778:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA2780;
    }
L_08AA2780:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4156));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA2790u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2790u) goto L_08AA2790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2790:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA2798;
    }
L_08AA2798:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA27A8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21820));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA27A8u) goto L_08AA27A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA27A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA27B0;
    }
L_08AA27B0:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA27C0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21540));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA27C0u) goto L_08AA27C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA27C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA27C8;
    }
L_08AA27C8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    aot_gpr_31 = (0x08AA27D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA27D4u) goto L_08AA27D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA27D4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA27F8;
      }
      goto L_08AA27DC;
    }
L_08AA27DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA27E8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA27E8u) goto L_08AA27E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA27E8:
    aot_gpr_31 = (0x08AA27F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA27F0u) goto L_08AA27F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA27F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA27F8;
    }
L_08AA27F8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    aot_gpr_31 = (0x08AA2804u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2804u) goto L_08AA2804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2804:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2824;
      }
      goto L_08AA280C;
    }
L_08AA280C:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA281Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21468));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA281Cu) goto L_08AA281C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA281C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA2824;
    }
L_08AA2824:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2830u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2830u) goto L_08AA2830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2830:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AA2844;
      }
      goto L_08AA2838;
    }
L_08AA2838:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2844u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2844:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA2860:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AA2884u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2884u) goto L_08AA2884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2884:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (2218u << 16u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA28A0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA28A0u) goto L_08AA28A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA28A0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3540));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA28B0u);
    aot_gpr_6 = (0u | 13u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA28B0u) goto L_08AA28B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA28B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA28D0;
      }
      goto L_08AA28B8;
    }
L_08AA28B8:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA28C8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA28C8u) goto L_08AA28C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA28C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA28D0;
    }
L_08AA28D0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4116));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA28E0u);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA28E0u) goto L_08AA28E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA28E0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA2900;
      }
      goto L_08AA28E8;
    }
L_08AA28E8:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA28F8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22940));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA28F8u) goto L_08AA28F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA28F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA2900;
    }
L_08AA2900:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    aot_gpr_31 = (0x08AA290Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA290Cu) goto L_08AA290C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA290C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA2960;
      }
      goto L_08AA2914;
    }
L_08AA2914:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    aot_gpr_5 = (0u | 0u);
    goto L_08AA291C;
L_08AA291C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AA2934;
      }
      goto L_08AA292C;
    }
L_08AA292C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2958;
      }
      goto L_08AA2934;
    }
L_08AA2934:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2944;
      }
      goto L_08AA293C;
    }
L_08AA293C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2958;
      }
      goto L_08AA2944;
    }
L_08AA2944:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA291C;
      }
      goto L_08AA2954;
    }
L_08AA2954:
    aot_gpr_4 = (0u | 0u);
    goto L_08AA2958;
L_08AA2958:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA29CC;
      }
      goto L_08AA2960;
    }
L_08AA2960:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2984;
      }
      goto L_08AA296C;
    }
L_08AA296C:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA297Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21820));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA297Cu) goto L_08AA297C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA297C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA2984;
    }
L_08AA2984:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4156));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA2994u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2994u) goto L_08AA2994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2994:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA29B4;
      }
      goto L_08AA299C;
    }
L_08AA299C:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA29ACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21820));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA29ACu) goto L_08AA29AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA29AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA29B4;
    }
L_08AA29B4:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA29C4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21540));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA29C4u) goto L_08AA29C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA29C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA29CC;
    }
L_08AA29CC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    aot_gpr_31 = (0x08AA29D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA29D8u) goto L_08AA29D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA29D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA29FC;
      }
      goto L_08AA29E0;
    }
L_08AA29E0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA29ECu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA29ECu) goto L_08AA29EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA29EC:
    aot_gpr_31 = (0x08AA29F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA29F4u) goto L_08AA29F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA29F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA29FC;
    }
L_08AA29FC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    aot_gpr_31 = (0x08AA2A08u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2A08u) goto L_08AA2A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2A08:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2A28;
      }
      goto L_08AA2A10;
    }
L_08AA2A10:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2A20u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21468));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2A20u) goto L_08AA2A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2A20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA2A28;
    }
L_08AA2A28:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2A34u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2A34u) goto L_08AA2A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2A34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AA2A48;
      }
      goto L_08AA2A3C;
    }
L_08AA2A3C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2A48u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2A48:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA2A64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AA2A88u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2A88u) goto L_08AA2A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2A88:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3136));
    aot_gpr_31 = (0x08AA2A98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2A98u) goto L_08AA2A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2A98:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA2AEC;
      }
      goto L_08AA2AA0;
    }
L_08AA2AA0:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2AA8;
L_08AA2AA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AA2AC0;
      }
      goto L_08AA2AB8;
    }
L_08AA2AB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2AE4;
      }
      goto L_08AA2AC0;
    }
L_08AA2AC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2AD0;
      }
      goto L_08AA2AC8;
    }
L_08AA2AC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2AE4;
      }
      goto L_08AA2AD0;
    }
L_08AA2AD0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2AA8;
      }
      goto L_08AA2AE0;
    }
L_08AA2AE0:
    aot_gpr_4 = (0u | 0u);
    goto L_08AA2AE4;
L_08AA2AE4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA2B04;
      }
      goto L_08AA2AEC;
    }
L_08AA2AEC:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2AFCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24520));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2AFCu) goto L_08AA2AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2AFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B04;
    }
L_08AA2B04:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-4116));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AA2B14u);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B14u) goto L_08AA2B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B14:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA2B34;
      }
      goto L_08AA2B1C;
    }
L_08AA2B1C:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2B2Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22940));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B2Cu) goto L_08AA2B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B34;
    }
L_08AA2B34:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    aot_gpr_31 = (0x08AA2B40u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B40u) goto L_08AA2B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B40:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2B60;
      }
      goto L_08AA2B48;
    }
L_08AA2B48:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2B58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21540));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B58u) goto L_08AA2B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B60;
    }
L_08AA2B60:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    aot_gpr_31 = (0x08AA2B6Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B6Cu) goto L_08AA2B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B6C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2B74;
    }
L_08AA2B74:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2B80u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B80u) goto L_08AA2B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B80:
    aot_gpr_31 = (0x08AA2B88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B88u) goto L_08AA2B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B90;
    }
L_08AA2B90:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    aot_gpr_31 = (0x08AA2B9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2B9Cu) goto L_08AA2B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2B9C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2BBC;
      }
      goto L_08AA2BA4;
    }
L_08AA2BA4:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2BB4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24580));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2BB4u) goto L_08AA2BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2BB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2BBC;
    }
L_08AA2BBC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2BC8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2BC8u) goto L_08AA2BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2BC8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2BD4u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2BD4:
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA2BF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AA2C0Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2C0Cu) goto L_08AA2C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2218u << 16u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA2C28u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2C28u) goto L_08AA2C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2C28:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    aot_gpr_31 = (0x08AA2C34u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2C34u) goto L_08AA2C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2C34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2C78;
      }
      goto L_08AA2C3C;
    }
L_08AA2C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2C60;
      }
      goto L_08AA2C48;
    }
L_08AA2C48:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2C58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22472));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2C58u) goto L_08AA2C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2C58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2C60;
    }
L_08AA2C60:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2C70u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22192));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2C70u) goto L_08AA2C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2C70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2C78;
    }
L_08AA2C78:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    aot_gpr_31 = (0x08AA2C84u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2C84u) goto L_08AA2C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2C84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2CC8;
      }
      goto L_08AA2C8C;
    }
L_08AA2C8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2CB0;
      }
      goto L_08AA2C98;
    }
L_08AA2C98:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2CA8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2CA8u) goto L_08AA2CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2CA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2CB0;
    }
L_08AA2CB0:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2CC0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23452));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2CC0u) goto L_08AA2CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2CC8;
    }
L_08AA2CC8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    aot_gpr_31 = (0x08AA2CD4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2CD4u) goto L_08AA2CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2CD4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2CF4;
      }
      goto L_08AA2CDC;
    }
L_08AA2CDC:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2CECu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2CECu) goto L_08AA2CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2CEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2CF4;
    }
L_08AA2CF4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2D00u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2D00u) goto L_08AA2D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2D00:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2D0Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2D0C:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
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
L_08AA2D24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AA2D40u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2D40u) goto L_08AA2D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2D40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2218u << 16u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA2D5Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2D5Cu) goto L_08AA2D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2D5C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3840));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AA2D6Cu);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2D6Cu) goto L_08AA2D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2D6C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA2D8C;
      }
      goto L_08AA2D74;
    }
L_08AA2D74:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2D84u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22940));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2D84u) goto L_08AA2D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2D84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2D8C;
    }
L_08AA2D8C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    aot_gpr_31 = (0x08AA2D98u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2D98u) goto L_08AA2D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2D98:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA2DEC;
      }
      goto L_08AA2DA0;
    }
L_08AA2DA0:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2DA8;
L_08AA2DA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AA2DC0;
      }
      goto L_08AA2DB8;
    }
L_08AA2DB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2DE4;
      }
      goto L_08AA2DC0;
    }
L_08AA2DC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2DD0;
      }
      goto L_08AA2DC8;
    }
L_08AA2DC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2DE4;
      }
      goto L_08AA2DD0;
    }
L_08AA2DD0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2DA8;
      }
      goto L_08AA2DE0;
    }
L_08AA2DE0:
    aot_gpr_4 = (0u | 0u);
    goto L_08AA2DE4;
L_08AA2DE4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA2E28;
      }
      goto L_08AA2DEC;
    }
L_08AA2DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2E10;
      }
      goto L_08AA2DF8;
    }
L_08AA2DF8:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2E08u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24212));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E08u) goto L_08AA2E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E10;
    }
L_08AA2E10:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2E20u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23700));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E20u) goto L_08AA2E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E28;
    }
L_08AA2E28:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    aot_gpr_31 = (0x08AA2E34u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E34u) goto L_08AA2E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2E78;
      }
      goto L_08AA2E3C;
    }
L_08AA2E3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA2E60;
      }
      goto L_08AA2E48;
    }
L_08AA2E48:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2E58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E58u) goto L_08AA2E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E60;
    }
L_08AA2E60:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2E70u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23452));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E70u) goto L_08AA2E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E78;
    }
L_08AA2E78:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    aot_gpr_31 = (0x08AA2E84u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E84u) goto L_08AA2E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2EA4;
      }
      goto L_08AA2E8C;
    }
L_08AA2E8C:
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2E9Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2E9Cu) goto L_08AA2E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2E9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2EA4;
    }
L_08AA2EA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2EB0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2EB0u) goto L_08AA2EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2EB0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2EBCu);
    aot_gpr_5 = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2EBC:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
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
L_08AA2ED4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA2EF4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2EF4u) goto L_08AA2EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2EF4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3128));
    aot_gpr_31 = (0x08AA2F00u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2F00u) goto L_08AA2F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2F00:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2F20;
      }
      goto L_08AA2F08;
    }
L_08AA2F08:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2F18u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 186u, 0x089452D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2F18u) goto L_08AA2F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2F18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA2F48;
      }
      goto L_08AA2F20;
    }
L_08AA2F20:
    aot_gpr_31 = (0x08AA2F28u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2F28u) goto L_08AA2F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2F28:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3120));
    aot_gpr_31 = (0x08AA2F34u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2F34u) goto L_08AA2F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2F34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA2F48;
      }
      goto L_08AA2F3C;
    }
L_08AA2F3C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA2F48u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 186u, 0x089452D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2F48u) goto L_08AA2F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2F48:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
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
L_08AA2F60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AA2F7Cu);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0206_entry, 206u, 498u, 0x08B3E084u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA2F7Cu) goto L_08AA2F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA2F7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AA2F9C;
      }
      goto L_08AA2F8C;
    }
L_08AA2F8C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2FA0;
      }
      goto L_08AA2F9C;
    }
L_08AA2F9C:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_08AA2FA0;
L_08AA2FA0:
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
L_08AA2FB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(355));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AA2FF4;
      }
      goto L_08AA2FE0;
    }
L_08AA2FE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA3024;
      }
      goto L_08AA2FEC;
    }
L_08AA2FEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA3030;
      }
      goto L_08AA2FF4;
    }
L_08AA2FF4:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(375));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-720)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-718)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA301Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA301Cu) goto L_08AA301C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA301C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3060;
      }
      goto L_08AA3024;
    }
L_08AA3024:
    aot_gpr_31 = (0x08AA302Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA302Cu) goto L_08AA302C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA302C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA3030;
L_08AA3030:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AA305Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA305Cu) goto L_08AA305C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA305C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08AA3060;
L_08AA3060:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA3070:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(355));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AA30B0;
      }
      goto L_08AA309C;
    }
L_08AA309C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA30E0;
      }
      goto L_08AA30A8;
    }
L_08AA30A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA30EC;
      }
      goto L_08AA30B0;
    }
L_08AA30B0:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(375));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-720)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-718)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA30D8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA30D8u) goto L_08AA30D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA30D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA311C;
      }
      goto L_08AA30E0;
    }
L_08AA30E0:
    aot_gpr_31 = (0x08AA30E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA30E8u) goto L_08AA30E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA30E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA30EC;
L_08AA30EC:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AA3118u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3118u) goto L_08AA3118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3118:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08AA311C;
L_08AA311C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA312C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(371));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AA316C;
      }
      goto L_08AA3158;
    }
L_08AA3158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA319C;
      }
      goto L_08AA3164;
    }
L_08AA3164:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA31A8;
      }
      goto L_08AA316C;
    }
L_08AA316C:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(375));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-720)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-718)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA3194u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3194u) goto L_08AA3194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3194:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA31D8;
      }
      goto L_08AA319C;
    }
L_08AA319C:
    aot_gpr_31 = (0x08AA31A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA31A4u) goto L_08AA31A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA31A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA31A8;
L_08AA31A8:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AA31D4u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA31D4u) goto L_08AA31D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA31D4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08AA31D8;
L_08AA31D8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA31E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(371));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AA3228;
      }
      goto L_08AA3214;
    }
L_08AA3214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA3258;
      }
      goto L_08AA3220;
    }
L_08AA3220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA3264;
      }
      goto L_08AA3228;
    }
L_08AA3228:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(375));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-720)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-718)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AA3250u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3250u) goto L_08AA3250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3250:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3294;
      }
      goto L_08AA3258;
    }
L_08AA3258:
    aot_gpr_31 = (0x08AA3260u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3260u) goto L_08AA3260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA3264;
L_08AA3264:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AA3290u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3290u) goto L_08AA3290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3290:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08AA3294;
L_08AA3294:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA32A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (2234u << 16u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12460));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA32F4u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 890u, 0x0885F690u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA32F4u) goto L_08AA32F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA32F4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(396));
    goto L_08AA3304;
L_08AA3304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(396), aot_gpr_4);
      if (branch_taken) {
          goto L_08AA3320;
      }
      goto L_08AA3310;
    }
L_08AA3310:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3320u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3320u) goto L_08AA3320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3320:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[18] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3304;
      }
      goto L_08AA3338;
    }
L_08AA3338:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(516));
    goto L_08AA3348;
L_08AA3348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(516), aot_gpr_4);
      if (branch_taken) {
          goto L_08AA3364;
      }
      goto L_08AA3354;
    }
L_08AA3354:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3364u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3364u) goto L_08AA3364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3364:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3348;
      }
      goto L_08AA337C;
    }
L_08AA337C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(631), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AA3404;
      }
      goto L_08AA3390;
    }
L_08AA3390:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(616));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), aot_gpr_5);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA33A8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA33A8u) goto L_08AA33A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA33A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA33F4;
      }
      goto L_08AA33BC;
    }
L_08AA33BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_31 = (0x08AA33CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 639u, 0x08A53688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA33CCu) goto L_08AA33CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA33CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_31 = (0x08AA33E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 706u, 0x0887F414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA33E0u) goto L_08AA33E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA33E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA33BC;
      }
      goto L_08AA33F4;
    }
L_08AA33F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_gpr_4 << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AA3414;
      }
      goto L_08AA3404;
    }
L_08AA3404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), 0u);
    ctx.gpr[17] = (aot_gpr_4 << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[22]);
    goto L_08AA3414;
L_08AA3414:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(391), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA35B0;
      }
      goto L_08AA3430;
    }
L_08AA3430:
    ctx.gpr[19] = (2182u << 16u);
    ctx.gpr[21] = (2196u << 16u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2328));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22832));
    goto L_08AA3448;
L_08AA3448:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 520u);
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
        goto L_08AA3460;
    }
    goto L_08AA3458;
L_08AA3458:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA3460;
    }
L_08AA3460:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AA3484u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3484u) goto L_08AA3484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3484:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA3490;
    }
L_08AA3490:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA34A4;
    }
L_08AA34A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(624))))));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA34B0;
    }
L_08AA34B0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AA34D0;
      }
      goto L_08AA34C0;
    }
L_08AA34C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AA34D0;
L_08AA34D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AA34E8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA34E8u) goto L_08AA34E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA34E8:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AA34F4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA34F4u) goto L_08AA34F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA34F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AA3500u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3500u) goto L_08AA3500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08AA350Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 101u, 0x089D8830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA350Cu) goto L_08AA350C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA350C:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08AA3518u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3518u) goto L_08AA3518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3518:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AA3538u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 648u, 0x08973008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3538u) goto L_08AA3538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3538:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3548u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3548u) goto L_08AA3548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3548:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3558u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3558u) goto L_08AA3558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3558:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3568u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3568u) goto L_08AA3568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3568:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3578u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3578u) goto L_08AA3578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3578:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3588u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3588u) goto L_08AA3588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3588:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AA3598u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3598u) goto L_08AA3598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA359C;
L_08AA359C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AA3448;
      }
      goto L_08AA35B0;
    }
L_08AA35B0:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA35DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2280u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(1456));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AA35F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA13C0;
L_08AA35F8:
    aot_gpr_31 = (0x08AA3600u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3108));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3600u) goto L_08AA3600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3600:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10192));
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 40u);
    aot_gpr_31 = (0x08AA3618u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9884));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3618u) goto L_08AA3618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3618:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA3628:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AA3680;
      }
      goto L_08AA3674;
    }
L_08AA3674:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3096));
    aot_gpr_31 = (0x08AA3680u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3680u) goto L_08AA3680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3680:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AA36DC;
      }
      goto L_08AA36A0;
    }
L_08AA36A0:
    aot_gpr_5 = (0u | 99u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[20]) < 99 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (ctx.gpr[20] | 0u);
        goto L_08AA36B0;
    }
    goto L_08AA36B0;
L_08AA36B0:
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(99) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AA36C8;
      }
      goto L_08AA36C0;
    }
L_08AA36C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 99u);
      if (branch_taken) {
          goto L_08AA36C8;
      }
      goto L_08AA36C8;
    }
L_08AA36C8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3092));
    aot_gpr_31 = (0x08AA36DCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA36DCu) goto L_08AA36DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA36DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AA36F4;
      }
      goto L_08AA36E8;
    }
L_08AA36E8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08AA36F4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA36F4u) goto L_08AA36F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA36F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA3724;
      }
      goto L_08AA3704;
    }
L_08AA3704:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3088));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AA371Cu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA371Cu) goto L_08AA371C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA371C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA373C;
      }
      goto L_08AA3724;
    }
L_08AA3724:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3080));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AA373Cu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA373Cu) goto L_08AA373C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA373C:
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA375C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (0u | 60u);
    ctx.gpr[7] = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 100u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14));
    ctx.gpr[7] = (ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_6 = (ctx.hi);
    aot_gpr_31 = (0x08AA37B8u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-3072));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA37B8u) goto L_08AA37B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA37B8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA37C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_5 = (16968u << 16u);
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA37D8;
    }
L_08AA37D8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = ctx.fpr[15] / aot_fpr_14;
    ctx.gpr[7] = (17530u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (20224u << 16u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (0u | 1000u);
      if (branch_taken) {
          goto L_08AA3828;
      }
      goto L_08AA3814;
    }
L_08AA3814:
    aot_fpr_12 = ctx.fpr[15] / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AA3844;
      }
      goto L_08AA3828;
    }
L_08AA3828:
    aot_fpr_14 = ctx.fpr[15] / aot_fpr_14;
    ctx.gpr[9] = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08AA3844;
L_08AA3844:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(57)));
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08AA38EC;
      }
      goto L_08AA3858;
    }
L_08AA3858:
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_08AA388C;
      }
      goto L_08AA3878;
    }
L_08AA3878:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA388C;
    }
L_08AA388C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AA38E4;
      }
      goto L_08AA3898;
    }
L_08AA3898:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (ctx.lo);
    if (ctx.gpr[9] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08AA38BC;
    }
    goto L_08AA38BC;
L_08AA38BC:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08AA38DC;
      }
      goto L_08AA38C4;
    }
L_08AA38C4:
    aot_gpr_5 = (0u | 8u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 168u);
    aot_gpr_31 = (0x08AA38DCu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA38DCu) goto L_08AA38DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA38DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA38E4;
    }
L_08AA38E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA38EC;
    }
L_08AA38EC:
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08AA38F4;
L_08AA38F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA3900:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 157u);
    ctx.gpr[17] = (0u | 81u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    goto L_08AA3950;
L_08AA3950:
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[9] << 6u);
    ctx.gpr[10] = (ctx.gpr[10] << 3u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(72), aot_gpr_4);
    ctx.gpr[11] = (0u | 0u);
    goto L_08AA3974;
L_08AA3974:
    aot_gpr_2 = (ctx.gpr[10] + ctx.gpr[11]);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[11]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AA3974;
      }
      goto L_08AA3994;
    }
L_08AA3994:
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(144));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(148));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08AA3950;
      }
      goto L_08AA39DC;
    }
L_08AA39DC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_08AA39EC;
L_08AA39EC:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08AA3A04;
L_08AA3A04:
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AA3A04;
      }
      goto L_08AA3A20;
    }
L_08AA3A20:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 244u);
    aot_gpr_6 = (0u | 225u);
    ctx.gpr[7] = (0u | 91u);
    aot_gpr_31 = (0x08AA3A44u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3A44u) goto L_08AA3A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3A44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA39EC;
      }
      goto L_08AA3A78;
    }
L_08AA3A78:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_08AA3A9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AA3AD4;
      }
      goto L_08AA3AC0;
    }
L_08AA3AC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA3ADC;
      }
      goto L_08AA3ACC;
    }
L_08AA3ACC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3AE4;
      }
      goto L_08AA3AD4;
    }
L_08AA3AD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3B74;
      }
      goto L_08AA3ADC;
    }
L_08AA3ADC:
    aot_gpr_31 = (0x08AA3AE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3AE4u) goto L_08AA3AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3AE4:
    aot_gpr_31 = (0x08AA3AECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3AECu) goto L_08AA3AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3AEC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AA3B74;
      }
      goto L_08AA3AF4;
    }
L_08AA3AF4:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_08AA3B04;
L_08AA3B04:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA3B24;
      }
      goto L_08AA3B14;
    }
L_08AA3B14:
    aot_gpr_31 = (0x08AA3B1Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_08AA375C;
L_08AA3B1C:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AA3B24;
L_08AA3B24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AA3B04;
      }
      goto L_08AA3B38;
    }
L_08AA3B38:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    goto L_08AA3B40;
L_08AA3B40:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AA3B60;
      }
      goto L_08AA3B50;
    }
L_08AA3B50:
    aot_gpr_31 = (0x08AA3B58u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_08AA3628;
L_08AA3B58:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AA3B60;
L_08AA3B60:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AA3B40;
      }
      goto L_08AA3B74;
    }
L_08AA3B74:
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
L_08AA3B90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(333)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AA3BD0;
      }
      goto L_08AA3BAC;
    }
L_08AA3BAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08AA3BB4;
L_08AA3BB4:
    aot_gpr_31 = (0x08AA3BBCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AA37C4;
L_08AA3BBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AA3BB4;
      }
      goto L_08AA3BD0;
    }
L_08AA3BD0:
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
L_08AA3BE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AA3C04;
L_08AA3C04:
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA3C04;
      }
      goto L_08AA3C14;
    }
L_08AA3C14:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08AA3C1C;
L_08AA3C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA3CF4;
      }
      goto L_08AA3C28;
    }
L_08AA3C28:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10207)));
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10206)));
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C44;
    }
L_08AA3C44:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    if (aot_gpr_5 != aot_gpr_4) {
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
        goto L_08AA3CA4;
    }
    goto L_08AA3C50;
L_08AA3C50:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    if (aot_gpr_5 != aot_gpr_4) {
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
        goto L_08AA3CA4;
    }
    goto L_08AA3C5C;
L_08AA3C5C:
    if (aot_gpr_6 != aot_gpr_4) {
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
        goto L_08AA3CA4;
    }
    goto L_08AA3C64;
L_08AA3C64:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 244u);
    aot_gpr_6 = (0u | 225u);
    ctx.gpr[7] = (0u | 91u);
    aot_gpr_31 = (0x08AA3C7Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3C7Cu) goto L_08AA3C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3C7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AA3CC8;
      }
      goto L_08AA3CA0;
    }
L_08AA3CA0:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_08AA3CA4;
L_08AA3CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10206), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10205), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10204), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10207), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AA3CC8;
L_08AA3CC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AA3CE8;
      }
      goto L_08AA3CD0;
    }
L_08AA3CD0:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA3CE0u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3CE0u) goto L_08AA3CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3CE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3CEC;
      }
      goto L_08AA3CE8;
    }
L_08AA3CE8:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08AA3CEC;
L_08AA3CEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3D08;
      }
      goto L_08AA3CF4;
    }
L_08AA3CF4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AA3C1C;
      }
      goto L_08AA3D08;
    }
L_08AA3D08:
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
L_08AA3D1C:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    goto L_08AA3D24;
L_08AA3D24:
    ctx.gpr[7] = (ctx.gpr[8] << 6u);
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA3D54;
      }
      goto L_08AA3D40;
    }
L_08AA3D40:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_08AA3D54;
L_08AA3D54:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AA3D24;
      }
      goto L_08AA3D68;
    }
L_08AA3D68:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA3D70:
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA3D74;
L_08AA3D74:
    aot_gpr_6 = (ctx.gpr[7] + ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[7] << 6u);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_5;
      if (branch_taken) {
          goto L_08AA3DB4;
      }
      goto L_08AA3D98;
    }
L_08AA3D98:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    goto L_08AA3DB4;
L_08AA3DB4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AA3D74;
      }
      goto L_08AA3DC8;
    }
L_08AA3DC8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA3DD0:
    ctx.gpr[7] = (aot_gpr_6 & 255u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    goto L_08AA3DDC;
L_08AA3DDC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_08AA3E04;
      }
      goto L_08AA3DE8;
    }
L_08AA3DE8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AA3DDC;
      }
      goto L_08AA3DFC;
    }
L_08AA3DFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3E08;
      }
      goto L_08AA3E04;
    }
L_08AA3E04:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AA3E08;
L_08AA3E08:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AA3E10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 & 65535u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 65535u);
    ctx.gpr[18] = (ctx.gpr[11] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AA3E48;
L_08AA3E48:
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA3E48;
      }
      goto L_08AA3E58;
    }
L_08AA3E58:
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AA3FFC;
      }
      goto L_08AA3E80;
    }
L_08AA3E80:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[20] = (0u | 255u);
      if (branch_taken) {
          goto L_08AA3EA8;
      }
      goto L_08AA3E90;
    }
L_08AA3E90:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08AA3EA0u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3EA0u) goto L_08AA3EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3EA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3EAC;
      }
      goto L_08AA3EA8;
    }
L_08AA3EA8:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_08AA3EAC;
L_08AA3EAC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AA3ECC;
      }
      goto L_08AA3EB4;
    }
L_08AA3EB4:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AA3EC4u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AA3EC4u) goto L_08AA3EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AA3EC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AA3ED0;
      }
      goto L_08AA3ECC;
    }
L_08AA3ECC:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    goto L_08AA3ED0;
L_08AA3ED0:
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10207)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10206)));
      if (branch_taken) {
          goto L_08AA3F48;
      }
      goto L_08AA3EE8;
    }
L_08AA3EE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    if (aot_gpr_4 != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08AA3F4C;
    }
    goto L_08AA3EF4;
L_08AA3EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    if (aot_gpr_4 != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08AA3F4C;
    }
    goto L_08AA3F00;
L_08AA3F00:
    if (ctx.gpr[17] != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08AA3F4C;
    }
    goto L_08AA3F08;
L_08AA3F08:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 157u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10211)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10210)));
      if (branch_taken) {
          goto L_08AA3F78;
      }
      goto L_08AA3F48;
    }
L_08AA3F48:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AA3F4C;
L_08AA3F4C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10206), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10205), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10204), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10207), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10211)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10210)));
    goto L_08AA3F78;
L_08AA3F78:
    if (ctx.gpr[17] != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_4));
        goto L_08AA3FD8;
    }
    goto L_08AA3F80;
L_08AA3F80:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10208)));
    if (aot_gpr_5 != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_4));
        goto L_08AA3FD8;
    }
    goto L_08AA3F8C;
L_08AA3F8C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10209)));
    if (aot_gpr_5 != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_4));
        goto L_08AA3FD8;
    }
    goto L_08AA3F98;
L_08AA3F98:
    if (aot_gpr_4 != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_4));
        goto L_08AA3FD8;
    }
    goto L_08AA3FA0;
L_08AA3FA0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 81u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(5)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(7)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AA3FFC;
      }
      goto L_08AA3FD8;
    }
L_08AA3FD8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10208)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10209)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10210), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10209), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10208), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10211), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AA3FFC;
L_08AA3FFC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08AA4000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x08AA0000u, 16384u, &recomp_unit_0167, &recomp_unit_0167_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AA0000u, &recomp_unit_0167, "recomp_unit_0167",
                                          kEntryMasks_recomp_unit_0167, 64u);
}
} // namespace psprecomp
