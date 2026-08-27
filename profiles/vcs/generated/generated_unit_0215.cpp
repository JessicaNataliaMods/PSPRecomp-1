#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0215[64] = {
    0x0A01248028101001ull, 0x5430224A00080810ull, 0x0802008208108050ull, 0x1490004085089020ull,
    0x0002100002800002ull, 0x4481000028000021ull, 0x8220690122341482ull, 0x944109000A924924ull,
    0x0010932453004848ull, 0x020109080088AC42ull, 0x0000002495280400ull, 0xA00A500960AB2A45ull,
    0x000024008004914Aull, 0x10844102A8020082ull, 0x0005504200912100ull, 0xA840246442015000ull,
    0x0108100408240402ull, 0x8109141A44011A44ull, 0x2488023488022200ull, 0x44D22008D2200200ull,
    0xD220080010401020ull, 0x082400A040D22008ull, 0x8880462201081004ull, 0x2011200810914055ull,
    0x3110010028880462ull, 0x8208020410944402ull, 0x1A44011A44004002ull, 0x0A44090041014410ull,
    0x2A00948050000A55ull, 0x40001D0022889C01ull, 0x222802015400020Dull, 0x00114090008A2400ull,
    0x04A0C50143122120ull, 0x02000001A0340000ull, 0x9028608202428201ull, 0x4592088480045349ull,
    0xA208008351402281ull, 0x6A044900080AA640ull, 0x1284024140050149ull, 0x1200908046520449ull,
    0x12B1402804800020ull, 0x400000C2024024A8ull, 0xCA4240A817050892ull, 0x40A4117022865200ull,
    0x4800498120059002ull, 0x82135652512B1120ull, 0x40000C82C5C55A10ull, 0x0525968154718452ull,
    0x4A28908821210020ull, 0x4404681100552D40ull, 0x00000082A24011A0ull, 0x2291444000400000ull,
    0x8C81080015000A24ull, 0x0210928A94649000ull, 0x0008200000541405ull, 0x0084001024000000ull,
    0x0204290060442465ull, 0x1408845000204415ull, 0x085060504800A040ull, 0x400420605040C080ull,
    0x20400408A04844A0ull, 0x0981110244020422ull, 0x1084080081140908ull, 0x00000A0444091008ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0215[64] = {
    1u, 12u, 25u, 34u, 46u, 51u, 59u, 76u, 93u, 108u, 121u, 130u, 151u, 161u, 173u, 184u,
    198u, 207u, 224u, 237u, 251u, 261u, 273u, 285u, 299u, 312u, 324u, 337u, 349u, 364u, 378u, 391u,
    401u, 417u, 424u, 438u, 456u, 471u, 487u, 501u, 516u, 528u, 539u, 559u, 576u, 589u, 611u, 629u,
    652u, 666u, 683u, 693u, 702u, 715u, 731u, 740u, 745u, 760u, 773u, 785u, 796u, 808u, 821u, 832u,
};
void recomp_unit_0215_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=2,4,29,5,3,6 fprs=12,2,4,0 gpr_occ=4231 fpr_occ=103 gpr_total=7053 fpr_total=290
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_3 = ctx.gpr[3];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_2 = ctx.fpr[2];
    float aot_fpr_4 = ctx.fpr[4];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[2] = aot_gpr_2; ctx.gpr[4] = aot_gpr_4; ctx.gpr[29] = aot_gpr_29; ctx.gpr[5] = aot_gpr_5; ctx.gpr[3] = aot_gpr_3; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[2] = aot_fpr_2; ctx.fpr[4] = aot_fpr_4; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_2 = ctx.gpr[2]; aot_gpr_4 = ctx.gpr[4]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_3 = ctx.gpr[3]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_2 = ctx.fpr[2]; aot_fpr_4 = ctx.fpr[4]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B60000u;
        entry_id = 0u;
        if (entry_delta < 16304u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0215[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0215[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B60000;
    case 2u: goto L_08B60030;
    case 3u: goto L_08B60050;
    case 4u: goto L_08B6006C;
    case 5u: goto L_08B60074;
    case 6u: goto L_08B6009C;
    case 7u: goto L_08B600A8;
    case 8u: goto L_08B600B4;
    case 9u: goto L_08B600C0;
    case 10u: goto L_08B600E4;
    case 11u: goto L_08B600EC;
    case 12u: goto L_08B60110;
    case 13u: goto L_08B6012C;
    case 14u: goto L_08B6014C;
    case 15u: goto L_08B60184;
    case 16u: goto L_08B6018C;
    case 17u: goto L_08B60198;
    case 18u: goto L_08B601A4;
    case 19u: goto L_08B601B4;
    case 20u: goto L_08B601D0;
    case 21u: goto L_08B601D4;
    case 22u: goto L_08B601E8;
    case 23u: goto L_08B601F0;
    case 24u: goto L_08B601F8;
    case 25u: goto L_08B60210;
    case 26u: goto L_08B60218;
    case 27u: goto L_08B6023C;
    case 28u: goto L_08B60250;
    case 29u: goto L_08B6026C;
    case 30u: goto L_08B60284;
    case 31u: goto L_08B6029C;
    case 32u: goto L_08B602C4;
    case 33u: goto L_08B602EC;
    case 34u: goto L_08B60314;
    case 35u: goto L_08B60330;
    case 36u: goto L_08B6033C;
    case 37u: goto L_08B6034C;
    case 38u: goto L_08B60360;
    case 39u: goto L_08B60368;
    case 40u: goto L_08B6037C;
    case 41u: goto L_08B60398;
    case 42u: goto L_08B603D0;
    case 43u: goto L_08B603DC;
    case 44u: goto L_08B603E8;
    case 45u: goto L_08B603F0;
    case 46u: goto L_08B60404;
    case 47u: goto L_08B6045C;
    case 48u: goto L_08B60464;
    case 49u: goto L_08B604B0;
    case 50u: goto L_08B604C4;
    case 51u: goto L_08B60500;
    case 52u: goto L_08B60514;
    case 53u: goto L_08B6056C;
    case 54u: goto L_08B60574;
    case 55u: goto L_08B605C0;
    case 56u: goto L_08B605DC;
    case 57u: goto L_08B605E8;
    case 58u: goto L_08B605F8;
    case 59u: goto L_08B60604;
    case 60u: goto L_08B6061C;
    case 61u: goto L_08B60628;
    case 62u: goto L_08B60630;
    case 63u: goto L_08B60648;
    case 64u: goto L_08B60650;
    case 65u: goto L_08B60654;
    case 66u: goto L_08B60664;
    case 67u: goto L_08B60674;
    case 68u: goto L_08B60680;
    case 69u: goto L_08B606A0;
    case 70u: goto L_08B606AC;
    case 71u: goto L_08B606B4;
    case 72u: goto L_08B606B8;
    case 73u: goto L_08B606D4;
    case 74u: goto L_08B606E4;
    case 75u: goto L_08B606FC;
    case 76u: goto L_08B60708;
    case 77u: goto L_08B60714;
    case 78u: goto L_08B60720;
    case 79u: goto L_08B6072C;
    case 80u: goto L_08B60738;
    case 81u: goto L_08B60744;
    case 82u: goto L_08B60750;
    case 83u: goto L_08B6075C;
    case 84u: goto L_08B60764;
    case 85u: goto L_08B6076C;
    case 86u: goto L_08B607A0;
    case 87u: goto L_08B607AC;
    case 88u: goto L_08B607C0;
    case 89u: goto L_08B607D8;
    case 90u: goto L_08B607E8;
    case 91u: goto L_08B607F0;
    case 92u: goto L_08B607FC;
    case 93u: goto L_08B6080C;
    case 94u: goto L_08B60818;
    case 95u: goto L_08B6082C;
    case 96u: goto L_08B60838;
    case 97u: goto L_08B60860;
    case 98u: goto L_08B60864;
    case 99u: goto L_08B60870;
    case 100u: goto L_08B60878;
    case 101u: goto L_08B60888;
    case 102u: goto L_08B60894;
    case 103u: goto L_08B608A0;
    case 104u: goto L_08B608A4;
    case 105u: goto L_08B608B0;
    case 106u: goto L_08B608BC;
    case 107u: goto L_08B608D0;
    case 108u: goto L_08B60904;
    case 109u: goto L_08B60918;
    case 110u: goto L_08B60928;
    case 111u: goto L_08B6092C;
    case 112u: goto L_08B60934;
    case 113u: goto L_08B6093C;
    case 114u: goto L_08B6094C;
    case 115u: goto L_08B6095C;
    case 116u: goto L_08B6098C;
    case 117u: goto L_08B609A0;
    case 118u: goto L_08B609AC;
    case 119u: goto L_08B609C0;
    case 120u: goto L_08B609E4;
    case 121u: goto L_08B60A28;
    case 122u: goto L_08B60A4C;
    case 123u: goto L_08B60A54;
    case 124u: goto L_08B60A60;
    case 125u: goto L_08B60A68;
    case 126u: goto L_08B60A70;
    case 127u: goto L_08B60A7C;
    case 128u: goto L_08B60A88;
    case 129u: goto L_08B60A94;
    case 130u: goto L_08B60B00;
    case 131u: goto L_08B60B08;
    case 132u: goto L_08B60B18;
    case 133u: goto L_08B60B24;
    case 134u: goto L_08B60B2C;
    case 135u: goto L_08B60B34;
    case 136u: goto L_08B60B40;
    case 137u: goto L_08B60B44;
    case 138u: goto L_08B60B4C;
    case 139u: goto L_08B60B54;
    case 140u: goto L_08B60B5C;
    case 141u: goto L_08B60B74;
    case 142u: goto L_08B60B78;
    case 143u: goto L_08B60B80;
    case 144u: goto L_08B60B8C;
    case 145u: goto L_08B60BB0;
    case 146u: goto L_08B60BB8;
    case 147u: goto L_08B60BC4;
    case 148u: goto L_08B60BCC;
    case 149u: goto L_08B60BF4;
    case 150u: goto L_08B60BFC;
    case 151u: goto L_08B60C04;
    case 152u: goto L_08B60C0C;
    case 153u: goto L_08B60C18;
    case 154u: goto L_08B60C20;
    case 155u: goto L_08B60C30;
    case 156u: goto L_08B60C3C;
    case 157u: goto L_08B60C48;
    case 158u: goto L_08B60C7C;
    case 159u: goto L_08B60CA8;
    case 160u: goto L_08B60CB4;
    case 161u: goto L_08B60D04;
    case 162u: goto L_08B60D1C;
    case 163u: goto L_08B60D44;
    case 164u: goto L_08B60D6C;
    case 165u: goto L_08B60D74;
    case 166u: goto L_08B60D7C;
    case 167u: goto L_08B60D84;
    case 168u: goto L_08B60DA0;
    case 169u: goto L_08B60DB8;
    case 170u: goto L_08B60DC8;
    case 171u: goto L_08B60DDC;
    case 172u: goto L_08B60DF0;
    case 173u: goto L_08B60E20;
    case 174u: goto L_08B60E34;
    case 175u: goto L_08B60E40;
    case 176u: goto L_08B60E50;
    case 177u: goto L_08B60E5C;
    case 178u: goto L_08B60E84;
    case 179u: goto L_08B60E98;
    case 180u: goto L_08B60EB0;
    case 181u: goto L_08B60EB8;
    case 182u: goto L_08B60EC0;
    case 183u: goto L_08B60EC8;
    case 184u: goto L_08B60F30;
    case 185u: goto L_08B60F38;
    case 186u: goto L_08B60F40;
    case 187u: goto L_08B60F64;
    case 188u: goto L_08B60F78;
    case 189u: goto L_08B60F88;
    case 190u: goto L_08B60F94;
    case 191u: goto L_08B60F98;
    case 192u: goto L_08B60FA8;
    case 193u: goto L_08B60FB4;
    case 194u: goto L_08B60FD8;
    case 195u: goto L_08B60FEC;
    case 196u: goto L_08B60FF4;
    case 197u: goto L_08B60FFC;
    case 198u: goto L_08B61004;
    case 199u: goto L_08B61028;
    case 200u: goto L_08B61048;
    case 201u: goto L_08B61054;
    case 202u: goto L_08B6106C;
    case 203u: goto L_08B61088;
    case 204u: goto L_08B610B0;
    case 205u: goto L_08B610CC;
    case 206u: goto L_08B610E0;
    case 207u: goto L_08B61108;
    case 208u: goto L_08B61118;
    case 209u: goto L_08B61124;
    case 210u: goto L_08B6112C;
    case 211u: goto L_08B61130;
    case 212u: goto L_08B61140;
    case 213u: goto L_08B61168;
    case 214u: goto L_08B61178;
    case 215u: goto L_08B61184;
    case 216u: goto L_08B6118C;
    case 217u: goto L_08B61190;
    case 218u: goto L_08B611A8;
    case 219u: goto L_08B611B0;
    case 220u: goto L_08B611C0;
    case 221u: goto L_08B611CC;
    case 222u: goto L_08B611E0;
    case 223u: goto L_08B611FC;
    case 224u: goto L_08B61224;
    case 225u: goto L_08B61234;
    case 226u: goto L_08B61244;
    case 227u: goto L_08B6126C;
    case 228u: goto L_08B6127C;
    case 229u: goto L_08B61288;
    case 230u: goto L_08B61290;
    case 231u: goto L_08B61294;
    case 232u: goto L_08B612A4;
    case 233u: goto L_08B612CC;
    case 234u: goto L_08B612DC;
    case 235u: goto L_08B612E8;
    case 236u: goto L_08B612F4;
    case 237u: goto L_08B61324;
    case 238u: goto L_08B61354;
    case 239u: goto L_08B61364;
    case 240u: goto L_08B61370;
    case 241u: goto L_08B61378;
    case 242u: goto L_08B6137C;
    case 243u: goto L_08B6138C;
    case 244u: goto L_08B613B4;
    case 245u: goto L_08B613C4;
    case 246u: goto L_08B613D0;
    case 247u: goto L_08B613D8;
    case 248u: goto L_08B613DC;
    case 249u: goto L_08B613E8;
    case 250u: goto L_08B613F8;
    case 251u: goto L_08B61414;
    case 252u: goto L_08B61430;
    case 253u: goto L_08B61458;
    case 254u: goto L_08B61470;
    case 255u: goto L_08B614AC;
    case 256u: goto L_08B614D4;
    case 257u: goto L_08B614E4;
    case 258u: goto L_08B614F0;
    case 259u: goto L_08B614F8;
    case 260u: goto L_08B614FC;
    case 261u: goto L_08B6150C;
    case 262u: goto L_08B61534;
    case 263u: goto L_08B61544;
    case 264u: goto L_08B61550;
    case 265u: goto L_08B61558;
    case 266u: goto L_08B6155C;
    case 267u: goto L_08B61578;
    case 268u: goto L_08B61594;
    case 269u: goto L_08B6159C;
    case 270u: goto L_08B615C8;
    case 271u: goto L_08B615D4;
    case 272u: goto L_08B615EC;
    case 273u: goto L_08B61608;
    case 274u: goto L_08B61630;
    case 275u: goto L_08B6164C;
    case 276u: goto L_08B61660;
    case 277u: goto L_08B61684;
    case 278u: goto L_08B61694;
    case 279u: goto L_08B616A4;
    case 280u: goto L_08B616A8;
    case 281u: goto L_08B616B8;
    case 282u: goto L_08B616DC;
    case 283u: goto L_08B616EC;
    case 284u: goto L_08B616FC;
    case 285u: goto L_08B61700;
    case 286u: goto L_08B61708;
    case 287u: goto L_08B61710;
    case 288u: goto L_08B61718;
    case 289u: goto L_08B61738;
    case 290u: goto L_08B61740;
    case 291u: goto L_08B61750;
    case 292u: goto L_08B6175C;
    case 293u: goto L_08B61770;
    case 294u: goto L_08B6178C;
    case 295u: goto L_08B617B4;
    case 296u: goto L_08B617C0;
    case 297u: goto L_08B617D0;
    case 298u: goto L_08B617F4;
    case 299u: goto L_08B61804;
    case 300u: goto L_08B61814;
    case 301u: goto L_08B61818;
    case 302u: goto L_08B61828;
    case 303u: goto L_08B6184C;
    case 304u: goto L_08B6185C;
    case 305u: goto L_08B6186C;
    case 306u: goto L_08B61874;
    case 307u: goto L_08B618A0;
    case 308u: goto L_08B618D0;
    case 309u: goto L_08B618E0;
    case 310u: goto L_08B618F0;
    case 311u: goto L_08B618F4;
    case 312u: goto L_08B61904;
    case 313u: goto L_08B61928;
    case 314u: goto L_08B61938;
    case 315u: goto L_08B61948;
    case 316u: goto L_08B61950;
    case 317u: goto L_08B6195C;
    case 318u: goto L_08B61970;
    case 319u: goto L_08B61988;
    case 320u: goto L_08B619A4;
    case 321u: goto L_08B619CC;
    case 322u: goto L_08B619E4;
    case 323u: goto L_08B619FC;
    case 324u: goto L_08B61A04;
    case 325u: goto L_08B61A38;
    case 326u: goto L_08B61A68;
    case 327u: goto L_08B61A78;
    case 328u: goto L_08B61A84;
    case 329u: goto L_08B61A8C;
    case 330u: goto L_08B61A90;
    case 331u: goto L_08B61AA0;
    case 332u: goto L_08B61AC8;
    case 333u: goto L_08B61AD8;
    case 334u: goto L_08B61AE4;
    case 335u: goto L_08B61AEC;
    case 336u: goto L_08B61AF0;
    case 337u: goto L_08B61B10;
    case 338u: goto L_08B61B28;
    case 339u: goto L_08B61B38;
    case 340u: goto L_08B61B40;
    case 341u: goto L_08B61B60;
    case 342u: goto L_08B61B78;
    case 343u: goto L_08B61BA0;
    case 344u: goto L_08B61BAC;
    case 345u: goto L_08B61BC8;
    case 346u: goto L_08B61BD8;
    case 347u: goto L_08B61BE4;
    case 348u: goto L_08B61BEC;
    case 349u: goto L_08B61C00;
    case 350u: goto L_08B61C08;
    case 351u: goto L_08B61C10;
    case 352u: goto L_08B61C18;
    case 353u: goto L_08B61C24;
    case 354u: goto L_08B61C2C;
    case 355u: goto L_08B61C70;
    case 356u: goto L_08B61C78;
    case 357u: goto L_08B61C9C;
    case 358u: goto L_08B61CA8;
    case 359u: goto L_08B61CB0;
    case 360u: goto L_08B61CBC;
    case 361u: goto L_08B61CE4;
    case 362u: goto L_08B61CEC;
    case 363u: goto L_08B61CF4;
    case 364u: goto L_08B61D00;
    case 365u: goto L_08B61D28;
    case 366u: goto L_08B61D2C;
    case 367u: goto L_08B61D30;
    case 368u: goto L_08B61D3C;
    case 369u: goto L_08B61D4C;
    case 370u: goto L_08B61D5C;
    case 371u: goto L_08B61D64;
    case 372u: goto L_08B61D74;
    case 373u: goto L_08B61DA0;
    case 374u: goto L_08B61DA8;
    case 375u: goto L_08B61DAC;
    case 376u: goto L_08B61DB0;
    case 377u: goto L_08B61DF8;
    case 378u: goto L_08B61E00;
    case 379u: goto L_08B61E08;
    case 380u: goto L_08B61E0C;
    case 381u: goto L_08B61E24;
    case 382u: goto L_08B61E68;
    case 383u: goto L_08B61E70;
    case 384u: goto L_08B61E78;
    case 385u: goto L_08B61E80;
    case 386u: goto L_08B61EA4;
    case 387u: goto L_08B61ECC;
    case 388u: goto L_08B61ED4;
    case 389u: goto L_08B61EE4;
    case 390u: goto L_08B61EF4;
    case 391u: goto L_08B61F28;
    case 392u: goto L_08B61F34;
    case 393u: goto L_08B61F44;
    case 394u: goto L_08B61F4C;
    case 395u: goto L_08B61F5C;
    case 396u: goto L_08B61F90;
    case 397u: goto L_08B61F9C;
    case 398u: goto L_08B61FB8;
    case 399u: goto L_08B61FC0;
    case 400u: goto L_08B61FD0;
    case 401u: goto L_08B62014;
    case 402u: goto L_08B62020;
    case 403u: goto L_08B62034;
    case 404u: goto L_08B62044;
    case 405u: goto L_08B62050;
    case 406u: goto L_08B62060;
    case 407u: goto L_08B62064;
    case 408u: goto L_08B62078;
    case 409u: goto L_08B62080;
    case 410u: goto L_08B620A0;
    case 411u: goto L_08B620A8;
    case 412u: goto L_08B620B8;
    case 413u: goto L_08B620BC;
    case 414u: goto L_08B620D4;
    case 415u: goto L_08B620DC;
    case 416u: goto L_08B620E8;
    case 417u: goto L_08B62148;
    case 418u: goto L_08B62150;
    case 419u: goto L_08B62154;
    case 420u: goto L_08B62174;
    case 421u: goto L_08B6217C;
    case 422u: goto L_08B62180;
    case 423u: goto L_08B621E4;
    case 424u: goto L_08B62200;
    case 425u: goto L_08B62224;
    case 426u: goto L_08B6223C;
    case 427u: goto L_08B62244;
    case 428u: goto L_08B62258;
    case 429u: goto L_08B62264;
    case 430u: goto L_08B62284;
    case 431u: goto L_08B6229C;
    case 432u: goto L_08B622B4;
    case 433u: goto L_08B622B8;
    case 434u: goto L_08B622CC;
    case 435u: goto L_08B622D4;
    case 436u: goto L_08B622F0;
    case 437u: goto L_08B622FC;
    case 438u: goto L_08B62300;
    case 439u: goto L_08B6230C;
    case 440u: goto L_08B62318;
    case 441u: goto L_08B62320;
    case 442u: goto L_08B62324;
    case 443u: goto L_08B62330;
    case 444u: goto L_08B62338;
    case 445u: goto L_08B62348;
    case 446u: goto L_08B6237C;
    case 447u: goto L_08B62388;
    case 448u: goto L_08B6239C;
    case 449u: goto L_08B623AC;
    case 450u: goto L_08B623C4;
    case 451u: goto L_08B623D0;
    case 452u: goto L_08B623DC;
    case 453u: goto L_08B623E0;
    case 454u: goto L_08B623E8;
    case 455u: goto L_08B623F8;
    case 456u: goto L_08B62400;
    case 457u: goto L_08B6241C;
    case 458u: goto L_08B62424;
    case 459u: goto L_08B62434;
    case 460u: goto L_08B62458;
    case 461u: goto L_08B62460;
    case 462u: goto L_08B62470;
    case 463u: goto L_08B62478;
    case 464u: goto L_08B62480;
    case 465u: goto L_08B62484;
    case 466u: goto L_08B6249C;
    case 467u: goto L_08B624CC;
    case 468u: goto L_08B624E4;
    case 469u: goto L_08B624F4;
    case 470u: goto L_08B624FC;
    case 471u: goto L_08B62518;
    case 472u: goto L_08B62524;
    case 473u: goto L_08B62528;
    case 474u: goto L_08B62534;
    case 475u: goto L_08B6253C;
    case 476u: goto L_08B62544;
    case 477u: goto L_08B6254C;
    case 478u: goto L_08B6256C;
    case 479u: goto L_08B625A0;
    case 480u: goto L_08B625AC;
    case 481u: goto L_08B625B8;
    case 482u: goto L_08B625C8;
    case 483u: goto L_08B625E4;
    case 484u: goto L_08B625EC;
    case 485u: goto L_08B625F4;
    case 486u: goto L_08B625F8;
    case 487u: goto L_08B62600;
    case 488u: goto L_08B6260C;
    case 489u: goto L_08B62618;
    case 490u: goto L_08B62620;
    case 491u: goto L_08B62640;
    case 492u: goto L_08B62648;
    case 493u: goto L_08B62678;
    case 494u: goto L_08B62680;
    case 495u: goto L_08B62698;
    case 496u: goto L_08B626A4;
    case 497u: goto L_08B626C8;
    case 498u: goto L_08B626DC;
    case 499u: goto L_08B626E4;
    case 500u: goto L_08B626F0;
    case 501u: goto L_08B62700;
    case 502u: goto L_08B6270C;
    case 503u: goto L_08B62718;
    case 504u: goto L_08B62728;
    case 505u: goto L_08B62744;
    case 506u: goto L_08B62750;
    case 507u: goto L_08B62758;
    case 508u: goto L_08B62764;
    case 509u: goto L_08B62768;
    case 510u: goto L_08B62778;
    case 511u: goto L_08B6279C;
    case 512u: goto L_08B627B0;
    case 513u: goto L_08B627BC;
    case 514u: goto L_08B627E4;
    case 515u: goto L_08B627F0;
    case 516u: goto L_08B62814;
    case 517u: goto L_08B6285C;
    case 518u: goto L_08B62868;
    case 519u: goto L_08B6288C;
    case 520u: goto L_08B62894;
    case 521u: goto L_08B628B8;
    case 522u: goto L_08B628C0;
    case 523u: goto L_08B628D0;
    case 524u: goto L_08B628D4;
    case 525u: goto L_08B628DC;
    case 526u: goto L_08B628E4;
    case 527u: goto L_08B628F0;
    case 528u: goto L_08B6290C;
    case 529u: goto L_08B62914;
    case 530u: goto L_08B6291C;
    case 531u: goto L_08B62928;
    case 532u: goto L_08B62934;
    case 533u: goto L_08B62958;
    case 534u: goto L_08B62964;
    case 535u: goto L_08B62984;
    case 536u: goto L_08B62998;
    case 537u: goto L_08B6299C;
    case 538u: goto L_08B629F8;
    case 539u: goto L_08B62A04;
    case 540u: goto L_08B62A10;
    case 541u: goto L_08B62A1C;
    case 542u: goto L_08B62A2C;
    case 543u: goto L_08B62A40;
    case 544u: goto L_08B62A48;
    case 545u: goto L_08B62A60;
    case 546u: goto L_08B62A64;
    case 547u: goto L_08B62A68;
    case 548u: goto L_08B62A70;
    case 549u: goto L_08B62A8C;
    case 550u: goto L_08B62A94;
    case 551u: goto L_08B62A9C;
    case 552u: goto L_08B62AB8;
    case 553u: goto L_08B62AC4;
    case 554u: goto L_08B62AD8;
    case 555u: goto L_08B62AE4;
    case 556u: goto L_08B62AEC;
    case 557u: goto L_08B62AF8;
    case 558u: goto L_08B62AFC;
    case 559u: goto L_08B62B24;
    case 560u: goto L_08B62B30;
    case 561u: goto L_08B62B38;
    case 562u: goto L_08B62B44;
    case 563u: goto L_08B62B48;
    case 564u: goto L_08B62B5C;
    case 565u: goto L_08B62B64;
    case 566u: goto L_08B62B74;
    case 567u: goto L_08B62B90;
    case 568u: goto L_08B62B94;
    case 569u: goto L_08B62B98;
    case 570u: goto L_08B62BA0;
    case 571u: goto L_08B62BB0;
    case 572u: goto L_08B62BC8;
    case 573u: goto L_08B62BD4;
    case 574u: goto L_08B62BDC;
    case 575u: goto L_08B62BF8;
    case 576u: goto L_08B62C04;
    case 577u: goto L_08B62C30;
    case 578u: goto L_08B62C3C;
    case 579u: goto L_08B62C40;
    case 580u: goto L_08B62C48;
    case 581u: goto L_08B62C74;
    case 582u: goto L_08B62C80;
    case 583u: goto L_08B62C9C;
    case 584u: goto L_08B62CA0;
    case 585u: goto L_08B62CAC;
    case 586u: goto L_08B62CB8;
    case 587u: goto L_08B62CEC;
    case 588u: goto L_08B62CF8;
    case 589u: goto L_08B62D14;
    case 590u: goto L_08B62D20;
    case 591u: goto L_08B62D30;
    case 592u: goto L_08B62D40;
    case 593u: goto L_08B62D44;
    case 594u: goto L_08B62D4C;
    case 595u: goto L_08B62D54;
    case 596u: goto L_08B62D60;
    case 597u: goto L_08B62D70;
    case 598u: goto L_08B62D78;
    case 599u: goto L_08B62D84;
    case 600u: goto L_08B62D90;
    case 601u: goto L_08B62D98;
    case 602u: goto L_08B62DA4;
    case 603u: goto L_08B62DA8;
    case 604u: goto L_08B62DB0;
    case 605u: goto L_08B62DB8;
    case 606u: goto L_08B62DC0;
    case 607u: goto L_08B62DC4;
    case 608u: goto L_08B62DD0;
    case 609u: goto L_08B62DE4;
    case 610u: goto L_08B62DFC;
    case 611u: goto L_08B62E10;
    case 612u: goto L_08B62E24;
    case 613u: goto L_08B62E2C;
    case 614u: goto L_08B62E30;
    case 615u: goto L_08B62E38;
    case 616u: goto L_08B62E40;
    case 617u: goto L_08B62E48;
    case 618u: goto L_08B62E58;
    case 619u: goto L_08B62E5C;
    case 620u: goto L_08B62E60;
    case 621u: goto L_08B62E68;
    case 622u: goto L_08B62E78;
    case 623u: goto L_08B62E7C;
    case 624u: goto L_08B62E84;
    case 625u: goto L_08B62E9C;
    case 626u: goto L_08B62EA8;
    case 627u: goto L_08B62EAC;
    case 628u: goto L_08B62EF8;
    case 629u: goto L_08B62F04;
    case 630u: goto L_08B62F10;
    case 631u: goto L_08B62F18;
    case 632u: goto L_08B62F28;
    case 633u: goto L_08B62F3C;
    case 634u: goto L_08B62F40;
    case 635u: goto L_08B62F50;
    case 636u: goto L_08B62F54;
    case 637u: goto L_08B62F58;
    case 638u: goto L_08B62F68;
    case 639u: goto L_08B62F70;
    case 640u: goto L_08B62F78;
    case 641u: goto L_08B62F80;
    case 642u: goto L_08B62F9C;
    case 643u: goto L_08B62FA4;
    case 644u: goto L_08B62FA8;
    case 645u: goto L_08B62FB0;
    case 646u: goto L_08B62FBC;
    case 647u: goto L_08B62FC0;
    case 648u: goto L_08B62FC8;
    case 649u: goto L_08B62FD4;
    case 650u: goto L_08B62FE0;
    case 651u: goto L_08B62FE8;
    case 652u: goto L_08B63014;
    case 653u: goto L_08B63040;
    case 654u: goto L_08B63054;
    case 655u: goto L_08B63060;
    case 656u: goto L_08B63074;
    case 657u: goto L_08B6308C;
    case 658u: goto L_08B6309C;
    case 659u: goto L_08B630B0;
    case 660u: goto L_08B630BC;
    case 661u: goto L_08B630CC;
    case 662u: goto L_08B630D4;
    case 663u: goto L_08B630E4;
    case 664u: goto L_08B630EC;
    case 665u: goto L_08B630F8;
    case 666u: goto L_08B63118;
    case 667u: goto L_08B63120;
    case 668u: goto L_08B63128;
    case 669u: goto L_08B6312C;
    case 670u: goto L_08B63134;
    case 671u: goto L_08B63140;
    case 672u: goto L_08B63148;
    case 673u: goto L_08B63150;
    case 674u: goto L_08B63158;
    case 675u: goto L_08B63180;
    case 676u: goto L_08B63190;
    case 677u: goto L_08B631AC;
    case 678u: goto L_08B631B4;
    case 679u: goto L_08B631B8;
    case 680u: goto L_08B631C8;
    case 681u: goto L_08B631E8;
    case 682u: goto L_08B631F8;
    case 683u: goto L_08B63214;
    case 684u: goto L_08B6321C;
    case 685u: goto L_08B63220;
    case 686u: goto L_08B63230;
    case 687u: goto L_08B63258;
    case 688u: goto L_08B63264;
    case 689u: goto L_08B63274;
    case 690u: goto L_08B6327C;
    case 691u: goto L_08B63284;
    case 692u: goto L_08B6329C;
    case 693u: goto L_08B63358;
    case 694u: goto L_08B63398;
    case 695u: goto L_08B633A8;
    case 696u: goto L_08B633B8;
    case 697u: goto L_08B633C0;
    case 698u: goto L_08B633D0;
    case 699u: goto L_08B633DC;
    case 700u: goto L_08B633E4;
    case 701u: goto L_08B633F4;
    case 702u: goto L_08B63408;
    case 703u: goto L_08B63414;
    case 704u: goto L_08B63424;
    case 705u: goto L_08B6342C;
    case 706u: goto L_08B63460;
    case 707u: goto L_08B63468;
    case 708u: goto L_08B63470;
    case 709u: goto L_08B634AC;
    case 710u: goto L_08B634C0;
    case 711u: goto L_08B634DC;
    case 712u: goto L_08B634E8;
    case 713u: goto L_08B634EC;
    case 714u: goto L_08B634FC;
    case 715u: goto L_08B63530;
    case 716u: goto L_08B6353C;
    case 717u: goto L_08B63548;
    case 718u: goto L_08B63554;
    case 719u: goto L_08B63558;
    case 720u: goto L_08B63568;
    case 721u: goto L_08B63570;
    case 722u: goto L_08B6357C;
    case 723u: goto L_08B63584;
    case 724u: goto L_08B6358C;
    case 725u: goto L_08B6359C;
    case 726u: goto L_08B635A4;
    case 727u: goto L_08B635B0;
    case 728u: goto L_08B635BC;
    case 729u: goto L_08B635D0;
    case 730u: goto L_08B635E4;
    case 731u: goto L_08B63600;
    case 732u: goto L_08B63608;
    case 733u: goto L_08B63628;
    case 734u: goto L_08B63630;
    case 735u: goto L_08B63648;
    case 736u: goto L_08B63650;
    case 737u: goto L_08B63658;
    case 738u: goto L_08B636B4;
    case 739u: goto L_08B636CC;
    case 740u: goto L_08B63768;
    case 741u: goto L_08B63774;
    case 742u: goto L_08B63790;
    case 743u: goto L_08B637C8;
    case 744u: goto L_08B637DC;
    case 745u: goto L_08B63800;
    case 746u: goto L_08B63808;
    case 747u: goto L_08B63814;
    case 748u: goto L_08B63818;
    case 749u: goto L_08B63828;
    case 750u: goto L_08B63834;
    case 751u: goto L_08B63848;
    case 752u: goto L_08B63858;
    case 753u: goto L_08B63874;
    case 754u: goto L_08B63878;
    case 755u: goto L_08B638A0;
    case 756u: goto L_08B638AC;
    case 757u: goto L_08B638B4;
    case 758u: goto L_08B638C8;
    case 759u: goto L_08B638E4;
    case 760u: goto L_08B63900;
    case 761u: goto L_08B63908;
    case 762u: goto L_08B63910;
    case 763u: goto L_08B63928;
    case 764u: goto L_08B63938;
    case 765u: goto L_08B63954;
    case 766u: goto L_08B63990;
    case 767u: goto L_08B63998;
    case 768u: goto L_08B639A8;
    case 769u: goto L_08B639BC;
    case 770u: goto L_08B639CC;
    case 771u: goto L_08B639E8;
    case 772u: goto L_08B639F0;
    case 773u: goto L_08B63A18;
    case 774u: goto L_08B63A34;
    case 775u: goto L_08B63A3C;
    case 776u: goto L_08B63A6C;
    case 777u: goto L_08B63A78;
    case 778u: goto L_08B63A90;
    case 779u: goto L_08B63A98;
    case 780u: goto L_08B63AB4;
    case 781u: goto L_08B63AB8;
    case 782u: goto L_08B63AD0;
    case 783u: goto L_08B63AD8;
    case 784u: goto L_08B63AEC;
    case 785u: goto L_08B63B1C;
    case 786u: goto L_08B63B38;
    case 787u: goto L_08B63B3C;
    case 788u: goto L_08B63B58;
    case 789u: goto L_08B63B70;
    case 790u: goto L_08B63B78;
    case 791u: goto L_08B63B94;
    case 792u: goto L_08B63B98;
    case 793u: goto L_08B63BB4;
    case 794u: goto L_08B63BC8;
    case 795u: goto L_08B63BF8;
    case 796u: goto L_08B63C14;
    case 797u: goto L_08B63C1C;
    case 798u: goto L_08B63C28;
    case 799u: goto L_08B63C38;
    case 800u: goto L_08B63C4C;
    case 801u: goto L_08B63C58;
    case 802u: goto L_08B63C74;
    case 803u: goto L_08B63C7C;
    case 804u: goto L_08B63C8C;
    case 805u: goto L_08B63CA8;
    case 806u: goto L_08B63CD8;
    case 807u: goto L_08B63CF4;
    case 808u: goto L_08B63D04;
    case 809u: goto L_08B63D14;
    case 810u: goto L_08B63D28;
    case 811u: goto L_08B63D44;
    case 812u: goto L_08B63D68;
    case 813u: goto L_08B63D78;
    case 814u: goto L_08B63D84;
    case 815u: goto L_08B63DA0;
    case 816u: goto L_08B63DB0;
    case 817u: goto L_08B63DC0;
    case 818u: goto L_08B63DDC;
    case 819u: goto L_08B63DE0;
    case 820u: goto L_08B63DEC;
    case 821u: goto L_08B63E0C;
    case 822u: goto L_08B63E20;
    case 823u: goto L_08B63E2C;
    case 824u: goto L_08B63E48;
    case 825u: goto L_08B63E50;
    case 826u: goto L_08B63E60;
    case 827u: goto L_08B63E7C;
    case 828u: goto L_08B63EAC;
    case 829u: goto L_08B63EC8;
    case 830u: goto L_08B63EDC;
    case 831u: goto L_08B63EF0;
    case 832u: goto L_08B63F0C;
    case 833u: goto L_08B63F30;
    case 834u: goto L_08B63F40;
    case 835u: goto L_08B63F4C;
    case 836u: goto L_08B63F68;
    case 837u: goto L_08B63F78;
    case 838u: goto L_08B63F88;
    case 839u: goto L_08B63FA4;
    case 840u: goto L_08B63FAC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B60000:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_6 << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + aot_gpr_4);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B60030u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 763u, 0x08B5F758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60030u) goto L_08B60030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60030:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    ctx.gpr[11] = (0u | 32u);
    aot_gpr_4 = (ctx.gpr[11] - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_5) < 11 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (16368u << 16u);
      if (branch_taken) {
          goto L_08B6009C;
      }
      goto L_08B60050;
    }
L_08B60050:
    ctx.gpr[8] = (0u | 11u);
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_5);
    ctx.gpr[9] = (aot_gpr_6 >> (ctx.gpr[8] & 31u));
    aot_gpr_4 = (ctx.gpr[9] | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B60074;
      }
      goto L_08B6006C;
    }
L_08B6006C:
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B60074;
L_08B60074:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21));
    aot_gpr_5 = (aot_gpr_6 << (aot_gpr_5 & 31u));
    aot_gpr_4 = (aot_gpr_4 >> (ctx.gpr[8] & 31u));
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
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
L_08B6009C:
    aot_gpr_2 = (ctx.gpr[10] | 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B600B4;
      }
      goto L_08B600A8;
    }
L_08B600A8:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08B600B4;
L_08B600B4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
        goto L_08B60110;
    }
    goto L_08B600C0;
L_08B600C0:
    aot_gpr_6 = (aot_gpr_6 << (aot_gpr_5 & 31u));
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[11] - aot_gpr_5);
    ctx.gpr[11] = (ctx.gpr[10] >> (aot_gpr_4 & 31u));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B600EC;
      }
      goto L_08B600E4;
    }
L_08B600E4:
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B600EC;
L_08B600EC:
    aot_gpr_5 = (ctx.gpr[10] << (aot_gpr_5 & 31u));
    aot_gpr_4 = (aot_gpr_6 >> (aot_gpr_4 & 31u));
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
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
L_08B60110:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
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
L_08B6012C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6014Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 726u, 0x08B5F43Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6014Cu) goto L_08B6014C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6014C:
    aot_gpr_5 = (16u << 16u);
    ctx.gpr[11] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[12] = (aot_gpr_2 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_3 = (ctx.gpr[12] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (aot_gpr_4 & ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] >> 20u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B6018C;
      }
      goto L_08B60184;
    }
L_08B60184:
    aot_gpr_4 = (16u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | aot_gpr_4);
    goto L_08B6018C;
L_08B6018C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B601F0;
      }
      goto L_08B60198;
    }
L_08B60198:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08B601A4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 775u, 0x08B5F7D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B601A4u) goto L_08B601A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B601A4:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_5);
      if (branch_taken) {
          goto L_08B601D0;
      }
      goto L_08B601B4;
    }
L_08B601B4:
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[11] << (ctx.gpr[7] & 31u));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_3 + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] >> (aot_gpr_5 & 31u));
      if (branch_taken) {
          goto L_08B601D4;
      }
      goto L_08B601D0;
    }
L_08B601D0:
    aot_mem.aot_direct_store32(aot_gpr_3 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08B601D4;
L_08B601D4:
    aot_gpr_6 = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_3 + static_cast<std::uint32_t>(4), aot_gpr_6);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[11] = (0u | 2u);
        goto L_08B601E8;
    }
    goto L_08B601E8;
L_08B601E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B60210;
      }
      goto L_08B601F0;
    }
L_08B601F0:
    ctx.gpr[31] = (0x08B601F8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 775u, 0x08B5F7D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B601F8u) goto L_08B601F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B601F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_3 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_5);
    goto L_08B60210;
L_08B60210:
    if (ctx.gpr[10] == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1074));
        goto L_08B6023C;
    }
    goto L_08B60218;
L_08B60218:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1075));
    aot_gpr_6 = (0u | 53u);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_2 = (ctx.gpr[12] | 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
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
L_08B6023C:
    aot_gpr_5 = (ctx.gpr[11] << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_3 + aot_gpr_5);
    ctx.gpr[31] = (0x08B60250u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 763u, 0x08B5F758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60250u) goto L_08B60250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60250:
    aot_gpr_4 = (ctx.gpr[11] << 5u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_2 = (ctx.gpr[12] | 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
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
L_08B6026C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[12] = (aot_gpr_5 | 0u);
    ctx.gpr[13] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B60284u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_08B60000;
L_08B60284:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08B6029Cu);
    aot_gpr_4 = (ctx.gpr[12] | 0u);
    goto L_08B60000;
L_08B6029C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[14] - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_3);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_2);
      if (branch_taken) {
          goto L_08B602EC;
      }
      goto L_08B602C4;
    }
L_08B602C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 << 20u);
    aot_gpr_4 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B60314;
      }
      goto L_08B602EC;
    }
L_08B602EC:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 << 20u);
    aot_gpr_4 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08B60314;
L_08B60314:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B60330u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    goto L_08B62348;
L_08B60330:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
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
L_08B6033C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_12)) && aot_fpr_12 == aot_fpr_12)) ? 0x00800000u : 0u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B603E8;
      }
      goto L_08B6034C;
    }
L_08B6034C:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[1])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B60368;
      }
      goto L_08B60360;
    }
L_08B60360:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B60368;
L_08B60368:
    aot_fpr_4 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-24280)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_4 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B604B0;
      }
      goto L_08B6037C;
    }
L_08B6037C:
    aot_fpr_12 = aot_fpr_4 / aot_fpr_12;
    aot_gpr_5 = (2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-24276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[1])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[9] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B603F0;
      }
      goto L_08B60398;
    }
L_08B60398:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.gpr[8] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-24272)));
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24268)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    aot_gpr_6 = (2233u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-24264)));
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_2 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_2 = fs * ft; }
    ctx.fpr[6] = aot_fpr_2 + ctx.fpr[8];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[5] + aot_fpr_4;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_2 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_2 = fs * ft; }
    goto L_08B603D0;
L_08B603D0:
    aot_gpr_5 = (2233u << 16u);
    aot_fpr_4 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-24244)));
    aot_fpr_12 = aot_fpr_4 - aot_fpr_2;
    goto L_08B603DC;
L_08B603DC:
    ctx.fpr[11] = std::bit_cast<float>(aot_gpr_3);
    aot_fpr_4 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[11])));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_4; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    goto L_08B603E8;
L_08B603E8:
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
L_08B603F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[14])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_2 = aot_fpr_12 + aot_fpr_4;
        goto L_08B60464;
    }
    goto L_08B60404;
L_08B60404:
    ctx.gpr[14] = (2233u << 16u);
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-24256)));
    ctx.gpr[13] = (2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-24272)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[8] = aot_fpr_12 - aot_fpr_0;
    ctx.gpr[12] = (2233u << 16u);
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-24268)));
    ctx.fpr[9] = ctx.fpr[10] + aot_fpr_4;
    ctx.gpr[11] = (2233u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-24264)));
    ctx.gpr[10] = (2233u << 16u);
    aot_fpr_12 = ctx.fpr[8] / ctx.fpr[9];
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-24252)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[6] + ctx.fpr[7];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[16] + aot_fpr_4;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_2 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_2 = fs * ft; }
    goto L_08B6045C;
L_08B6045C:
    aot_fpr_2 = aot_fpr_2 + aot_fpr_0;
    goto L_08B603D0;
L_08B60464:
    ctx.fpr[6] = aot_fpr_12 - aot_fpr_4;
    aot_gpr_4 = (2233u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-24272)));
    ctx.gpr[25] = (2233u << 16u);
    ctx.fpr[11] = ctx.fpr[6] / aot_fpr_2;
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-24268)));
    ctx.gpr[24] = (2233u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-24264)));
    ctx.gpr[15] = (2233u << 16u);
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-24248)));
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[19] + ctx.fpr[3];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + aot_fpr_4;
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_2 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_2 = fs * ft; }
    goto L_08B6045C;
L_08B604B0:
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-24276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[7])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[10] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B60500;
      }
      goto L_08B604C4;
    }
L_08B604C4:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.gpr[9] = (2233u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24272)));
    ctx.gpr[8] = (2233u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-24268)));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24264)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[11] + ctx.fpr[13];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[8] + aot_fpr_4;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B603DC;
L_08B60500:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-24260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[18])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_2 = aot_fpr_12 + aot_fpr_4;
        goto L_08B60574;
    }
    goto L_08B60514;
L_08B60514:
    ctx.gpr[15] = (2233u << 16u);
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-24256)));
    ctx.gpr[14] = (2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-24272)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = aot_fpr_12 - aot_fpr_0;
    ctx.gpr[13] = (2233u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-24268)));
    ctx.fpr[14] = ctx.fpr[15] + aot_fpr_4;
    ctx.gpr[12] = (2233u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-24264)));
    ctx.gpr[11] = (2233u << 16u);
    aot_fpr_12 = ctx.fpr[13] / ctx.fpr[14];
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-24252)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[3] + ctx.fpr[8];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[5] + aot_fpr_4;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_2 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_2 = fs * ft; }
    goto L_08B6056C;
L_08B6056C:
    aot_fpr_12 = aot_fpr_2 + aot_fpr_0;
    goto L_08B603DC;
L_08B60574:
    ctx.fpr[10] = aot_fpr_12 - aot_fpr_4;
    aot_gpr_5 = (2233u << 16u);
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-24272)));
    aot_gpr_4 = (2233u << 16u);
    ctx.fpr[16] = ctx.fpr[10] / aot_fpr_2;
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-24268)));
    ctx.gpr[25] = (2233u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-24264)));
    ctx.gpr[24] = (2233u << 16u);
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-24248)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[3] + ctx.fpr[8];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    aot_fpr_12 = ctx.fpr[5] + ctx.fpr[6];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[18] + aot_fpr_4;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_2 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_2 = fs * ft; }
    goto L_08B6056C;
L_08B605C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[8];
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B605E8;
      }
      goto L_08B605DC;
    }
L_08B605DC:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    ctx.gpr[7] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B60604;
      }
      goto L_08B605E8;
    }
L_08B605E8:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x08B605F8u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B605F8u) goto L_08B605F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B605F8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60604:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (0u | 5u);
    ctx.gpr[31] = (0x08B6061Cu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B60648;
L_08B6061C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60628:
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
L_08B60630:
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
L_08B60648:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_2 = (0u + 0u);
      if (branch_taken) {
          goto L_08B60654;
      }
      goto L_08B60650;
    }
L_08B60650:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B60654;
L_08B60654:
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
L_08B60664:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B60674u);
    aot_gpr_4 = (0u | 4u);
    goto L_08B607D8;
L_08B60674:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60680:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B606AC;
      }
      goto L_08B606A0;
    }
L_08B606A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17068)));
    if (ctx.gpr[16] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17068)));
        goto L_08B606B8;
    }
    goto L_08B606AC;
L_08B606AC:
    ctx.gpr[31] = (0x08B606B4u);
    goto L_08B60664;
L_08B606B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17068)));
    goto L_08B606B8;
L_08B606B8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17068), ctx.gpr[16]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B606D4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B60764;
      }
      goto L_08B606E4;
    }
L_08B606E4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25032)));
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
L_08B606FC:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25416));
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
L_08B60708:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25396));
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
L_08B60714:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25340));
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
L_08B60720:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25288));
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
L_08B6072C:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25220));
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
L_08B60738:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25188));
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
L_08B60744:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25152));
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
L_08B60750:
    aot_gpr_2 = (2233u << 16u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25128));
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
L_08B6075C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-25100));
    goto L_08B60764;
L_08B60764:
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
L_08B6076C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (2233u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B607A0u);
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(-25044));
    goto L_08B606D4;
L_08B607A0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B607ACu);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    goto L_08B606D4;
L_08B607AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B607C0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 425u, 0x08B55920u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B607C0u) goto L_08B607C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B607C0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
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
L_08B607D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B607E8u);
    goto L_08B6076C;
L_08B607E8:
    ctx.gpr[31] = (0x08B607F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B607F0u) goto L_08B607F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B607F0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B607FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6080Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6080Cu) goto L_08B6080C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6080C:
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
L_08B60818:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6082Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6082Cu) goto L_08B6082C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6082C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60838:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2235u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-29728));
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B60888;
      }
      goto L_08B60860;
    }
L_08B60860:
    aot_gpr_4 = (1u << 16u);
    goto L_08B60864;
L_08B60864:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B60878;
    }
    goto L_08B60870;
L_08B60870:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B60878;
      }
      goto L_08B60878;
    }
L_08B60878:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B60864;
      }
      goto L_08B60888;
    }
L_08B60888:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B60928;
      }
      goto L_08B60894;
    }
L_08B60894:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    if (static_cast<std::int32_t>(aot_gpr_5) < 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B6092C;
    }
    goto L_08B608A0;
L_08B608A0:
    ctx.gpr[9] = (0u | 0u);
    goto L_08B608A4;
L_08B608A4:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B60918;
      }
      goto L_08B608B0;
    }
L_08B608B0:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    goto L_08B608BC;
L_08B608BC:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B60904;
    }
    goto L_08B608D0;
L_08B608D0:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08B60904;
L_08B60904:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B608BC;
      }
      goto L_08B60918;
    }
L_08B60918:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B608A4;
      }
      goto L_08B60928;
    }
L_08B60928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B6092C;
L_08B6092C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6094C;
      }
      goto L_08B60934;
    }
L_08B60934:
    jump_target = aot_gpr_4;
    ctx.gpr[31] = (0x08B6093Cu);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6093Cu) goto L_08B6093C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6093C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B60934;
      }
      goto L_08B6094C;
    }
L_08B6094C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
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
L_08B6095C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B609C0;
      }
      goto L_08B6098C;
    }
L_08B6098C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B609C0;
      }
      goto L_08B609A0;
    }
L_08B609A0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08B609ACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B609ACu) goto L_08B609AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B609AC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B609A0;
      }
      goto L_08B609C0;
    }
L_08B609C0:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
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
L_08B609E4:
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(18412)));
    ctx.gpr[9] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(18412), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[8]{0u, 0u, 0u, 0u, aot_gpr_6, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(32), 0u);
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
L_08B60A28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2234u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(18392)));
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 - ctx.gpr[8]);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B60A60;
      }
      goto L_08B60A4C;
    }
L_08B60A4C:
    ctx.gpr[31] = (0x08B60A54u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60A54u) goto L_08B60A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60A54:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60A60:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B60A7C;
      }
      goto L_08B60A68;
    }
L_08B60A68:
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B60A70u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60A70u) goto L_08B60A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60A70:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60A7C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08B60A88u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60A88u) goto L_08B60A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60A88:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60A94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_2 = (0u < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_2 | ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B60B08;
      }
      goto L_08B60B00;
    }
L_08B60B00:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
        goto L_08B60B78;
    }
    goto L_08B60B08;
L_08B60B08:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B60B5C;
      }
      goto L_08B60B18;
    }
L_08B60B18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18392)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B60B34;
      }
      goto L_08B60B24;
    }
L_08B60B24:
    ctx.gpr[31] = (0x08B60B2Cu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60B2Cu) goto L_08B60B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60B2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B60B44;
      }
      goto L_08B60B34;
    }
L_08B60B34:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08B60B40u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60B40u) goto L_08B60B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60B40:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08B60B44;
L_08B60B44:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B60B54;
      }
      goto L_08B60B4C;
    }
L_08B60B4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18392)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08B60B54;
L_08B60B54:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B60C48;
      }
      goto L_08B60B5C;
    }
L_08B60B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18392)));
    aot_gpr_5 = (~(ctx.gpr[19] | 0u));
    aot_gpr_4 = (ctx.gpr[22] - aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_08B60C48;
      }
      goto L_08B60B74;
    }
L_08B60B74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    goto L_08B60B78;
L_08B60B78:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B60BB0;
      }
      goto L_08B60B80;
    }
L_08B60B80:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08B60B8Cu);
    aot_gpr_6 = (0u | 1u);
    goto L_08B609E4;
L_08B60B8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    goto L_08B60BB0;
L_08B60BB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B60C30;
      }
      goto L_08B60BB8;
    }
L_08B60BB8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B60C30;
      }
      goto L_08B60BC4;
    }
L_08B60BC4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B60BFC;
      }
      goto L_08B60BCC;
    }
L_08B60BCC:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08B60BF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60BF4u) goto L_08B60BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60BF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B60C04;
      }
      goto L_08B60BFC;
    }
L_08B60BFC:
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08B60C04u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60C04u) goto L_08B60C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60C04:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08B60C18;
      }
      goto L_08B60C0C;
    }
L_08B60C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    goto L_08B60C18;
L_08B60C18:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
        goto L_08B60C20;
    }
    goto L_08B60C20;
L_08B60C20:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B60BC4;
      }
      goto L_08B60C30;
    }
L_08B60C30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B60C48;
      }
      goto L_08B60C3C;
    }
L_08B60C3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(18412)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(18412), aot_gpr_5);
    goto L_08B60C48;
L_08B60C48:
    aot_gpr_2 = (ctx.gpr[22] | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
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
L_08B60C7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B60CA8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    goto L_08B60A94;
L_08B60CA8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
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
L_08B60CB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words); }
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B60DF0;
      }
      goto L_08B60D04;
    }
L_08B60D04:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08B60D1Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_08B609E4;
L_08B60D1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08B60D7C;
      }
      goto L_08B60D44;
    }
L_08B60D44:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(18392)));
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (~(aot_gpr_5 | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B60D74;
      }
      goto L_08B60D6C;
    }
L_08B60D6C:
    ctx.gpr[31] = (0x08B60D74u);
    goto L_08B60E40;
L_08B60D74:
    { const std::uint32_t dividend = ctx.gpr[22]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.lo);
    goto L_08B60D7C;
L_08B60D7C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B60DC8;
      }
      goto L_08B60D84;
    }
L_08B60D84:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[21] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B60DC8;
      }
      goto L_08B60DA0;
    }
L_08B60DA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_5);
    jump_target = ctx.gpr[20];
    ctx.gpr[31] = (0x08B60DB8u);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B60DB8u) goto L_08B60DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B60DB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B60DA0;
      }
      goto L_08B60DC8;
    }
L_08B60DC8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(18412)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(18412), aot_gpr_5);
      if (branch_taken) {
          goto L_08B60DF0;
      }
      goto L_08B60DDC;
    }
L_08B60DDC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B60DF0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    goto L_08B60A28;
L_08B60DF0:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
L_08B60E20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B60E34u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08B60CB4;
L_08B60E34:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
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
L_08B60E40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B60E50u);
    aot_gpr_4 = (0u | 9u);
    goto L_08B607D8;
L_08B60E50:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B60E5C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr_4) * static_cast<std::uint64_t>(aot_gpr_6); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[9] = (ctx.hi);
    aot_gpr_2 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    aot_gpr_3 = (aot_gpr_4 + ctx.gpr[9]);
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
L_08B60E84:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_6);
    aot_gpr_3 = (aot_gpr_5 + 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_2 = (aot_gpr_4 + 0u);
      if (branch_taken) {
          goto L_08B60EC0;
      }
      goto L_08B60E98;
    }
L_08B60E98:
    ctx.gpr[10] = (0u - ctx.gpr[7]);
    aot_gpr_3 = (aot_gpr_5 << (aot_gpr_6 & 31u));
    aot_gpr_2 = (aot_gpr_4 >> (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[9] = (aot_gpr_4 << (ctx.gpr[10] & 31u));
      if (branch_taken) {
          goto L_08B60EB8;
      }
      goto L_08B60EB0;
    }
L_08B60EB0:
    ctx.gpr[8] = (aot_gpr_4 << (aot_gpr_6 & 31u));
    ctx.gpr[9] = (aot_gpr_3 | aot_gpr_2);
    goto L_08B60EB8;
L_08B60EB8:
    aot_gpr_2 = (ctx.gpr[8] + 0u);
    aot_gpr_3 = (ctx.gpr[9] + 0u);
    goto L_08B60EC0;
L_08B60EC0:
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
L_08B60EC8:
    aot_gpr_3 = (31u << 16u);
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_2);
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (ctx.gpr[8] < aot_gpr_2 ? 1u : 0u);
    ctx.gpr[9] = (aot_gpr_5 + aot_gpr_3);
    ctx.gpr[7] = (63u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_6);
    ctx.gpr[21] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] | 65535u);
    ctx.gpr[20] = (aot_gpr_4 + 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(2047));
    aot_gpr_4 = (ctx.gpr[20] & aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[21] & aot_gpr_5);
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B60FFC;
      }
      goto L_08B60F30;
    }
L_08B60F30:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[7];
    aot_gpr_2 = (ctx.gpr[8] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B60FF4;
      }
      goto L_08B60F38;
    }
L_08B60F38:
    ctx.gpr[31] = (0x08B60F40u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 0u));
    goto L_08B625C8;
L_08B60F40:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24232)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24228)));
    aot_gpr_4 = (aot_gpr_2 + 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_6 = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B60F64u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    goto L_08B61FD0;
L_08B60F64:
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_4 = (aot_gpr_2 + 0u);
    aot_gpr_6 = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B60F78u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    goto L_08B61FD0;
L_08B60F78:
    aot_gpr_4 = (ctx.gpr[20] + 0u);
    ctx.gpr[18] = (aot_gpr_2 + 0u);
    ctx.gpr[31] = (0x08B60F88u);
    ctx.gpr[19] = (aot_gpr_3 + 0u);
    goto L_08B625C8;
L_08B60F88:
    aot_gpr_4 = (aot_gpr_2 + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    aot_gpr_5 = (aot_gpr_3 + 0u);
      if (branch_taken) {
          goto L_08B60FD8;
      }
      goto L_08B60F94;
    }
L_08B60F94:
    aot_gpr_6 = (aot_gpr_2 + 0u);
    goto L_08B60F98;
L_08B60F98:
    ctx.gpr[7] = (aot_gpr_3 + 0u);
    aot_gpr_4 = (ctx.gpr[18] + 0u);
    ctx.gpr[31] = (0x08B60FA8u);
    aot_gpr_5 = (ctx.gpr[19] + 0u);
    goto L_08B61EF4;
L_08B60FA8:
    aot_gpr_4 = (aot_gpr_2 + 0u);
    ctx.gpr[31] = (0x08B60FB4u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    goto L_08B627F0;
L_08B60FB4:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_08B60FD8:
    aot_gpr_6 = (2233u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-24224)));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[31] = (0x08B60FECu);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24220)));
    goto L_08B61EF4;
L_08B60FEC:
    aot_gpr_6 = (aot_gpr_2 + 0u);
    goto L_08B60F98;
L_08B60FF4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B60F38;
      }
      goto L_08B60FFC;
    }
L_08B60FFC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B60F38;
      }
      goto L_08B61004;
    }
L_08B61004:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-2048));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(2048));
    ctx.gpr[20] = (ctx.gpr[20] & aot_gpr_2);
    ctx.gpr[21] = (ctx.gpr[21] & aot_gpr_3);
    ctx.gpr[20] = (ctx.gpr[20] | aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] | aot_gpr_5);
    goto L_08B60F38;
L_08B61028:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[7] + 0u);
    ctx.gpr[10] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[9] = (aot_gpr_6 + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[14] = (aot_gpr_4 + 0u);
      if (branch_taken) {
          goto L_08B613E8;
      }
      goto L_08B61048;
    }
L_08B61048:
    aot_gpr_2 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (0u | 65535u);
      if (branch_taken) {
          goto L_08B611A8;
      }
      goto L_08B61054;
    }
L_08B61054:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_6 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    if (aot_gpr_4 != 0u) aot_gpr_5 = (0u);
      if (branch_taken) {
          goto L_08B61088;
      }
      goto L_08B6106C;
    }
L_08B6106C:
    aot_gpr_2 = (255u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(16));
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_3 + 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_4);
    goto L_08B61088;
L_08B61088:
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_6 >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-24928));
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_4);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (ctx.gpr[9] >> 16u);
        goto L_08B610CC;
    }
    goto L_08B610B0;
L_08B610B0:
    aot_gpr_2 = (aot_gpr_2 - ctx.gpr[7]);
    aot_gpr_2 = (ctx.gpr[14] >> (aot_gpr_2 & 31u));
    aot_gpr_3 = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[10] = (aot_gpr_3 | aot_gpr_2);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] >> 16u);
    goto L_08B610CC;
L_08B610CC:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.gpr[9] & 65535u);
    aot_gpr_4 = (ctx.gpr[14] >> 16u);
    if (ctx.gpr[7] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B610DCu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B610E0;
    }
    goto L_08B610E0;
L_08B610E0:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    ctx.gpr[11] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_6 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B6112C;
      }
      goto L_08B61108;
    }
L_08B61108:
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    aot_gpr_2 = (aot_gpr_6 < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6112C;
      }
      goto L_08B61118;
    }
L_08B61118:
    aot_gpr_2 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
        goto L_08B61130;
    }
    goto L_08B61124;
L_08B61124:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    goto L_08B6112C;
L_08B6112C:
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    goto L_08B61130;
L_08B61130:
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[14] & 65535u);
    if (ctx.gpr[7] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B6113Cu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61140;
    }
    goto L_08B61140;
L_08B61140:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61184;
      }
      goto L_08B61168;
    }
L_08B61168:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B61184;
      }
      goto L_08B61178;
    }
L_08B61178:
    aot_gpr_2 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_2);
    goto L_08B61184;
L_08B61184:
    aot_gpr_2 = (ctx.gpr[11] << 16u);
    aot_gpr_4 = (aot_gpr_2 | ctx.gpr[8]);
    goto L_08B6118C;
L_08B6118C:
    aot_gpr_6 = (0u + 0u);
    goto L_08B61190;
L_08B61190:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (aot_gpr_6 + 0u);
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
L_08B611A8:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B611CC;
      }
      goto L_08B611B0;
    }
L_08B611B0:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr_2; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    if (aot_gpr_6 == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B611BCu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B611C0;
    }
    goto L_08B611C0;
L_08B611C0:
    ctx.gpr[9] = (ctx.lo);
    aot_gpr_2 = (0u | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
    goto L_08B611CC;
L_08B611CC:
    aot_gpr_4 = (ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    if (aot_gpr_4 != 0u) aot_gpr_5 = (0u);
      if (branch_taken) {
          goto L_08B611FC;
      }
      goto L_08B611E0;
    }
L_08B611E0:
    aot_gpr_2 = (255u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(16));
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[9] ? 1u : 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_3 + 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_4);
    goto L_08B611FC;
L_08B611FC:
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_2 = (ctx.gpr[9] >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-24928));
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_4);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_2 - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B612F4;
      }
      goto L_08B61224;
    }
L_08B61224:
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[9]);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[9] >> 16u);
    ctx.gpr[16] = (ctx.gpr[9] & 65535u);
    goto L_08B61234;
L_08B61234:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[14] >> 16u);
    if (ctx.gpr[8] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61240u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61244;
    }
    goto L_08B61244;
L_08B61244:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    ctx.gpr[11] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    ctx.gpr[7] = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_3 = (ctx.gpr[7] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61290;
      }
      goto L_08B6126C;
    }
L_08B6126C:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B61290;
      }
      goto L_08B6127C;
    }
L_08B6127C:
    aot_gpr_2 = (ctx.gpr[7] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
        goto L_08B61294;
    }
    goto L_08B61288;
L_08B61288:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08B61290;
L_08B61290:
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    goto L_08B61294;
L_08B61294:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[14] & 65535u);
    if (ctx.gpr[8] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B612A0u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B612A4;
    }
    goto L_08B612A4;
L_08B612A4:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    ctx.gpr[10] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B612E8;
      }
      goto L_08B612CC;
    }
L_08B612CC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B612E8;
      }
      goto L_08B612DC;
    }
L_08B612DC:
    aot_gpr_2 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] - aot_gpr_2);
    goto L_08B612E8;
L_08B612E8:
    aot_gpr_2 = (ctx.gpr[11] << 16u);
    aot_gpr_4 = (aot_gpr_2 | ctx.gpr[10]);
    goto L_08B61190;
L_08B612F4:
    ctx.gpr[9] = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (ctx.gpr[9] >> 16u);
    ctx.gpr[12] = (ctx.gpr[10] >> (aot_gpr_5 & 31u));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.gpr[9] & 65535u);
    aot_gpr_3 = (ctx.gpr[14] >> (aot_gpr_5 & 31u));
    aot_gpr_2 = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[10] = (aot_gpr_2 | aot_gpr_3);
    aot_gpr_5 = (ctx.gpr[10] >> 16u);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[7] & 31u));
    if (ctx.gpr[8] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61320u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61324;
    }
    goto L_08B61324;
L_08B61324:
    ctx.gpr[11] = (ctx.gpr[8] + 0u);
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_4 = (ctx.hi);
    ctx.gpr[15] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_4 << 16u);
    ctx.gpr[7] = (aot_gpr_4 | aot_gpr_5);
    ctx.gpr[13] = (ctx.lo);
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61378;
      }
      goto L_08B61354;
    }
L_08B61354:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[15] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B61378;
      }
      goto L_08B61364;
    }
L_08B61364:
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
        goto L_08B6137C;
    }
    goto L_08B61370;
L_08B61370:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08B61378;
L_08B61378:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
    goto L_08B6137C;
L_08B6137C:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[10] & 65535u);
    if (ctx.gpr[11] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61388u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B6138C;
    }
    goto L_08B6138C;
L_08B6138C:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_4);
    ctx.gpr[13] = (ctx.lo);
    aot_gpr_3 = (aot_gpr_4 < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B613D8;
      }
      goto L_08B613B4;
    }
L_08B613B4:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B613D8;
      }
      goto L_08B613C4;
    }
L_08B613C4:
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (ctx.gpr[15] << 16u);
      if (branch_taken) {
          goto L_08B613DC;
      }
      goto L_08B613D0;
    }
L_08B613D0:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    goto L_08B613D8;
L_08B613D8:
    aot_gpr_2 = (ctx.gpr[15] << 16u);
    goto L_08B613DC;
L_08B613DC:
    aot_gpr_6 = (aot_gpr_2 | aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_4 - ctx.gpr[13]);
    goto L_08B61234;
L_08B613E8:
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    aot_gpr_4 = (0u + 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (0u + 0u);
      if (branch_taken) {
          goto L_08B61190;
      }
      goto L_08B613F8;
    }
L_08B613F8:
    aot_gpr_2 = (0u | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    if (aot_gpr_4 != 0u) aot_gpr_5 = (0u);
      if (branch_taken) {
          goto L_08B61430;
      }
      goto L_08B61414;
    }
L_08B61414:
    aot_gpr_2 = (255u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(16));
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[7] ? 1u : 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_3 + 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_4);
    goto L_08B61430;
L_08B61430:
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_2 = (ctx.gpr[8] >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-24928));
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_4);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_2 - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B61470;
      }
      goto L_08B61458;
    }
L_08B61458:
    aot_gpr_2 = (ctx.gpr[14] < ctx.gpr[9] ? 1u : 0u);
    aot_gpr_3 = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 1u);
    aot_gpr_3 = (aot_gpr_3 | aot_gpr_2);
    aot_gpr_4 = (0u < aot_gpr_3 ? 1u : 0u);
    goto L_08B6118C;
L_08B61470:
    aot_gpr_2 = (ctx.gpr[9] >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (ctx.gpr[8] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (aot_gpr_3 | aot_gpr_2);
    ctx.gpr[11] = (ctx.gpr[8] >> 16u);
    ctx.gpr[12] = (ctx.gpr[10] >> (aot_gpr_5 & 31u));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.gpr[8] & 65535u);
    aot_gpr_3 = (ctx.gpr[14] >> (aot_gpr_5 & 31u));
    aot_gpr_2 = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[10] = (aot_gpr_2 | aot_gpr_3);
    aot_gpr_5 = (ctx.gpr[10] >> 16u);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    if (ctx.gpr[11] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B614A8u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B614AC;
    }
    goto L_08B614AC;
L_08B614AC:
    aot_gpr_6 = (ctx.lo);
    aot_gpr_4 = (ctx.hi);
    ctx.gpr[15] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_4 << 16u);
    ctx.gpr[7] = (aot_gpr_4 | aot_gpr_5);
    ctx.gpr[13] = (ctx.lo);
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B614F8;
      }
      goto L_08B614D4;
    }
L_08B614D4:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[15] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B614F8;
      }
      goto L_08B614E4;
    }
L_08B614E4:
    aot_gpr_2 = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
        goto L_08B614FC;
    }
    goto L_08B614F0;
L_08B614F0:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08B614F8;
L_08B614F8:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
    goto L_08B614FC;
L_08B614FC:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[10] & 65535u);
    if (ctx.gpr[11] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61508u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B6150C;
    }
    goto L_08B6150C;
L_08B6150C:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_5 = (aot_gpr_2 | aot_gpr_4);
    ctx.gpr[13] = (ctx.lo);
    aot_gpr_3 = (aot_gpr_5 < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61558;
      }
      goto L_08B61534;
    }
L_08B61534:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B61558;
      }
      goto L_08B61544;
    }
L_08B61544:
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (ctx.gpr[15] << 16u);
      if (branch_taken) {
          goto L_08B6155C;
      }
      goto L_08B61550;
    }
L_08B61550:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_08B61558;
L_08B61558:
    aot_gpr_2 = (ctx.gpr[15] << 16u);
    goto L_08B6155C;
L_08B6155C:
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[13]);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr_4) * static_cast<std::uint64_t>(ctx.gpr[9]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr_3 = (ctx.hi);
    aot_gpr_2 = (aot_gpr_5 < aot_gpr_3 ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
        goto L_08B6118C;
    }
    goto L_08B61578;
L_08B61578:
    aot_gpr_2 = (aot_gpr_3 ^ aot_gpr_5);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_3 = (ctx.gpr[14] < aot_gpr_5 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_3);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_6 = (0u + 0u);
      if (branch_taken) {
          goto L_08B61190;
      }
      goto L_08B61594;
    }
L_08B61594:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_08B61190;
L_08B6159C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[8] = (ctx.gpr[7] + 0u);
    ctx.gpr[19] = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[11] = (aot_gpr_6 + 0u);
    ctx.gpr[15] = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[9] = (aot_gpr_5 + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B61950;
      }
      goto L_08B615C8;
    }
L_08B615C8:
    aot_gpr_2 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (0u | 65535u);
      if (branch_taken) {
          goto L_08B61738;
      }
      goto L_08B615D4;
    }
L_08B615D4:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_6 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    if (aot_gpr_4 != 0u) aot_gpr_5 = (0u);
      if (branch_taken) {
          goto L_08B61608;
      }
      goto L_08B615EC;
    }
L_08B615EC:
    aot_gpr_2 = (255u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(16));
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_3 + 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_4);
    goto L_08B61608;
L_08B61608:
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_6 >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-24928));
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_4);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (ctx.gpr[11] >> 16u);
      if (branch_taken) {
          goto L_08B6164C;
      }
      goto L_08B61630;
    }
L_08B61630:
    aot_gpr_2 = (aot_gpr_2 - ctx.gpr[7]);
    aot_gpr_2 = (ctx.gpr[15] >> (aot_gpr_2 & 31u));
    aot_gpr_3 = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (aot_gpr_3 | aot_gpr_2);
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[7] & 31u));
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[7] & 31u));
    aot_gpr_6 = (ctx.gpr[11] >> 16u);
    goto L_08B6164C;
L_08B6164C:
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[10] = (ctx.gpr[11] & 65535u);
    aot_gpr_4 = (ctx.gpr[15] >> 16u);
    if (aot_gpr_6 == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B6165Cu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61660;
    }
    goto L_08B61660;
L_08B61660:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_5 = (aot_gpr_2 | aot_gpr_4);
    ctx.gpr[8] = (ctx.lo);
    aot_gpr_3 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B616A4;
      }
      goto L_08B61684;
    }
L_08B61684:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[11] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[8]);
        goto L_08B616A8;
    }
    goto L_08B61694;
L_08B61694:
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 0u);
    aot_gpr_3 = (aot_gpr_5 + ctx.gpr[11]);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_3);
    goto L_08B616A4;
L_08B616A4:
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[8]);
    goto L_08B616A8;
L_08B616A8:
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[15] & 65535u);
    if (aot_gpr_6 == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B616B4u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B616B8;
    }
    goto L_08B616B8;
L_08B616B8:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_4);
    ctx.gpr[8] = (ctx.lo);
    aot_gpr_3 = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B616FC;
      }
      goto L_08B616DC;
    }
L_08B616DC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[15] = (aot_gpr_4 - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B61700;
      }
      goto L_08B616EC;
    }
L_08B616EC:
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    aot_gpr_3 = (aot_gpr_4 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_2 ^ 0u);
    if (aot_gpr_2 != 0u) aot_gpr_4 = (aot_gpr_3);
    goto L_08B616FC;
L_08B616FC:
    ctx.gpr[15] = (aot_gpr_4 - ctx.gpr[8]);
    goto L_08B61700;
L_08B61700:
    ctx.gpr[24] = (ctx.gpr[15] >> (ctx.gpr[7] & 31u));
    ctx.gpr[25] = (0u + 0u);
    goto L_08B61708;
L_08B61708:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B61718;
      }
      goto L_08B61710;
    }
L_08B61710:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    goto L_08B61718;
L_08B61718:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B61738:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B6175C;
      }
      goto L_08B61740;
    }
L_08B61740:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr_2; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    if (aot_gpr_6 == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B6174Cu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61750;
    }
    goto L_08B61750;
L_08B61750:
    ctx.gpr[11] = (ctx.lo);
    aot_gpr_2 = (0u | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
    goto L_08B6175C;
L_08B6175C:
    aot_gpr_4 = (ctx.gpr[11] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    if (aot_gpr_4 != 0u) aot_gpr_5 = (0u);
      if (branch_taken) {
          goto L_08B6178C;
      }
      goto L_08B61770;
    }
L_08B61770:
    aot_gpr_2 = (255u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(16));
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[11] ? 1u : 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_3 + 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_4);
    goto L_08B6178C;
L_08B6178C:
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_2 = (ctx.gpr[11] >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-24928));
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_4);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (aot_gpr_2 - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B61874;
      }
      goto L_08B617B4;
    }
L_08B617B4:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[11] >> 16u);
    ctx.gpr[14] = (ctx.gpr[11] & 65535u);
    goto L_08B617C0;
L_08B617C0:
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[15] >> 16u);
    if (ctx.gpr[8] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B617CCu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B617D0;
    }
    goto L_08B617D0;
L_08B617D0:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_5 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61814;
      }
      goto L_08B617F4;
    }
L_08B617F4:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[11] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
        goto L_08B61818;
    }
    goto L_08B61804;
L_08B61804:
    aot_gpr_2 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 0u);
    aot_gpr_3 = (aot_gpr_5 + ctx.gpr[11]);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_3);
    goto L_08B61814;
L_08B61814:
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    goto L_08B61818;
L_08B61818:
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[15] & 65535u);
    if (ctx.gpr[8] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61824u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61828;
    }
    goto L_08B61828;
L_08B61828:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B6186C;
      }
      goto L_08B6184C;
    }
L_08B6184C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[11] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    ctx.gpr[15] = (aot_gpr_4 - aot_gpr_6);
        goto L_08B61700;
    }
    goto L_08B6185C;
L_08B6185C:
    aot_gpr_2 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_3 = (aot_gpr_4 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_2 ^ 0u);
    if (aot_gpr_2 != 0u) aot_gpr_4 = (aot_gpr_3);
    goto L_08B6186C;
L_08B6186C:
    ctx.gpr[15] = (aot_gpr_4 - aot_gpr_6);
    goto L_08B61700;
L_08B61874:
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (ctx.gpr[11] >> 16u);
    ctx.gpr[13] = (ctx.gpr[9] >> (ctx.gpr[16] & 31u));
    { const std::uint32_t dividend = ctx.gpr[13]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[14] = (ctx.gpr[11] & 65535u);
    aot_gpr_3 = (ctx.gpr[15] >> (ctx.gpr[16] & 31u));
    aot_gpr_2 = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (aot_gpr_2 | aot_gpr_3);
    aot_gpr_5 = (ctx.gpr[9] >> 16u);
    if (ctx.gpr[8] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B6189Cu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B618A0;
    }
    goto L_08B618A0;
L_08B618A0:
    ctx.gpr[12] = (ctx.gpr[8] + 0u);
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[7] & 31u));
    ctx.gpr[16] = (ctx.gpr[14] + 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_4 = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_4 << 16u);
    ctx.gpr[10] = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_2 = (ctx.gpr[10] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    { const std::uint32_t dividend = ctx.gpr[13]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B618F0;
      }
      goto L_08B618D0;
    }
L_08B618D0:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    aot_gpr_2 = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] - aot_gpr_6);
        goto L_08B618F4;
    }
    goto L_08B618E0;
L_08B618E0:
    aot_gpr_2 = (ctx.gpr[10] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 0u);
    aot_gpr_3 = (ctx.gpr[10] + ctx.gpr[11]);
    if (aot_gpr_2 != 0u) ctx.gpr[10] = (aot_gpr_3);
    goto L_08B618F0;
L_08B618F0:
    ctx.gpr[10] = (ctx.gpr[10] - aot_gpr_6);
    goto L_08B618F4;
L_08B618F4:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[9] & 65535u);
    if (ctx.gpr[12] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61900u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61904;
    }
    goto L_08B61904;
L_08B61904:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_4 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61948;
      }
      goto L_08B61928;
    }
L_08B61928:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[11]);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[11] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    ctx.gpr[9] = (aot_gpr_4 - aot_gpr_6);
        goto L_08B617C0;
    }
    goto L_08B61938;
L_08B61938:
    aot_gpr_2 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 0u);
    aot_gpr_3 = (aot_gpr_4 + ctx.gpr[11]);
    if (aot_gpr_2 != 0u) aot_gpr_4 = (aot_gpr_3);
    goto L_08B61948;
L_08B61948:
    ctx.gpr[9] = (aot_gpr_4 - aot_gpr_6);
    goto L_08B617C0;
L_08B61950:
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (0u | 65535u);
      if (branch_taken) {
          goto L_08B61970;
      }
      goto L_08B6195C;
    }
L_08B6195C:
    ctx.gpr[24] = (aot_gpr_4 + 0u);
    ctx.gpr[25] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    goto L_08B61718;
L_08B61970:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 + 0u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    if (aot_gpr_4 != 0u) aot_gpr_5 = (0u);
      if (branch_taken) {
          goto L_08B619A4;
      }
      goto L_08B61988;
    }
L_08B61988:
    aot_gpr_2 = (255u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(16));
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[7] ? 1u : 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_3 + 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_4);
    goto L_08B619A4;
L_08B619A4:
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_2 = (ctx.gpr[8] >> (aot_gpr_5 & 31u));
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-24928));
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_2 - aot_gpr_4);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (aot_gpr_2 - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B61A04;
      }
      goto L_08B619CC;
    }
L_08B619CC:
    aot_gpr_3 = (ctx.gpr[15] < ctx.gpr[11] ? 1u : 0u);
    aot_gpr_3 = (aot_gpr_3 ^ 1u);
    aot_gpr_2 = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[24] = (ctx.gpr[15] + 0u);
        goto L_08B619FC;
    }
    goto L_08B619E4;
L_08B619E4:
    aot_gpr_4 = (ctx.gpr[15] - ctx.gpr[11]);
    aot_gpr_2 = (ctx.gpr[15] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_3 = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[9] = (aot_gpr_3 - aot_gpr_2);
    ctx.gpr[15] = (aot_gpr_4 + 0u);
    ctx.gpr[24] = (ctx.gpr[15] + 0u);
    goto L_08B619FC;
L_08B619FC:
    ctx.gpr[25] = (ctx.gpr[9] + 0u);
    goto L_08B61708;
L_08B61A04:
    aot_gpr_2 = (ctx.gpr[11] >> (ctx.gpr[16] & 31u));
    aot_gpr_3 = (ctx.gpr[8] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (aot_gpr_3 | aot_gpr_2);
    ctx.gpr[12] = (ctx.gpr[8] >> 16u);
    ctx.gpr[13] = (ctx.gpr[9] >> (ctx.gpr[16] & 31u));
    { const std::uint32_t dividend = ctx.gpr[13]; const std::uint32_t divisor = ctx.gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.gpr[8] & 65535u);
    aot_gpr_2 = (ctx.gpr[15] >> (ctx.gpr[16] & 31u));
    aot_gpr_3 = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (aot_gpr_3 | aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[9] >> 16u);
    if (ctx.gpr[12] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61A34u, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61A38;
    }
    goto L_08B61A38;
L_08B61A38:
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[7] & 31u));
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[7] & 31u));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_4 = (ctx.hi);
    ctx.gpr[17] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_4 << 16u);
    ctx.gpr[10] = (aot_gpr_4 | aot_gpr_5);
    ctx.gpr[14] = (ctx.lo);
    aot_gpr_2 = (ctx.gpr[10] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    { const std::uint32_t dividend = ctx.gpr[13]; const std::uint32_t divisor = ctx.gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61A8C;
      }
      goto L_08B61A68;
    }
L_08B61A68:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_gpr_2 = (ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[17] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B61A8C;
      }
      goto L_08B61A78;
    }
L_08B61A78:
    aot_gpr_2 = (ctx.gpr[10] < ctx.gpr[14] ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[14]);
        goto L_08B61A90;
    }
    goto L_08B61A84;
L_08B61A84:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    goto L_08B61A8C;
L_08B61A8C:
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[14]);
    goto L_08B61A90;
L_08B61A90:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[9] & 65535u);
    if (ctx.gpr[12] == 0u) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B61A9Cu, 0x000001CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        goto L_08B61AA0;
    }
    goto L_08B61AA0;
L_08B61AA0:
    aot_gpr_3 = (ctx.lo);
    aot_gpr_2 = (ctx.hi);
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (aot_gpr_2 << 16u);
    aot_gpr_5 = (aot_gpr_2 | aot_gpr_4);
    ctx.gpr[14] = (ctx.lo);
    aot_gpr_3 = (aot_gpr_5 < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08B61AEC;
      }
      goto L_08B61AC8;
    }
L_08B61AC8:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B61AEC;
      }
      goto L_08B61AD8;
    }
L_08B61AD8:
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (ctx.gpr[17] << 16u);
      if (branch_taken) {
          goto L_08B61AF0;
      }
      goto L_08B61AE4;
    }
L_08B61AE4:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    goto L_08B61AEC;
L_08B61AEC:
    aot_gpr_2 = (ctx.gpr[17] << 16u);
    goto L_08B61AF0;
L_08B61AF0:
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[14]);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr_2) * static_cast<std::uint64_t>(ctx.gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[10] = (ctx.hi);
    aot_gpr_3 = (aot_gpr_5 < ctx.gpr[10] ? 1u : 0u);
    aot_gpr_6 = (ctx.lo);
    { const bool branch_taken = aot_gpr_3 != 0u;
    aot_gpr_4 = (aot_gpr_6 - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B61B28;
      }
      goto L_08B61B10;
    }
L_08B61B10:
    aot_gpr_2 = (ctx.gpr[10] ^ aot_gpr_5);
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_3 = (ctx.gpr[15] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_3);
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B61B38;
      }
      goto L_08B61B28;
    }
L_08B61B28:
    aot_gpr_2 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_3 = (ctx.gpr[10] - ctx.gpr[8]);
    ctx.gpr[10] = (aot_gpr_3 - aot_gpr_2);
    aot_gpr_6 = (aot_gpr_4 + 0u);
    goto L_08B61B38;
L_08B61B38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_3 = (ctx.gpr[15] - aot_gpr_6);
      if (branch_taken) {
          goto L_08B61718;
      }
      goto L_08B61B40;
    }
L_08B61B40:
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[10]);
    aot_gpr_2 = (ctx.gpr[15] < aot_gpr_3 ? 1u : 0u);
    ctx.gpr[9] = (aot_gpr_4 - aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[9] << (ctx.gpr[16] & 31u));
    aot_gpr_3 = (aot_gpr_3 >> (ctx.gpr[7] & 31u));
    ctx.gpr[24] = (aot_gpr_5 | aot_gpr_3);
    ctx.gpr[25] = (ctx.gpr[9] >> (ctx.gpr[7] & 31u));
    goto L_08B61710;
L_08B61B60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B61B78u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B62868;
L_08B61B78:
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_gpr_2 = (ctx.gpr[8] >> 2u);
    ctx.gpr[9] = (ctx.gpr[9] << 30u);
    ctx.gpr[9] = (ctx.gpr[9] | aot_gpr_2);
    ctx.gpr[31] = (0x08B61BA0u);
    ctx.gpr[8] = (ctx.gpr[8] << 30u);
    goto L_08B627BC;
L_08B61BA0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
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
L_08B61BAC:
    ctx.gpr[7] = (aot_gpr_4 + 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_gpr_6 + 0u);
    ctx.gpr[8] = (aot_gpr_5 + 0u);
    aot_gpr_2 = (aot_gpr_4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08B61C00;
      }
      goto L_08B61BC8;
    }
L_08B61BC8:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_3 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (aot_gpr_5 + 0u);
      if (branch_taken) {
          goto L_08B61C00;
      }
      goto L_08B61BD8;
    }
L_08B61BD8:
    aot_gpr_2 = (aot_gpr_4 ^ 4u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
      if (branch_taken) {
          goto L_08B61C10;
      }
      goto L_08B61BE4;
    }
L_08B61BE4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08B61C00;
      }
      goto L_08B61BEC;
    }
L_08B61BEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_2 = (2233u << 16u);
    { const bool branch_taken = aot_gpr_3 == aot_gpr_4;
    aot_gpr_6 = (aot_gpr_2 + static_cast<std::uint32_t>(-24952));
      if (branch_taken) {
          goto L_08B61C08;
      }
      goto L_08B61C00;
    }
L_08B61C00:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_6 + 0u);
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
L_08B61C08:
    aot_gpr_6 = (ctx.gpr[7] + 0u);
    goto L_08B61C00;
L_08B61C10:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_6 = (aot_gpr_5 + 0u);
      if (branch_taken) {
          goto L_08B61C00;
      }
      goto L_08B61C18;
    }
L_08B61C18:
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_4 ^ 2u);
      if (branch_taken) {
          goto L_08B61C70;
      }
      goto L_08B61C24;
    }
L_08B61C24:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08B61C00;
      }
      goto L_08B61C2C;
    }
L_08B61C2C:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[10] + 0u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_2);
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_3);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), aot_gpr_2);
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_3);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_2);
    goto L_08B61C00;
L_08B61C70:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_6 = (aot_gpr_5 + 0u);
      if (branch_taken) {
          goto L_08B61C00;
      }
      goto L_08B61C78;
    }
L_08B61C78:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (ctx.gpr[11] - ctx.gpr[9]);
    if (static_cast<std::int32_t>(aot_gpr_2) < 0) {
    aot_gpr_2 = (0u - aot_gpr_2);
        goto L_08B61C9C;
    }
    goto L_08B61C9C;
L_08B61C9C:
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_2) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B61ECC;
      }
      goto L_08B61CA8;
    }
L_08B61CA8:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B61CEC;
      }
      goto L_08B61CB0;
    }
L_08B61CB0:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[9]);
    goto L_08B61CBC;
L_08B61CBC:
    aot_gpr_4 = (ctx.gpr[14] >> 1u);
    aot_gpr_6 = (ctx.gpr[15] << 31u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[15] >> 1u);
    aot_gpr_2 = (ctx.gpr[14] & ctx.gpr[24]);
    aot_gpr_3 = (ctx.gpr[15] & ctx.gpr[25]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (aot_gpr_2 | aot_gpr_4);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[15] = (aot_gpr_3 | aot_gpr_5);
      if (branch_taken) {
          goto L_08B61CBC;
      }
      goto L_08B61CE4;
    }
L_08B61CE4:
    ctx.gpr[9] = (ctx.gpr[11] + 0u);
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_08B61CEC;
L_08B61CEC:
    if (aot_gpr_2 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08B61D30;
    }
    goto L_08B61CF4;
L_08B61CF4:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[9] - ctx.gpr[11]);
    goto L_08B61D00;
L_08B61D00:
    aot_gpr_4 = (ctx.gpr[12] >> 1u);
    aot_gpr_6 = (ctx.gpr[13] << 31u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[13] >> 1u);
    aot_gpr_2 = (ctx.gpr[12] & ctx.gpr[24]);
    aot_gpr_3 = (ctx.gpr[13] & ctx.gpr[25]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (aot_gpr_2 | aot_gpr_4);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[13] = (aot_gpr_3 | aot_gpr_5);
      if (branch_taken) {
          goto L_08B61D00;
      }
      goto L_08B61D28;
    }
L_08B61D28:
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08B61D2C;
L_08B61D2C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08B61D30;
L_08B61D30:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_2;
    aot_gpr_5 = (ctx.gpr[15] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08B61EA4;
      }
      goto L_08B61D3C;
    }
L_08B61D3C:
    aot_gpr_2 = (ctx.gpr[14] < ctx.gpr[12] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[14] - ctx.gpr[12]);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_2);
      if (branch_taken) {
          goto L_08B61D5C;
      }
      goto L_08B61D4C;
    }
L_08B61D4C:
    aot_gpr_2 = (ctx.gpr[12] < ctx.gpr[14] ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[13] - ctx.gpr[15]);
    aot_gpr_4 = (ctx.gpr[12] - ctx.gpr[14]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_2);
    goto L_08B61D5C;
L_08B61D5C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B61E80;
      }
      goto L_08B61D64;
    }
L_08B61D64:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), 0u);
    goto L_08B61D74;
L_08B61D74:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (4095u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 65535u);
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr_3 = (aot_gpr_4 < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_3);
    aot_gpr_2 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
        goto L_08B61E0C;
    }
    goto L_08B61DA0;
L_08B61DA0:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_2 = (aot_gpr_4 < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B61E70;
      }
      goto L_08B61DA8;
    }
L_08B61DA8:
    aot_gpr_3 = (ctx.gpr[8] >> 31u);
    goto L_08B61DAC;
L_08B61DAC:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08B61DB0;
L_08B61DB0:
    ctx.gpr[7] = (ctx.gpr[9] << 1u);
    ctx.gpr[7] = (ctx.gpr[7] | aot_gpr_3);
    aot_gpr_6 = (ctx.gpr[8] << 1u);
    ctx.gpr[11] = (4095u << 16u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_3 = (aot_gpr_4 < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_3);
    ctx.gpr[11] = (ctx.gpr[11] | 65535u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_3 = (ctx.gpr[11] < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[12] = (aot_gpr_4 < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_2);
    ctx.gpr[8] = (aot_gpr_6 + 0u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_3 != 0u;
    ctx.gpr[9] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08B61E08;
      }
      goto L_08B61DF8;
    }
L_08B61DF8:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[11];
    aot_gpr_3 = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08B61DAC;
      }
      goto L_08B61E00;
    }
L_08B61E00:
    if (ctx.gpr[12] != 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08B61DB0;
    }
    goto L_08B61E08;
L_08B61E08:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08B61E0C;
L_08B61E0C:
    aot_gpr_3 = (8191u << 16u);
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(3));
    aot_gpr_3 = (aot_gpr_3 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B61E68;
      }
      goto L_08B61E24;
    }
L_08B61E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_2 = (aot_gpr_4 & aot_gpr_2);
    ctx.gpr[7] = (aot_gpr_5 << 31u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_gpr_3 = (aot_gpr_5 & aot_gpr_3);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_3 = (aot_gpr_3 | aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_6);
    goto L_08B61E68;
L_08B61E68:
    aot_gpr_6 = (ctx.gpr[10] + 0u);
    goto L_08B61C00;
L_08B61E70:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_3 = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08B61DAC;
      }
      goto L_08B61E78;
    }
L_08B61E78:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08B61E0C;
L_08B61E80:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_3 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_3);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), aot_gpr_5);
    goto L_08B61D74;
L_08B61EA4:
    aot_gpr_2 = (ctx.gpr[12] + ctx.gpr[14]);
    aot_gpr_4 = (aot_gpr_2 < ctx.gpr[14] ? 1u : 0u);
    aot_gpr_3 = (ctx.gpr[13] + ctx.gpr[15]);
    aot_gpr_3 = (aot_gpr_3 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08B61E0C;
L_08B61ECC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B61EE4;
      }
      goto L_08B61ED4;
    }
L_08B61ED4:
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08B61D30;
L_08B61EE4:
    ctx.gpr[12] = (0u + 0u);
    ctx.gpr[13] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08B61D2C;
L_08B61EF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_3);
    ctx.gpr[31] = (0x08B61F28u);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    goto L_08B62C04;
L_08B61F28:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08B61F34u);
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    goto L_08B62C04;
L_08B61F34:
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08B61F44u);
    aot_gpr_4 = (aot_gpr_29 + 0u);
    goto L_08B61BAC;
L_08B61F44:
    ctx.gpr[31] = (0x08B61F4Cu);
    aot_gpr_4 = (aot_gpr_2 + 0u);
    goto L_08B62964;
L_08B61F4C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
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
L_08B61F5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[31] = (0x08B61F90u);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    goto L_08B62C04;
L_08B61F90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08B61F9Cu);
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    goto L_08B62C04;
L_08B61F9C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (aot_gpr_29 + 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 1u);
    ctx.gpr[31] = (0x08B61FB8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_2);
    goto L_08B61BAC;
L_08B61FB8:
    ctx.gpr[31] = (0x08B61FC0u);
    aot_gpr_4 = (aot_gpr_2 + 0u);
    goto L_08B62964;
L_08B61FC0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
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
L_08B61FD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (aot_gpr_29 + 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[31] = (0x08B62014u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    goto L_08B62C04;
L_08B62014:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08B62020u);
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    goto L_08B62C04;
L_08B62020:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_gpr_29 + 0u);
    aot_gpr_2 = (aot_gpr_3 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08B62060;
      }
      goto L_08B62034;
    }
L_08B62034:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_2 = (aot_gpr_4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
        goto L_08B620BC;
    }
    goto L_08B62044;
L_08B62044:
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_4 ^ 4u);
      if (branch_taken) {
          goto L_08B620A0;
      }
      goto L_08B62050;
    }
L_08B62050:
    aot_gpr_3 = (aot_gpr_4 ^ 2u);
    aot_gpr_2 = (2233u << 16u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(-24952));
      if (branch_taken) {
          goto L_08B62078;
      }
      goto L_08B62060;
    }
L_08B62060:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B62064;
L_08B62064:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_29 + 0u);
    aot_gpr_2 = (aot_gpr_2 ^ aot_gpr_3);
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_2);
    goto L_08B62078;
L_08B62078:
    ctx.gpr[31] = (0x08B62080u);
    goto L_08B62964;
L_08B62080:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
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
L_08B620A0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
      if (branch_taken) {
          goto L_08B620D4;
      }
      goto L_08B620A8;
    }
L_08B620A8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_3 = (aot_gpr_3 ^ 2u);
    { const bool branch_taken = aot_gpr_3 == 0u;
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(-24952));
      if (branch_taken) {
          goto L_08B62078;
      }
      goto L_08B620B8;
    }
L_08B620B8:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    goto L_08B620BC;
L_08B620BC:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + 0u);
    aot_gpr_2 = (aot_gpr_2 ^ aot_gpr_3);
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_2);
    goto L_08B62078;
L_08B620D4:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B62064;
      }
      goto L_08B620DC;
    }
L_08B620DC:
    aot_gpr_2 = (aot_gpr_4 ^ 2u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B620BC;
      }
      goto L_08B620E8;
    }
L_08B620E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(aot_gpr_6); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[18] = (0u + 0u);
    ctx.gpr[19] = (0u + 0u);
    aot_gpr_3 = (ctx.hi);
    aot_gpr_2 = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr_5) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[11] = (ctx.hi);
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr_5) * static_cast<std::uint64_t>(aot_gpr_6); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + aot_gpr_2);
    ctx.gpr[9] = (ctx.gpr[14] < aot_gpr_2 ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[11] + aot_gpr_3);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[21] = (ctx.hi);
    ctx.gpr[20] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr_4 = (ctx.gpr[15] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (ctx.lo);
      if (branch_taken) {
          goto L_08B62338;
      }
      goto L_08B62148;
    }
L_08B62148:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[15];
    aot_gpr_2 = (ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62330;
      }
      goto L_08B62150;
    }
L_08B62150:
    ctx.gpr[10] = (0u + 0u);
    goto L_08B62154;
L_08B62154:
    ctx.gpr[11] = (ctx.gpr[14] << 0u);
    ctx.gpr[24] = (aot_gpr_6 + ctx.gpr[10]);
    aot_gpr_5 = (ctx.gpr[24] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[25] = (ctx.gpr[25] + aot_gpr_5);
    aot_gpr_2 = (ctx.gpr[25] < ctx.gpr[7] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08B62324;
    }
    goto L_08B62174;
L_08B62174:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[25];
    aot_gpr_2 = (ctx.gpr[24] < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62318;
      }
      goto L_08B6217C;
    }
L_08B6217C:
    aot_gpr_2 = (ctx.gpr[15] >> 0u);
    goto L_08B62180;
L_08B62180:
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[20]);
    aot_gpr_3 = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_gpr_2 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_3 = (aot_gpr_3 + ctx.gpr[21]);
    aot_gpr_3 = (aot_gpr_3 + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[18] + aot_gpr_2);
    ctx.gpr[9] = (ctx.gpr[10] < aot_gpr_2 ? 1u : 0u);
    aot_gpr_5 = (8191u << 16u);
    ctx.gpr[11] = (ctx.gpr[19] + aot_gpr_3);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 | 65535u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[11] ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[8] = (ctx.gpr[24] + 0u);
    ctx.gpr[9] = (ctx.gpr[25] + 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08B62244;
      }
      goto L_08B621E4;
    }
L_08B621E4:
    aot_gpr_6 = (8191u << 16u);
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (32768u << 16u);
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_6 = (aot_gpr_6 | 65535u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    goto L_08B62200;
L_08B62200:
    aot_gpr_3 = (ctx.gpr[11] << 31u);
    aot_gpr_4 = (ctx.gpr[10] & ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] | aot_gpr_3);
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), aot_gpr_2);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_3 = (aot_gpr_6 < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6223C;
      }
      goto L_08B62224;
    }
L_08B62224:
    aot_gpr_2 = (ctx.gpr[9] << 31u);
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | aot_gpr_2);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[24]);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[25]);
    goto L_08B6223C;
L_08B6223C:
    if (aot_gpr_3 != 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
        goto L_08B62200;
    }
    goto L_08B62244;
L_08B62244:
    aot_gpr_2 = (4095u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (4095u << 16u);
      if (branch_taken) {
          goto L_08B6229C;
      }
      goto L_08B62258;
    }
L_08B62258:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 | 65535u);
    goto L_08B62264;
L_08B62264:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr_3 = (ctx.gpr[10] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] << 1u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] | aot_gpr_3);
    ctx.gpr[10] = (ctx.gpr[10] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), aot_gpr_2);
      if (branch_taken) {
          goto L_08B6230C;
      }
      goto L_08B62284;
    }
L_08B62284:
    aot_gpr_3 = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] | aot_gpr_3);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
      if (branch_taken) {
          goto L_08B62264;
      }
      goto L_08B6229C;
    }
L_08B6229C:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(255));
    aot_gpr_2 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_3 = (ctx.gpr[11] & aot_gpr_3);
      if (branch_taken) {
          goto L_08B622CC;
      }
      goto L_08B622B4;
    }
L_08B622B4:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(3));
    goto L_08B622B8;
L_08B622B8:
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_gpr_4 = (ctx.gpr[12] + 0u);
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08B62078;
L_08B622CC:
    { const bool branch_taken = aot_gpr_3 != 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B622B8;
      }
      goto L_08B622D4;
    }
L_08B622D4:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(256));
    aot_gpr_2 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_3 = (ctx.gpr[11] & aot_gpr_3);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    if (aot_gpr_2 != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
        goto L_08B62300;
    }
    goto L_08B622F0;
L_08B622F0:
    aot_gpr_2 = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B622B8;
      }
      goto L_08B622FC;
    }
L_08B622FC:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    goto L_08B62300;
L_08B62300:
    aot_gpr_2 = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_2);
    goto L_08B622B4;
L_08B6230C:
    ctx.gpr[10] = (ctx.gpr[10] | aot_gpr_6);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[7]);
    goto L_08B62284;
L_08B62318:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (ctx.gpr[15] >> 0u);
      if (branch_taken) {
          goto L_08B62180;
      }
      goto L_08B62320;
    }
L_08B62320:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08B62324;
L_08B62324:
    aot_gpr_2 = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_2);
    goto L_08B6217C;
L_08B62330:
    if (aot_gpr_2 == 0u) {
    ctx.gpr[10] = (0u + 0u);
        goto L_08B62154;
    }
    goto L_08B62338;
L_08B62338:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (0u + 0u);
    goto L_08B62154;
L_08B62348:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08B6237Cu);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_08B62C04;
L_08B6237C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08B62388u);
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    goto L_08B62C04;
L_08B62388:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_gpr_29 + 0u);
    aot_gpr_2 = (aot_gpr_5 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_29 + 0u);
      if (branch_taken) {
          goto L_08B623E0;
      }
      goto L_08B6239C;
    }
L_08B6239C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_2 = (aot_gpr_6 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B623E0;
      }
      goto L_08B623AC;
    }
L_08B623AC:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_2 = (aot_gpr_5 ^ 4u);
    aot_gpr_3 = (aot_gpr_3 ^ aot_gpr_4);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_3);
      if (branch_taken) {
          goto L_08B623D0;
      }
      goto L_08B623C4;
    }
L_08B623C4:
    aot_gpr_2 = (aot_gpr_5 ^ 2u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_6 ^ 4u);
      if (branch_taken) {
          goto L_08B623F8;
      }
      goto L_08B623D0;
    }
L_08B623D0:
    aot_gpr_2 = (2233u << 16u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(-24952));
      if (branch_taken) {
          goto L_08B623E0;
      }
      goto L_08B623DC;
    }
L_08B623DC:
    aot_gpr_4 = (aot_gpr_29 + 0u);
    goto L_08B623E0;
L_08B623E0:
    ctx.gpr[31] = (0x08B623E8u);
    goto L_08B62964;
L_08B623E8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
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
L_08B623F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_6 ^ 2u);
      if (branch_taken) {
          goto L_08B6241C;
      }
      goto L_08B62400;
    }
L_08B62400:
    aot_gpr_2 = (0u + 0u);
    aot_gpr_3 = (0u + 0u);
    aot_gpr_4 = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    goto L_08B623E0;
L_08B6241C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B62434;
      }
      goto L_08B62424;
    }
L_08B62424:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08B623E0;
L_08B62434:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[12] = (aot_gpr_5 < ctx.gpr[11] ? 1u : 0u);
    aot_gpr_3 = (aot_gpr_3 - aot_gpr_2);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_3);
      if (branch_taken) {
          goto L_08B6254C;
      }
      goto L_08B62458;
    }
L_08B62458:
    { const bool branch_taken = ctx.gpr[11] == aot_gpr_5;
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62544;
      }
      goto L_08B62460;
    }
L_08B62460:
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    goto L_08B62470;
L_08B62470:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_gpr_2 = (ctx.gpr[9] << 31u);
      if (branch_taken) {
          goto L_08B6249C;
      }
      goto L_08B62478;
    }
L_08B62478:
    { const bool branch_taken = ctx.gpr[11] == aot_gpr_5;
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62534;
      }
      goto L_08B62480;
    }
L_08B62480:
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[10] ? 1u : 0u);
    goto L_08B62484;
L_08B62484:
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[11]);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[10]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_2);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] | ctx.gpr[9]);
    aot_gpr_2 = (ctx.gpr[9] << 31u);
    goto L_08B6249C;
L_08B6249C:
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[7] = (aot_gpr_5 << 1u);
    aot_gpr_3 = (aot_gpr_4 >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] | aot_gpr_2);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] | aot_gpr_3);
    aot_gpr_6 = (aot_gpr_4 << 1u);
    aot_gpr_2 = (ctx.gpr[8] | ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_6 + 0u);
    aot_gpr_5 = (ctx.gpr[7] + 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[12] = (ctx.gpr[7] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62470;
      }
      goto L_08B624CC;
    }
L_08B624CC:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(255));
    aot_gpr_2 = (ctx.gpr[14] & aot_gpr_2);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_3 = (ctx.gpr[15] & aot_gpr_3);
      if (branch_taken) {
          goto L_08B624F4;
      }
      goto L_08B624E4;
    }
L_08B624E4:
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    aot_gpr_4 = (ctx.gpr[13] + 0u);
    goto L_08B623E0;
L_08B624F4:
    { const bool branch_taken = aot_gpr_3 != 0u;
      if (branch_taken) {
          goto L_08B624E4;
      }
      goto L_08B624FC;
    }
L_08B624FC:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(256));
    aot_gpr_2 = (ctx.gpr[14] & aot_gpr_2);
    aot_gpr_3 = (ctx.gpr[15] & aot_gpr_3);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    if (aot_gpr_2 != 0u) {
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
        goto L_08B62528;
    }
    goto L_08B62518;
L_08B62518:
    aot_gpr_2 = (aot_gpr_6 | ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B624E4;
      }
      goto L_08B62524;
    }
L_08B62524:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
    goto L_08B62528;
L_08B62528:
    aot_gpr_2 = (ctx.gpr[14] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] + aot_gpr_2);
    goto L_08B624E4;
L_08B62534:
    if (aot_gpr_2 != 0u) {
    aot_gpr_2 = (ctx.gpr[9] << 31u);
        goto L_08B6249C;
    }
    goto L_08B6253C;
L_08B6253C:
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[10] ? 1u : 0u);
    goto L_08B62484;
L_08B62544:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B62460;
      }
      goto L_08B6254C;
    }
L_08B6254C:
    aot_gpr_2 = (aot_gpr_3 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_3 = (aot_gpr_4 >> 31u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_3);
    aot_gpr_4 = (aot_gpr_4 << 1u);
    ctx.gpr[12] = (aot_gpr_5 < ctx.gpr[11] ? 1u : 0u);
    goto L_08B62460;
L_08B6256C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08B625A0u);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    goto L_08B62C04;
L_08B625A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08B625ACu);
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    goto L_08B62C04;
L_08B625AC:
    aot_gpr_5 = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B625B8u);
    aot_gpr_4 = (aot_gpr_29 + 0u);
    goto L_08B62D20;
L_08B625B8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
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
L_08B625C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_3 = (aot_gpr_4 >> 31u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_3);
      if (branch_taken) {
          goto L_08B62600;
      }
      goto L_08B625E4;
    }
L_08B625E4:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08B625EC;
L_08B625EC:
    ctx.gpr[31] = (0x08B625F4u);
    aot_gpr_4 = (aot_gpr_29 + 0u);
    goto L_08B62964;
L_08B625F4:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    goto L_08B625F8;
L_08B625F8:
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
L_08B62600:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = aot_gpr_3 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
      if (branch_taken) {
          goto L_08B62698;
      }
      goto L_08B6260C;
    }
L_08B6260C:
    aot_gpr_2 = (32768u << 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_2;
      if (branch_taken) {
          goto L_08B62680;
      }
      goto L_08B62618;
    }
L_08B62618:
    aot_gpr_2 = (0u - aot_gpr_4);
    aot_gpr_3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 31u));
    goto L_08B62620;
L_08B62620:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_gpr_2 = (4095u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B625EC;
      }
      goto L_08B62640;
    }
L_08B62640:
    aot_gpr_6 = (4095u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 65535u);
    goto L_08B62648;
L_08B62648:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_3 = (aot_gpr_3 << 1u);
    aot_gpr_3 = (aot_gpr_3 | aot_gpr_4);
    aot_gpr_2 = (aot_gpr_2 << 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B62648;
      }
      goto L_08B62678;
    }
L_08B62678:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_08B625EC;
L_08B62680:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(-24216)));
    aot_gpr_3 = (2233u << 16u);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(-24212)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    goto L_08B625F8;
L_08B62698:
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    goto L_08B62620;
L_08B626A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_3);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B626C8u);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    goto L_08B62C04;
L_08B626C8:
    aot_gpr_5 = (0u + 0u);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_3 < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62718;
      }
      goto L_08B626DC;
    }
L_08B626DC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
      if (branch_taken) {
          goto L_08B62718;
      }
      goto L_08B626E4;
    }
L_08B626E4:
    aot_gpr_3 = (32767u << 16u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_5 = (32768u << 16u);
      if (branch_taken) {
          goto L_08B6270C;
      }
      goto L_08B626F0;
    }
L_08B626F0:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62718;
      }
      goto L_08B62700;
    }
L_08B62700:
    aot_gpr_3 = (32767u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (32768u << 16u);
      if (branch_taken) {
          goto L_08B62728;
      }
      goto L_08B6270C;
    }
L_08B6270C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    if (aot_gpr_2 == 0u) aot_gpr_5 = (aot_gpr_3);
    goto L_08B62718;
L_08B62718:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_2 = (aot_gpr_5 + 0u);
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
L_08B62728:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(60));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_2);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_gpr_4 << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
      if (branch_taken) {
          goto L_08B62750;
      }
      goto L_08B62744;
    }
L_08B62744:
    aot_gpr_6 = (aot_gpr_3 >> (aot_gpr_4 & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08B62768;
      }
      goto L_08B62750;
    }
L_08B62750:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (aot_gpr_2 >> (aot_gpr_4 & 31u));
      if (branch_taken) {
          goto L_08B62764;
      }
      goto L_08B62758;
    }
L_08B62758:
    ctx.gpr[8] = (0u - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_3 << (ctx.gpr[8] & 31u));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[8]);
    goto L_08B62764;
L_08B62764:
    ctx.gpr[7] = (aot_gpr_3 >> (aot_gpr_4 & 31u));
    goto L_08B62768;
L_08B62768:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u - aot_gpr_6);
    if (aot_gpr_2 == 0u) aot_gpr_5 = (aot_gpr_6);
    goto L_08B62718;
L_08B62778:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_3);
    ctx.gpr[31] = (0x08B6279Cu);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    goto L_08B62C04;
L_08B6279C:
    aot_gpr_4 = (aot_gpr_29 + 0u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08B627B0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_2);
    goto L_08B62964;
L_08B627B0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
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
L_08B627BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[31] = (0x08B627E4u);
    aot_gpr_4 = (aot_gpr_29 + 0u);
    goto L_08B62964;
L_08B627E4:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
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
L_08B627F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_3 = (aot_gpr_5 + 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_3);
    ctx.gpr[31] = (0x08B62814u);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    goto L_08B62C04;
L_08B62814:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (16383u << 16u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_3 = (ctx.gpr[9] & aot_gpr_3);
    aot_gpr_2 = (ctx.gpr[8] & aot_gpr_2);
    aot_gpr_6 = (ctx.gpr[9] << 2u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] | aot_gpr_6);
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_2 = (aot_gpr_2 | ctx.gpr[8]);
    ctx.gpr[31] = (0x08B6285Cu);
    ctx.gpr[7] = (aot_gpr_2 + 0u);
    goto L_08B62934;
L_08B6285C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
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
L_08B62868:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_3 = (127u << 16u);
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    aot_gpr_6 = (aot_gpr_2 >> 23u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (aot_gpr_2 & aot_gpr_3);
      if (branch_taken) {
          goto L_08B628E4;
      }
      goto L_08B6288C;
    }
L_08B6288C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B628DC;
      }
      goto L_08B62894;
    }
L_08B62894:
    aot_gpr_2 = (16383u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 7u);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(-126));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(3));
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_3);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B628D4;
      }
      goto L_08B628B8;
    }
L_08B628B8:
    aot_gpr_4 = (16383u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65535u);
    goto L_08B628C0;
L_08B628C0:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B628C0;
      }
      goto L_08B628D0;
    }
L_08B628D0:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_3);
    goto L_08B628D4;
L_08B628D4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
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
L_08B628DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_2);
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
L_08B628E4:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_2;
    aot_gpr_2 = (ctx.gpr[7] << 7u);
      if (branch_taken) {
          goto L_08B6290C;
      }
      goto L_08B628F0;
    }
L_08B628F0:
    aot_gpr_3 = (16384u << 16u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-127));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_2);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08B628DC;
L_08B6290C:
    if (ctx.gpr[7] != 0u) {
    aot_gpr_2 = (16u << 16u);
        goto L_08B6291C;
    }
    goto L_08B62914;
L_08B62914:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(4));
    goto L_08B628DC;
L_08B6291C:
    aot_gpr_2 = (ctx.gpr[7] & aot_gpr_2);
    if (aot_gpr_2 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
        goto L_08B628D4;
    }
    goto L_08B62928;
L_08B62928:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08B628D4;
L_08B62934:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_2 = (aot_gpr_4 + 0u);
    aot_gpr_4 = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08B62958u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_08B62E84;
L_08B62958:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08B62964:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_gpr_3 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08B629F8;
      }
      goto L_08B62984;
    }
L_08B62984:
    aot_gpr_3 = (8u << 16u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (ctx.gpr[10] | aot_gpr_2);
    ctx.gpr[11] = (ctx.gpr[11] | aot_gpr_3);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
    goto L_08B62998;
L_08B62998:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B6299C;
L_08B6299C:
    aot_gpr_6 = (15u << 16u);
    aot_gpr_3 = (65520u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 65535u);
    aot_gpr_6 = (ctx.gpr[11] & aot_gpr_6);
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_3);
    aot_gpr_4 = (32783u << 16u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[9] & 2047u);
    aot_gpr_4 = (aot_gpr_4 | 65535u);
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 20u);
    aot_gpr_3 = (32767u << 16u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_5);
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_3);
    aot_gpr_4 = (ctx.gpr[12] << 31u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
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
L_08B629F8:
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
        goto L_08B62B64;
    }
    goto L_08B62A04;
L_08B62A04:
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B62B64;
      }
      goto L_08B62A10;
    }
L_08B62A10:
    aot_gpr_2 = (ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6299C;
      }
      goto L_08B62A1C;
    }
L_08B62A1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_4) < -1022 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_4) < 1024 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62B5C;
      }
      goto L_08B62A2C;
    }
L_08B62A2C:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[13] = (aot_gpr_2 - aot_gpr_4);
    aot_gpr_3 = (static_cast<std::int32_t>(ctx.gpr[13]) < 57 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 != 0u;
      if (branch_taken) {
          goto L_08B62AC4;
      }
      goto L_08B62A40;
    }
L_08B62A40:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    goto L_08B62A48;
L_08B62A48:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(255));
    aot_gpr_2 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_3 = (ctx.gpr[11] & aot_gpr_3);
      if (branch_taken) {
          goto L_08B62A94;
      }
      goto L_08B62A60;
    }
L_08B62A60:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08B62A64;
L_08B62A64:
    aot_gpr_2 = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08B62A68;
L_08B62A68:
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_2);
    aot_gpr_2 = (4095u << 16u);
    goto L_08B62A70;
L_08B62A70:
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[11] ? 1u : 0u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    aot_gpr_4 = (ctx.gpr[11] << 24u);
    if (aot_gpr_2 != 0u) ctx.gpr[9] = (aot_gpr_3);
    ctx.gpr[10] = (ctx.gpr[10] | aot_gpr_4);
    goto L_08B62A8C;
L_08B62A8C:
    ctx.gpr[11] = (ctx.gpr[11] >> 8u);
    goto L_08B62998;
L_08B62A94:
    if (aot_gpr_3 != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08B62A64;
    }
    goto L_08B62A9C;
L_08B62A9C:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(256));
    aot_gpr_2 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_3 = (ctx.gpr[11] & aot_gpr_3);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    if (aot_gpr_2 == 0u) {
    aot_gpr_2 = (4095u << 16u);
        goto L_08B62A70;
    }
    goto L_08B62AB8;
L_08B62AB8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_gpr_2 = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08B62A68;
L_08B62AC4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_08B62AE4;
      }
      goto L_08B62AD8;
    }
L_08B62AD8:
    aot_gpr_3 = (aot_gpr_4 << (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + 0u);
      if (branch_taken) {
          goto L_08B62AFC;
      }
      goto L_08B62AE4;
    }
L_08B62AE4:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_3 = (aot_gpr_5 << (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08B62AF8;
      }
      goto L_08B62AEC;
    }
L_08B62AEC:
    aot_gpr_6 = (0u - ctx.gpr[13]);
    aot_gpr_6 = (aot_gpr_4 >> (aot_gpr_6 & 31u));
    aot_gpr_3 = (aot_gpr_3 | aot_gpr_6);
    goto L_08B62AF8;
L_08B62AF8:
    aot_gpr_2 = (aot_gpr_4 << (ctx.gpr[13] & 31u));
    goto L_08B62AFC;
L_08B62AFC:
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_2 < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(-1));
    aot_gpr_3 = (aot_gpr_3 + ctx.gpr[7]);
    aot_gpr_2 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_3 = (ctx.gpr[11] & aot_gpr_3);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    ctx.gpr[8] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
      if (branch_taken) {
          goto L_08B62B30;
      }
      goto L_08B62B24;
    }
L_08B62B24:
    aot_gpr_6 = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08B62B48;
      }
      goto L_08B62B30;
    }
L_08B62B30:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (ctx.gpr[10] >> (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08B62B44;
      }
      goto L_08B62B38;
    }
L_08B62B38:
    ctx.gpr[8] = (0u - ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[8]);
    goto L_08B62B44;
L_08B62B44:
    ctx.gpr[7] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    goto L_08B62B48;
L_08B62B48:
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_5 = (0u + 0u);
    ctx.gpr[10] = (aot_gpr_6 | aot_gpr_2);
    ctx.gpr[11] = (ctx.gpr[7] | aot_gpr_5);
    goto L_08B62A48;
L_08B62B5C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
      if (branch_taken) {
          goto L_08B62B74;
      }
      goto L_08B62B64;
    }
L_08B62B64:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B6299C;
L_08B62B74:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(255));
    aot_gpr_6 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[11] & aot_gpr_3);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_2;
    ctx.gpr[9] = (aot_gpr_4 + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_08B62BD4;
      }
      goto L_08B62B90;
    }
L_08B62B90:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08B62B94;
L_08B62B94:
    aot_gpr_2 = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08B62B98;
L_08B62B98:
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_2);
    aot_gpr_2 = (8191u << 16u);
    goto L_08B62BA0;
L_08B62BA0:
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_2 = (aot_gpr_2 < ctx.gpr[11] ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
        goto L_08B62BC8;
    }
    goto L_08B62BB0;
L_08B62BB0:
    aot_gpr_2 = (ctx.gpr[11] << 31u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] | aot_gpr_2);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    goto L_08B62BC8;
L_08B62BC8:
    aot_gpr_2 = (ctx.gpr[11] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] | aot_gpr_2);
    goto L_08B62A8C;
L_08B62BD4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08B62B94;
    }
    goto L_08B62BDC;
L_08B62BDC:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(256));
    aot_gpr_2 = (ctx.gpr[10] & aot_gpr_2);
    aot_gpr_3 = (ctx.gpr[11] & aot_gpr_3);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    if (aot_gpr_2 == 0u) {
    aot_gpr_2 = (8191u << 16u);
        goto L_08B62BA0;
    }
    goto L_08B62BF8;
L_08B62BF8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_gpr_2 = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08B62B98;
L_08B62C04:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_3 = (15u << 16u);
    ctx.gpr[10] = (aot_gpr_5 + 0u);
    ctx.gpr[7] = (aot_gpr_2 >> 20u);
    aot_gpr_5 = (aot_gpr_2 >> 31u);
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_2 & aot_gpr_3);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_08B62CAC;
      }
      goto L_08B62C30;
    }
L_08B62C30:
    aot_gpr_2 = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08B62C48;
      }
      goto L_08B62C3C;
    }
L_08B62C3C:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(2));
    goto L_08B62C40;
L_08B62C40:
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_2);
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
L_08B62C48:
    aot_gpr_4 = (4095u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] | aot_gpr_2);
    aot_gpr_4 = (aot_gpr_4 | 65535u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1022));
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_2);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_3);
      if (branch_taken) {
          goto L_08B62CA0;
      }
      goto L_08B62C74;
    }
L_08B62C74:
    aot_gpr_5 = (4095u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 65535u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1022));
    goto L_08B62C80;
L_08B62C80:
    aot_gpr_3 = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[9] = (ctx.gpr[9] | aot_gpr_3);
    aot_gpr_2 = (aot_gpr_5 < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B62C80;
      }
      goto L_08B62C9C;
    }
L_08B62C9C:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08B62CA0;
L_08B62CA0:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
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
L_08B62CAC:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_2;
    aot_gpr_6 = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08B62CEC;
      }
      goto L_08B62CB8;
    }
L_08B62CB8:
    aot_gpr_3 = (ctx.gpr[9] << 8u);
    aot_gpr_3 = (aot_gpr_3 | aot_gpr_6);
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (ctx.gpr[8] << 8u);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_4);
    aot_gpr_3 = (aot_gpr_3 | aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), aot_gpr_3);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_6);
    goto L_08B62C40;
L_08B62CEC:
    aot_gpr_2 = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B62C40;
      }
      goto L_08B62CF8;
    }
L_08B62CF8:
    aot_gpr_3 = (8u << 16u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_2 = (ctx.gpr[8] & aot_gpr_2);
    aot_gpr_3 = (ctx.gpr[9] & aot_gpr_3);
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_3);
    if (aot_gpr_2 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
        goto L_08B62CA0;
    }
    goto L_08B62D14;
L_08B62D14:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08B62CA0;
L_08B62D20:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_3 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[7] = (aot_gpr_4 + 0u);
      if (branch_taken) {
          goto L_08B62D40;
      }
      goto L_08B62D30;
    }
L_08B62D30:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_6 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
        goto L_08B62D4C;
    }
    goto L_08B62D40;
L_08B62D40:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    goto L_08B62D44;
L_08B62D44:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 + 0u);
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
L_08B62D4C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
      if (branch_taken) {
          goto L_08B62D70;
      }
      goto L_08B62D54;
    }
L_08B62D54:
    aot_gpr_2 = (aot_gpr_6 ^ 4u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
        goto L_08B62D70;
    }
    goto L_08B62D60;
L_08B62D60:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_3 - aot_gpr_2);
    goto L_08B62D44;
L_08B62D70:
    if (aot_gpr_2 == 0u) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08B62DC4;
    }
    goto L_08B62D78;
L_08B62D78:
    aot_gpr_2 = (aot_gpr_6 ^ 4u);
    if (aot_gpr_2 == 0u) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
        goto L_08B62DA8;
    }
    goto L_08B62D84;
L_08B62D84:
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_2 = (aot_gpr_6 ^ 2u);
      if (branch_taken) {
          goto L_08B62DB8;
      }
      goto L_08B62D90;
    }
L_08B62D90:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (0u + 0u);
      if (branch_taken) {
          goto L_08B62D44;
      }
      goto L_08B62D98;
    }
L_08B62D98:
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_2 = (aot_gpr_6 ^ 2u);
        goto L_08B62DB8;
    }
    goto L_08B62DA4;
L_08B62DA4:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_08B62DA8;
L_08B62DA8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B62DB0;
L_08B62DB0:
    if (aot_gpr_3 == 0u) aot_gpr_4 = (aot_gpr_2);
    goto L_08B62D44;
L_08B62DB8:
    if (aot_gpr_2 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08B62DD0;
    }
    goto L_08B62DC0;
L_08B62DC0:
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08B62DC4;
L_08B62DC4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    goto L_08B62DB0;
L_08B62DD0:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_3;
    if (aot_gpr_6 == 0u) aot_gpr_4 = (aot_gpr_2);
      if (branch_taken) {
          goto L_08B62D44;
      }
      goto L_08B62DE4;
    }
L_08B62DE4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_3 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 != 0u;
    if (aot_gpr_6 == 0u) aot_gpr_4 = (aot_gpr_2);
      if (branch_taken) {
          goto L_08B62D44;
      }
      goto L_08B62DFC;
    }
L_08B62DFC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_3 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 != 0u;
    if (aot_gpr_6 == 0u) aot_gpr_4 = (aot_gpr_2);
      if (branch_taken) {
          goto L_08B62D44;
      }
      goto L_08B62E10;
    }
L_08B62E10:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B62E7C;
    }
    goto L_08B62E24;
L_08B62E24:
    if (ctx.gpr[8] == aot_gpr_4) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08B62E68;
    }
    goto L_08B62E2C;
L_08B62E2C:
    aot_gpr_2 = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    goto L_08B62E30;
L_08B62E30:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
        goto L_08B62E5C;
    }
    goto L_08B62E38;
L_08B62E38:
    if (aot_gpr_4 == ctx.gpr[8]) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
        goto L_08B62E48;
    }
    goto L_08B62E40;
L_08B62E40:
    aot_gpr_4 = (0u + 0u);
    goto L_08B62D44;
L_08B62E48:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_3 ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (0u + 0u);
        goto L_08B62D44;
    }
    goto L_08B62E58;
L_08B62E58:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    goto L_08B62E5C;
L_08B62E5C:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B62E60;
L_08B62E60:
    if (aot_gpr_6 == 0u) aot_gpr_4 = (aot_gpr_2);
    goto L_08B62D44;
L_08B62E68:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_3 ? 1u : 0u);
    if (aot_gpr_2 == 0u) {
    aot_gpr_2 = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
        goto L_08B62E30;
    }
    goto L_08B62E78;
L_08B62E78:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B62E7C;
L_08B62E7C:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    goto L_08B62E60;
L_08B62E84:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_2 = (aot_gpr_3 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08B62EF8;
      }
      goto L_08B62E9C;
    }
L_08B62E9C:
    aot_gpr_2 = (16u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_2);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08B62EA8;
L_08B62EA8:
    aot_gpr_3 = (127u << 16u);
    goto L_08B62EAC;
L_08B62EAC:
    aot_gpr_2 = (65408u << 16u);
    aot_gpr_3 = (aot_gpr_3 | 65535u);
    aot_gpr_3 = (aot_gpr_5 & aot_gpr_3);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_2);
    aot_gpr_5 = (32895u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_3);
    aot_gpr_4 = (ctx.gpr[7] & 255u);
    aot_gpr_5 = (aot_gpr_5 | 65535u);
    aot_gpr_4 = (aot_gpr_4 << 23u);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_2 = (32767u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_4);
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_3 = (ctx.gpr[8] << 31u);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_3);
    aot_fpr_0 = std::bit_cast<float>(aot_gpr_6);
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
L_08B62EF8:
    aot_gpr_2 = (aot_gpr_3 ^ 4u);
    if (aot_gpr_2 == 0u) {
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
        goto L_08B62FA8;
    }
    goto L_08B62F04;
L_08B62F04:
    aot_gpr_2 = (aot_gpr_3 ^ 2u);
    if (aot_gpr_2 == 0u) {
    aot_gpr_5 = (0u + 0u);
        goto L_08B62EA8;
    }
    goto L_08B62F10;
L_08B62F10:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_3 = (127u << 16u);
      if (branch_taken) {
          goto L_08B62EAC;
      }
      goto L_08B62F18;
    }
L_08B62F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_4) < -126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_4) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B62F9C;
      }
      goto L_08B62F28;
    }
L_08B62F28:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-126));
    aot_gpr_4 = (aot_gpr_2 - aot_gpr_4);
    aot_gpr_3 = (static_cast<std::int32_t>(aot_gpr_4) < 26 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_3 != 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B62F80;
      }
      goto L_08B62F3C;
    }
L_08B62F3C:
    aot_gpr_5 = (0u + 0u);
    goto L_08B62F40;
L_08B62F40:
    aot_gpr_3 = (aot_gpr_5 & 127u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(64));
    if (aot_gpr_3 == aot_gpr_2) {
    aot_gpr_2 = (aot_gpr_5 & 128u);
        goto L_08B62F70;
    }
    goto L_08B62F50;
L_08B62F50:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(63));
    goto L_08B62F54;
L_08B62F54:
    aot_gpr_2 = (16383u << 16u);
    goto L_08B62F58;
L_08B62F58:
    aot_gpr_2 = (aot_gpr_2 | 65535u);
    aot_gpr_2 = (aot_gpr_2 < aot_gpr_5 ? 1u : 0u);
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr_2 != 0u) ctx.gpr[7] = (aot_gpr_3);
    goto L_08B62F68;
L_08B62F68:
    aot_gpr_5 = (aot_gpr_5 >> 7u);
    goto L_08B62EA8;
L_08B62F70:
    if (aot_gpr_2 != 0u) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
        goto L_08B62F54;
    }
    goto L_08B62F78;
L_08B62F78:
    aot_gpr_2 = (16383u << 16u);
    goto L_08B62F58;
L_08B62F80:
    aot_gpr_2 = (aot_gpr_2 << (aot_gpr_4 & 31u));
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_2 = (aot_gpr_5 & aot_gpr_2);
    aot_gpr_3 = (aot_gpr_5 >> (aot_gpr_4 & 31u));
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_3 | aot_gpr_2);
    goto L_08B62F40;
L_08B62F9C:
    if (aot_gpr_2 != 0u) {
    aot_gpr_3 = (aot_gpr_5 & 127u);
        goto L_08B62FB0;
    }
    goto L_08B62FA4;
L_08B62FA4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08B62FA8;
L_08B62FA8:
    aot_gpr_5 = (0u + 0u);
    goto L_08B62EA8;
L_08B62FB0:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr_3 == aot_gpr_2;
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08B62FD4;
      }
      goto L_08B62FBC;
    }
L_08B62FBC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(63));
    goto L_08B62FC0;
L_08B62FC0:
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_5 = (aot_gpr_5 >> 7u);
        goto L_08B62EA8;
    }
    goto L_08B62FC8;
L_08B62FC8:
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08B62F68;
L_08B62FD4:
    aot_gpr_2 = (aot_gpr_5 & 128u);
    if (aot_gpr_2 != 0u) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
        goto L_08B62FC0;
    }
    goto L_08B62FE0;
L_08B62FE0:
    goto L_08B62FC0;
L_08B62FE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    aot_gpr_2 = (32836u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_gpr_3 = (aot_gpr_2 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B630F8;
      }
      goto L_08B63014;
    }
L_08B63014:
    ctx.gpr[9] = (2236u << 16u);
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_3 = (aot_gpr_6 + static_cast<std::uint32_t>(17200));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(17088));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(22032), ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(20800));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(22028), aot_gpr_3);
    aot_gpr_3 = (0u + 0u);
    goto L_08B63040;
L_08B63040:
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_gpr_3 < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63040;
      }
      goto L_08B63054;
    }
L_08B63054:
    ctx.gpr[11] = (2236u << 16u);
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(21408));
    aot_gpr_3 = (0u + 0u);
    goto L_08B63060;
L_08B63060:
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (aot_gpr_3 < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63060;
      }
      goto L_08B63074;
    }
L_08B63074:
    ctx.gpr[14] = (2236u << 16u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(448));
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[31] = (0x08B6308Cu);
    ctx.gpr[17] = (ctx.gpr[14] + static_cast<std::uint32_t>(22016));
    ctx.pc = 0x08B733A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6308C:
    ctx.gpr[13] = (32836u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_2);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_3 = (ctx.gpr[13] | 1u);
      if (branch_taken) {
          goto L_08B630F8;
      }
      goto L_08B6309C;
    }
L_08B6309C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(256));
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[31] = (0x08B630B0u);
    ctx.gpr[16] = (2236u << 16u);
    ctx.pc = 0x08B733A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B630B0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22036), aot_gpr_2);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(22036));
      if (branch_taken) {
          goto L_08B63150;
      }
      goto L_08B630BC;
    }
L_08B630BC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08B630CCu);
    aot_gpr_6 = (0u + 0u);
    ctx.pc = 0x08B733A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B630CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_2);
      if (branch_taken) {
          goto L_08B63140;
      }
      goto L_08B630D4;
    }
L_08B630D4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08B630E4u);
    aot_gpr_6 = (0u + 0u);
    ctx.pc = 0x08B733A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B630E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_2);
      if (branch_taken) {
          goto L_08B63118;
      }
      goto L_08B630EC;
    }
L_08B630EC:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17080), ctx.gpr[16]);
    aot_gpr_3 = (0u + 0u);
    goto L_08B630F8;
L_08B630F8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_3 + 0u);
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
L_08B63118:
    ctx.gpr[31] = (0x08B63120u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63120:
    ctx.gpr[31] = (0x08B63128u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22036)));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B6312C;
L_08B6312C:
    ctx.gpr[31] = (0x08B63134u);
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63134:
    ctx.gpr[15] = (32836u << 16u);
    aot_gpr_3 = (ctx.gpr[15] | 1u);
    goto L_08B630F8;
L_08B63140:
    ctx.gpr[31] = (0x08B63148u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22036)));
    goto L_08B6312C;
L_08B63150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6312C;
L_08B63158:
    aot_gpr_6 = (0u | 65408u);
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_gpr_4 + 0u);
    ctx.gpr[9] = (aot_gpr_4 < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.gpr[10] = (aot_gpr_5 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (32836u << 16u);
    aot_gpr_2 = (aot_gpr_6 < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_6 = (aot_gpr_4 | 16u);
      if (branch_taken) {
          goto L_08B631B8;
      }
      goto L_08B63180;
    }
L_08B63180:
    aot_gpr_3 = (32836u << 16u);
    aot_gpr_4 = (aot_gpr_5 & 63u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_6 = (aot_gpr_3 | 17u);
      if (branch_taken) {
          goto L_08B631B8;
      }
      goto L_08B63190;
    }
L_08B63190:
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    aot_gpr_2 = (32836u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(22036));
    aot_gpr_3 = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_2 | 17u);
      if (branch_taken) {
          goto L_08B631B8;
      }
      goto L_08B631AC;
    }
L_08B631AC:
    ctx.gpr[31] = (0x08B631B4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B733CCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B631B4:
    aot_gpr_6 = (aot_gpr_2 + 0u);
    goto L_08B631B8;
L_08B631B8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_6 + 0u);
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
L_08B631C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (0u | 32768u);
    aot_gpr_2 = (32836u << 16u);
    ctx.gpr[11] = (aot_gpr_4 < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (aot_gpr_2 | 16u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B63220;
      }
      goto L_08B631E8;
    }
L_08B631E8:
    ctx.gpr[11] = (32836u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[11] | 10u);
      if (branch_taken) {
          goto L_08B63220;
      }
      goto L_08B631F8;
    }
L_08B631F8:
    ctx.gpr[12] = (2236u << 16u);
    ctx.gpr[8] = (aot_gpr_4 << 2u);
    ctx.gpr[9] = (ctx.gpr[12] + static_cast<std::uint32_t>(22036));
    aot_gpr_4 = (32836u << 16u);
    aot_gpr_3 = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (aot_gpr_4 | 10u);
      if (branch_taken) {
          goto L_08B63220;
      }
      goto L_08B63214;
    }
L_08B63214:
    ctx.gpr[31] = (0x08B6321Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B7339Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6321C:
    ctx.gpr[8] = (aot_gpr_2 + 0u);
    goto L_08B63220;
L_08B63220:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (ctx.gpr[8] + 0u);
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
L_08B63230:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_3 = (32836u << 16u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17080)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_4 = (aot_gpr_3 | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B6329C;
      }
      goto L_08B63258;
    }
L_08B63258:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[31] = (0x08B63264u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22020)));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63264:
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(22036)));
    ctx.gpr[31] = (0x08B63274u);
    ctx.gpr[16] = (aot_gpr_6 + static_cast<std::uint32_t>(22036));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63274:
    ctx.gpr[31] = (0x08B6327Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6327C:
    ctx.gpr[31] = (0x08B63284u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B733ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63284:
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(22032), 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17080), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(22028), 0u);
    aot_gpr_4 = (0u + 0u);
    goto L_08B6329C;
L_08B6329C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_4 + 0u);
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
L_08B63358:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[23] = (2236u << 16u);
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17084)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_3 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B63414;
      }
      goto L_08B63398;
    }
L_08B63398:
    aot_gpr_3 = (2236u << 16u);
    ctx.gpr[30] = (aot_gpr_3 + 0u);
    ctx.gpr[22] = (aot_gpr_3 + static_cast<std::uint32_t>(17216));
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    goto L_08B633A8;
L_08B633A8:
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[19]);
    ctx.gpr[16] = (aot_gpr_4 << 8u);
    ctx.gpr[31] = (0x08B633B8u);
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[22]);
    goto L_08B63470;
L_08B633B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(17216));
      if (branch_taken) {
          goto L_08B63460;
      }
      goto L_08B633C0;
    }
L_08B633C0:
    aot_gpr_6 = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (aot_gpr_6 + static_cast<std::uint32_t>(112));
    goto L_08B633D0;
L_08B633D0:
    aot_gpr_4 = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B633DCu);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B63470;
L_08B633DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08B633D0;
      }
      goto L_08B633E4;
    }
L_08B633E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08B633F4u);
    aot_gpr_5 = (0u | 32768u);
    ctx.pc = 0x08B73394u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B633F4:
    ctx.gpr[8] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] >> 31u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.gpr[19] = (ctx.gpr[8] - ctx.gpr[7]);
    goto L_08B63408;
L_08B63408:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17084)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_5 = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08B633A8;
      }
      goto L_08B63414;
    }
L_08B63414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u + 0u);
    ctx.gpr[31] = (0x08B63424u);
    aot_gpr_6 = (0u + 0u);
    ctx.pc = 0x08B73394u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63424:
    ctx.gpr[31] = (0x08B6342Cu);
    aot_gpr_4 = (0u + 0u);
    ctx.pc = 0x08B73524u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6342C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (0u + 0u);
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
L_08B63460:
    ctx.gpr[31] = (0x08B63468u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(10000));
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63468:
    goto L_08B63408;
L_08B63470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_gpr_3 = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 + 0u);
    aot_gpr_4 = (0u + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u + 0u);
    goto L_08B634AC;
L_08B634AC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_3 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B634AC;
      }
      goto L_08B634C0;
    }
L_08B634C0:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_3 = (aot_gpr_4 + static_cast<std::uint32_t>(20800));
    ctx.gpr[16] = (aot_gpr_3 + 0u);
    ctx.gpr[17] = (0u + 0u);
    ctx.gpr[30] = (aot_gpr_3 + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[23] = (aot_gpr_3 + 0u);
    goto L_08B634DC;
L_08B634DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08B63530;
    }
    goto L_08B634E8;
L_08B634E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B634EC;
L_08B634EC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08B634DC;
      }
      goto L_08B634FC;
    }
L_08B634FC:
    aot_gpr_2 = (ctx.gpr[20] + 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_08B63530:
    aot_gpr_6 = (aot_gpr_3 & 1024u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B635A4;
      }
      goto L_08B6353C;
    }
L_08B6353C:
    ctx.gpr[7] = (aot_gpr_3 & 256u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B63584;
    }
    goto L_08B63548;
L_08B63548:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B63570;
      }
      goto L_08B63554;
    }
L_08B63554:
    aot_gpr_3 = (2236u << 16u);
    goto L_08B63558;
L_08B63558:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(22032)));
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08B63568u);
    aot_gpr_5 = (ctx.gpr[21] + 0u);
    goto L_08B63FAC;
L_08B63568:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B634EC;
L_08B63570:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[31] = (0x08B6357Cu);
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    goto L_08B63790;
L_08B6357C:
    aot_gpr_3 = (2236u << 16u);
    goto L_08B63558;
L_08B63584:
    if (ctx.gpr[10] == 0u) {
    aot_gpr_3 = (2236u << 16u);
        goto L_08B63558;
    }
    goto L_08B6358C;
L_08B6358C:
    aot_gpr_2 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(22032)));
    ctx.gpr[31] = (0x08B6359Cu);
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    goto L_08B63A3C;
L_08B6359C:
    aot_gpr_3 = (2236u << 16u);
    goto L_08B63558;
L_08B635A4:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[11] == 0u) {
    aot_gpr_3 = (2236u << 16u);
        goto L_08B63558;
    }
    goto L_08B635B0;
L_08B635B0:
    ctx.gpr[12] = (2236u << 16u);
    aot_gpr_3 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(22032)));
    aot_gpr_4 = (0u + 0u);
    goto L_08B635BC;
L_08B635BC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_gpr_4 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_3 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B635BC;
      }
      goto L_08B635D0;
    }
L_08B635D0:
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[23]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[14] = (ctx.gpr[15] & 256u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[25] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B63630;
      }
      goto L_08B635E4;
    }
L_08B635E4:
    ctx.gpr[22] = (2236u << 16u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22028)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    jump_target = aot_gpr_2;
    ctx.gpr[31] = (0x08B63600u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B63600u) goto L_08B63600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63600:
    if (aot_gpr_2 != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08B63608;
    }
    goto L_08B63608;
L_08B63608:
    ctx.gpr[24] = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22028)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[24] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(20852));
    aot_gpr_6 = (ctx.gpr[19] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08B63628u);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_08B63658;
L_08B63628:
    aot_gpr_3 = (2236u << 16u);
    goto L_08B63558;
L_08B63630:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x08B63648u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B63648u) goto L_08B63648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B63648:
    if (aot_gpr_2 != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08B63554;
    }
    goto L_08B63650;
L_08B63650:
    aot_gpr_3 = (2236u << 16u);
    goto L_08B63558;
L_08B63658:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[15] = (aot_gpr_5 + 0u);
    ctx.gpr[10] = (2233u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_2 = (ctx.gpr[10] + static_cast<std::uint32_t>(-24648));
    ctx.gpr[18] = (aot_gpr_6 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[7] + 0u);
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_3) >> 4u));
    ctx.gpr[8] = (ctx.gpr[9] + aot_gpr_2);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(7));
    aot_gpr_5 = (aot_gpr_3 & 15u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_6;
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08B63774;
      }
      goto L_08B636B4;
    }
L_08B636B4:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[8] = (aot_gpr_4 + 0u);
    ctx.gpr[24] = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(13));
    goto L_08B636CC;
L_08B636CC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[15] + ctx.gpr[12]);
    aot_gpr_3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32768));
    aot_gpr_5 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_3 << 28u);
    aot_gpr_3 = ((aot_gpr_3 & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> (ctx.gpr[24] & 31u)));
    aot_gpr_4 = (aot_gpr_3 << (ctx.gpr[16] & 31u));
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_3 = (ctx.gpr[10] + aot_gpr_5);
    ctx.gpr[10] = (aot_gpr_2 + aot_gpr_3);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 6u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_2 != 0u) aot_gpr_5 = (aot_gpr_6);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < -32768 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) aot_gpr_5 = (ctx.gpr[7]);
    aot_gpr_3 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    aot_gpr_2 = (ctx.gpr[9] + aot_gpr_3);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_2);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    aot_gpr_3 = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_3 != 0u) aot_gpr_4 = (aot_gpr_6);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_4) < -32768 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) aot_gpr_4 = (ctx.gpr[7]);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[10] = (aot_gpr_5 + 0u);
    ctx.gpr[9] = (aot_gpr_4 + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B636CC;
      }
      goto L_08B63768;
    }
L_08B63768:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_3 = (ctx.gpr[17] + 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08B63774;
L_08B63774:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_gpr_3 + 0u);
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
L_08B63790:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[7] = (aot_gpr_4 + 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.lo);
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(20800));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_2);
    ctx.gpr[10] = (aot_gpr_5 + 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_3 = (0u + 0u);
    goto L_08B637C8;
L_08B637C8:
    aot_gpr_3 = (aot_gpr_3 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_3 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B637C8;
      }
      goto L_08B637DC;
    }
L_08B637DC:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (aot_gpr_4 + static_cast<std::uint32_t>(20800));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[12] + ctx.gpr[11]);
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_3 == ctx.gpr[9];
    ctx.gpr[13] = (static_cast<std::int32_t>(aot_gpr_3) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B63998;
      }
      goto L_08B63800;
    }
L_08B63800:
    { const bool branch_taken = ctx.gpr[13] != 0u;
      if (branch_taken) {
          goto L_08B63908;
      }
      goto L_08B63808;
    }
L_08B63808:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr_3 == aot_gpr_4) {
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
        goto L_08B63828;
    }
    goto L_08B63814;
L_08B63814:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B63818;
L_08B63818:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_08B63828:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_3) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B63818;
      }
      goto L_08B63834;
    }
L_08B63834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_3) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(28), 0u);
        goto L_08B63900;
    }
    goto L_08B63848;
L_08B63848:
    ctx.gpr[11] = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22028)));
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_6 = (0u + 0u);
    goto L_08B63858;
L_08B63858:
    ctx.gpr[13] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (aot_gpr_6 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63858;
      }
      goto L_08B63874;
    }
L_08B63874:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63878;
L_08B63878:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(20848));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22028)));
    aot_gpr_2 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[10] + 0u);
    ctx.gpr[7] = (ctx.gpr[16] + aot_gpr_2);
    ctx.gpr[31] = (0x08B638A0u);
    aot_gpr_6 = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08B63658;
L_08B638A0:
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[10];
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08B638E4;
      }
      goto L_08B638AC;
    }
L_08B638AC:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[14];
    ctx.gpr[12] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08B638C8;
      }
      goto L_08B638B4;
    }
L_08B638B4:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[12]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    goto L_08B63814;
L_08B638C8:
    ctx.gpr[24] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[15] = (ctx.gpr[16] + ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_08B63814;
L_08B638E4:
    aot_gpr_3 = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[25] = (ctx.gpr[16] + aot_gpr_3);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[25] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_08B63814;
L_08B63900:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(32), 0u);
    goto L_08B63814;
L_08B63908:
    { const bool branch_taken = aot_gpr_3 != 0u;
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B63818;
      }
      goto L_08B63910;
    }
L_08B63910:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(28), 0u);
        goto L_08B63900;
    }
    goto L_08B63928;
L_08B63928:
    ctx.gpr[11] = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22028)));
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (0u + 0u);
    goto L_08B63938;
L_08B63938:
    ctx.gpr[24] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[8] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63938;
      }
      goto L_08B63954;
    }
L_08B63954:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_2)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(20800));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22028)));
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(52));
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    aot_gpr_3 = (ctx.lo);
    ctx.gpr[25] = (aot_gpr_3 + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_gpr_3 + aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[10] + 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B63990u);
    aot_gpr_6 = (aot_gpr_3 + ctx.gpr[11]);
    goto L_08B63658;
L_08B63990:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B63818;
L_08B63998:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (static_cast<std::int32_t>(aot_gpr_3) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B63818;
      }
      goto L_08B639A8;
    }
L_08B639A8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_3) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08B639F0;
      }
      goto L_08B639BC;
    }
L_08B639BC:
    ctx.gpr[11] = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22028)));
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (0u + 0u);
    goto L_08B639CC;
L_08B639CC:
    ctx.gpr[15] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (aot_gpr_6 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B639CC;
      }
      goto L_08B639E8;
    }
L_08B639E8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63878;
L_08B639F0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[25] = (aot_gpr_4 + static_cast<std::uint32_t>(20800));
    ctx.gpr[11] = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22028)));
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[8] + ctx.gpr[16]);
    goto L_08B63A18;
L_08B63A18:
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_6 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_3));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63A18;
      }
      goto L_08B63A34;
    }
L_08B63A34:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63878;
L_08B63A3C:
    ctx.gpr[8] = (aot_gpr_4 + 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (2236u << 16u);
    aot_gpr_6 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    ctx.gpr[11] = (aot_gpr_5 + 0u);
    aot_gpr_3 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_3 + aot_gpr_6);
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_3 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B63C1C;
      }
      goto L_08B63A6C;
    }
L_08B63A6C:
    aot_gpr_5 = (aot_gpr_3 & 512u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B63B58;
      }
      goto L_08B63A78;
    }
L_08B63A78:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[13] = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08B63AD8;
      }
      goto L_08B63A90;
    }
L_08B63A90:
    aot_gpr_4 = (ctx.gpr[12] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[11] + 0u);
    goto L_08B63A98;
L_08B63A98:
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (aot_gpr_6 < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63A98;
      }
      goto L_08B63AB4;
    }
L_08B63AB4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63AB8;
L_08B63AB8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_2 = (aot_gpr_6 + ctx.gpr[14]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(32)));
    aot_gpr_3 = (ctx.gpr[8] + static_cast<std::uint32_t>(56));
    goto L_08B63AD0;
L_08B63AD0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(32), aot_gpr_3);
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
L_08B63AD8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (aot_gpr_6 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63AD8;
      }
      goto L_08B63AEC;
    }
L_08B63AEC:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_5 = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    aot_gpr_6 = (ctx.lo);
    ctx.gpr[25] = (aot_gpr_6 + aot_gpr_2);
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[15] - ctx.gpr[24]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (ctx.gpr[12] + ctx.gpr[24]);
      if (branch_taken) {
          goto L_08B63B38;
      }
      goto L_08B63B1C;
    }
L_08B63B1C:
    ctx.gpr[13] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63B1C;
      }
      goto L_08B63B38;
    }
L_08B63B38:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63B3C;
L_08B63B3C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[12]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), 0u);
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
L_08B63B58:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[15] = (aot_gpr_5 + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08B63BB4;
      }
      goto L_08B63B70;
    }
L_08B63B70:
    aot_gpr_4 = (ctx.gpr[12] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[11] + 0u);
    goto L_08B63B78;
L_08B63B78:
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (aot_gpr_6 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63B78;
      }
      goto L_08B63B94;
    }
L_08B63B94:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63B98;
L_08B63B98:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_2 = (aot_gpr_5 + ctx.gpr[24]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(32)));
    aot_gpr_3 = (ctx.gpr[8] + static_cast<std::uint32_t>(112));
    goto L_08B63AD0;
L_08B63BB4:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (aot_gpr_6 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63BB4;
      }
      goto L_08B63BC8;
    }
L_08B63BC8:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_5 = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    aot_gpr_3 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_3 + aot_gpr_2);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[9] - ctx.gpr[13]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (ctx.gpr[12] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08B63B38;
      }
      goto L_08B63BF8;
    }
L_08B63BF8:
    ctx.gpr[15] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63BF8;
      }
      goto L_08B63C14;
    }
L_08B63C14:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63B3C;
L_08B63C1C:
    ctx.gpr[24] = (aot_gpr_3 & 512u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08B63DEC;
      }
      goto L_08B63C28;
    }
L_08B63C28:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[25] = (static_cast<std::int32_t>(aot_gpr_3) < 56 ? 1u : 0u);
    if (ctx.gpr[25] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
        goto L_08B63D14;
    }
    goto L_08B63C38;
L_08B63C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(aot_gpr_3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (aot_gpr_3 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B63C7C;
      }
      goto L_08B63C4C;
    }
L_08B63C4C:
    aot_gpr_4 = (ctx.gpr[12] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[11] + 0u);
    aot_gpr_6 = (0u + 0u);
    goto L_08B63C58;
L_08B63C58:
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_3));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63C58;
      }
      goto L_08B63C74;
    }
L_08B63C74:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63AB8;
L_08B63C7C:
    aot_gpr_6 = (ctx.gpr[12] + aot_gpr_4);
    ctx.gpr[7] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_4 = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08B63CA8;
      }
      goto L_08B63C8C;
    }
L_08B63C8C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63C8C;
      }
      goto L_08B63CA8;
    }
L_08B63CA8:
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[25] - ctx.gpr[9]);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[24] + aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u + 0u);
      if (branch_taken) {
          goto L_08B63CF4;
      }
      goto L_08B63CD8;
    }
L_08B63CD8:
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_3));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63CD8;
      }
      goto L_08B63CF4;
    }
L_08B63CF4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(56));
    goto L_08B63D04;
L_08B63D04:
    aot_gpr_2 = (ctx.lo);
    aot_gpr_3 = (aot_gpr_3 - ctx.gpr[9]);
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_4);
    goto L_08B63AD0;
L_08B63D14:
    aot_gpr_6 = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    aot_gpr_5 = (aot_gpr_3 - ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B63D44;
      }
      goto L_08B63D28;
    }
L_08B63D28:
    ctx.gpr[15] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < aot_gpr_5 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63D28;
      }
      goto L_08B63D44;
    }
L_08B63D44:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (ctx.lo);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[24]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (ctx.gpr[8] + 0u);
    goto L_08B63D68;
L_08B63D68:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + aot_gpr_5);
      if (branch_taken) {
          goto L_08B63DB0;
      }
      goto L_08B63D78;
    }
L_08B63D78:
    aot_gpr_6 = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08B63DA0;
      }
      goto L_08B63D84;
    }
L_08B63D84:
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_3));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63D84;
      }
      goto L_08B63DA0;
    }
L_08B63DA0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    goto L_08B63D68;
L_08B63DB0:
    aot_gpr_5 = (ctx.gpr[11] + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08B63DDC;
      }
      goto L_08B63DC0;
    }
L_08B63DC0:
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63DC0;
      }
      goto L_08B63DDC;
    }
L_08B63DDC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    goto L_08B63DE0;
L_08B63DE0:
    aot_gpr_5 = (ctx.gpr[9] + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
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
L_08B63DEC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    ctx.gpr[15] = (ctx.lo);
    aot_gpr_3 = (ctx.gpr[15] + ctx.gpr[9]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 112 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(32)));
        goto L_08B63EDC;
    }
    goto L_08B63E0C;
L_08B63E0C:
    aot_gpr_3 = (aot_mem.aot_direct_load32(aot_gpr_3 + static_cast<std::uint32_t>(32)));
    ctx.gpr[25] = (aot_gpr_3 + static_cast<std::uint32_t>(112));
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[9] = (aot_gpr_4 - aot_gpr_3);
      if (branch_taken) {
          goto L_08B63E50;
      }
      goto L_08B63E20;
    }
L_08B63E20:
    aot_gpr_4 = (ctx.gpr[12] + aot_gpr_3);
    aot_gpr_5 = (ctx.gpr[11] + 0u);
    aot_gpr_6 = (0u + 0u);
    goto L_08B63E2C;
L_08B63E2C:
    ctx.gpr[14] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_gpr_6 < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63E2C;
      }
      goto L_08B63E48;
    }
L_08B63E48:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(76));
    goto L_08B63B98;
L_08B63E50:
    aot_gpr_6 = (ctx.gpr[12] + aot_gpr_3);
    aot_gpr_4 = (ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08B63E7C;
      }
      goto L_08B63E60;
    }
L_08B63E60:
    aot_gpr_3 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_3));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63E60;
      }
      goto L_08B63E7C;
    }
L_08B63E7C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(112));
    aot_gpr_2 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    ctx.gpr[7] = (aot_gpr_4 - ctx.gpr[9]);
    aot_gpr_5 = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[15] + aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u + 0u);
      if (branch_taken) {
          goto L_08B63EC8;
      }
      goto L_08B63EAC;
    }
L_08B63EAC:
    ctx.gpr[24] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63EAC;
      }
      goto L_08B63EC8;
    }
L_08B63EC8:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(112));
    goto L_08B63D04;
L_08B63EDC:
    aot_gpr_6 = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B63F0C;
      }
      goto L_08B63EF0;
    }
L_08B63EF0:
    ctx.gpr[13] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[7] < aot_gpr_5 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63EF0;
      }
      goto L_08B63F0C;
    }
L_08B63F0C:
    aot_gpr_3 = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_3)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[10] + static_cast<std::uint32_t>(20800));
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (aot_gpr_2 - aot_gpr_5);
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[14] + ctx.gpr[15]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (ctx.gpr[8] + 0u);
    goto L_08B63F30;
L_08B63F30:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + aot_gpr_5);
      if (branch_taken) {
          goto L_08B63F78;
      }
      goto L_08B63F40;
    }
L_08B63F40:
    aot_gpr_6 = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08B63F68;
      }
      goto L_08B63F4C;
    }
L_08B63F4C:
    ctx.gpr[25] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[24] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63F4C;
      }
      goto L_08B63F68;
    }
L_08B63F68:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    goto L_08B63F30;
L_08B63F78:
    aot_gpr_5 = (ctx.gpr[11] + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08B63DDC;
      }
      goto L_08B63F88;
    }
L_08B63F88:
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B63F88;
      }
      goto L_08B63FA4;
    }
L_08B63FA4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    goto L_08B63DE0;
L_08B63FAC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_3 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 + 0u);
    aot_gpr_5 = (2236u << 16u);
    ctx.gpr[25] = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(21408));
    ctx.gpr[17] = (aot_gpr_3 + static_cast<std::uint32_t>(20800));
    aot_gpr_3 = (33026u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[13] = (ctx.gpr[25] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_6 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[15] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[25] + ctx.gpr[17]);
    ctx.gpr[24] = (aot_gpr_3 | 1033u);
    ctx.gpr[14] = (aot_gpr_6 + 0u);
    ctx.gpr[18] = (16u << 16u);
    ctx.pc = 0x08B64000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0215(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0215_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_215(Runtime &runtime) {
    runtime.register_generated_unit(215u, 0x08B60000u, 16384u, &recomp_unit_0215, &recomp_unit_0215_entry);
    runtime.register_function(0x08B60000u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60030u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60050u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6006Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60074u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6009Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B600A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B600B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B600C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B600E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B600ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60110u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6012Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6014Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60184u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6018Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60198u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B601F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60210u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60218u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6023Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60250u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6026Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60284u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6029Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B602C4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B602ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60314u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60330u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6033Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6034Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60360u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60368u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6037Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60398u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B603D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B603DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B603E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B603F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60404u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6045Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60464u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B604B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B604C4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60500u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60514u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6056Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60574u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B605C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B605DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B605E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B605F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60604u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6061Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60628u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60630u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60648u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60650u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60654u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60664u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60674u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60680u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B606FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60708u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60714u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60720u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6072Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60738u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60744u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60750u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6075Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60764u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6076Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607D8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B607FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6080Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60818u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6082Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60838u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60860u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60864u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60870u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60878u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60888u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60894u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B608A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B608A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B608B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B608BCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B608D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60904u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60918u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60928u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6092Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60934u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6093Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6094Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6095Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6098Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B609A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B609ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B609C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B609E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A54u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A88u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60A94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B00u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B08u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B18u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B34u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B54u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B80u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60B8Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60BB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60BB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60BC4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60BCCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60BF4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60BFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C0Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C18u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C20u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60C7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60CA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60CB4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D1Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D6Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60D84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60DA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60DB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60DC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60DDCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60DF0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E20u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E34u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E50u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60E98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60EB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60EB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60EC0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60EC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F64u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F88u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60F98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60FA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60FB4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60FD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60FECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60FF4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B60FFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61004u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61028u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61048u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61054u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6106Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61088u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B610B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B610CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B610E0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61108u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61118u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61124u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6112Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61130u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61140u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61168u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61178u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61184u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6118Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61190u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B611A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B611B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B611C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B611CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B611E0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B611FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61224u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61234u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61244u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6126Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6127Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61288u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61290u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61294u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B612A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B612CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B612DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B612E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B612F4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61324u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61354u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61364u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61370u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61378u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6137Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6138Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613C4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613D8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B613F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61414u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61430u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61458u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61470u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B614ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B614D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B614E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B614F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B614F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B614FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6150Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61534u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61544u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61550u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61558u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6155Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61578u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61594u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6159Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B615C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B615D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B615ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61608u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61630u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6164Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61660u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61684u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61694u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B616A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B616A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B616B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B616DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B616ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B616FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61700u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61708u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61710u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61718u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61738u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61740u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61750u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6175Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61770u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6178Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B617B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B617C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B617D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B617F4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61804u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61814u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61818u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61828u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6184Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6185Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6186Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61874u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B618A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B618D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B618E0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B618F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B618F4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61904u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61928u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61938u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61948u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61950u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6195Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61970u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61988u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B619A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B619CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B619E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B619FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A8Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61A90u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61AA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61AC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61AD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61AE4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61AECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61AF0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61B10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61B28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61B38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61B40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61B60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61B78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61BA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61BACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61BC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61BD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61BE4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61BECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C00u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C08u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C18u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61C9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61CA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61CB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61CBCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61CE4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61CECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61CF4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D00u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D64u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61D74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61DA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61DA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61DACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61DB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61DF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E00u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E08u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E0Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61E80u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61EA4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61ECCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61ED4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61EE4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61EF4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F34u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F90u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61F9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61FB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61FC0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B61FD0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62014u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62020u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62034u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62044u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62050u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62060u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62064u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62078u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62080u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620BCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B620E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62148u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62150u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62154u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62174u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6217Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62180u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B621E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62200u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62224u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6223Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62244u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62258u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62264u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62284u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6229Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B622B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B622B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B622CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B622D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B622F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B622FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62300u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6230Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62318u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62320u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62324u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62330u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62338u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62348u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6237Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62388u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6239Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623C4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623E0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B623F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62400u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6241Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62424u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62434u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62458u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62460u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62470u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62478u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62480u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62484u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6249Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B624CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B624E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B624F4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B624FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62518u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62524u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62528u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62534u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6253Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62544u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6254Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6256Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625F4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B625F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62600u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6260Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62618u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62620u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62640u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62648u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62678u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62680u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62698u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B626A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B626C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B626DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B626E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B626F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62700u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6270Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62718u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62728u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62744u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62750u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62758u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62764u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62768u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62778u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6279Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B627B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B627BCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B627E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B627F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62814u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6285Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62868u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6288Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62894u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B628F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6290Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62914u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6291Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62928u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62934u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62958u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62964u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62984u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62998u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6299Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B629F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A1Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A64u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A8Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62A9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AC4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AE4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62AFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B64u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B90u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62B98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62BA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62BB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62BC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62BD4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62BDCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62BF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C80u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62C9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62CA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62CACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62CB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62CECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62CF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D14u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D20u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D54u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D90u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62D98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DA4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DC0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DC4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DD0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DE4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62DFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E58u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62E9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62EA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62EACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62EF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F18u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F50u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F54u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F58u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F80u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62F9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FA4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FBCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FC0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FD4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FE0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B62FE8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63014u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63040u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63054u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63060u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63074u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6308Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6309Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630BCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B630F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63118u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63120u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63128u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6312Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63134u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63140u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63148u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63150u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63158u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63180u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63190u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B631ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B631B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B631B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B631C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B631E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B631F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63214u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6321Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63220u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63230u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63258u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63264u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63274u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6327Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63284u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6329Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63358u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63398u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B633F4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63408u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63414u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63424u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6342Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63460u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63468u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63470u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B634ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B634C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B634DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B634E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B634ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B634FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63530u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6353Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63548u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63554u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63558u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63568u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63570u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6357Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63584u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6358Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B6359Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B635A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B635B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B635BCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B635D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B635E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63600u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63608u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63628u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63630u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63648u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63650u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63658u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B636B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B636CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63768u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63774u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63790u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B637C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B637DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63800u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63808u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63814u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63818u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63828u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63834u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63848u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63858u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63874u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63878u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B638A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B638ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B638B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B638C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B638E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63900u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63908u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63910u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63928u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63938u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63954u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63990u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63998u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B639A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B639BCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B639CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B639E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B639F0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A18u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A34u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A6Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A90u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63A98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63AB4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63AB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63AD0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63AD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63AECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B1Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B58u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B70u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63B98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63BB4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63BC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63BF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C14u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C1Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C58u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63C8Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63CA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63CD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63CF4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D14u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63D84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63DA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63DB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63DC0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63DDCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63DE0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63DECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E0Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E20u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E50u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63E7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63EACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63EC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63EDCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63EF0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F0Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F40u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F4Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63F88u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63FA4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x08B63FACu, &recomp_unit_0215, "recomp_unit_0215");
}
} // namespace psprecomp
