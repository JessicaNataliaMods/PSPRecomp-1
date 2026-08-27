#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0027[64] = {
    0x0000000000510041ull, 0x8441000000001000ull, 0x80400329052AA288ull, 0x0914824080AA8140ull,
    0x42448AA55026D555ull, 0x109110820A480000ull, 0x468848B442524245ull, 0x14401202000ADA25ull,
    0x6942C04200862443ull, 0x49A4D26914555552ull, 0x4488691224434822ull, 0xD291221A5224434Aull,
    0x4434A44886948910ull, 0x48910D291221A522ull, 0x244348224A448869ull, 0x948910D291221A52ull,
    0x21A5224434A44886ull, 0x44886948910D2912ull, 0x1291221A5224434Aull, 0x2412214829200484ull,
    0x4214A80000015222ull, 0x480099000A082950ull, 0x14A1094502041010ull, 0x3000029288944415ull,
    0xA00A892100114108ull, 0x1410202034428854ull, 0x02500400418A004Aull, 0x0024000006100180ull,
    0x0800000800020804ull, 0x05004804A12A092Aull, 0xA808000102010521ull, 0x0002102004061080ull,
    0x90C00844100400A4ull, 0x4044450C80040002ull, 0x4000282201800006ull, 0x0081044210040884ull,
    0x80020412001140C8ull, 0x504020A011A49288ull, 0x022000211294A004ull, 0x1445150400802005ull,
    0x2208811120843220ull, 0xC0220A000040A000ull, 0x80A0043144500200ull, 0x0000400984104000ull,
    0x1484000050408001ull, 0x0100050D54000009ull, 0x0484100005001008ull, 0x00000002000C0054ull,
    0x25404984049A8110ull, 0x1848042054049090ull, 0x040908A840500A84ull, 0x0010000808208209ull,
    0x0800844082040041ull, 0x009C84A27212880Aull, 0x042A554944025001ull, 0x9700810AD2E089A5ull,
    0x28AD09154A342512ull, 0x0A2AA12404085A40ull, 0x534554A552A22288ull, 0x242A4A8AA4854951ull,
    0x0200090000010145ull, 0x0802142400001010ull, 0x22D0529709540881ull, 0x80285050028954A8ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0027[64] = {
    1u, 6u, 11u, 28u, 43u, 68u, 79u, 100u, 116u, 134u, 161u, 180u, 203u, 223u, 244u, 264u,
    286u, 307u, 328u, 349u, 364u, 377u, 391u, 405u, 421u, 435u, 450u, 462u, 469u, 474u, 490u, 501u,
    509u, 521u, 532u, 541u, 551u, 562u, 578u, 590u, 603u, 617u, 626u, 638u, 645u, 654u, 665u, 673u,
    679u, 696u, 710u, 724u, 732u, 741u, 760u, 777u, 800u, 823u, 840u, 864u, 887u, 895u, 903u, 924u,
};
void recomp_unit_0027_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,16 fprs=12,13,14,20 gpr_occ=4914 fpr_occ=235 gpr_total=6748 fpr_total=297
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08870000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0027[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0027[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08870000;
    case 2u: goto L_08870018;
    case 3u: goto L_08870040;
    case 4u: goto L_08870050;
    case 5u: goto L_08870058;
    case 6u: goto L_08870130;
    case 7u: goto L_088701C0;
    case 8u: goto L_088701D8;
    case 9u: goto L_088701E8;
    case 10u: goto L_088701FC;
    case 11u: goto L_0887020C;
    case 12u: goto L_0887021C;
    case 13u: goto L_08870224;
    case 14u: goto L_08870234;
    case 15u: goto L_0887023C;
    case 16u: goto L_08870244;
    case 17u: goto L_0887024C;
    case 18u: goto L_08870254;
    case 19u: goto L_08870260;
    case 20u: goto L_08870268;
    case 21u: goto L_08870280;
    case 22u: goto L_0887028C;
    case 23u: goto L_08870294;
    case 24u: goto L_088702A0;
    case 25u: goto L_088702A4;
    case 26u: goto L_088702D8;
    case 27u: goto L_088702FC;
    case 28u: goto L_08870318;
    case 29u: goto L_08870320;
    case 30u: goto L_0887033C;
    case 31u: goto L_08870344;
    case 32u: goto L_0887034C;
    case 33u: goto L_08870354;
    case 34u: goto L_0887035C;
    case 35u: goto L_0887037C;
    case 36u: goto L_08870398;
    case 37u: goto L_088703A4;
    case 38u: goto L_088703BC;
    case 39u: goto L_088703C8;
    case 40u: goto L_088703D0;
    case 41u: goto L_088703E0;
    case 42u: goto L_088703EC;
    case 43u: goto L_08870400;
    case 44u: goto L_08870408;
    case 45u: goto L_08870410;
    case 46u: goto L_08870418;
    case 47u: goto L_08870420;
    case 48u: goto L_08870428;
    case 49u: goto L_08870430;
    case 50u: goto L_08870438;
    case 51u: goto L_0887043C;
    case 52u: goto L_08870444;
    case 53u: goto L_08870448;
    case 54u: goto L_08870454;
    case 55u: goto L_08870470;
    case 56u: goto L_08870478;
    case 57u: goto L_08870480;
    case 58u: goto L_08870488;
    case 59u: goto L_08870494;
    case 60u: goto L_0887049C;
    case 61u: goto L_088704A4;
    case 62u: goto L_088704AC;
    case 63u: goto L_088704BC;
    case 64u: goto L_088704C8;
    case 65u: goto L_088704D8;
    case 66u: goto L_088704E4;
    case 67u: goto L_088704F8;
    case 68u: goto L_0887054C;
    case 69u: goto L_08870558;
    case 70u: goto L_08870564;
    case 71u: goto L_0887056C;
    case 72u: goto L_08870584;
    case 73u: goto L_0887059C;
    case 74u: goto L_088705B0;
    case 75u: goto L_088705C0;
    case 76u: goto L_088705D0;
    case 77u: goto L_088705DC;
    case 78u: goto L_088705F0;
    case 79u: goto L_08870600;
    case 80u: goto L_08870608;
    case 81u: goto L_08870618;
    case 82u: goto L_08870624;
    case 83u: goto L_08870638;
    case 84u: goto L_08870644;
    case 85u: goto L_08870650;
    case 86u: goto L_08870658;
    case 87u: goto L_08870664;
    case 88u: goto L_08870678;
    case 89u: goto L_08870688;
    case 90u: goto L_08870690;
    case 91u: goto L_08870694;
    case 92u: goto L_0887069C;
    case 93u: goto L_088706AC;
    case 94u: goto L_088706B8;
    case 95u: goto L_088706CC;
    case 96u: goto L_088706DC;
    case 97u: goto L_088706E4;
    case 98u: goto L_088706E8;
    case 99u: goto L_088706F8;
    case 100u: goto L_08870700;
    case 101u: goto L_08870708;
    case 102u: goto L_08870714;
    case 103u: goto L_08870724;
    case 104u: goto L_0887072C;
    case 105u: goto L_08870730;
    case 106u: goto L_08870738;
    case 107u: goto L_0887073C;
    case 108u: goto L_08870744;
    case 109u: goto L_0887074C;
    case 110u: goto L_08870784;
    case 111u: goto L_088707A4;
    case 112u: goto L_088707B0;
    case 113u: goto L_088707D8;
    case 114u: goto L_088707E8;
    case 115u: goto L_088707F0;
    case 116u: goto L_08870800;
    case 117u: goto L_08870804;
    case 118u: goto L_08870818;
    case 119u: goto L_08870828;
    case 120u: goto L_08870834;
    case 121u: goto L_08870844;
    case 122u: goto L_08870848;
    case 123u: goto L_0887085C;
    case 124u: goto L_08870884;
    case 125u: goto L_08870898;
    case 126u: goto L_088708B8;
    case 127u: goto L_088708BC;
    case 128u: goto L_088708C4;
    case 129u: goto L_088708D8;
    case 130u: goto L_088708E0;
    case 131u: goto L_088708EC;
    case 132u: goto L_088708F4;
    case 133u: goto L_088708F8;
    case 134u: goto L_08870904;
    case 135u: goto L_08870910;
    case 136u: goto L_08870918;
    case 137u: goto L_08870920;
    case 138u: goto L_08870928;
    case 139u: goto L_08870930;
    case 140u: goto L_08870938;
    case 141u: goto L_08870940;
    case 142u: goto L_08870948;
    case 143u: goto L_08870950;
    case 144u: goto L_08870958;
    case 145u: goto L_08870968;
    case 146u: goto L_08870970;
    case 147u: goto L_08870980;
    case 148u: goto L_0887098C;
    case 149u: goto L_08870994;
    case 150u: goto L_08870998;
    case 151u: goto L_088709A4;
    case 152u: goto L_088709B0;
    case 153u: goto L_088709B8;
    case 154u: goto L_088709BC;
    case 155u: goto L_088709C8;
    case 156u: goto L_088709D4;
    case 157u: goto L_088709DC;
    case 158u: goto L_088709E0;
    case 159u: goto L_088709EC;
    case 160u: goto L_088709F8;
    case 161u: goto L_08870A04;
    case 162u: goto L_08870A14;
    case 163u: goto L_08870A2C;
    case 164u: goto L_08870A38;
    case 165u: goto L_08870A40;
    case 166u: goto L_08870A44;
    case 167u: goto L_08870A58;
    case 168u: goto L_08870A68;
    case 169u: goto L_08870A74;
    case 170u: goto L_08870A84;
    case 171u: goto L_08870A90;
    case 172u: goto L_08870AA0;
    case 173u: goto L_08870AAC;
    case 174u: goto L_08870AB4;
    case 175u: goto L_08870AB8;
    case 176u: goto L_08870ACC;
    case 177u: goto L_08870ADC;
    case 178u: goto L_08870AE8;
    case 179u: goto L_08870AF8;
    case 180u: goto L_08870B04;
    case 181u: goto L_08870B0C;
    case 182u: goto L_08870B18;
    case 183u: goto L_08870B20;
    case 184u: goto L_08870B24;
    case 185u: goto L_08870B38;
    case 186u: goto L_08870B48;
    case 187u: goto L_08870B54;
    case 188u: goto L_08870B64;
    case 189u: goto L_08870B70;
    case 190u: goto L_08870B78;
    case 191u: goto L_08870B84;
    case 192u: goto L_08870B8C;
    case 193u: goto L_08870B90;
    case 194u: goto L_08870BA4;
    case 195u: goto L_08870BB4;
    case 196u: goto L_08870BC0;
    case 197u: goto L_08870BD0;
    case 198u: goto L_08870BDC;
    case 199u: goto L_08870BE4;
    case 200u: goto L_08870BF0;
    case 201u: goto L_08870BF8;
    case 202u: goto L_08870BFC;
    case 203u: goto L_08870C10;
    case 204u: goto L_08870C20;
    case 205u: goto L_08870C2C;
    case 206u: goto L_08870C3C;
    case 207u: goto L_08870C48;
    case 208u: goto L_08870C50;
    case 209u: goto L_08870C5C;
    case 210u: goto L_08870C64;
    case 211u: goto L_08870C68;
    case 212u: goto L_08870C7C;
    case 213u: goto L_08870C8C;
    case 214u: goto L_08870C98;
    case 215u: goto L_08870CA8;
    case 216u: goto L_08870CB4;
    case 217u: goto L_08870CBC;
    case 218u: goto L_08870CC8;
    case 219u: goto L_08870CD0;
    case 220u: goto L_08870CD4;
    case 221u: goto L_08870CE8;
    case 222u: goto L_08870CF8;
    case 223u: goto L_08870D04;
    case 224u: goto L_08870D14;
    case 225u: goto L_08870D20;
    case 226u: goto L_08870D28;
    case 227u: goto L_08870D34;
    case 228u: goto L_08870D3C;
    case 229u: goto L_08870D40;
    case 230u: goto L_08870D54;
    case 231u: goto L_08870D64;
    case 232u: goto L_08870D70;
    case 233u: goto L_08870D80;
    case 234u: goto L_08870D8C;
    case 235u: goto L_08870D94;
    case 236u: goto L_08870DA0;
    case 237u: goto L_08870DA8;
    case 238u: goto L_08870DAC;
    case 239u: goto L_08870DC0;
    case 240u: goto L_08870DD0;
    case 241u: goto L_08870DDC;
    case 242u: goto L_08870DEC;
    case 243u: goto L_08870DF8;
    case 244u: goto L_08870E00;
    case 245u: goto L_08870E0C;
    case 246u: goto L_08870E14;
    case 247u: goto L_08870E18;
    case 248u: goto L_08870E2C;
    case 249u: goto L_08870E3C;
    case 250u: goto L_08870E48;
    case 251u: goto L_08870E58;
    case 252u: goto L_08870E64;
    case 253u: goto L_08870E6C;
    case 254u: goto L_08870E78;
    case 255u: goto L_08870E84;
    case 256u: goto L_08870E94;
    case 257u: goto L_08870EAC;
    case 258u: goto L_08870EB8;
    case 259u: goto L_08870EC0;
    case 260u: goto L_08870EC4;
    case 261u: goto L_08870ED8;
    case 262u: goto L_08870EE8;
    case 263u: goto L_08870EF4;
    case 264u: goto L_08870F04;
    case 265u: goto L_08870F10;
    case 266u: goto L_08870F18;
    case 267u: goto L_08870F24;
    case 268u: goto L_08870F2C;
    case 269u: goto L_08870F30;
    case 270u: goto L_08870F44;
    case 271u: goto L_08870F54;
    case 272u: goto L_08870F60;
    case 273u: goto L_08870F70;
    case 274u: goto L_08870F7C;
    case 275u: goto L_08870F84;
    case 276u: goto L_08870F90;
    case 277u: goto L_08870F98;
    case 278u: goto L_08870F9C;
    case 279u: goto L_08870FB0;
    case 280u: goto L_08870FC0;
    case 281u: goto L_08870FCC;
    case 282u: goto L_08870FDC;
    case 283u: goto L_08870FE8;
    case 284u: goto L_08870FF0;
    case 285u: goto L_08870FFC;
    case 286u: goto L_08871004;
    case 287u: goto L_08871008;
    case 288u: goto L_0887101C;
    case 289u: goto L_0887102C;
    case 290u: goto L_08871038;
    case 291u: goto L_08871048;
    case 292u: goto L_08871054;
    case 293u: goto L_0887105C;
    case 294u: goto L_08871068;
    case 295u: goto L_08871070;
    case 296u: goto L_08871074;
    case 297u: goto L_08871088;
    case 298u: goto L_08871098;
    case 299u: goto L_088710A4;
    case 300u: goto L_088710B4;
    case 301u: goto L_088710C0;
    case 302u: goto L_088710C8;
    case 303u: goto L_088710D4;
    case 304u: goto L_088710DC;
    case 305u: goto L_088710E0;
    case 306u: goto L_088710F4;
    case 307u: goto L_08871104;
    case 308u: goto L_08871110;
    case 309u: goto L_08871120;
    case 310u: goto L_0887112C;
    case 311u: goto L_08871134;
    case 312u: goto L_08871140;
    case 313u: goto L_08871148;
    case 314u: goto L_0887114C;
    case 315u: goto L_08871160;
    case 316u: goto L_08871170;
    case 317u: goto L_0887117C;
    case 318u: goto L_0887118C;
    case 319u: goto L_08871198;
    case 320u: goto L_088711A0;
    case 321u: goto L_088711AC;
    case 322u: goto L_088711B4;
    case 323u: goto L_088711B8;
    case 324u: goto L_088711CC;
    case 325u: goto L_088711DC;
    case 326u: goto L_088711E8;
    case 327u: goto L_088711F8;
    case 328u: goto L_08871204;
    case 329u: goto L_0887120C;
    case 330u: goto L_08871218;
    case 331u: goto L_08871220;
    case 332u: goto L_08871224;
    case 333u: goto L_08871238;
    case 334u: goto L_08871248;
    case 335u: goto L_08871254;
    case 336u: goto L_08871264;
    case 337u: goto L_08871270;
    case 338u: goto L_08871278;
    case 339u: goto L_08871284;
    case 340u: goto L_0887128C;
    case 341u: goto L_08871290;
    case 342u: goto L_088712A4;
    case 343u: goto L_088712B4;
    case 344u: goto L_088712C0;
    case 345u: goto L_088712D0;
    case 346u: goto L_088712DC;
    case 347u: goto L_088712E4;
    case 348u: goto L_088712F0;
    case 349u: goto L_08871308;
    case 350u: goto L_0887131C;
    case 351u: goto L_08871328;
    case 352u: goto L_08871354;
    case 353u: goto L_08871360;
    case 354u: goto L_0887136C;
    case 355u: goto L_08871374;
    case 356u: goto L_0887138C;
    case 357u: goto L_08871398;
    case 358u: goto L_088713A0;
    case 359u: goto L_088713B4;
    case 360u: goto L_088713C4;
    case 361u: goto L_088713D0;
    case 362u: goto L_088713E8;
    case 363u: goto L_088713F4;
    case 364u: goto L_08871404;
    case 365u: goto L_08871414;
    case 366u: goto L_08871424;
    case 367u: goto L_08871430;
    case 368u: goto L_08871438;
    case 369u: goto L_08871440;
    case 370u: goto L_088714AC;
    case 371u: goto L_088714B4;
    case 372u: goto L_088714BC;
    case 373u: goto L_088714C8;
    case 374u: goto L_088714D0;
    case 375u: goto L_088714E4;
    case 376u: goto L_088714F8;
    case 377u: goto L_08871510;
    case 378u: goto L_08871518;
    case 379u: goto L_08871520;
    case 380u: goto L_0887152C;
    case 381u: goto L_08871534;
    case 382u: goto L_0887154C;
    case 383u: goto L_08871564;
    case 384u: goto L_0887156C;
    case 385u: goto L_088715A0;
    case 386u: goto L_088715AC;
    case 387u: goto L_088715B0;
    case 388u: goto L_088715BC;
    case 389u: goto L_088715EC;
    case 390u: goto L_088715F8;
    case 391u: goto L_08871610;
    case 392u: goto L_08871630;
    case 393u: goto L_08871648;
    case 394u: goto L_08871664;
    case 395u: goto L_08871680;
    case 396u: goto L_08871688;
    case 397u: goto L_08871698;
    case 398u: goto L_088716A0;
    case 399u: goto L_088716AC;
    case 400u: goto L_088716C0;
    case 401u: goto L_088716D4;
    case 402u: goto L_088716DC;
    case 403u: goto L_088716E8;
    case 404u: goto L_088716F0;
    case 405u: goto L_08871700;
    case 406u: goto L_08871708;
    case 407u: goto L_08871710;
    case 408u: goto L_08871728;
    case 409u: goto L_08871738;
    case 410u: goto L_08871748;
    case 411u: goto L_08871750;
    case 412u: goto L_0887175C;
    case 413u: goto L_0887176C;
    case 414u: goto L_0887177C;
    case 415u: goto L_08871784;
    case 416u: goto L_08871790;
    case 417u: goto L_0887179C;
    case 418u: goto L_088717A4;
    case 419u: goto L_088717F0;
    case 420u: goto L_088717F4;
    case 421u: goto L_0887180C;
    case 422u: goto L_08871820;
    case 423u: goto L_08871838;
    case 424u: goto L_08871840;
    case 425u: goto L_08871850;
    case 426u: goto L_08871880;
    case 427u: goto L_08871894;
    case 428u: goto L_088718A0;
    case 429u: goto L_088718AC;
    case 430u: goto L_088718BC;
    case 431u: goto L_088718C4;
    case 432u: goto L_088718CC;
    case 433u: goto L_088718F4;
    case 434u: goto L_088718FC;
    case 435u: goto L_08871908;
    case 436u: goto L_08871910;
    case 437u: goto L_08871918;
    case 438u: goto L_0887192C;
    case 439u: goto L_0887193C;
    case 440u: goto L_08871944;
    case 441u: goto L_08871958;
    case 442u: goto L_08871968;
    case 443u: goto L_08871970;
    case 444u: goto L_08871974;
    case 445u: goto L_08871994;
    case 446u: goto L_088719B4;
    case 447u: goto L_088719D0;
    case 448u: goto L_088719E8;
    case 449u: goto L_088719F0;
    case 450u: goto L_08871A04;
    case 451u: goto L_08871A0C;
    case 452u: goto L_08871A18;
    case 453u: goto L_08871A44;
    case 454u: goto L_08871A4C;
    case 455u: goto L_08871A5C;
    case 456u: goto L_08871A60;
    case 457u: goto L_08871A78;
    case 458u: goto L_08871AA8;
    case 459u: goto L_08871AD0;
    case 460u: goto L_08871AD8;
    case 461u: goto L_08871AE4;
    case 462u: goto L_08871B1C;
    case 463u: goto L_08871B20;
    case 464u: goto L_08871B50;
    case 465u: goto L_08871B64;
    case 466u: goto L_08871B68;
    case 467u: goto L_08871BC8;
    case 468u: goto L_08871BD4;
    case 469u: goto L_08871C08;
    case 470u: goto L_08871C2C;
    case 471u: goto L_08871C44;
    case 472u: goto L_08871C8C;
    case 473u: goto L_08871CEC;
    case 474u: goto L_08871D04;
    case 475u: goto L_08871D0C;
    case 476u: goto L_08871D14;
    case 477u: goto L_08871D20;
    case 478u: goto L_08871D2C;
    case 479u: goto L_08871D44;
    case 480u: goto L_08871D4C;
    case 481u: goto L_08871D54;
    case 482u: goto L_08871D60;
    case 483u: goto L_08871D74;
    case 484u: goto L_08871D7C;
    case 485u: goto L_08871D88;
    case 486u: goto L_08871DAC;
    case 487u: goto L_08871DB8;
    case 488u: goto L_08871DE0;
    case 489u: goto L_08871DE8;
    case 490u: goto L_08871E00;
    case 491u: goto L_08871E14;
    case 492u: goto L_08871E20;
    case 493u: goto L_08871E28;
    case 494u: goto L_08871E40;
    case 495u: goto L_08871E64;
    case 496u: goto L_08871E80;
    case 497u: goto L_08871ECC;
    case 498u: goto L_08871EEC;
    case 499u: goto L_08871EF4;
    case 500u: goto L_08871EFC;
    case 501u: goto L_08871F1C;
    case 502u: goto L_08871F30;
    case 503u: goto L_08871F44;
    case 504u: goto L_08871F48;
    case 505u: goto L_08871F68;
    case 506u: goto L_08871F94;
    case 507u: goto L_08871FB0;
    case 508u: goto L_08871FC4;
    case 509u: goto L_08872008;
    case 510u: goto L_08872014;
    case 511u: goto L_0887201C;
    case 512u: goto L_08872048;
    case 513u: goto L_08872070;
    case 514u: goto L_08872088;
    case 515u: goto L_08872098;
    case 516u: goto L_088720AC;
    case 517u: goto L_088720D8;
    case 518u: goto L_088720DC;
    case 519u: goto L_088720F0;
    case 520u: goto L_088720FC;
    case 521u: goto L_08872104;
    case 522u: goto L_08872148;
    case 523u: goto L_0887217C;
    case 524u: goto L_08872188;
    case 525u: goto L_0887218C;
    case 526u: goto L_088721A0;
    case 527u: goto L_088721A8;
    case 528u: goto L_088721B8;
    case 529u: goto L_088721C8;
    case 530u: goto L_088721D8;
    case 531u: goto L_088721F8;
    case 532u: goto L_08872204;
    case 533u: goto L_08872208;
    case 534u: goto L_0887225C;
    case 535u: goto L_08872260;
    case 536u: goto L_08872284;
    case 537u: goto L_08872294;
    case 538u: goto L_088722AC;
    case 539u: goto L_088722B4;
    case 540u: goto L_088722F8;
    case 541u: goto L_08872308;
    case 542u: goto L_0887231C;
    case 543u: goto L_0887232C;
    case 544u: goto L_08872348;
    case 545u: goto L_08872370;
    case 546u: goto L_08872384;
    case 547u: goto L_08872398;
    case 548u: goto L_088723A8;
    case 549u: goto L_088723C0;
    case 550u: goto L_088723DC;
    case 551u: goto L_0887240C;
    case 552u: goto L_08872418;
    case 553u: goto L_0887241C;
    case 554u: goto L_08872438;
    case 555u: goto L_08872440;
    case 556u: goto L_08872450;
    case 557u: goto L_08872484;
    case 558u: goto L_08872490;
    case 559u: goto L_088724A8;
    case 560u: goto L_088724C4;
    case 561u: goto L_088724FC;
    case 562u: goto L_0887250C;
    case 563u: goto L_0887251C;
    case 564u: goto L_08872524;
    case 565u: goto L_08872530;
    case 566u: goto L_0887253C;
    case 567u: goto L_08872548;
    case 568u: goto L_08872554;
    case 569u: goto L_0887255C;
    case 570u: goto L_08872560;
    case 571u: goto L_08872570;
    case 572u: goto L_08872594;
    case 573u: goto L_0887259C;
    case 574u: goto L_088725B4;
    case 575u: goto L_088725D8;
    case 576u: goto L_088725F0;
    case 577u: goto L_088725F8;
    case 578u: goto L_08872608;
    case 579u: goto L_08872634;
    case 580u: goto L_0887263C;
    case 581u: goto L_08872648;
    case 582u: goto L_08872650;
    case 583u: goto L_0887265C;
    case 584u: goto L_08872664;
    case 585u: goto L_08872670;
    case 586u: goto L_08872680;
    case 587u: goto L_08872694;
    case 588u: goto L_088726D4;
    case 589u: goto L_088726E4;
    case 590u: goto L_08872700;
    case 591u: goto L_08872708;
    case 592u: goto L_08872734;
    case 593u: goto L_0887275C;
    case 594u: goto L_08872788;
    case 595u: goto L_088727A0;
    case 596u: goto L_088727A8;
    case 597u: goto L_088727B0;
    case 598u: goto L_088727C0;
    case 599u: goto L_088727C8;
    case 600u: goto L_088727D8;
    case 601u: goto L_088727E8;
    case 602u: goto L_088727F0;
    case 603u: goto L_08872814;
    case 604u: goto L_08872824;
    case 605u: goto L_08872830;
    case 606u: goto L_08872834;
    case 607u: goto L_08872848;
    case 608u: goto L_0887285C;
    case 609u: goto L_08872874;
    case 610u: goto L_08872880;
    case 611u: goto L_08872890;
    case 612u: goto L_088728A0;
    case 613u: goto L_088728BC;
    case 614u: goto L_088728CC;
    case 615u: goto L_088728E4;
    case 616u: goto L_088728F4;
    case 617u: goto L_08872934;
    case 618u: goto L_0887293C;
    case 619u: goto L_08872958;
    case 620u: goto L_088729A4;
    case 621u: goto L_088729AC;
    case 622u: goto L_088729C4;
    case 623u: goto L_088729D4;
    case 624u: goto L_088729F8;
    case 625u: goto L_088729FC;
    case 626u: goto L_08872A24;
    case 627u: goto L_08872A50;
    case 628u: goto L_08872A58;
    case 629u: goto L_08872A68;
    case 630u: goto L_08872A78;
    case 631u: goto L_08872A80;
    case 632u: goto L_08872A90;
    case 633u: goto L_08872A94;
    case 634u: goto L_08872AA8;
    case 635u: goto L_08872AD4;
    case 636u: goto L_08872ADC;
    case 637u: goto L_08872AFC;
    case 638u: goto L_08872B38;
    case 639u: goto L_08872B50;
    case 640u: goto L_08872B68;
    case 641u: goto L_08872B7C;
    case 642u: goto L_08872B80;
    case 643u: goto L_08872B8C;
    case 644u: goto L_08872BB8;
    case 645u: goto L_08872C00;
    case 646u: goto L_08872C3C;
    case 647u: goto L_08872C58;
    case 648u: goto L_08872C70;
    case 649u: goto L_08872C78;
    case 650u: goto L_08872CC8;
    case 651u: goto L_08872CDC;
    case 652u: goto L_08872CE8;
    case 653u: goto L_08872CF0;
    case 654u: goto L_08872D00;
    case 655u: goto L_08872D0C;
    case 656u: goto L_08872D68;
    case 657u: goto L_08872D70;
    case 658u: goto L_08872D78;
    case 659u: goto L_08872D80;
    case 660u: goto L_08872D88;
    case 661u: goto L_08872D8C;
    case 662u: goto L_08872DA0;
    case 663u: goto L_08872DA8;
    case 664u: goto L_08872DE0;
    case 665u: goto L_08872E0C;
    case 666u: goto L_08872E30;
    case 667u: goto L_08872E60;
    case 668u: goto L_08872E68;
    case 669u: goto L_08872EB0;
    case 670u: goto L_08872EC8;
    case 671u: goto L_08872EDC;
    case 672u: goto L_08872EE8;
    case 673u: goto L_08872F08;
    case 674u: goto L_08872F10;
    case 675u: goto L_08872F18;
    case 676u: goto L_08872F48;
    case 677u: goto L_08872F4C;
    case 678u: goto L_08872F84;
    case 679u: goto L_08873010;
    case 680u: goto L_08873020;
    case 681u: goto L_0887303C;
    case 682u: goto L_08873044;
    case 683u: goto L_0887304C;
    case 684u: goto L_08873050;
    case 685u: goto L_0887305C;
    case 686u: goto L_08873068;
    case 687u: goto L_08873088;
    case 688u: goto L_0887309C;
    case 689u: goto L_088730A0;
    case 690u: goto L_088730AC;
    case 691u: goto L_088730B8;
    case 692u: goto L_088730D8;
    case 693u: goto L_088730E0;
    case 694u: goto L_088730E8;
    case 695u: goto L_088730F4;
    case 696u: goto L_08873110;
    case 697u: goto L_0887311C;
    case 698u: goto L_08873130;
    case 699u: goto L_0887313C;
    case 700u: goto L_08873148;
    case 701u: goto L_08873168;
    case 702u: goto L_08873170;
    case 703u: goto L_08873178;
    case 704u: goto L_08873194;
    case 705u: goto L_088731A8;
    case 706u: goto L_088731CC;
    case 707u: goto L_088731D8;
    case 708u: goto L_088731EC;
    case 709u: goto L_088731F0;
    case 710u: goto L_08873208;
    case 711u: goto L_0887321C;
    case 712u: goto L_08873224;
    case 713u: goto L_0887322C;
    case 714u: goto L_08873250;
    case 715u: goto L_08873258;
    case 716u: goto L_08873278;
    case 717u: goto L_0887328C;
    case 718u: goto L_08873294;
    case 719u: goto L_0887329C;
    case 720u: goto L_088732AC;
    case 721u: goto L_088732C0;
    case 722u: goto L_088732CC;
    case 723u: goto L_088732E8;
    case 724u: goto L_08873300;
    case 725u: goto L_0887330C;
    case 726u: goto L_08873324;
    case 727u: goto L_0887333C;
    case 728u: goto L_08873354;
    case 729u: goto L_0887336C;
    case 730u: goto L_0887338C;
    case 731u: goto L_088733D0;
    case 732u: goto L_08873400;
    case 733u: goto L_08873418;
    case 734u: goto L_08873448;
    case 735u: goto L_08873464;
    case 736u: goto L_0887347C;
    case 737u: goto L_08873498;
    case 738u: goto L_088734A8;
    case 739u: goto L_088734BC;
    case 740u: goto L_088734EC;
    case 741u: goto L_08873504;
    case 742u: goto L_0887350C;
    case 743u: goto L_0887352C;
    case 744u: goto L_0887353C;
    case 745u: goto L_08873544;
    case 746u: goto L_08873550;
    case 747u: goto L_08873564;
    case 748u: goto L_08873570;
    case 749u: goto L_08873574;
    case 750u: goto L_08873578;
    case 751u: goto L_08873584;
    case 752u: goto L_08873594;
    case 753u: goto L_0887359C;
    case 754u: goto L_088735A8;
    case 755u: goto L_088735BC;
    case 756u: goto L_088735C8;
    case 757u: goto L_088735CC;
    case 758u: goto L_088735D0;
    case 759u: goto L_088735DC;
    case 760u: goto L_08873600;
    case 761u: goto L_08873630;
    case 762u: goto L_08873638;
    case 763u: goto L_08873644;
    case 764u: goto L_08873668;
    case 765u: goto L_08873678;
    case 766u: goto L_08873680;
    case 767u: goto L_0887368C;
    case 768u: goto L_08873698;
    case 769u: goto L_088736A0;
    case 770u: goto L_088736A8;
    case 771u: goto L_088736B0;
    case 772u: goto L_088736B8;
    case 773u: goto L_088736C4;
    case 774u: goto L_088736CC;
    case 775u: goto L_088736D4;
    case 776u: goto L_088736E8;
    case 777u: goto L_08873700;
    case 778u: goto L_08873708;
    case 779u: goto L_08873714;
    case 780u: goto L_0887371C;
    case 781u: goto L_08873720;
    case 782u: goto L_0887372C;
    case 783u: goto L_0887373C;
    case 784u: goto L_08873754;
    case 785u: goto L_08873758;
    case 786u: goto L_0887375C;
    case 787u: goto L_08873764;
    case 788u: goto L_08873770;
    case 789u: goto L_08873778;
    case 790u: goto L_0887377C;
    case 791u: goto L_08873784;
    case 792u: goto L_0887378C;
    case 793u: goto L_088737A0;
    case 794u: goto L_088737BC;
    case 795u: goto L_088737E0;
    case 796u: goto L_088737E4;
    case 797u: goto L_088737E8;
    case 798u: goto L_088737F0;
    case 799u: goto L_088737FC;
    case 800u: goto L_08873804;
    case 801u: goto L_08873810;
    case 802u: goto L_08873820;
    case 803u: goto L_08873828;
    case 804u: goto L_08873834;
    case 805u: goto L_08873848;
    case 806u: goto L_08873850;
    case 807u: goto L_08873854;
    case 808u: goto L_08873864;
    case 809u: goto L_0887386C;
    case 810u: goto L_08873878;
    case 811u: goto L_08873880;
    case 812u: goto L_08873888;
    case 813u: goto L_08873890;
    case 814u: goto L_088738A0;
    case 815u: goto L_088738AC;
    case 816u: goto L_088738C0;
    case 817u: goto L_088738C8;
    case 818u: goto L_088738CC;
    case 819u: goto L_088738D4;
    case 820u: goto L_088738DC;
    case 821u: goto L_088738EC;
    case 822u: goto L_088738F4;
    case 823u: goto L_08873918;
    case 824u: goto L_08873924;
    case 825u: goto L_0887392C;
    case 826u: goto L_08873930;
    case 827u: goto L_08873938;
    case 828u: goto L_0887394C;
    case 829u: goto L_08873968;
    case 830u: goto L_08873988;
    case 831u: goto L_08873994;
    case 832u: goto L_088739A0;
    case 833u: goto L_088739B4;
    case 834u: goto L_088739BC;
    case 835u: goto L_088739C4;
    case 836u: goto L_088739CC;
    case 837u: goto L_088739D4;
    case 838u: goto L_088739E4;
    case 839u: goto L_088739EC;
    case 840u: goto L_08873A0C;
    case 841u: goto L_08873A1C;
    case 842u: goto L_08873A24;
    case 843u: goto L_08873A34;
    case 844u: goto L_08873A44;
    case 845u: goto L_08873A54;
    case 846u: goto L_08873A5C;
    case 847u: goto L_08873A64;
    case 848u: goto L_08873A70;
    case 849u: goto L_08873A78;
    case 850u: goto L_08873A80;
    case 851u: goto L_08873A88;
    case 852u: goto L_08873A94;
    case 853u: goto L_08873A9C;
    case 854u: goto L_08873AA8;
    case 855u: goto L_08873AB0;
    case 856u: goto L_08873AB8;
    case 857u: goto L_08873AC0;
    case 858u: goto L_08873AC8;
    case 859u: goto L_08873AD8;
    case 860u: goto L_08873AE0;
    case 861u: goto L_08873AE4;
    case 862u: goto L_08873AF0;
    case 863u: goto L_08873AF8;
    case 864u: goto L_08873B00;
    case 865u: goto L_08873B10;
    case 866u: goto L_08873B18;
    case 867u: goto L_08873B20;
    case 868u: goto L_08873B2C;
    case 869u: goto L_08873B38;
    case 870u: goto L_08873B40;
    case 871u: goto L_08873B48;
    case 872u: goto L_08873B5C;
    case 873u: goto L_08873B68;
    case 874u: goto L_08873B74;
    case 875u: goto L_08873B7C;
    case 876u: goto L_08873B84;
    case 877u: goto L_08873B8C;
    case 878u: goto L_08873B9C;
    case 879u: goto L_08873BA4;
    case 880u: goto L_08873BAC;
    case 881u: goto L_08873BB8;
    case 882u: goto L_08873BC4;
    case 883u: goto L_08873BCC;
    case 884u: goto L_08873BD4;
    case 885u: goto L_08873BE8;
    case 886u: goto L_08873BF4;
    case 887u: goto L_08873C00;
    case 888u: goto L_08873C08;
    case 889u: goto L_08873C18;
    case 890u: goto L_08873C20;
    case 891u: goto L_08873C40;
    case 892u: goto L_08873CA0;
    case 893u: goto L_08873CAC;
    case 894u: goto L_08873CE4;
    case 895u: goto L_08873D10;
    case 896u: goto L_08873D30;
    case 897u: goto L_08873D88;
    case 898u: goto L_08873D94;
    case 899u: goto L_08873DA8;
    case 900u: goto L_08873DB0;
    case 901u: goto L_08873DC4;
    case 902u: goto L_08873DEC;
    case 903u: goto L_08873E00;
    case 904u: goto L_08873E1C;
    case 905u: goto L_08873E2C;
    case 906u: goto L_08873E48;
    case 907u: goto L_08873E50;
    case 908u: goto L_08873E58;
    case 909u: goto L_08873E60;
    case 910u: goto L_08873E6C;
    case 911u: goto L_08873E80;
    case 912u: goto L_08873E84;
    case 913u: goto L_08873E88;
    case 914u: goto L_08873E90;
    case 915u: goto L_08873E9C;
    case 916u: goto L_08873EA4;
    case 917u: goto L_08873EB0;
    case 918u: goto L_08873EB8;
    case 919u: goto L_08873ED0;
    case 920u: goto L_08873ED8;
    case 921u: goto L_08873EDC;
    case 922u: goto L_08873EE4;
    case 923u: goto L_08873EF4;
    case 924u: goto L_08873F0C;
    case 925u: goto L_08873F14;
    case 926u: goto L_08873F1C;
    case 927u: goto L_08873F28;
    case 928u: goto L_08873F30;
    case 929u: goto L_08873F38;
    case 930u: goto L_08873F40;
    case 931u: goto L_08873F4C;
    case 932u: goto L_08873F5C;
    case 933u: goto L_08873F64;
    case 934u: goto L_08873F90;
    case 935u: goto L_08873F98;
    case 936u: goto L_08873FB0;
    case 937u: goto L_08873FB8;
    case 938u: goto L_08873FCC;
    case 939u: goto L_08873FD4;
    case 940u: goto L_08873FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08870000:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[17] = aot_run_words[0];
      ctx.gpr[18] = aot_run_words[1];
      ctx.gpr[19] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
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
L_08870018:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0887024C;
      }
      goto L_08870040;
    }
L_08870040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08870244;
      }
      goto L_08870050;
    }
L_08870050:
    aot_gpr_31 = (0x08870058u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 140u, 0x0889098Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870058u) goto L_08870058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(64)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_20 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    aot_gpr_4 = (49049u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49300u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08870130u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870130u) goto L_08870130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870130:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(132));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088701C0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 169u, 0x089D9020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088701C0u) goto L_088701C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088701C0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (49844u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088701D8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088701D8u) goto L_088701D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088701D8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088701E8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 169u, 0x089D9020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088701E8u) goto L_088701E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088701E8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088701FCu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088701FCu) goto L_088701FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088701FC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887020Cu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 169u, 0x089D9020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887020Cu) goto L_0887020C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887020C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887021Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887021Cu) goto L_0887021C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887021C:
    aot_gpr_31 = (0x08870224u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870224u) goto L_08870224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08870234u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870234u) goto L_08870234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870234:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08870254;
      }
      goto L_0887023C;
    }
L_0887023C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7680)));
      if (branch_taken) {
          goto L_088702A4;
      }
      goto L_08870244;
    }
L_08870244:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887035C;
      }
      goto L_0887024C;
    }
L_0887024C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887035C;
      }
      goto L_08870254;
    }
L_08870254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870268;
      }
      goto L_08870260;
    }
L_08870260:
    aot_gpr_31 = (0x08870268u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870268u) goto L_08870268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870268:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(776)));
    aot_gpr_31 = (0x08870280u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870280u) goto L_08870280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870280:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0887028Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887028Cu) goto L_0887028C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887028C:
    aot_gpr_31 = (0x08870294u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870294u) goto L_08870294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870294:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x088702A0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088702A0u) goto L_088702A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088702A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7680)));
    goto L_088702A4;
L_088702A4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7676), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(136));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088702D8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088702D8u) goto L_088702D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088702D8:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7676), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x088702FCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29552));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088702FCu) goto L_088702FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088702FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(120));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08870318u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870318u) goto L_08870318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870318:
    aot_gpr_31 = (0x08870320u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B73ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870320u) goto L_08870320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x0887033Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887033Cu) goto L_0887033C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887033C:
    aot_gpr_31 = (0x08870344u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870344u) goto L_08870344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0887035C;
      }
      goto L_0887034C;
    }
L_0887034C:
    aot_gpr_31 = (0x08870354u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870354u) goto L_08870354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870354:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0887035C;
L_0887035C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
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
L_0887037C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08870398u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870398u) goto L_08870398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870398:
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
L_088703A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088703BCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088703BCu) goto L_088703BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088703BC:
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
L_088703C8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27495)));
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
L_088703D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088703E0u);
    goto L_088703EC;
L_088703E0:
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
L_088703EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08870410;
    }
    goto L_08870400;
L_08870400:
    aot_gpr_31 = (0x08870408u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870408u) goto L_08870408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08870410;
L_08870410:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08870428;
      }
      goto L_08870418;
    }
L_08870418:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27495), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870430;
      }
      goto L_08870420;
    }
L_08870420:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887043C;
      }
      goto L_08870428;
    }
L_08870428:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870448;
      }
      goto L_08870430;
    }
L_08870430:
    aot_gpr_31 = (0x08870438u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870438u) goto L_08870438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870438:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_0887043C;
L_0887043C:
    aot_gpr_31 = (0x08870444u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 258u, 0x088851A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870444u) goto L_08870444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870444:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27496), static_cast<std::uint8_t>(0u));
    goto L_08870448;
L_08870448:
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
L_08870454:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    if (aot_gpr_16 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
        goto L_08870480;
    }
    goto L_08870470;
L_08870470:
    aot_gpr_31 = (0x08870478u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870478u) goto L_08870478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870478:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    goto L_08870480;
L_08870480:
    aot_gpr_31 = (0x08870488u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870488u) goto L_08870488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870488:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27492));
      if (branch_taken) {
          goto L_088704A4;
      }
      goto L_08870494;
    }
L_08870494:
    aot_gpr_31 = (0x0887049Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887049Cu) goto L_0887049C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887049C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27492));
    goto L_088704A4;
L_088704A4:
    aot_gpr_31 = (0x088704ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088704ACu) goto L_088704AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088704AC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088704BCu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088704BCu) goto L_088704BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088704BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088704C8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 260u, 0x088851D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088704C8u) goto L_088704C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088704C8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088704E4;
      }
      goto L_088704D8;
    }
L_088704D8:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088704E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088704E4u) goto L_088704E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088704E4:
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
L_088704F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08870558;
      }
      goto L_0887054C;
    }
L_0887054C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870564;
      }
      goto L_08870558;
    }
L_08870558:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08870564;
L_08870564:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088705C0;
      }
      goto L_0887056C;
    }
L_0887056C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08870584u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870584u) goto L_08870584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870584:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088705C0;
      }
      goto L_0887059C;
    }
L_0887059C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088705B0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088705B0u) goto L_088705B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088705B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088705C0;
L_088705C0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870608;
      }
      goto L_088705D0;
    }
L_088705D0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08870600;
    }
    goto L_088705DC;
L_088705DC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08870600;
    }
    goto L_088705F0;
L_088705F0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08870600;
L_08870600:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088705D0;
      }
      goto L_08870608;
    }
L_08870608:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08870650;
      }
      goto L_08870618;
    }
L_08870618:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08870644;
      }
      goto L_08870624;
    }
L_08870624:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08870644;
      }
      goto L_08870638;
    }
L_08870638:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08870644;
L_08870644:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08870694;
      }
      goto L_08870650;
    }
L_08870650:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870690;
      }
      goto L_08870658;
    }
L_08870658:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08870688;
    }
    goto L_08870664;
L_08870664:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08870688;
    }
    goto L_08870678;
L_08870678:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08870688;
L_08870688:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08870658;
      }
      goto L_08870690;
    }
L_08870690:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08870694;
L_08870694:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088706E8;
      }
      goto L_0887069C;
    }
L_0887069C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088706E8;
      }
      goto L_088706AC;
    }
L_088706AC:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_088706DC;
    }
    goto L_088706B8;
L_088706B8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_088706DC;
    }
    goto L_088706CC;
L_088706CC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_088706DC;
L_088706DC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088706AC;
      }
      goto L_088706E4;
    }
L_088706E4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088706E8;
L_088706E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887073C;
      }
      goto L_088706F8;
    }
L_088706F8:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08870730;
    }
    goto L_08870700;
L_08870700:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08870730;
    }
    goto L_08870708;
L_08870708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08870730;
    }
    goto L_08870714;
L_08870714:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_0887072C;
      }
      goto L_08870724;
    }
L_08870724:
    aot_gpr_31 = (0x0887072Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887072Cu) goto L_0887072C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887072C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08870730;
L_08870730:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
      if (branch_taken) {
          goto L_088706F8;
      }
      goto L_08870738;
    }
L_08870738:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_0887073C;
L_0887073C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887074C;
      }
      goto L_08870744;
    }
L_08870744:
    aot_gpr_31 = (0x0887074Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887074Cu) goto L_0887074C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887074C:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
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
L_08870784:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_31 = (0x088707A4u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088707A4u) goto L_088707A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088707A4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_088707D8;
      }
      goto L_088707B0;
    }
L_088707B0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2183u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(976));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088707D8;
L_088707D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08870800;
      }
      goto L_088707E8;
    }
L_088707E8:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870804;
      }
      goto L_088707F0;
    }
L_088707F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08870800;
L_08870800:
    aot_gpr_4 = (2236u << 16u);
    goto L_08870804;
L_08870804:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(308)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0887085C;
      }
      goto L_08870818;
    }
L_08870818:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(308)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (2236u << 16u);
        goto L_08870848;
    }
    goto L_08870828;
L_08870828:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08870844;
      }
      goto L_08870834;
    }
L_08870834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08870844;
L_08870844:
    aot_gpr_4 = (2236u << 16u);
    goto L_08870848;
L_08870848:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(308)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(308), aot_gpr_5);
      if (branch_taken) {
          goto L_08870884;
      }
      goto L_0887085C;
    }
L_0887085C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(308)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(304));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08870884u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088704F8;
L_08870884:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(301)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088708BC;
    }
    goto L_08870898;
L_08870898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088708B8u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088708B8u) goto L_088708B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088708B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088708BC;
L_088708BC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088708E0;
      }
      goto L_088708C4;
    }
L_088708C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088708E0;
      }
      goto L_088708D8;
    }
L_088708D8:
    aot_gpr_31 = (0x088708E0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088708E0u) goto L_088708E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088708E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_088708F8;
    }
    goto L_088708EC;
L_088708EC:
    aot_gpr_31 = (0x088708F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088708F4u) goto L_088708F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088708F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088708F8;
L_088708F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08870918;
      }
      goto L_08870904;
    }
L_08870904:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08870920;
      }
      goto L_08870910;
    }
L_08870910:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870928;
      }
      goto L_08870918;
    }
L_08870918:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088712F0;
      }
      goto L_08870920;
    }
L_08870920:
    aot_gpr_31 = (0x08870928u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870928u) goto L_08870928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870928:
    aot_gpr_31 = (0x08870930u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 249u, 0x0888510Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870930u) goto L_08870930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870930:
    aot_gpr_31 = (0x08870938u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 542u, 0x08AC2318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870938u) goto L_08870938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870938:
    aot_gpr_31 = (0x08870940u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 428u, 0x08AF64B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870940u) goto L_08870940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870940:
    aot_gpr_31 = (0x08870948u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 335u, 0x088FD89Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870948u) goto L_08870948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870948:
    aot_gpr_31 = (0x08870950u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 375u, 0x089759ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870950u) goto L_08870950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870950:
    aot_gpr_31 = (0x08870958u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 376u, 0x08885818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870958u) goto L_08870958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870958:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_16 = (2232u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-25376));
      if (branch_taken) {
          goto L_08870970;
      }
      goto L_08870968;
    }
L_08870968:
    aot_gpr_31 = (0x08870970u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870970u) goto L_08870970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870980u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870980u) goto L_08870980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_08870998;
    }
    goto L_0887098C;
L_0887098C:
    aot_gpr_31 = (0x08870994u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870994u) goto L_08870994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_08870998;
L_08870998:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27476));
    aot_gpr_31 = (0x088709A4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088709A4u) goto L_088709A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088709A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_088709BC;
    }
    goto L_088709B0;
L_088709B0:
    aot_gpr_31 = (0x088709B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088709B8u) goto L_088709B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088709B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088709BC;
L_088709BC:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_31 = (0x088709C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088709C8u) goto L_088709C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088709C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_088709E0;
    }
    goto L_088709D4;
L_088709D4:
    aot_gpr_31 = (0x088709DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088709DCu) goto L_088709DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088709DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088709E0;
L_088709E0:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    aot_gpr_31 = (0x088709ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088709ECu) goto L_088709EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088709EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08870E78;
      }
      goto L_088709F8;
    }
L_088709F8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08870A04u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870A04u) goto L_08870A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870A04:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08870E6C;
      }
      goto L_08870A14;
    }
L_08870A14:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24512)));
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
L_08870A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870A44;
      }
      goto L_08870A38;
    }
L_08870A38:
    aot_gpr_31 = (0x08870A40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870A40u) goto L_08870A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870A40:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870A44;
L_08870A44:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25252));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870A58u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870A58u) goto L_08870A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870A58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870A68u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870A68u) goto L_08870A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870A68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870A74u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870A74u) goto L_08870A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870A74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870A84;
    }
L_08870A84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870A90u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870A90u) goto L_08870A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870A90:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27496), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27495), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088712F0;
      }
      goto L_08870AA0;
    }
L_08870AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870AB8;
      }
      goto L_08870AAC;
    }
L_08870AAC:
    aot_gpr_31 = (0x08870AB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870AB4u) goto L_08870AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870AB4:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870AB8;
L_08870AB8:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25224));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870ACCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870ACCu) goto L_08870ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870ACC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870ADCu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870ADCu) goto L_08870ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870ADC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870AE8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870AE8u) goto L_08870AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870AE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870B04;
      }
      goto L_08870AF8;
    }
L_08870AF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870B04u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B04u) goto L_08870B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870B0C;
    }
L_08870B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870B24;
      }
      goto L_08870B18;
    }
L_08870B18:
    aot_gpr_31 = (0x08870B20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B20u) goto L_08870B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B20:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870B24;
L_08870B24:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25196));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870B38u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B38u) goto L_08870B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B38:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870B48u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B48u) goto L_08870B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B48:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870B54u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B54u) goto L_08870B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870B70;
      }
      goto L_08870B64;
    }
L_08870B64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870B70u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B70u) goto L_08870B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870B78;
    }
L_08870B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870B90;
      }
      goto L_08870B84;
    }
L_08870B84:
    aot_gpr_31 = (0x08870B8Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870B8Cu) goto L_08870B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870B8C:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870B90;
L_08870B90:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25164));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870BA4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870BA4u) goto L_08870BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870BA4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870BB4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870BB4u) goto L_08870BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870BB4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870BC0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870BC0u) goto L_08870BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870BDC;
      }
      goto L_08870BD0;
    }
L_08870BD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870BDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870BDCu) goto L_08870BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870BDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870BE4;
    }
L_08870BE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870BFC;
      }
      goto L_08870BF0;
    }
L_08870BF0:
    aot_gpr_31 = (0x08870BF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870BF8u) goto L_08870BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870BF8:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870BFC;
L_08870BFC:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25132));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870C10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C10u) goto L_08870C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C10:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870C20u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C20u) goto L_08870C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C20:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870C2Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C2Cu) goto L_08870C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870C48;
      }
      goto L_08870C3C;
    }
L_08870C3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870C48u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C48u) goto L_08870C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870C50;
    }
L_08870C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870C68;
      }
      goto L_08870C5C;
    }
L_08870C5C:
    aot_gpr_31 = (0x08870C64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C64u) goto L_08870C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C64:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870C68;
L_08870C68:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25108));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870C7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C7Cu) goto L_08870C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C7C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870C8Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C8Cu) goto L_08870C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C8C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870C98u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870C98u) goto L_08870C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870CB4;
      }
      goto L_08870CA8;
    }
L_08870CA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870CB4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870CB4u) goto L_08870CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870CB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870CBC;
    }
L_08870CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870CD4;
      }
      goto L_08870CC8;
    }
L_08870CC8:
    aot_gpr_31 = (0x08870CD0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870CD0u) goto L_08870CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870CD0:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870CD4;
L_08870CD4:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25080));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870CE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870CE8u) goto L_08870CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870CE8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870CF8u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870CF8u) goto L_08870CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870CF8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870D04u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D04u) goto L_08870D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870D20;
      }
      goto L_08870D14;
    }
L_08870D14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870D20u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D20u) goto L_08870D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870D28;
    }
L_08870D28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870D40;
      }
      goto L_08870D34;
    }
L_08870D34:
    aot_gpr_31 = (0x08870D3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D3Cu) goto L_08870D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D3C:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870D40;
L_08870D40:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25048));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870D54u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D54u) goto L_08870D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D54:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870D64u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D64u) goto L_08870D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D64:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870D70u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D70u) goto L_08870D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870D8C;
      }
      goto L_08870D80;
    }
L_08870D80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870D8Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870D8Cu) goto L_08870D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870D8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870D94;
    }
L_08870D94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870DAC;
      }
      goto L_08870DA0;
    }
L_08870DA0:
    aot_gpr_31 = (0x08870DA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870DA8u) goto L_08870DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870DA8:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870DAC;
L_08870DAC:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-25016));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870DC0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870DC0u) goto L_08870DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870DC0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870DD0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870DD0u) goto L_08870DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870DD0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870DDCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870DDCu) goto L_08870DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870DDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870DF8;
      }
      goto L_08870DEC;
    }
L_08870DEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870DF8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870DF8u) goto L_08870DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870DF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870E00;
    }
L_08870E00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870E18;
      }
      goto L_08870E0C;
    }
L_08870E0C:
    aot_gpr_31 = (0x08870E14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870E14u) goto L_08870E14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870E14:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870E18;
L_08870E18:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24988));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08870E2Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870E2Cu) goto L_08870E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870E2C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870E3Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870E3Cu) goto L_08870E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870E3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870E48u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870E48u) goto L_08870E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870E48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870E64;
      }
      goto L_08870E58;
    }
L_08870E58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08870E64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870E64u) goto L_08870E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870E64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870E6C;
    }
L_08870E6C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08870E6Cu, 0x0000000Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08870E78:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08870E84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870E84u) goto L_08870E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870E84:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088712E4;
      }
      goto L_08870E94;
    }
L_08870E94:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24472)));
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
L_08870EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870EC4;
      }
      goto L_08870EB8;
    }
L_08870EB8:
    aot_gpr_31 = (0x08870EC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870EC0u) goto L_08870EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870EC0:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870EC4;
L_08870EC4:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24968));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08870ED8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870ED8u) goto L_08870ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870ED8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870EE8u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870EE8u) goto L_08870EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870EE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870EF4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870EF4u) goto L_08870EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870F10;
      }
      goto L_08870F04;
    }
L_08870F04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08870F10u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F10u) goto L_08870F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870F18;
    }
L_08870F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870F30;
      }
      goto L_08870F24;
    }
L_08870F24:
    aot_gpr_31 = (0x08870F2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F2Cu) goto L_08870F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F2C:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870F30;
L_08870F30:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24920));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08870F44u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F44u) goto L_08870F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F44:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870F54u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F54u) goto L_08870F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870F60u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F60u) goto L_08870F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870F7C;
      }
      goto L_08870F70;
    }
L_08870F70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08870F7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F7Cu) goto L_08870F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870F84;
    }
L_08870F84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08870F9C;
      }
      goto L_08870F90;
    }
L_08870F90:
    aot_gpr_31 = (0x08870F98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870F98u) goto L_08870F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870F98:
    aot_gpr_4 = (2232u << 16u);
    goto L_08870F9C;
L_08870F9C:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24876));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08870FB0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870FB0u) goto L_08870FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870FB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08870FC0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870FC0u) goto L_08870FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870FC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08870FCCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870FCCu) goto L_08870FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870FE8;
      }
      goto L_08870FDC;
    }
L_08870FDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08870FE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08870FE8u) goto L_08870FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08870FE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870FF0;
    }
L_08870FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08871008;
      }
      goto L_08870FFC;
    }
L_08870FFC:
    aot_gpr_31 = (0x08871004u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871004u) goto L_08871004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871004:
    aot_gpr_4 = (2232u << 16u);
    goto L_08871008;
L_08871008:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24828));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x0887101Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887101Cu) goto L_0887101C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887101C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887102Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887102Cu) goto L_0887102C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887102C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08871038u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871038u) goto L_08871038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08871054;
      }
      goto L_08871048;
    }
L_08871048:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08871054u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871054u) goto L_08871054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871054:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_0887105C;
    }
L_0887105C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08871074;
      }
      goto L_08871068;
    }
L_08871068:
    aot_gpr_31 = (0x08871070u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871070u) goto L_08871070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871070:
    aot_gpr_4 = (2232u << 16u);
    goto L_08871074;
L_08871074:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24776));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08871088u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871088u) goto L_08871088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871088:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871098u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871098u) goto L_08871098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871098:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088710A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088710A4u) goto L_088710A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088710A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088710C0;
      }
      goto L_088710B4;
    }
L_088710B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x088710C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088710C0u) goto L_088710C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088710C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_088710C8;
    }
L_088710C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088710E0;
      }
      goto L_088710D4;
    }
L_088710D4:
    aot_gpr_31 = (0x088710DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088710DCu) goto L_088710DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088710DC:
    aot_gpr_4 = (2232u << 16u);
    goto L_088710E0;
L_088710E0:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24736));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x088710F4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088710F4u) goto L_088710F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088710F4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871104u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871104u) goto L_08871104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871104:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08871110u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871110u) goto L_08871110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871110:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_08871120;
    }
L_08871120:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x0887112Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887112Cu) goto L_0887112C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887112C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08871134;
    }
L_08871134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_0887114C;
      }
      goto L_08871140;
    }
L_08871140:
    aot_gpr_31 = (0x08871148u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871148u) goto L_08871148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871148:
    aot_gpr_4 = (2232u << 16u);
    goto L_0887114C;
L_0887114C:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24692));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08871160u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871160u) goto L_08871160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871160:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871170u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871170u) goto L_08871170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871170:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0887117Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887117Cu) goto L_0887117C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887117C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08871198;
      }
      goto L_0887118C;
    }
L_0887118C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08871198u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871198u) goto L_08871198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871198:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_088711A0;
    }
L_088711A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_088711B8;
      }
      goto L_088711AC;
    }
L_088711AC:
    aot_gpr_31 = (0x088711B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088711B4u) goto L_088711B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088711B4:
    aot_gpr_4 = (2232u << 16u);
    goto L_088711B8;
L_088711B8:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24644));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x088711CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088711CCu) goto L_088711CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088711CC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088711DCu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088711DCu) goto L_088711DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088711DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088711E8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088711E8u) goto L_088711E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088711E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08871204;
      }
      goto L_088711F8;
    }
L_088711F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08871204u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871204u) goto L_08871204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871204:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_0887120C;
    }
L_0887120C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08871224;
      }
      goto L_08871218;
    }
L_08871218:
    aot_gpr_31 = (0x08871220u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871220u) goto L_08871220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871220:
    aot_gpr_4 = (2232u << 16u);
    goto L_08871224;
L_08871224:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24596));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08871238u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871238u) goto L_08871238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871238:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871248u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871248u) goto L_08871248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871248:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08871254u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871254u) goto L_08871254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08871270;
      }
      goto L_08871264;
    }
L_08871264:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08871270u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871270u) goto L_08871270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871270:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08871278;
    }
L_08871278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08871290;
      }
      goto L_08871284;
    }
L_08871284:
    aot_gpr_31 = (0x0887128Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887128Cu) goto L_0887128C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887128C:
    aot_gpr_4 = (2232u << 16u);
    goto L_08871290;
L_08871290:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24552));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x088712A4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088712A4u) goto L_088712A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088712A4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088712B4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088712B4u) goto L_088712B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088712B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088712C0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088712C0u) goto L_088712C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088712C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088712DC;
      }
      goto L_088712D0;
    }
L_088712D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x088712DCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088712DCu) goto L_088712DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088712DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_088712E4;
    }
L_088712E4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x088712E4u, 0x0000000Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_088712F0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
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
L_08871308:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0887131Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-24432));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887131Cu) goto L_0887131C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887131C:
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
L_08871328:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25368));
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08871354u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871354u) goto L_08871354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871354:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08871398;
      }
      goto L_08871360;
    }
L_08871360:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0887136Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887136Cu) goto L_0887136C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887136C:
    aot_gpr_31 = (0x08871374u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871374u) goto L_08871374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871374:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 92u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08871398;
      }
      goto L_0887138C;
    }
L_0887138C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27464));
    aot_gpr_31 = (0x08871398u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871398u) goto L_08871398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871398:
    aot_gpr_31 = (0x088713A0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088713A0u) goto L_088713A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088713A0:
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
L_088713B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088713C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 107u, 0x08A94A04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088713C4u) goto L_088713C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088713C4:
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
L_088713D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088713E8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 126u, 0x08A94B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088713E8u) goto L_088713E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088713E8:
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
L_088713F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08871404u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 145u, 0x08A94CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871404u) goto L_08871404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871404:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
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
L_08871414:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08871424u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 122u, 0x08A94B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871424u) goto L_08871424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871424:
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
L_08871430:
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
L_08871438:
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
L_08871440:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (17235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18756));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (20527u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14896));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (18271u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20563));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (12101u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19777));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (17490u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21333));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (47u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21065));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_31);
    aot_gpr_31 = (0x088714ACu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088714ACu) goto L_088714AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088714AC:
    aot_gpr_31 = (0x088714B4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 542u, 0x08B59EE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088714B4u) goto L_088714B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088714B4:
    aot_gpr_31 = (0x088714BCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 196u, 0x088B53C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088714BCu) goto L_088714BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088714BC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088714D0;
      }
      goto L_088714C8;
    }
L_088714C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088714E4;
      }
      goto L_088714D0;
    }
L_088714D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088714E4;
L_088714E4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
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
L_088714F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08871520;
      }
      goto L_08871510;
    }
L_08871510:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
      if (branch_taken) {
          goto L_088715AC;
      }
      goto L_08871518;
    }
L_08871518:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871520;
    }
L_08871520:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871564;
      }
      goto L_0887152C;
    }
L_0887152C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08871518;
      }
      goto L_08871534;
    }
L_08871534:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(216));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x0887154Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887154Cu) goto L_0887154C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887154C:
    aot_gpr_4 = (17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[0] = ctx.fpr[0] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871564;
    }
L_08871564:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088715A0;
      }
      goto L_0887156C;
    }
L_0887156C:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_088715A0;
    }
L_088715A0:
    aot_gpr_4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_088715AC;
    }
L_088715AC:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1252)));
    goto L_088715B0;
L_088715B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
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
L_088715BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(224));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088715ECu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088715ECu) goto L_088715EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088715EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088716A0;
      }
      goto L_088715F8;
    }
L_088715F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(224));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08871610u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871610u) goto L_08871610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088716A0;
      }
      goto L_08871630;
    }
L_08871630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(224));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08871648u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871648u) goto L_08871648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(232));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08871664u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871664u) goto L_08871664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08871680u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871680u) goto L_08871680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871680:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088716A0;
      }
      goto L_08871688;
    }
L_08871688:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08871698u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088716C0;
L_08871698:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088716AC;
      }
      goto L_088716A0;
    }
L_088716A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088716ACu);
    aot_gpr_5 = (0u | 43u);
    goto L_088716C0;
L_088716AC:
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
L_088716C0:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08871700;
      }
      goto L_088716D4;
    }
L_088716D4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 42u);
    goto L_088716DC;
L_088716DC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_08871708;
      }
      goto L_088716E8;
    }
L_088716E8:
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_4;
      if (branch_taken) {
          goto L_08871708;
      }
      goto L_088716F0;
    }
L_088716F0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088716DC;
      }
      goto L_08871700;
    }
L_08871700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08871708;
      }
      goto L_08871708;
    }
L_08871708:
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
L_08871710:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0887175C;
      }
      goto L_08871728;
    }
L_08871728:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08871750;
      }
      goto L_08871738;
    }
L_08871738:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08871790;
      }
      goto L_08871748;
    }
L_08871748:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871750;
    }
L_08871750:
    aot_gpr_4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_0887175C;
    }
L_0887175C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08871784;
      }
      goto L_0887176C;
    }
L_0887176C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08871790;
      }
      goto L_0887177C;
    }
L_0887177C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871784;
    }
L_08871784:
    aot_gpr_4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871790;
    }
L_08871790:
    ctx.fpr[0] = aot_fpr_12 - aot_fpr_13;
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fpr[0] = ctx.fpr[0] / aot_fpr_13;
    goto L_0887179C;
L_0887179C:
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
L_088717A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08871850;
      }
      goto L_088717F0;
    }
L_088717F0:
    ctx.gpr[19] = (0u | 0u);
    goto L_088717F4;
L_088717F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0887180Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088714F8;
L_0887180C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_31 = (0x08871820u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08871710;
L_08871820:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08871840;
      }
      goto L_08871838;
    }
L_08871838:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    goto L_08871840;
L_08871840:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088717F4;
      }
      goto L_08871850;
    }
L_08871850:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
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
L_08871880:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088718BC;
      }
      goto L_08871894;
    }
L_08871894:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_088718A0;
L_088718A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
      if (branch_taken) {
          goto L_088718C4;
      }
      goto L_088718AC;
    }
L_088718AC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088718A0;
      }
      goto L_088718BC;
    }
L_088718BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_088718C4;
      }
      goto L_088718C4;
    }
L_088718C4:
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
L_088718CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (0u | 5u);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08871944;
      }
      goto L_088718F4;
    }
L_088718F4:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08871918;
      }
      goto L_088718FC;
    }
L_088718FC:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08871970;
      }
      goto L_08871908;
    }
L_08871908:
    if (aot_gpr_5 == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08871974;
    }
    goto L_08871910;
L_08871910:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_08871918;
    }
L_08871918:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24400));
    aot_gpr_31 = (0x0887192Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887192Cu) goto L_0887192C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887192C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887193Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887193Cu) goto L_0887193C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887193C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_08871944;
    }
L_08871944:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-24380));
    aot_gpr_31 = (0x08871958u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871958u) goto L_08871958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871958:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871968u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871968u) goto L_08871968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871968:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_08871970;
    }
L_08871970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08871974;
L_08871974:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08871994;
L_08871994:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
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
L_088719B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088719F0;
      }
      goto L_088719D0;
    }
L_088719D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088719E8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 348u, 0x08B5538Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088719E8u) goto L_088719E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088719E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08871A0C;
      }
      goto L_088719F0;
    }
L_088719F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08871A04u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871A04u) goto L_08871A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871A04:
    aot_gpr_31 = (0x08871A0Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 939u, 0x08B57808u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871A0Cu) goto L_08871A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871A0C:
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
L_08871A18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), aot_gpr_29);
    aot_gpr_31 = (0x08871A44u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 347u, 0x08B55328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871A44u) goto L_08871A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871A44:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
        goto L_08871A60;
    }
    goto L_08871A4C;
L_08871A4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08871A5Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871A5Cu) goto L_08871A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871A5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    goto L_08871A60;
L_08871A60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
L_08871A78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 4097 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08871AD8;
      }
      goto L_08871AA8;
    }
L_08871AA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 24u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4096 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08871AD8;
      }
      goto L_08871AD0;
    }
L_08871AD0:
    aot_gpr_31 = (0x08871AD8u);
    aot_gpr_5 = (0u | 4096u);
    goto L_08871C44;
L_08871AD8:
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
L_08871AE4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08871B50;
      }
      goto L_08871B1C;
    }
L_08871B1C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    goto L_08871B20;
L_08871B20:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_6 != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
        goto L_08871B20;
    }
    goto L_08871B50;
L_08871B50:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08871BC8;
      }
      goto L_08871B64;
    }
L_08871B64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08871B68;
L_08871B68:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[9] - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    aot_gpr_6 = (aot_gpr_6 >> 29u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_6 = (ctx.gpr[9] + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08871B68;
    }
    goto L_08871BC8;
L_08871BC8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
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
L_08871BD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08871C08u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871C08u) goto L_08871C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871C08:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08871C2Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08871AE4;
L_08871C2C:
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
L_08871C44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_4 << 3u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08871C8Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871C8Cu) goto L_08871C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871C8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 24u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
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
L_08871CEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08871D14;
      }
      goto L_08871D04;
    }
L_08871D04:
    aot_gpr_31 = (0x08871D0Cu);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_6);
    goto L_08871BD4;
L_08871D0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08871D20;
      }
      goto L_08871D14;
    }
L_08871D14:
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_31 = (0x08871D20u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5));
    goto L_08871BD4;
L_08871D20:
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
L_08871D2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4097 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08871D54;
      }
      goto L_08871D44;
    }
L_08871D44:
    aot_gpr_31 = (0x08871D4Cu);
    aot_gpr_5 = (0u | 5u);
    goto L_088719B4;
L_08871D4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08871D7C;
      }
      goto L_08871D54;
    }
L_08871D54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08871D60u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    goto L_08871C44;
L_08871D60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4097 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08871D7C;
      }
      goto L_08871D74;
    }
L_08871D74:
    aot_gpr_31 = (0x08871D7Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27432));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871D7Cu) goto L_08871D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871D7C:
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
L_08871D88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871DAC;
    }
L_08871DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[7] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871DB8;
    }
L_08871DB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_gpr_5 - ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_6 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
    ctx.gpr[17] = (ctx.gpr[8] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08871DE8;
      }
      goto L_08871DE0;
    }
L_08871DE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08871E00;
      }
      goto L_08871DE8;
    }
L_08871DE8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 24u);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_6);
    goto L_08871E00;
L_08871E00:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 161 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08871E28;
      }
      goto L_08871E14;
    }
L_08871E14:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08871E20u);
    aot_gpr_5 = (0u | 20u);
    goto L_08871CEC;
L_08871E20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    goto L_08871E28;
L_08871E28:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    jump_target = ctx.gpr[19];
    aot_gpr_31 = (0x08871E40u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871E40u) goto L_08871E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871E40:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08871E64;
L_08871E64:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
L_08871E80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 3u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08871F1C;
      }
      goto L_08871ECC;
    }
L_08871ECC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[7] = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08871EF4;
      }
      goto L_08871EEC;
    }
L_08871EEC:
    aot_gpr_31 = (0x08871EF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08871CEC;
L_08871EF4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08871F1C;
      }
      goto L_08871EFC;
    }
L_08871EFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08871EFC;
      }
      goto L_08871F1C;
    }
L_08871F1C:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08871F30u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871F30u) goto L_08871F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871F30:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[19] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_08871F94;
      }
      goto L_08871F44;
    }
L_08871F44:
    ctx.gpr[20] = (0u | 0u);
    goto L_08871F48;
L_08871F48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[19]);
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871F68u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 28u, 0x08A94190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871F68u) goto L_08871F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08871F48;
      }
      goto L_08871F94;
    }
L_08871F94:
    ctx.gpr[20] = (aot_gpr_29 | 0u);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27416));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08871FB0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871FB0u) goto L_08871FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871FB0:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08871FC4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 17u, 0x08A940D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08871FC4u) goto L_08871FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08871FC4:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (0u | 3u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887201C;
      }
      goto L_08872008;
    }
L_08872008:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872014u);
    aot_gpr_5 = (0u | 1u);
    goto L_08871CEC;
L_08872014:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0887201C;
L_0887201C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_08872048:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08872070u);
    aot_gpr_6 = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872070u) goto L_08872070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872070:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[18] = (aot_gpr_16 - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08872098;
      }
      goto L_08872088;
    }
L_08872088:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27412));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08872098u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 705u, 0x089E7464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872098u) goto L_08872098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872098:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088720DC;
      }
      goto L_088720AC;
    }
L_088720AC:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088720AC;
      }
      goto L_088720D8;
    }
L_088720D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088720DC;
L_088720DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08872104;
      }
      goto L_088720F0;
    }
L_088720F0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088720FCu);
    aot_gpr_5 = (0u | 1u);
    goto L_08871CEC;
L_088720FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    goto L_08872104;
L_08872104:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
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
L_08872148:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.gpr[18] = (aot_gpr_5 - ctx.gpr[18]);
    ctx.gpr[7] = (0u | 6u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0887218C;
      }
      goto L_0887217C;
    }
L_0887217C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872188u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08872048;
L_08872188:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0887218C;
L_0887218C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088721A8;
      }
      goto L_088721A0;
    }
L_088721A0:
    aot_gpr_31 = (0x088721A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08871D2C;
L_088721A8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08872294;
      }
      goto L_088721B8;
    }
L_088721B8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088721D8;
      }
      goto L_088721C8;
    }
L_088721C8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x088721D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08871E80;
L_088721D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
        goto L_08872208;
    }
    goto L_088721F8;
L_088721F8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    aot_gpr_31 = (0x08872204u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08871CEC;
L_08872204:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    goto L_08872208;
L_08872208:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08872284;
      }
      goto L_0887225C;
    }
L_0887225C:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    goto L_08872260;
L_08872260:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08872260;
      }
      goto L_08872284;
    }
L_08872284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_0887232C;
      }
      goto L_08872294;
    }
L_08872294:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 161 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088722B4;
      }
      goto L_088722AC;
    }
L_088722AC:
    aot_gpr_31 = (0x088722B4u);
    aot_gpr_5 = (0u | 20u);
    goto L_08871CEC;
L_088722B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(160));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08872308;
      }
      goto L_088722F8;
    }
L_088722F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08872308u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871D88;
L_08872308:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x0887231Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887231Cu) goto L_0887231C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887231C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887232C;
      }
      goto L_0887232C;
    }
L_0887232C:
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
L_08872348:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_5 - ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08872370u);
    aot_gpr_5 = (0u | 1u);
    goto L_08871D88;
L_08872370:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088723C0;
      }
      goto L_08872384;
    }
L_08872384:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_088723C0;
      }
      goto L_08872398;
    }
L_08872398:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x088723A8u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871D88;
L_088723A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08872398;
      }
      goto L_088723C0;
    }
L_088723C0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
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
L_088723DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0887241C;
      }
      goto L_0887240C;
    }
L_0887240C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08872418u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08872348;
L_08872418:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0887241C;
L_0887241C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(-24));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_6);
    goto L_08872438;
L_08872438:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08872484;
      }
      goto L_08872440;
    }
L_08872440:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08872484;
      }
      goto L_08872450;
    }
L_08872450:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08872438;
      }
      goto L_08872484;
    }
L_08872484:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088724A8;
      }
      goto L_08872490;
    }
L_08872490:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08872490;
      }
      goto L_088724A8;
    }
L_088724A8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_5);
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
L_088724C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 200 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0887253C;
      }
      goto L_088724FC;
    }
L_088724FC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    aot_gpr_5 = (0u | 200u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08872524;
      }
      goto L_0887250C;
    }
L_0887250C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887251Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24356));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887251Cu) goto L_0887251C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887251C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887253C;
      }
      goto L_08872524;
    }
L_08872524:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 225 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887253C;
      }
      goto L_08872530;
    }
L_08872530:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0887253Cu);
    aot_gpr_5 = (0u | 5u);
    goto L_088719B4;
L_0887253C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08872548u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08872148;
L_08872548:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08872560;
      }
      goto L_08872554;
    }
L_08872554:
    aot_gpr_31 = (0x0887255Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 30u, 0x088C4228u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887255Cu) goto L_0887255C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887255C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08872560;
L_08872560:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872570u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088723DC;
L_08872570:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887259C;
      }
      goto L_08872594;
    }
L_08872594:
    aot_gpr_31 = (0x0887259Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887259Cu) goto L_0887259C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887259C:
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
L_088725B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088725F8;
      }
      goto L_088725D8;
    }
L_088725D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_gpr_31 = (0x088725F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08872148;
L_088725F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887265C;
      }
      goto L_088725F8;
    }
L_088725F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_6 & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08872650;
      }
      goto L_08872608;
    }
L_08872608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872634u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088723DC;
L_08872634:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_08872648;
      }
      goto L_0887263C;
    }
L_0887263C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08872648;
L_08872648:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887265C;
      }
      goto L_08872650;
    }
L_08872650:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0887265C;
L_0887265C:
    aot_gpr_31 = (0x08872664u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 30u, 0x088C4228u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872664u) goto L_08872664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872664:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08872680;
      }
      goto L_08872670;
    }
L_08872670:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872680u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_088723DC;
L_08872680:
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
L_08872694:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 4u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_gpr_31 = (0x088726D4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088726D4u) goto L_088726D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088726D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088726E4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088726E4u) goto L_088726E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088726E4:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08872708;
      }
      goto L_08872700;
    }
L_08872700:
    aot_gpr_31 = (0x08872708u);
    aot_gpr_5 = (0u | 1u);
    goto L_08871CEC;
L_08872708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
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
L_08872734:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088727C8;
      }
      goto L_0887275C;
    }
L_0887275C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 >> 29u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088727B0;
      }
      goto L_08872788;
    }
L_08872788:
    aot_gpr_5 = (2183u << 16u);
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(49)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088727A0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9652));
    goto L_08871A18;
L_088727A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088727F0;
      }
      goto L_088727A8;
    }
L_088727A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08872834;
      }
      goto L_088727B0;
    }
L_088727B0:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088727C0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24336));
    goto L_08872694;
L_088727C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08872834;
      }
      goto L_088727C8;
    }
L_088727C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08872788;
      }
      goto L_088727D8;
    }
L_088727D8:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088727E8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24304));
    goto L_08872694;
L_088727E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08872834;
      }
      goto L_088727F0;
    }
L_088727F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08872814u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872814u) goto L_08872814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872814:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872824u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_088718CC;
L_08872824:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_31 = (0x08872830u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08871A78;
L_08872830:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08872834;
L_08872834:
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
L_08872848:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08872880;
      }
      goto L_0887285C;
    }
L_0887285C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_gpr_5 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08872874u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24264));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872874u) goto L_08872874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_08872880;
L_08872880:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0887293C;
      }
      goto L_08872890;
    }
L_08872890:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-16)));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (aot_gpr_5 << 3u);
      if (branch_taken) {
          goto L_088728CC;
      }
      goto L_088728A0;
    }
L_088728A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_gpr_5 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x088728BCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24212));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088728BCu) goto L_088728BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088728BC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
      ctx.gpr[10] = aot_run_words[3];
    }
    goto L_088728CC;
L_088728CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    aot_gpr_6 = (ctx.gpr[9] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0887293C;
      }
      goto L_088728E4;
    }
L_088728E4:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08872934;
      }
      goto L_088728F4;
    }
L_088728F4:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_6);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_6);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088728F4;
      }
      goto L_08872934;
    }
L_08872934:
    aot_gpr_5 = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0887293C;
L_0887293C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08872958:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    ctx.gpr[20] = (ctx.gpr[20] - aot_gpr_4);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x088729A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08871A18;
L_088729A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088729FC;
      }
      goto L_088729AC;
    }
L_088729AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088729C4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088729C4u) goto L_088729C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088729C4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088729D4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088718CC;
L_088729D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_31 = (0x088729F8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08871A78;
L_088729F8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088729FC;
L_088729FC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
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
L_08872A24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08872A58;
      }
      goto L_08872A50;
    }
L_08872A50:
    aot_gpr_31 = (0x08872A58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872A58u) goto L_08872A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872A58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08872A80;
      }
      goto L_08872A68;
    }
L_08872A68:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872A78u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 513u, 0x089E67F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872A78u) goto L_08872A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872A78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08872A94;
      }
      goto L_08872A80;
    }
L_08872A80:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872A90u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 841u, 0x0893BF28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872A90u) goto L_08872A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872A90:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08872A94;
L_08872A94:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08872AA8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 56u, 0x08AB04C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872AA8u) goto L_08872AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872AA8:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08872ADC;
      }
      goto L_08872AD4;
    }
L_08872AD4:
    aot_gpr_31 = (0x08872ADCu);
    aot_gpr_5 = (0u | 1u);
    goto L_08871CEC;
L_08872ADC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
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
L_08872AFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (2183u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x08872B38u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10788));
    goto L_08871A18;
L_08872B38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08872B50u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872B50u) goto L_08872B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872B50:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08872B80;
      }
      goto L_08872B68;
    }
L_08872B68:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_31 = (0x08872B7Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_088718CC;
L_08872B7C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_08872B80;
L_08872B80:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
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
L_08872B8C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
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
L_08872BB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (2235u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(21408));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[8] = (0u | 19u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25240));
    goto L_08872C00;
L_08872C00:
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(ctx.gpr[9] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08872C00;
      }
      goto L_08872C3C;
    }
L_08872C3C:
    aot_gpr_6 = (48460u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (15267u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    goto L_08872C58;
L_08872C58:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08872C58;
      }
      goto L_08872C70;
    }
L_08872C70:
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
L_08872C78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    aot_gpr_31 = (0x08872CC8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872CC8u) goto L_08872CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872CC8:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21408));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[21] = (aot_gpr_5 | 0u);
    goto L_08872CDC;
L_08872CDC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[22]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872D00;
      }
      goto L_08872CE8;
    }
L_08872CE8:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08872D00;
      }
      goto L_08872CF0;
    }
L_08872CF0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08872CDC;
      }
      goto L_08872D00;
    }
L_08872D00:
    aot_gpr_6 = (0u | 100u);
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_6;
    aot_gpr_6 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08872D70;
      }
      goto L_08872D0C;
    }
L_08872D0C:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[19]);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08872D78;
      }
      goto L_08872D68;
    }
L_08872D68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08872D8C;
      }
      goto L_08872D70;
    }
L_08872D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872F4C;
      }
      goto L_08872D78;
    }
L_08872D78:
    aot_gpr_31 = (0x08872D80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872D80u) goto L_08872D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872D80:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[2];
      if (branch_taken) {
          goto L_08872D8C;
      }
      goto L_08872D88;
    }
L_08872D88:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08872D8C;
L_08872D8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[22])) && aot_fpr_12 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08872E30;
      }
      goto L_08872DA0;
    }
L_08872DA0:
    aot_gpr_31 = (0x08872DA8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872DA8u) goto L_08872DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872DA8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    ctx.gpr[23] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (2240u << 16u);
    ctx.gpr[30] = (aot_gpr_4 + static_cast<std::uint32_t>(-25240));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_31 = (0x08872DE0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872DE0u) goto L_08872DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872DE0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_31 = (0x08872E0Cu);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872E0Cu) goto L_08872E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872E0C:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08872E30;
L_08872E30:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08872EB0;
      }
      goto L_08872E60;
    }
L_08872E60:
    aot_gpr_31 = (0x08872E68u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872E68u) goto L_08872E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872E68:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_5 = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-25240));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08872EC8;
      }
      goto L_08872EB0;
    }
L_08872EB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08872EC8;
L_08872EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08872EE8;
      }
      goto L_08872EDC;
    }
L_08872EDC:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08872EE8;
L_08872EE8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08872F48;
      }
      goto L_08872F08;
    }
L_08872F08:
    aot_gpr_31 = (0x08872F10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08872F10u) goto L_08872F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08872F10:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[2];
      if (branch_taken) {
          goto L_08872F48;
      }
      goto L_08872F18;
    }
L_08872F18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27384)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27380)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08872F48;
L_08872F48:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08872F4C;
L_08872F4C:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
L_08872F84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21408));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    ctx.gpr[23] = (2238u << 16u);
    aot_gpr_4 = (16384u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(14864));
    ctx.gpr[30] = (16384u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_31);
    goto L_08873010;
L_08873010:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_08873020;
    }
L_08873020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_0887303C;
    }
L_0887303C:
    aot_gpr_31 = (0x08873044u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 561u, 0x08906858u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873044u) goto L_08873044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873044:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_0887304C;
    }
L_0887304C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    goto L_08873050;
L_08873050:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887336C;
      }
      goto L_0887305C;
    }
L_0887305C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08873068u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873068u) goto L_08873068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873068:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_16 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
        goto L_08873088;
    }
    goto L_08873088;
L_08873088:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088730A0;
      }
      goto L_0887309C;
    }
L_0887309C:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088730A0;
L_088730A0:
    aot_gpr_4 = (ctx.gpr[17] & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873130;
      }
      goto L_088730AC;
    }
L_088730AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873110;
      }
      goto L_088730B8;
    }
L_088730B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873110;
      }
      goto L_088730D8;
    }
L_088730D8:
    aot_gpr_31 = (0x088730E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088730E0u) goto L_088730E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088730E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08873110;
      }
      goto L_088730E8;
    }
L_088730E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27400)));
    aot_gpr_31 = (0x088730F4u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_08872B8C;
L_088730F4:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08873130;
      }
      goto L_08873110;
    }
L_08873110:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27396)));
    aot_gpr_31 = (0x0887311Cu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_08872B8C;
L_0887311C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08873130;
L_08873130:
    aot_gpr_4 = (ctx.gpr[17] & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088731A8;
      }
      goto L_0887313C;
    }
L_0887313C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08873194;
    }
    goto L_08873148;
L_08873148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08873194;
    }
    goto L_08873168;
L_08873168:
    aot_gpr_31 = (0x08873170u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873170u) goto L_08873170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873170:
    if (ctx.gpr[2] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08873194;
    }
    goto L_08873178;
L_08873178:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27392)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088731A8;
      }
      goto L_08873194;
    }
L_08873194:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27388)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088731A8;
L_088731A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088731CCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088731CCu) goto L_088731CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088731CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873324;
      }
      goto L_088731D8;
    }
L_088731D8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088731F0;
      }
      goto L_088731EC;
    }
L_088731EC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088731F0;
L_088731F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08873300;
      }
      goto L_08873208;
    }
L_08873208:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_31 = (0x0887321Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 561u, 0x08906858u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887321Cu) goto L_0887321C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887321C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0887322C;
      }
      goto L_08873224;
    }
L_08873224:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_0887322C;
    }
L_0887322C:
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08873250u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873250u) goto L_08873250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_08873258;
    }
L_08873258:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_08873278;
    }
L_08873278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (2048u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_0887328C;
    }
L_0887328C:
    aot_gpr_31 = (0x08873294u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873294u) goto L_08873294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088732CC;
      }
      goto L_0887329C;
    }
L_0887329C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088732ACu);
    aot_gpr_6 = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088732ACu) goto L_088732AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088732AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[30]);
    aot_gpr_31 = (0x088732C0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088732C0u) goto L_088732C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088732C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088732CCu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088732CCu) goto L_088732CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088732CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x088732E8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 167u, 0x089D1074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088732E8u) goto L_088732E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088732E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08873208;
      }
      goto L_08873300;
    }
L_08873300:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873324;
      }
      goto L_0887330C;
    }
L_0887330C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08873324u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 577u, 0x088937CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873324u) goto L_08873324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887336C;
      }
      goto L_0887333C;
    }
L_0887333C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08873354u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 626u, 0x08893C18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873354u) goto L_08873354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873354:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0887336Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 647u, 0x08893E14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887336Cu) goto L_0887336C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887336C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
      if (branch_taken) {
          goto L_08873010;
      }
      goto L_0887338C;
    }
L_0887338C:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
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
L_088733D0:
    aot_gpr_5 = (18804u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 9216u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (51572u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 9216u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
L_08873400:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
L_08873418:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (2178u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 52u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08873448u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24460));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873448u) goto L_08873448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873448:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(52));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08873464u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 816u, 0x08B1B6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873464u) goto L_08873464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873464:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_0887347C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6004)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(27808));
      if (branch_taken) {
          goto L_088734A8;
      }
      goto L_08873498;
    }
L_08873498:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6004), aot_gpr_4);
    aot_gpr_31 = (0x088734A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08873418;
L_088734A8:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_088734BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08873504;
      }
      goto L_088734EC;
    }
L_088734EC:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08873504;
L_08873504:
    aot_gpr_31 = (0x0887350Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 364u, 0x08819EE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887350Cu) goto L_0887350C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887350C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
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
L_0887352C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0887353Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887353Cu) goto L_0887353C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887353C:
    aot_gpr_31 = (0x08873544u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873544u) goto L_08873544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873544:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[2]) < -125 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
      if (branch_taken) {
          goto L_08873570;
      }
      goto L_08873550;
    }
L_08873550:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27176)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08873574;
      }
      goto L_08873564;
    }
L_08873564:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27176), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08873578;
      }
      goto L_08873570;
    }
L_08873570:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27176), aot_gpr_4);
    goto L_08873574;
L_08873574:
    ctx.gpr[2] = (0u | 0u);
    goto L_08873578;
L_08873578:
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
L_08873584:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08873594u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873594u) goto L_08873594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873594:
    aot_gpr_31 = (0x0887359Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887359Cu) goto L_0887359C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887359C:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[2]) < 126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
      if (branch_taken) {
          goto L_088735C8;
      }
      goto L_088735A8;
    }
L_088735A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27172)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088735CC;
      }
      goto L_088735BC;
    }
L_088735BC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27172), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088735D0;
      }
      goto L_088735C8;
    }
L_088735C8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27172), aot_gpr_4);
    goto L_088735CC;
L_088735CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088735D0;
L_088735D0:
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
L_088735DC:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
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
L_08873600:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08873638;
      }
      goto L_08873630;
    }
L_08873630:
    aot_gpr_31 = (0x08873638u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873638u) goto L_08873638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_31 = (0x08873644u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 728u, 0x089C7184u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873644u) goto L_08873644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873644:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(204), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(400), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(404), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(412), 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08873668u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 81u, 0x08874584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873668u) goto L_08873668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873668:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x08873678u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08873D30;
L_08873678:
    aot_gpr_31 = (0x08873680u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27160));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 269u, 0x0893509Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873680u) goto L_08873680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088736A0;
      }
      goto L_0887368C;
    }
L_0887368C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873698u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873698u) goto L_08873698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873698:
    aot_gpr_31 = (0x088736A0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088736A0u) goto L_088736A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088736A0:
    aot_gpr_31 = (0x088736A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 609u, 0x0882E9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088736A8u) goto L_088736A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088736A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088736B8;
      }
      goto L_088736B0;
    }
L_088736B0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088736B8;
L_088736B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088736CC;
      }
      goto L_088736C4;
    }
L_088736C4:
    aot_gpr_31 = (0x088736CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088736CCu) goto L_088736CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088736CC:
    aot_gpr_31 = (0x088736D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088736D4u) goto L_088736D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088736D4:
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
L_088736E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08873700u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 734u, 0x08B3AAF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873700u) goto L_08873700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0887378C;
      }
      goto L_08873708;
    }
L_08873708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08873720;
    }
    goto L_08873714;
L_08873714:
    aot_gpr_31 = (0x0887371Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887371Cu) goto L_0887371C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887371C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08873720;
L_08873720:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08873754;
      }
      goto L_0887372C;
    }
L_0887372C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_08873758;
    }
    goto L_0887373C;
L_0887373C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887375C;
      }
      goto L_08873754;
    }
L_08873754:
    aot_gpr_4 = (0u | 1u);
    goto L_08873758;
L_08873758:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887375C;
L_0887375C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887378C;
      }
      goto L_08873764;
    }
L_08873764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
        goto L_0887377C;
    }
    goto L_08873770;
L_08873770:
    aot_gpr_31 = (0x08873778u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873778u) goto L_08873778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0887377C;
L_0887377C:
    aot_gpr_31 = (0x08873784u);
    aot_gpr_5 = (0u | 1u);
    goto L_088739EC;
L_08873784:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08873938;
      }
      goto L_0887378C;
    }
L_0887378C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887386C;
      }
      goto L_088737A0;
    }
L_088737A0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088737E4;
      }
      goto L_088737BC;
    }
L_088737BC:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088737E8;
      }
      goto L_088737E0;
    }
L_088737E0:
    aot_gpr_4 = (0u | 1u);
    goto L_088737E4;
L_088737E4:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088737E8;
L_088737E8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088737FC;
      }
      goto L_088737F0;
    }
L_088737F0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088737FCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088737FCu) goto L_088737FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088737FC:
    aot_gpr_31 = (0x08873804u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088739A0;
L_08873804:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08873810u);
    aot_gpr_5 = (0u | 1u);
    goto L_088739EC;
L_08873810:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x08873820u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08873D30;
L_08873820:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08873864;
      }
      goto L_08873828;
    }
L_08873828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08873854;
      }
      goto L_08873834;
    }
L_08873834:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08873848u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873848u) goto L_08873848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873848:
    aot_gpr_31 = (0x08873850u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873850u) goto L_08873850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873850:
    aot_gpr_4 = (2237u << 16u);
    goto L_08873854;
L_08873854:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08873864u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873864u) goto L_08873864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873864:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08873938;
      }
      goto L_0887386C;
    }
L_0887386C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08873880;
      }
      goto L_08873878;
    }
L_08873878:
    aot_gpr_31 = (0x08873880u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873880u) goto L_08873880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873880:
    aot_gpr_31 = (0x08873888u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873888u) goto L_08873888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873888:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088738A0;
      }
      goto L_08873890;
    }
L_08873890:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x088738A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08873D30;
L_088738A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088738CC;
      }
      goto L_088738AC;
    }
L_088738AC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088738C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088738C0u) goto L_088738C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088738C0:
    aot_gpr_31 = (0x088738C8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088738C8u) goto L_088738C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088738C8:
    aot_gpr_4 = (2237u << 16u);
    goto L_088738CC;
L_088738CC:
    aot_gpr_31 = (0x088738D4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 614u, 0x0882E9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088738D4u) goto L_088738D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088738D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0887392C;
      }
      goto L_088738DC;
    }
L_088738DC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
      if (branch_taken) {
          goto L_088738F4;
      }
      goto L_088738EC;
    }
L_088738EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08873918;
      }
      goto L_088738F4;
    }
L_088738F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    goto L_08873918;
L_08873918:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08873924u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873924u) goto L_08873924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08873930;
      }
      goto L_0887392C;
    }
L_0887392C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(204), 0u);
    goto L_08873930;
L_08873930:
    aot_gpr_31 = (0x08873938u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 640u, 0x0886FD40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873938u) goto L_08873938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873938:
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
L_0887394C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(16))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08873988;
      }
      goto L_08873968;
    }
L_08873968:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08873988;
      }
      goto L_08873988;
    }
L_08873988:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08873994u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873994u) goto L_08873994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873994:
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
L_088739A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088739B4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088703C8;
L_088739B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088739C4;
      }
      goto L_088739BC;
    }
L_088739BC:
    aot_gpr_31 = (0x088739C4u);
    goto L_088703EC;
L_088739C4:
    aot_gpr_31 = (0x088739CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08873E2C;
L_088739CC:
    aot_gpr_31 = (0x088739D4u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 630u, 0x0886FCACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088739D4u) goto L_088739D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088739D4:
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
L_088739E4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 1u);
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
L_088739EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_31 = (0x08873A0Cu);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    goto L_088739A0;
L_08873A0C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x08873A1Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08873D30;
L_08873A1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873A24;
    }
L_08873A24:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x08873A34u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873A34u) goto L_08873A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873A34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[18] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08873A5C;
      }
      goto L_08873A44;
    }
L_08873A44:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873A54u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873A54u) goto L_08873A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873A54:
    aot_gpr_31 = (0x08873A5Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873A5Cu) goto L_08873A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873A5C:
    aot_gpr_31 = (0x08873A64u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 549u, 0x0882E670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873A64u) goto L_08873A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873A64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08873A78;
      }
      goto L_08873A70;
    }
L_08873A70:
    aot_gpr_31 = (0x08873A78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873A78u) goto L_08873A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873A78:
    aot_gpr_31 = (0x08873A80u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873A80u) goto L_08873A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873A80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08873B84;
      }
      goto L_08873A88;
    }
L_08873A88:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08873AF8;
      }
      goto L_08873A94;
    }
L_08873A94:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08873AB0;
      }
      goto L_08873A9C;
    }
L_08873A9C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873AA8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873AA8u) goto L_08873AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873AA8:
    aot_gpr_31 = (0x08873AB0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873AB0u) goto L_08873AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873AB0:
    aot_gpr_31 = (0x08873AB8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 614u, 0x0882E9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873AB8u) goto L_08873AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08873AF8;
      }
      goto L_08873AC0;
    }
L_08873AC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08873AE4;
      }
      goto L_08873AC8;
    }
L_08873AC8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873AD8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873AD8u) goto L_08873AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873AD8:
    aot_gpr_31 = (0x08873AE0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873AE0u) goto L_08873AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873AE0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08873AE4;
L_08873AE4:
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x08873AF0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873AF0u) goto L_08873AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873AF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873AF8;
    }
L_08873AF8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27152));
      if (branch_taken) {
          goto L_08873B18;
      }
      goto L_08873B00;
    }
L_08873B00:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873B10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B10u) goto L_08873B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B10:
    aot_gpr_31 = (0x08873B18u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B18u) goto L_08873B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B18:
    aot_gpr_31 = (0x08873B20u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 605u, 0x0882E980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B20u) goto L_08873B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08873B40;
      }
      goto L_08873B2C;
    }
L_08873B2C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873B38u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B38u) goto L_08873B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B38:
    aot_gpr_31 = (0x08873B40u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B40u) goto L_08873B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B40:
    aot_gpr_31 = (0x08873B48u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B48u) goto L_08873B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B48:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08873B5Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B5Cu) goto L_08873B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B5C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08873B68u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 641u, 0x08AE2634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B68u) goto L_08873B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B68:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08873B7C;
      }
      goto L_08873B74;
    }
L_08873B74:
    aot_gpr_31 = (0x08873B7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B7Cu) goto L_08873B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873B84;
    }
L_08873B84:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27152));
      if (branch_taken) {
          goto L_08873BA4;
      }
      goto L_08873B8C;
    }
L_08873B8C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873B9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873B9Cu) goto L_08873B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873B9C:
    aot_gpr_31 = (0x08873BA4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BA4u) goto L_08873BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BA4:
    aot_gpr_31 = (0x08873BACu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 605u, 0x0882E980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BACu) goto L_08873BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08873BCC;
      }
      goto L_08873BB8;
    }
L_08873BB8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08873BC4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BC4u) goto L_08873BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BC4:
    aot_gpr_31 = (0x08873BCCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BCCu) goto L_08873BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BCC:
    aot_gpr_31 = (0x08873BD4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BD4u) goto L_08873BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BD4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08873BE8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BE8u) goto L_08873BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BE8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08873BF4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 641u, 0x08AE2634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873BF4u) goto L_08873BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873BF4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873C00;
    }
L_08873C00:
    aot_gpr_31 = (0x08873C08u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873C08u) goto L_08873C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873C08:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873C20;
      }
      goto L_08873C18;
    }
L_08873C18:
    aot_gpr_31 = (0x08873C20u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 771u, 0x08B67310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873C20u) goto L_08873C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873C20:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
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
L_08873C40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27660));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (2183u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(13788));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(38));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08873CA0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873CA0u) goto L_08873CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873CA0:
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08873CACu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 579u, 0x0886F950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873CACu) goto L_08873CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873CAC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(270));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 10u);
    aot_gpr_31 = (0x08873CE4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873CE4u) goto L_08873CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873CE4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(400), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(404), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(412), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(420), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08873D10u);
    aot_gpr_6 = (0u | 140u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873D10u) goto L_08873D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873D10:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_08873D30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08873E1C;
      }
      goto L_08873D88;
    }
L_08873D88:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08873E1C;
      }
      goto L_08873D94;
    }
L_08873D94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (2183u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20648));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08873E1C;
      }
      goto L_08873DA8;
    }
L_08873DA8:
    aot_gpr_31 = (0x08873DB0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873DB0u) goto L_08873DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873DB0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27124)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27128)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08873DC4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873DC4u) goto L_08873DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873DC4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08873DECu);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873DECu) goto L_08873DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873DEC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27116)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27120)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08873E00u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873E00u) goto L_08873E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873E00:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08873E1C;
L_08873E1C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
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
L_08873E2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    if (aot_gpr_4 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
        goto L_08873E58;
    }
    goto L_08873E48;
L_08873E48:
    aot_gpr_31 = (0x08873E50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873E50u) goto L_08873E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873E50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    goto L_08873E58;
L_08873E58:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08873E80;
      }
      goto L_08873E60;
    }
L_08873E60:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_08873E84;
    }
    goto L_08873E6C;
L_08873E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08873E88;
      }
      goto L_08873E80;
    }
L_08873E80:
    aot_gpr_5 = (0u | 1u);
    goto L_08873E84;
L_08873E84:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08873E88;
L_08873E88:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08873EE4;
      }
      goto L_08873E90;
    }
L_08873E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08873EA4;
      }
      goto L_08873E9C;
    }
L_08873E9C:
    aot_gpr_31 = (0x08873EA4u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08873EB8;
      }
      goto L_08873EB0;
    }
L_08873EB0:
    aot_gpr_31 = (0x08873EB8u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873EB8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08873EDC;
      }
      goto L_08873ED0;
    }
L_08873ED0:
    aot_gpr_31 = (0x08873ED8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873ED8u) goto L_08873ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08873EDC;
L_08873EDC:
    aot_gpr_31 = (0x08873EE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873EE4u) goto L_08873EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873EE4:
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
L_08873EF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08873F0Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873F0Cu) goto L_08873F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873F0C:
    aot_gpr_31 = (0x08873F14u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 2u, 0x0898C008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873F14u) goto L_08873F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873F14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08873F40;
      }
      goto L_08873F1C;
    }
L_08873F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08873F30;
      }
      goto L_08873F28;
    }
L_08873F28:
    aot_gpr_31 = (0x08873F30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873F30u) goto L_08873F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873F30:
    aot_gpr_31 = (0x08873F38u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873F38u) goto L_08873F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873F38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08873F4C;
      }
      goto L_08873F40;
    }
L_08873F40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08873F4Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_088739EC;
L_08873F4C:
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
L_08873F5C:
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
L_08873F64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08873FB0;
      }
      goto L_08873F90;
    }
L_08873F90:
    aot_gpr_31 = (0x08873F98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873F98u) goto L_08873F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873F98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08873FCC;
      }
      goto L_08873FB0;
    }
L_08873FB0:
    aot_gpr_31 = (0x08873FB8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08873FB8u) goto L_08873FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08873FB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08873FCC;
L_08873FCC:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 5u, 0x08874038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08873FD4;
    }
L_08873FD4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (aot_gpr_6 << 4u);
    ctx.gpr[9] = (aot_gpr_6 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-20960));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0028_entry, 28u, 5u, 0x08874038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08873FFC;
    }
L_08873FFC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27112)));
    ctx.pc = 0x08874000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0027(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0027_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_27(Runtime &runtime) {
    runtime.register_generated_unit(27u, 0x08870000u, 16384u, &recomp_unit_0027, &recomp_unit_0027_entry);
    runtime.register_function(0x08870000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870018u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870040u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870058u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870130u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887020Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887021Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870234u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887023Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870244u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887024Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870254u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870268u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870280u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887028Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870318u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870320u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887033Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870344u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887034Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870354u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887035Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887037Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870408u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870410u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870420u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870428u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870430u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887043Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870444u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870448u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870454u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870470u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870480u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870488u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870494u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887049Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887054Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870558u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887056Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870584u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887059Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870608u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870618u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870624u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870638u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870644u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870658u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870688u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870690u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887069Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870724u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887072Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870730u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887073Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870744u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887074Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870800u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870804u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870818u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870844u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887085Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870884u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870898u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870904u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870910u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870920u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870928u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870930u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870940u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870950u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870980u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887098Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ACCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ED8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871004u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887101Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887102Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871038u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871054u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887105Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871068u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871074u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871098u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871104u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871110u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871120u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887112Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871134u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871140u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871148u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887114Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871160u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871170u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887117Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887118Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871198u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871204u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887120Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871218u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871220u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871238u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871248u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871254u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871264u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871270u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871278u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887128Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871290u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887131Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871328u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871354u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871360u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887136Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887138Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871404u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871414u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871424u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871430u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871440u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871510u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871518u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871520u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887152Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871534u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887154Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887156Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871610u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871630u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871688u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871698u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871710u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871728u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871748u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871750u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887175Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887176Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887177Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871790u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887179Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887180Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871820u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871838u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871840u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871850u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871894u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871908u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871910u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887192Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887193Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871944u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871974u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871ECCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872014u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887201Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872098u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872104u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872148u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887217Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872188u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887218Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872204u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887225Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887231Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887232Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872348u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872370u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872384u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887240Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887241Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872440u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872450u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872484u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872490u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887250Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887251Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872524u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872530u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887253Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872548u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872554u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887255Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872560u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872570u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872594u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887259Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872608u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872634u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887263Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887265Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872670u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872734u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887275Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872788u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872814u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872824u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872830u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887285Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872874u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872934u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887293Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873010u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873020u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887303Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873044u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887304Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887305Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873068u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887309Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873110u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887311Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873130u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887313Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873148u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873168u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873170u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873178u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873194u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887321Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887322Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873250u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873278u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887328Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887329Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873300u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887330Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873324u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887333Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873354u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887336Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887338Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873448u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873464u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887347Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873498u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873504u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887350Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887352Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887353Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873544u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873570u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873574u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873578u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873584u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873594u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887359Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873630u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873638u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873644u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873668u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887368Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873698u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887371Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873720u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887372Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887373Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873754u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873758u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887375Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873764u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887377Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887378Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873804u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873810u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873820u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873850u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873854u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873864u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887386Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873878u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873888u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873924u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887392Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873930u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887394Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873988u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873ED0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873ED8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FFCu, &recomp_unit_0027, "recomp_unit_0027");
}
} // namespace psprecomp
