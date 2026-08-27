#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0065[64] = {
    0x5294020106A55695ull, 0x9400908908240405ull, 0x8804440615551454ull, 0x044020C8C0A10500ull,
    0x4820808323028414ull, 0x0522A808CACA5408ull, 0x0086490120141092ull, 0x51542B209552A425ull,
    0x202A292544155866ull, 0x9080410D2444A100ull, 0x94A5529084800846ull, 0x051041454145412Aull,
    0x16A48A9454112010ull, 0x56A54A9201340104ull, 0x4010000141030212ull, 0xA042810002033440ull,
    0x494AA95200A01810ull, 0x658D428104002052ull, 0x508412A811021482ull, 0xC0400024554208A1ull,
    0x2804012040442102ull, 0x01254A8A0551152Aull, 0x555010411022A82Aull, 0x2482042200022808ull,
    0x88AA010102450002ull, 0xAA1140111416A88Aull, 0x80AA114002228001ull, 0x245450050108A000ull,
    0x112A821555150515ull, 0x200154A800008855ull, 0x408082D000001511ull, 0xA210000245440269ull,
    0x0134A91054114000ull, 0x552801141100A40Aull, 0x6140809A54020824ull, 0x0A2224A810892825ull,
    0x0809100204A10081ull, 0x440080A442A44001ull, 0x8902422150004202ull, 0x42222A0515500405ull,
    0x0AAA811020008555ull, 0x01110AA821550222ull, 0x020828021090A800ull, 0x80414AAA88282A88ull,
    0xA880208280409284ull, 0x09020812490082AAull, 0x00440821812AA400ull, 0x0415551551004105ull,
    0x8200040840924288ull, 0x0020925550454200ull, 0x4010400081108405ull, 0x2029080820495545ull,
    0x102A121400840884ull, 0x54A500001514A094ull, 0x5254882010AA9004ull, 0x55085412012544A0ull,
    0x02400000D2A80008ull, 0x0008048090249141ull, 0x02A0420400950108ull, 0x084A565081448089ull,
    0xA4549202A0442114ull, 0x9282441491524102ull, 0x022228A281525048ull, 0x4090880280800000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0065[64] = {
    1u, 23u, 37u, 56u, 69u, 84u, 104u, 118u, 142u, 164u, 179u, 198u, 216u, 235u, 255u, 265u,
    278u, 296u, 313u, 329u, 344u, 355u, 376u, 394u, 405u, 418u, 438u, 451u, 464u, 486u, 500u, 512u,
    527u, 542u, 558u, 574u, 592u, 603u, 616u, 629u, 646u, 663u, 680u, 691u, 710u, 724u, 739u, 752u,
    770u, 782u, 797u, 807u, 824u, 837u, 854u, 871u, 889u, 899u, 911u, 923u, 941u, 959u, 977u, 994u,
};
void recomp_unit_0065_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,16,6,29 fprs=12,13,20,14 gpr_occ=4850 fpr_occ=445 gpr_total=5878 fpr_total=502
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08908000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0065[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0065[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08908000;
    case 2u: goto L_08908008;
    case 3u: goto L_08908010;
    case 4u: goto L_0890801C;
    case 5u: goto L_08908024;
    case 6u: goto L_08908028;
    case 7u: goto L_08908030;
    case 8u: goto L_08908038;
    case 9u: goto L_08908040;
    case 10u: goto L_08908048;
    case 11u: goto L_08908054;
    case 12u: goto L_0890805C;
    case 13u: goto L_08908064;
    case 14u: goto L_08908068;
    case 15u: goto L_08908080;
    case 16u: goto L_089080A4;
    case 17u: goto L_089080C8;
    case 18u: goto L_089080D0;
    case 19u: goto L_089080DC;
    case 20u: goto L_089080E4;
    case 21u: goto L_089080F0;
    case 22u: goto L_089080F8;
    case 23u: goto L_08908100;
    case 24u: goto L_08908108;
    case 25u: goto L_08908128;
    case 26u: goto L_08908148;
    case 27u: goto L_08908154;
    case 28u: goto L_0890816C;
    case 29u: goto L_08908180;
    case 30u: goto L_0890818C;
    case 31u: goto L_0890819C;
    case 32u: goto L_089081B0;
    case 33u: goto L_089081BC;
    case 34u: goto L_089081E8;
    case 35u: goto L_089081F0;
    case 36u: goto L_089081FC;
    case 37u: goto L_08908208;
    case 38u: goto L_08908210;
    case 39u: goto L_08908218;
    case 40u: goto L_08908228;
    case 41u: goto L_08908230;
    case 42u: goto L_08908240;
    case 43u: goto L_08908248;
    case 44u: goto L_08908250;
    case 45u: goto L_08908258;
    case 46u: goto L_08908260;
    case 47u: goto L_08908268;
    case 48u: goto L_08908270;
    case 49u: goto L_08908284;
    case 50u: goto L_08908288;
    case 51u: goto L_089082A8;
    case 52u: goto L_089082B8;
    case 53u: goto L_089082C8;
    case 54u: goto L_089082EC;
    case 55u: goto L_089082FC;
    case 56u: goto L_08908320;
    case 57u: goto L_08908328;
    case 58u: goto L_08908340;
    case 59u: goto L_08908354;
    case 60u: goto L_0890835C;
    case 61u: goto L_08908378;
    case 62u: goto L_0890837C;
    case 63u: goto L_0890838C;
    case 64u: goto L_08908398;
    case 65u: goto L_0890839C;
    case 66u: goto L_089083B4;
    case 67u: goto L_089083D8;
    case 68u: goto L_089083E8;
    case 69u: goto L_08908408;
    case 70u: goto L_08908410;
    case 71u: goto L_08908428;
    case 72u: goto L_0890843C;
    case 73u: goto L_08908444;
    case 74u: goto L_08908460;
    case 75u: goto L_08908464;
    case 76u: goto L_08908474;
    case 77u: goto L_08908480;
    case 78u: goto L_08908484;
    case 79u: goto L_0890849C;
    case 80u: goto L_089084BC;
    case 81u: goto L_089084D4;
    case 82u: goto L_089084EC;
    case 83u: goto L_089084F8;
    case 84u: goto L_0890850C;
    case 85u: goto L_08908528;
    case 86u: goto L_08908530;
    case 87u: goto L_08908538;
    case 88u: goto L_08908544;
    case 89u: goto L_0890854C;
    case 90u: goto L_08908558;
    case 91u: goto L_0890855C;
    case 92u: goto L_08908564;
    case 93u: goto L_0890856C;
    case 94u: goto L_08908578;
    case 95u: goto L_0890857C;
    case 96u: goto L_0890858C;
    case 97u: goto L_089085AC;
    case 98u: goto L_089085B4;
    case 99u: goto L_089085BC;
    case 100u: goto L_089085C4;
    case 101u: goto L_089085D4;
    case 102u: goto L_089085E0;
    case 103u: goto L_089085E8;
    case 104u: goto L_08908604;
    case 105u: goto L_08908610;
    case 106u: goto L_0890861C;
    case 107u: goto L_08908630;
    case 108u: goto L_08908648;
    case 109u: goto L_08908650;
    case 110u: goto L_08908674;
    case 111u: goto L_08908680;
    case 112u: goto L_089086A0;
    case 113u: goto L_089086AC;
    case 114u: goto L_089086B8;
    case 115u: goto L_089086C4;
    case 116u: goto L_089086C8;
    case 117u: goto L_089086DC;
    case 118u: goto L_08908700;
    case 119u: goto L_08908708;
    case 120u: goto L_08908714;
    case 121u: goto L_08908728;
    case 122u: goto L_08908734;
    case 123u: goto L_0890873C;
    case 124u: goto L_08908744;
    case 125u: goto L_08908750;
    case 126u: goto L_08908758;
    case 127u: goto L_08908760;
    case 128u: goto L_08908768;
    case 129u: goto L_08908770;
    case 130u: goto L_0890877C;
    case 131u: goto L_08908794;
    case 132u: goto L_089087A0;
    case 133u: goto L_089087A4;
    case 134u: goto L_089087AC;
    case 135u: goto L_089087B4;
    case 136u: goto L_089087C8;
    case 137u: goto L_089087D0;
    case 138u: goto L_089087D8;
    case 139u: goto L_089087E0;
    case 140u: goto L_089087F0;
    case 141u: goto L_089087F8;
    case 142u: goto L_08908804;
    case 143u: goto L_08908808;
    case 144u: goto L_08908814;
    case 145u: goto L_08908818;
    case 146u: goto L_0890882C;
    case 147u: goto L_08908830;
    case 148u: goto L_08908838;
    case 149u: goto L_08908840;
    case 150u: goto L_08908848;
    case 151u: goto L_08908850;
    case 152u: goto L_08908868;
    case 153u: goto L_08908878;
    case 154u: goto L_08908880;
    case 155u: goto L_08908888;
    case 156u: goto L_08908894;
    case 157u: goto L_089088A0;
    case 158u: goto L_089088AC;
    case 159u: goto L_089088B4;
    case 160u: goto L_089088C4;
    case 161u: goto L_089088CC;
    case 162u: goto L_089088D4;
    case 163u: goto L_089088F4;
    case 164u: goto L_08908920;
    case 165u: goto L_08908934;
    case 166u: goto L_0890893C;
    case 167u: goto L_08908948;
    case 168u: goto L_08908958;
    case 169u: goto L_08908968;
    case 170u: goto L_08908974;
    case 171u: goto L_08908980;
    case 172u: goto L_08908988;
    case 173u: goto L_0890898C;
    case 174u: goto L_089089A0;
    case 175u: goto L_089089B8;
    case 176u: goto L_089089DC;
    case 177u: goto L_089089F0;
    case 178u: goto L_089089FC;
    case 179u: goto L_08908A04;
    case 180u: goto L_08908A08;
    case 181u: goto L_08908A18;
    case 182u: goto L_08908A2C;
    case 183u: goto L_08908A5C;
    case 184u: goto L_08908A68;
    case 185u: goto L_08908A7C;
    case 186u: goto L_08908A90;
    case 187u: goto L_08908A9C;
    case 188u: goto L_08908AA4;
    case 189u: goto L_08908AB0;
    case 190u: goto L_08908AB8;
    case 191u: goto L_08908AC0;
    case 192u: goto L_08908AC8;
    case 193u: goto L_08908AD4;
    case 194u: goto L_08908ADC;
    case 195u: goto L_08908AE8;
    case 196u: goto L_08908AF0;
    case 197u: goto L_08908AFC;
    case 198u: goto L_08908B04;
    case 199u: goto L_08908B0C;
    case 200u: goto L_08908B14;
    case 201u: goto L_08908B20;
    case 202u: goto L_08908B38;
    case 203u: goto L_08908B40;
    case 204u: goto L_08908B48;
    case 205u: goto L_08908B58;
    case 206u: goto L_08908B60;
    case 207u: goto L_08908B78;
    case 208u: goto L_08908B80;
    case 209u: goto L_08908B88;
    case 210u: goto L_08908B98;
    case 211u: goto L_08908BA0;
    case 212u: goto L_08908BB8;
    case 213u: goto L_08908BD0;
    case 214u: goto L_08908BE0;
    case 215u: goto L_08908BE8;
    case 216u: goto L_08908C10;
    case 217u: goto L_08908C34;
    case 218u: goto L_08908C40;
    case 219u: goto L_08908C50;
    case 220u: goto L_08908C68;
    case 221u: goto L_08908C70;
    case 222u: goto L_08908C78;
    case 223u: goto L_08908C88;
    case 224u: goto L_08908C90;
    case 225u: goto L_08908C9C;
    case 226u: goto L_08908CA4;
    case 227u: goto L_08908CAC;
    case 228u: goto L_08908CBC;
    case 229u: goto L_08908CC8;
    case 230u: goto L_08908CD4;
    case 231u: goto L_08908CDC;
    case 232u: goto L_08908CE4;
    case 233u: goto L_08908CE8;
    case 234u: goto L_08908CF0;
    case 235u: goto L_08908D08;
    case 236u: goto L_08908D20;
    case 237u: goto L_08908D48;
    case 238u: goto L_08908D50;
    case 239u: goto L_08908D54;
    case 240u: goto L_08908D60;
    case 241u: goto L_08908D84;
    case 242u: goto L_08908D90;
    case 243u: goto L_08908D9C;
    case 244u: goto L_08908DA4;
    case 245u: goto L_08908DAC;
    case 246u: goto L_08908DB8;
    case 247u: goto L_08908DC0;
    case 248u: goto L_08908DC8;
    case 249u: goto L_08908DD4;
    case 250u: goto L_08908DDC;
    case 251u: goto L_08908DE4;
    case 252u: goto L_08908DE8;
    case 253u: goto L_08908DF0;
    case 254u: goto L_08908DF8;
    case 255u: goto L_08908E04;
    case 256u: goto L_08908E10;
    case 257u: goto L_08908E24;
    case 258u: goto L_08908E40;
    case 259u: goto L_08908E44;
    case 260u: goto L_08908E60;
    case 261u: goto L_08908E78;
    case 262u: goto L_08908E80;
    case 263u: goto L_08908ED0;
    case 264u: goto L_08908EF8;
    case 265u: goto L_08908F18;
    case 266u: goto L_08908F28;
    case 267u: goto L_08908F30;
    case 268u: goto L_08908F34;
    case 269u: goto L_08908F40;
    case 270u: goto L_08908F44;
    case 271u: goto L_08908F64;
    case 272u: goto L_08908FA0;
    case 273u: goto L_08908FBC;
    case 274u: goto L_08908FC4;
    case 275u: goto L_08908FD8;
    case 276u: goto L_08908FF4;
    case 277u: goto L_08908FFC;
    case 278u: goto L_08909010;
    case 279u: goto L_0890902C;
    case 280u: goto L_08909030;
    case 281u: goto L_08909054;
    case 282u: goto L_0890905C;
    case 283u: goto L_08909084;
    case 284u: goto L_08909090;
    case 285u: goto L_08909098;
    case 286u: goto L_089090A0;
    case 287u: goto L_089090AC;
    case 288u: goto L_089090B4;
    case 289u: goto L_089090BC;
    case 290u: goto L_089090C4;
    case 291u: goto L_089090CC;
    case 292u: goto L_089090D8;
    case 293u: goto L_089090E0;
    case 294u: goto L_089090EC;
    case 295u: goto L_089090F8;
    case 296u: goto L_08909104;
    case 297u: goto L_08909110;
    case 298u: goto L_08909118;
    case 299u: goto L_08909134;
    case 300u: goto L_08909168;
    case 301u: goto L_08909180;
    case 302u: goto L_0890919C;
    case 303u: goto L_089091A4;
    case 304u: goto L_089091B8;
    case 305u: goto L_089091C0;
    case 306u: goto L_089091C8;
    case 307u: goto L_089091CC;
    case 308u: goto L_089091DC;
    case 309u: goto L_089091E0;
    case 310u: goto L_089091E8;
    case 311u: goto L_089091F4;
    case 312u: goto L_089091F8;
    case 313u: goto L_08909204;
    case 314u: goto L_0890921C;
    case 315u: goto L_08909228;
    case 316u: goto L_08909230;
    case 317u: goto L_08909244;
    case 318u: goto L_08909260;
    case 319u: goto L_08909270;
    case 320u: goto L_0890928C;
    case 321u: goto L_08909294;
    case 322u: goto L_0890929C;
    case 323u: goto L_089092A4;
    case 324u: goto L_089092B0;
    case 325u: goto L_089092C8;
    case 326u: goto L_089092DC;
    case 327u: goto L_089092F0;
    case 328u: goto L_089092F8;
    case 329u: goto L_08909300;
    case 330u: goto L_08909314;
    case 331u: goto L_0890931C;
    case 332u: goto L_0890932C;
    case 333u: goto L_08909344;
    case 334u: goto L_08909358;
    case 335u: goto L_08909360;
    case 336u: goto L_08909368;
    case 337u: goto L_08909370;
    case 338u: goto L_08909378;
    case 339u: goto L_08909388;
    case 340u: goto L_08909394;
    case 341u: goto L_089093D8;
    case 342u: goto L_089093F8;
    case 343u: goto L_089093FC;
    case 344u: goto L_08909404;
    case 345u: goto L_08909420;
    case 346u: goto L_08909434;
    case 347u: goto L_08909448;
    case 348u: goto L_08909458;
    case 349u: goto L_08909478;
    case 350u: goto L_08909494;
    case 351u: goto L_089094A0;
    case 352u: goto L_089094C8;
    case 353u: goto L_089094EC;
    case 354u: goto L_089094F4;
    case 355u: goto L_08909504;
    case 356u: goto L_0890950C;
    case 357u: goto L_08909514;
    case 358u: goto L_08909520;
    case 359u: goto L_08909528;
    case 360u: goto L_08909530;
    case 361u: goto L_08909540;
    case 362u: goto L_08909550;
    case 363u: goto L_08909558;
    case 364u: goto L_08909560;
    case 365u: goto L_08909568;
    case 366u: goto L_08909584;
    case 367u: goto L_0890958C;
    case 368u: goto L_0890959C;
    case 369u: goto L_089095A4;
    case 370u: goto L_089095AC;
    case 371u: goto L_089095B8;
    case 372u: goto L_089095C0;
    case 373u: goto L_089095C8;
    case 374u: goto L_089095D4;
    case 375u: goto L_089095E0;
    case 376u: goto L_08909604;
    case 377u: goto L_0890960C;
    case 378u: goto L_08909614;
    case 379u: goto L_0890962C;
    case 380u: goto L_08909634;
    case 381u: goto L_0890963C;
    case 382u: goto L_08909644;
    case 383u: goto L_08909654;
    case 384u: goto L_08909670;
    case 385u: goto L_08909680;
    case 386u: goto L_08909698;
    case 387u: goto L_089096B0;
    case 388u: goto L_089096D0;
    case 389u: goto L_089096D8;
    case 390u: goto L_089096E0;
    case 391u: goto L_089096E8;
    case 392u: goto L_089096F0;
    case 393u: goto L_089096F8;
    case 394u: goto L_0890970C;
    case 395u: goto L_0890972C;
    case 396u: goto L_08909734;
    case 397u: goto L_08909744;
    case 398u: goto L_08909784;
    case 399u: goto L_08909794;
    case 400u: goto L_089097A8;
    case 401u: goto L_089097C4;
    case 402u: goto L_089097DC;
    case 403u: goto L_089097E8;
    case 404u: goto L_089097F4;
    case 405u: goto L_08909804;
    case 406u: goto L_08909840;
    case 407u: goto L_08909848;
    case 408u: goto L_08909858;
    case 409u: goto L_08909864;
    case 410u: goto L_08909880;
    case 411u: goto L_089098A0;
    case 412u: goto L_089098C4;
    case 413u: goto L_089098CC;
    case 414u: goto L_089098D4;
    case 415u: goto L_089098DC;
    case 416u: goto L_089098EC;
    case 417u: goto L_089098FC;
    case 418u: goto L_08909904;
    case 419u: goto L_0890990C;
    case 420u: goto L_0890991C;
    case 421u: goto L_0890992C;
    case 422u: goto L_08909934;
    case 423u: goto L_0890993C;
    case 424u: goto L_08909944;
    case 425u: goto L_08909948;
    case 426u: goto L_08909950;
    case 427u: goto L_08909968;
    case 428u: goto L_08909970;
    case 429u: goto L_08909980;
    case 430u: goto L_08909990;
    case 431u: goto L_089099B8;
    case 432u: goto L_089099C0;
    case 433u: goto L_089099D0;
    case 434u: goto L_089099E4;
    case 435u: goto L_089099EC;
    case 436u: goto L_089099F4;
    case 437u: goto L_089099FC;
    case 438u: goto L_08909A00;
    case 439u: goto L_08909A3C;
    case 440u: goto L_08909A44;
    case 441u: goto L_08909A54;
    case 442u: goto L_08909A64;
    case 443u: goto L_08909A98;
    case 444u: goto L_08909AA0;
    case 445u: goto L_08909AB0;
    case 446u: goto L_08909AC4;
    case 447u: goto L_08909ACC;
    case 448u: goto L_08909AD4;
    case 449u: goto L_08909ADC;
    case 450u: goto L_08909AFC;
    case 451u: goto L_08909B34;
    case 452u: goto L_08909B3C;
    case 453u: goto L_08909B4C;
    case 454u: goto L_08909B60;
    case 455u: goto L_08909B80;
    case 456u: goto L_08909B88;
    case 457u: goto L_08909BB0;
    case 458u: goto L_08909BB8;
    case 459u: goto L_08909BC8;
    case 460u: goto L_08909BD0;
    case 461u: goto L_08909BD8;
    case 462u: goto L_08909BE8;
    case 463u: goto L_08909BF4;
    case 464u: goto L_08909C00;
    case 465u: goto L_08909C08;
    case 466u: goto L_08909C10;
    case 467u: goto L_08909C20;
    case 468u: goto L_08909C28;
    case 469u: goto L_08909C40;
    case 470u: goto L_08909C48;
    case 471u: goto L_08909C50;
    case 472u: goto L_08909C60;
    case 473u: goto L_08909C68;
    case 474u: goto L_08909C70;
    case 475u: goto L_08909C78;
    case 476u: goto L_08909C80;
    case 477u: goto L_08909C88;
    case 478u: goto L_08909C90;
    case 479u: goto L_08909CA4;
    case 480u: goto L_08909CBC;
    case 481u: goto L_08909CC4;
    case 482u: goto L_08909CCC;
    case 483u: goto L_08909CD4;
    case 484u: goto L_08909CE0;
    case 485u: goto L_08909CF0;
    case 486u: goto L_08909D00;
    case 487u: goto L_08909D08;
    case 488u: goto L_08909D10;
    case 489u: goto L_08909D18;
    case 490u: goto L_08909D2C;
    case 491u: goto L_08909D3C;
    case 492u: goto L_08909D8C;
    case 493u: goto L_08909D94;
    case 494u: goto L_08909D9C;
    case 495u: goto L_08909DA8;
    case 496u: goto L_08909DB0;
    case 497u: goto L_08909DB8;
    case 498u: goto L_08909DC0;
    case 499u: goto L_08909DF4;
    case 500u: goto L_08909E00;
    case 501u: goto L_08909E10;
    case 502u: goto L_08909E20;
    case 503u: goto L_08909E28;
    case 504u: goto L_08909E30;
    case 505u: goto L_08909E90;
    case 506u: goto L_08909E98;
    case 507u: goto L_08909E9C;
    case 508u: goto L_08909EA4;
    case 509u: goto L_08909EBC;
    case 510u: goto L_08909EDC;
    case 511u: goto L_08909EF8;
    case 512u: goto L_08909F00;
    case 513u: goto L_08909F0C;
    case 514u: goto L_08909F14;
    case 515u: goto L_08909F18;
    case 516u: goto L_08909F24;
    case 517u: goto L_08909F48;
    case 518u: goto L_08909F58;
    case 519u: goto L_08909F60;
    case 520u: goto L_08909F68;
    case 521u: goto L_08909F78;
    case 522u: goto L_08909F84;
    case 523u: goto L_08909FD0;
    case 524u: goto L_08909FE4;
    case 525u: goto L_08909FF4;
    case 526u: goto L_08909FFC;
    case 527u: goto L_0890A038;
    case 528u: goto L_0890A040;
    case 529u: goto L_0890A050;
    case 530u: goto L_0890A068;
    case 531u: goto L_0890A070;
    case 532u: goto L_0890A078;
    case 533u: goto L_0890A090;
    case 534u: goto L_0890A0A0;
    case 535u: goto L_0890A0AC;
    case 536u: goto L_0890A0B4;
    case 537u: goto L_0890A0BC;
    case 538u: goto L_0890A0C8;
    case 539u: goto L_0890A0D0;
    case 540u: goto L_0890A0D4;
    case 541u: goto L_0890A0E0;
    case 542u: goto L_0890A104;
    case 543u: goto L_0890A10C;
    case 544u: goto L_0890A128;
    case 545u: goto L_0890A134;
    case 546u: goto L_0890A13C;
    case 547u: goto L_0890A160;
    case 548u: goto L_0890A170;
    case 549u: goto L_0890A188;
    case 550u: goto L_0890A190;
    case 551u: goto L_0890A1A0;
    case 552u: goto L_0890A1CC;
    case 553u: goto L_0890A1D4;
    case 554u: goto L_0890A1E0;
    case 555u: goto L_0890A1E8;
    case 556u: goto L_0890A1F0;
    case 557u: goto L_0890A1F8;
    case 558u: goto L_0890A208;
    case 559u: goto L_0890A214;
    case 560u: goto L_0890A22C;
    case 561u: goto L_0890A244;
    case 562u: goto L_0890A268;
    case 563u: goto L_0890A270;
    case 564u: goto L_0890A278;
    case 565u: goto L_0890A284;
    case 566u: goto L_0890A28C;
    case 567u: goto L_0890A290;
    case 568u: goto L_0890A29C;
    case 569u: goto L_0890A2BC;
    case 570u: goto L_0890A2D8;
    case 571u: goto L_0890A2E0;
    case 572u: goto L_0890A2F4;
    case 573u: goto L_0890A2F8;
    case 574u: goto L_0890A300;
    case 575u: goto L_0890A308;
    case 576u: goto L_0890A314;
    case 577u: goto L_0890A32C;
    case 578u: goto L_0890A334;
    case 579u: goto L_0890A340;
    case 580u: goto L_0890A34C;
    case 581u: goto L_0890A35C;
    case 582u: goto L_0890A370;
    case 583u: goto L_0890A38C;
    case 584u: goto L_0890A394;
    case 585u: goto L_0890A39C;
    case 586u: goto L_0890A3A8;
    case 587u: goto L_0890A3B4;
    case 588u: goto L_0890A3C4;
    case 589u: goto L_0890A3D4;
    case 590u: goto L_0890A3E4;
    case 591u: goto L_0890A3EC;
    case 592u: goto L_0890A400;
    case 593u: goto L_0890A41C;
    case 594u: goto L_0890A440;
    case 595u: goto L_0890A454;
    case 596u: goto L_0890A45C;
    case 597u: goto L_0890A468;
    case 598u: goto L_0890A484;
    case 599u: goto L_0890A4B0;
    case 600u: goto L_0890A4C0;
    case 601u: goto L_0890A4CC;
    case 602u: goto L_0890A4EC;
    case 603u: goto L_0890A500;
    case 604u: goto L_0890A538;
    case 605u: goto L_0890A548;
    case 606u: goto L_0890A554;
    case 607u: goto L_0890A55C;
    case 608u: goto L_0890A564;
    case 609u: goto L_0890A578;
    case 610u: goto L_0890A588;
    case 611u: goto L_0890A594;
    case 612u: goto L_0890A59C;
    case 613u: goto L_0890A5BC;
    case 614u: goto L_0890A5E8;
    case 615u: goto L_0890A5F8;
    case 616u: goto L_0890A604;
    case 617u: goto L_0890A624;
    case 618u: goto L_0890A638;
    case 619u: goto L_0890A670;
    case 620u: goto L_0890A678;
    case 621u: goto L_0890A680;
    case 622u: goto L_0890A694;
    case 623u: goto L_0890A6A4;
    case 624u: goto L_0890A6B8;
    case 625u: goto L_0890A6C4;
    case 626u: goto L_0890A6E0;
    case 627u: goto L_0890A6EC;
    case 628u: goto L_0890A6FC;
    case 629u: goto L_0890A700;
    case 630u: goto L_0890A708;
    case 631u: goto L_0890A728;
    case 632u: goto L_0890A750;
    case 633u: goto L_0890A758;
    case 634u: goto L_0890A760;
    case 635u: goto L_0890A768;
    case 636u: goto L_0890A770;
    case 637u: goto L_0890A780;
    case 638u: goto L_0890A788;
    case 639u: goto L_0890A7A4;
    case 640u: goto L_0890A7AC;
    case 641u: goto L_0890A7B4;
    case 642u: goto L_0890A7C4;
    case 643u: goto L_0890A7D4;
    case 644u: goto L_0890A7E4;
    case 645u: goto L_0890A7F8;
    case 646u: goto L_0890A800;
    case 647u: goto L_0890A808;
    case 648u: goto L_0890A810;
    case 649u: goto L_0890A818;
    case 650u: goto L_0890A820;
    case 651u: goto L_0890A828;
    case 652u: goto L_0890A83C;
    case 653u: goto L_0890A874;
    case 654u: goto L_0890A890;
    case 655u: goto L_0890A8A0;
    case 656u: goto L_0890A8BC;
    case 657u: goto L_0890A8C4;
    case 658u: goto L_0890A8CC;
    case 659u: goto L_0890A8D4;
    case 660u: goto L_0890A8DC;
    case 661u: goto L_0890A8E4;
    case 662u: goto L_0890A8EC;
    case 663u: goto L_0890A904;
    case 664u: goto L_0890A914;
    case 665u: goto L_0890A924;
    case 666u: goto L_0890A940;
    case 667u: goto L_0890A948;
    case 668u: goto L_0890A950;
    case 669u: goto L_0890A958;
    case 670u: goto L_0890A960;
    case 671u: goto L_0890A974;
    case 672u: goto L_0890A98C;
    case 673u: goto L_0890A994;
    case 674u: goto L_0890A99C;
    case 675u: goto L_0890A9A4;
    case 676u: goto L_0890A9AC;
    case 677u: goto L_0890A9C0;
    case 678u: goto L_0890A9D0;
    case 679u: goto L_0890A9E0;
    case 680u: goto L_0890AA2C;
    case 681u: goto L_0890AA34;
    case 682u: goto L_0890AA3C;
    case 683u: goto L_0890AA50;
    case 684u: goto L_0890AA5C;
    case 685u: goto L_0890AA70;
    case 686u: goto L_0890AA84;
    case 687u: goto L_0890AAAC;
    case 688u: goto L_0890AAB4;
    case 689u: goto L_0890AACC;
    case 690u: goto L_0890AAE4;
    case 691u: goto L_0890AB0C;
    case 692u: goto L_0890AB1C;
    case 693u: goto L_0890AB24;
    case 694u: goto L_0890AB2C;
    case 695u: goto L_0890AB34;
    case 696u: goto L_0890AB4C;
    case 697u: goto L_0890AB54;
    case 698u: goto L_0890AB6C;
    case 699u: goto L_0890AB7C;
    case 700u: goto L_0890AB84;
    case 701u: goto L_0890AB8C;
    case 702u: goto L_0890AB94;
    case 703u: goto L_0890AB9C;
    case 704u: goto L_0890ABA4;
    case 705u: goto L_0890ABAC;
    case 706u: goto L_0890ABB8;
    case 707u: goto L_0890ABC0;
    case 708u: goto L_0890ABD8;
    case 709u: goto L_0890ABFC;
    case 710u: goto L_0890AC08;
    case 711u: goto L_0890AC1C;
    case 712u: goto L_0890AC24;
    case 713u: goto L_0890AC30;
    case 714u: goto L_0890AC3C;
    case 715u: goto L_0890AC58;
    case 716u: goto L_0890AC7C;
    case 717u: goto L_0890AC84;
    case 718u: goto L_0890AC9C;
    case 719u: goto L_0890ACB4;
    case 720u: goto L_0890ACDC;
    case 721u: goto L_0890ACEC;
    case 722u: goto L_0890ACF4;
    case 723u: goto L_0890ACFC;
    case 724u: goto L_0890AD04;
    case 725u: goto L_0890AD0C;
    case 726u: goto L_0890AD14;
    case 727u: goto L_0890AD1C;
    case 728u: goto L_0890AD24;
    case 729u: goto L_0890AD3C;
    case 730u: goto L_0890AD60;
    case 731u: goto L_0890AD6C;
    case 732u: goto L_0890AD78;
    case 733u: goto L_0890AD84;
    case 734u: goto L_0890AD90;
    case 735u: goto L_0890ADAC;
    case 736u: goto L_0890ADC4;
    case 737u: goto L_0890ADE0;
    case 738u: goto L_0890ADEC;
    case 739u: goto L_0890AE28;
    case 740u: goto L_0890AE34;
    case 741u: goto L_0890AE3C;
    case 742u: goto L_0890AE44;
    case 743u: goto L_0890AE4C;
    case 744u: goto L_0890AE54;
    case 745u: goto L_0890AE60;
    case 746u: goto L_0890AE7C;
    case 747u: goto L_0890AE80;
    case 748u: goto L_0890AE94;
    case 749u: goto L_0890AEAC;
    case 750u: goto L_0890AEC8;
    case 751u: goto L_0890AED8;
    case 752u: goto L_0890AF00;
    case 753u: goto L_0890AF08;
    case 754u: goto L_0890AF20;
    case 755u: goto L_0890AF38;
    case 756u: goto L_0890AF60;
    case 757u: goto L_0890AF70;
    case 758u: goto L_0890AF78;
    case 759u: goto L_0890AF80;
    case 760u: goto L_0890AF88;
    case 761u: goto L_0890AF90;
    case 762u: goto L_0890AFA0;
    case 763u: goto L_0890AFA8;
    case 764u: goto L_0890AFB0;
    case 765u: goto L_0890AFB8;
    case 766u: goto L_0890AFC0;
    case 767u: goto L_0890AFC8;
    case 768u: goto L_0890AFD0;
    case 769u: goto L_0890AFE8;
    case 770u: goto L_0890B00C;
    case 771u: goto L_0890B01C;
    case 772u: goto L_0890B024;
    case 773u: goto L_0890B038;
    case 774u: goto L_0890B044;
    case 775u: goto L_0890B050;
    case 776u: goto L_0890B05C;
    case 777u: goto L_0890B078;
    case 778u: goto L_0890B08C;
    case 779u: goto L_0890B0A8;
    case 780u: goto L_0890B0E4;
    case 781u: goto L_0890B0FC;
    case 782u: goto L_0890B124;
    case 783u: goto L_0890B138;
    case 784u: goto L_0890B140;
    case 785u: goto L_0890B148;
    case 786u: goto L_0890B158;
    case 787u: goto L_0890B170;
    case 788u: goto L_0890B178;
    case 789u: goto L_0890B180;
    case 790u: goto L_0890B188;
    case 791u: goto L_0890B190;
    case 792u: goto L_0890B198;
    case 793u: goto L_0890B1A4;
    case 794u: goto L_0890B1B0;
    case 795u: goto L_0890B1BC;
    case 796u: goto L_0890B1D4;
    case 797u: goto L_0890B200;
    case 798u: goto L_0890B208;
    case 799u: goto L_0890B228;
    case 800u: goto L_0890B23C;
    case 801u: goto L_0890B250;
    case 802u: goto L_0890B260;
    case 803u: goto L_0890B27C;
    case 804u: goto L_0890B2B8;
    case 805u: goto L_0890B2D0;
    case 806u: goto L_0890B2F8;
    case 807u: goto L_0890B300;
    case 808u: goto L_0890B308;
    case 809u: goto L_0890B318;
    case 810u: goto L_0890B320;
    case 811u: goto L_0890B328;
    case 812u: goto L_0890B330;
    case 813u: goto L_0890B338;
    case 814u: goto L_0890B340;
    case 815u: goto L_0890B34C;
    case 816u: goto L_0890B358;
    case 817u: goto L_0890B374;
    case 818u: goto L_0890B38C;
    case 819u: goto L_0890B3AC;
    case 820u: goto L_0890B3C0;
    case 821u: goto L_0890B3CC;
    case 822u: goto L_0890B3D4;
    case 823u: goto L_0890B3F4;
    case 824u: goto L_0890B408;
    case 825u: goto L_0890B41C;
    case 826u: goto L_0890B42C;
    case 827u: goto L_0890B448;
    case 828u: goto L_0890B45C;
    case 829u: goto L_0890B488;
    case 830u: goto L_0890B490;
    case 831u: goto L_0890B4A4;
    case 832u: goto L_0890B4B0;
    case 833u: goto L_0890B4C4;
    case 834u: goto L_0890B4CC;
    case 835u: goto L_0890B4D4;
    case 836u: goto L_0890B4F0;
    case 837u: goto L_0890B508;
    case 838u: goto L_0890B510;
    case 839u: goto L_0890B51C;
    case 840u: goto L_0890B534;
    case 841u: goto L_0890B53C;
    case 842u: goto L_0890B548;
    case 843u: goto L_0890B550;
    case 844u: goto L_0890B560;
    case 845u: goto L_0890B568;
    case 846u: goto L_0890B570;
    case 847u: goto L_0890B5C0;
    case 848u: goto L_0890B5C8;
    case 849u: goto L_0890B5D4;
    case 850u: goto L_0890B5DC;
    case 851u: goto L_0890B5E8;
    case 852u: goto L_0890B5F0;
    case 853u: goto L_0890B5F8;
    case 854u: goto L_0890B608;
    case 855u: goto L_0890B630;
    case 856u: goto L_0890B63C;
    case 857u: goto L_0890B644;
    case 858u: goto L_0890B64C;
    case 859u: goto L_0890B654;
    case 860u: goto L_0890B65C;
    case 861u: goto L_0890B670;
    case 862u: goto L_0890B694;
    case 863u: goto L_0890B6AC;
    case 864u: goto L_0890B6BC;
    case 865u: goto L_0890B6C8;
    case 866u: goto L_0890B6D0;
    case 867u: goto L_0890B6D8;
    case 868u: goto L_0890B6E4;
    case 869u: goto L_0890B6F0;
    case 870u: goto L_0890B6F8;
    case 871u: goto L_0890B714;
    case 872u: goto L_0890B71C;
    case 873u: goto L_0890B728;
    case 874u: goto L_0890B738;
    case 875u: goto L_0890B740;
    case 876u: goto L_0890B748;
    case 877u: goto L_0890B754;
    case 878u: goto L_0890B760;
    case 879u: goto L_0890B784;
    case 880u: goto L_0890B790;
    case 881u: goto L_0890B7A8;
    case 882u: goto L_0890B7B0;
    case 883u: goto L_0890B7B8;
    case 884u: goto L_0890B7CC;
    case 885u: goto L_0890B7E0;
    case 886u: goto L_0890B7E8;
    case 887u: goto L_0890B7F0;
    case 888u: goto L_0890B7F8;
    case 889u: goto L_0890B80C;
    case 890u: goto L_0890B84C;
    case 891u: goto L_0890B854;
    case 892u: goto L_0890B85C;
    case 893u: goto L_0890B864;
    case 894u: goto L_0890B870;
    case 895u: goto L_0890B878;
    case 896u: goto L_0890B87C;
    case 897u: goto L_0890B8D8;
    case 898u: goto L_0890B8E4;
    case 899u: goto L_0890B900;
    case 900u: goto L_0890B918;
    case 901u: goto L_0890B920;
    case 902u: goto L_0890B930;
    case 903u: goto L_0890B93C;
    case 904u: goto L_0890B948;
    case 905u: goto L_0890B954;
    case 906u: goto L_0890B970;
    case 907u: goto L_0890B97C;
    case 908u: goto L_0890B99C;
    case 909u: goto L_0890B9A8;
    case 910u: goto L_0890B9CC;
    case 911u: goto L_0890BA0C;
    case 912u: goto L_0890BA20;
    case 913u: goto L_0890BA40;
    case 914u: goto L_0890BA48;
    case 915u: goto L_0890BA50;
    case 916u: goto L_0890BA5C;
    case 917u: goto L_0890BA88;
    case 918u: goto L_0890BAA4;
    case 919u: goto L_0890BAB8;
    case 920u: goto L_0890BAD4;
    case 921u: goto L_0890BADC;
    case 922u: goto L_0890BAE4;
    case 923u: goto L_0890BB00;
    case 924u: goto L_0890BB0C;
    case 925u: goto L_0890BB1C;
    case 926u: goto L_0890BB3C;
    case 927u: goto L_0890BB48;
    case 928u: goto L_0890BB58;
    case 929u: goto L_0890BB60;
    case 930u: goto L_0890BB7C;
    case 931u: goto L_0890BB90;
    case 932u: goto L_0890BB98;
    case 933u: goto L_0890BBA4;
    case 934u: goto L_0890BBA8;
    case 935u: goto L_0890BBB0;
    case 936u: goto L_0890BBB8;
    case 937u: goto L_0890BBC4;
    case 938u: goto L_0890BBCC;
    case 939u: goto L_0890BBD8;
    case 940u: goto L_0890BBEC;
    case 941u: goto L_0890BC08;
    case 942u: goto L_0890BC10;
    case 943u: goto L_0890BC20;
    case 944u: goto L_0890BC34;
    case 945u: goto L_0890BC48;
    case 946u: goto L_0890BC58;
    case 947u: goto L_0890BC74;
    case 948u: goto L_0890BC7C;
    case 949u: goto L_0890BC84;
    case 950u: goto L_0890BCA4;
    case 951u: goto L_0890BCB0;
    case 952u: goto L_0890BCBC;
    case 953u: goto L_0890BCC8;
    case 954u: goto L_0890BCD0;
    case 955u: goto L_0890BCD8;
    case 956u: goto L_0890BCE8;
    case 957u: goto L_0890BCF4;
    case 958u: goto L_0890BCFC;
    case 959u: goto L_0890BD04;
    case 960u: goto L_0890BD20;
    case 961u: goto L_0890BD38;
    case 962u: goto L_0890BD44;
    case 963u: goto L_0890BD50;
    case 964u: goto L_0890BD58;
    case 965u: goto L_0890BD60;
    case 966u: goto L_0890BD70;
    case 967u: goto L_0890BD7C;
    case 968u: goto L_0890BD88;
    case 969u: goto L_0890BD90;
    case 970u: goto L_0890BDA8;
    case 971u: goto L_0890BDB8;
    case 972u: goto L_0890BDC4;
    case 973u: goto L_0890BDDC;
    case 974u: goto L_0890BDE4;
    case 975u: goto L_0890BDF0;
    case 976u: goto L_0890BDFC;
    case 977u: goto L_0890BE0C;
    case 978u: goto L_0890BE18;
    case 979u: goto L_0890BE30;
    case 980u: goto L_0890BE38;
    case 981u: goto L_0890BE44;
    case 982u: goto L_0890BE50;
    case 983u: goto L_0890BE58;
    case 984u: goto L_0890BE60;
    case 985u: goto L_0890BE7C;
    case 986u: goto L_0890BE84;
    case 987u: goto L_0890BE94;
    case 988u: goto L_0890BE9C;
    case 989u: goto L_0890BEAC;
    case 990u: goto L_0890BEB4;
    case 991u: goto L_0890BEC4;
    case 992u: goto L_0890BED4;
    case 993u: goto L_0890BEE4;
    case 994u: goto L_0890BF5C;
    case 995u: goto L_0890BF7C;
    case 996u: goto L_0890BF84;
    case 997u: goto L_0890BFAC;
    case 998u: goto L_0890BFBC;
    case 999u: goto L_0890BFD0;
    case 1000u: goto L_0890BFDC;
    case 1001u: goto L_0890BFF8;
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
L_08908000:
    aot_gpr_31 = (0x08908008u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(772)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 180u, 0x08945288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908008u) goto L_08908008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908008:
    aot_gpr_31 = (0x08908010u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908010u) goto L_08908010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908010:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(772)));
    aot_gpr_31 = (0x0890801Cu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890801Cu) goto L_0890801C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890801C:
    aot_gpr_31 = (0x08908024u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908024u) goto L_08908024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908024:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(772), 0u);
    goto L_08908028;
L_08908028:
    aot_gpr_31 = (0x08908030u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908030u) goto L_08908030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08908068;
      }
      goto L_08908038;
    }
L_08908038:
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    aot_gpr_4 = (0u | 362u);
      if (branch_taken) {
          goto L_08908048;
      }
      goto L_08908040;
    }
L_08908040:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_08908068;
      }
      goto L_08908048;
    }
L_08908048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3240)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908068;
      }
      goto L_08908054;
    }
L_08908054:
    aot_gpr_31 = (0x0890805Cu);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890805Cu) goto L_0890805C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890805C:
    aot_gpr_31 = (0x08908064u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908064u) goto L_08908064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908064:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3240), 0u);
    goto L_08908068;
L_08908068:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908080:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08908154;
      }
      goto L_089080A4;
    }
L_089080A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089080DC;
      }
      goto L_089080C8;
    }
L_089080C8:
    aot_gpr_31 = (0x089080D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089080D0u) goto L_089080D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089080D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x089080DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089080DCu) goto L_089080DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089080DC:
    aot_gpr_31 = (0x089080E4u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(aot_gpr_16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089080E4u) goto L_089080E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089080E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08908108;
      }
      goto L_089080F0;
    }
L_089080F0:
    aot_gpr_31 = (0x089080F8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089080F8u) goto L_089080F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089080F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08908108;
      }
      goto L_08908100;
    }
L_08908100:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08908108;
L_08908108:
    aot_gpr_4 = (aot_gpr_16 << 5u);
    aot_gpr_5 = (aot_gpr_16 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908154;
      }
      goto L_08908128;
    }
L_08908128:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08908148u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908148u) goto L_08908148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908148:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08908154u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908154u) goto L_08908154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908154:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890816C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08908180u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_089082A8;
L_08908180:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890818Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08908080;
L_0890818C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890819C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1680), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089081B0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1684), aot_gpr_6);
    goto L_089081BC;
L_089081B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089081BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1680)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 48u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08908210;
      }
      goto L_089081E8;
    }
L_089081E8:
    aot_gpr_31 = (0x089081F0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089081F0u) goto L_089081F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089081F0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x089081FCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1680)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089081FCu) goto L_089081FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089081FC:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08908218;
      }
      goto L_08908208;
    }
L_08908208:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908228;
      }
      goto L_08908210;
    }
L_08908210:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908288;
      }
      goto L_08908218;
    }
L_08908218:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08908228u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908228u) goto L_08908228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908228:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08908240;
      }
      goto L_08908230;
    }
L_08908230:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08908240u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908240u) goto L_08908240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908240:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08908258;
      }
      goto L_08908248;
    }
L_08908248:
    aot_gpr_31 = (0x08908250u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908250u) goto L_08908250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08908288;
      }
      goto L_08908258;
    }
L_08908258:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08908270;
      }
      goto L_08908260;
    }
L_08908260:
    aot_gpr_31 = (0x08908268u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908268u) goto L_08908268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08908288;
      }
      goto L_08908270;
    }
L_08908270:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1680)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1684)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08908284u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908284u) goto L_08908284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908284:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1680), ctx.gpr[20]);
    goto L_08908288;
L_08908288:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089082A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089082B8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089082B8u) goto L_089082B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089082B8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089082C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x089082ECu);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_089082A8;
L_089082EC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 << 5u);
      if (branch_taken) {
          goto L_0890839C;
      }
      goto L_089082FC;
    }
L_089082FC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < 40 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_0890835C;
      }
      goto L_08908320;
    }
L_08908320:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) <= 0;
    aot_gpr_5 = (2234u << 16u);
      if (branch_taken) {
          goto L_0890835C;
      }
      goto L_08908328;
    }
L_08908328:
    aot_gpr_4 = (aot_gpr_16 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(13440));
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_0890835C;
      }
      goto L_08908340;
    }
L_08908340:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_08908354;
    }
    goto L_08908354;
L_08908354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_16);
      if (branch_taken) {
          goto L_0890837C;
      }
      goto L_0890835C;
    }
L_0890835C:
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-31073));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08908378;
    }
    goto L_08908378;
L_08908378:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_0890837C;
L_0890837C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0890839C;
      }
      goto L_0890838C;
    }
L_0890838C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0890839C;
      }
      goto L_08908398;
    }
L_08908398:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_0890839C;
L_0890839C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089083B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x089083D8u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_089082A8;
L_089083D8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08908484;
      }
      goto L_089083E8;
    }
L_089083E8:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 40 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08908444;
      }
      goto L_08908408;
    }
L_08908408:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) <= 0;
    aot_gpr_5 = (2234u << 16u);
      if (branch_taken) {
          goto L_08908444;
      }
      goto L_08908410;
    }
L_08908410:
    aot_gpr_4 = (aot_gpr_16 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(13440));
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08908444;
      }
      goto L_08908428;
    }
L_08908428:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_0890843C;
    }
    goto L_0890843C;
L_0890843C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_16);
      if (branch_taken) {
          goto L_08908464;
      }
      goto L_08908444;
    }
L_08908444:
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-31073));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08908460;
    }
    goto L_08908460;
L_08908460:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08908464;
L_08908464:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908484;
      }
      goto L_08908474;
    }
L_08908474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08908484;
      }
      goto L_08908480;
    }
L_08908480:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_08908484;
L_08908484:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_0890849C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089084BCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089084BCu) goto L_089084BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089084BC:
    aot_gpr_4 = (ctx.gpr[17] << 5u);
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x089084D4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 148u, 0x08A40C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089084D4u) goto L_089084D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089084D4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089084BC;
      }
      goto L_089084EC;
    }
L_089084EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089084F8u);
    aot_gpr_5 = (0u | 0u);
    goto L_0890816C;
L_089084F8:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890850C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08908528u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908528u) goto L_08908528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1540)));
      if (branch_taken) {
          goto L_08908564;
      }
      goto L_08908530;
    }
L_08908530:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908538;
    }
L_08908538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908544;
    }
L_08908544:
    aot_gpr_31 = (0x0890854Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890854Cu) goto L_0890854C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890854C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890855C;
      }
      goto L_08908558;
    }
L_08908558:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890855C;
L_0890855C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908564;
    }
L_08908564:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_0890856C;
    }
L_0890856C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908578;
    }
L_08908578:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890857C;
L_0890857C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1676)));
    aot_gpr_5 = (0u | 48u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089085AC;
      }
      goto L_0890858C;
    }
L_0890858C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1676), aot_gpr_4);
    goto L_089085AC;
L_089085AC:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
        goto L_089085E8;
    }
    goto L_089085B4;
L_089085B4:
    aot_gpr_31 = (0x089085BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089085BCu) goto L_089085BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089085BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089085D4;
      }
      goto L_089085C4;
    }
L_089085C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    aot_gpr_5 = (0u | 45u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
        goto L_089085E8;
    }
    goto L_089085D4;
L_089085D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1540)));
    aot_gpr_31 = (0x089085E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890816C;
L_089085E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890861C;
      }
      goto L_089085E8;
    }
L_089085E8:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08908604u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908604u) goto L_08908604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908604:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08908610u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908610u) goto L_08908610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908610:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890861Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_0890816C;
L_0890861C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908630:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08908648u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908648u) goto L_08908648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 48u);
      if (branch_taken) {
          goto L_08908680;
      }
      goto L_08908650;
    }
L_08908650:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08908674u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089082A8;
L_08908674:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_089086AC;
      }
      goto L_08908680;
    }
L_08908680:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x089086A0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089086A0u) goto L_089086A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089086A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x089086ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089086ACu) goto L_089086AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089086AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089086C8;
      }
      goto L_089086B8;
    }
L_089086B8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089086C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890816C;
L_089086C4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
    goto L_089086C8;
L_089086C8:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089086DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08908700u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908700u) goto L_08908700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089088B4;
      }
      goto L_08908708;
    }
L_08908708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089088B4;
      }
      goto L_08908714;
    }
L_08908714:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (0u | 63u);
      if (branch_taken) {
          goto L_08908744;
      }
      goto L_08908728;
    }
L_08908728:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908734;
    }
L_08908734:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08908768;
      }
      goto L_0890873C;
    }
L_0890873C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908744;
    }
L_08908744:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908760;
      }
      goto L_08908750;
    }
L_08908750:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908758;
    }
L_08908758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908760;
    }
L_08908760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908768;
    }
L_08908768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908770;
    }
L_08908770:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_16;
      if (branch_taken) {
          goto L_089087B4;
      }
      goto L_0890877C;
    }
L_0890877C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    aot_gpr_6 = (0u | 55u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2228));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089087A4;
      }
      goto L_08908794;
    }
L_08908794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x089087A0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08908D60;
L_089087A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    goto L_089087A4;
L_089087A4:
    aot_gpr_31 = (0x089087ACu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089087ACu) goto L_089087AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089087AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_08908830;
      }
      goto L_089087B4;
    }
L_089087B4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (0u | 55u);
      if (branch_taken) {
          goto L_0890882C;
      }
      goto L_089087C8;
    }
L_089087C8:
    aot_gpr_31 = (0x089087D0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089087D0u) goto L_089087D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089087D0:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_16;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08908818;
      }
      goto L_089087D8;
    }
L_089087D8:
    aot_gpr_31 = (0x089087E0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089087E0u) goto L_089087E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089087E0:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[20];
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08908808;
      }
      goto L_089087F0;
    }
L_089087F0:
    aot_gpr_31 = (0x089087F8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089087F8u) goto L_089087F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089087F8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08908804u);
    aot_gpr_5 = (0u | 1u);
    goto L_08908D60;
L_08908804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    goto L_08908808;
L_08908808:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08908814u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908814u) goto L_08908814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    goto L_08908818;
L_08908818:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089087C8;
      }
      goto L_0890882C;
    }
L_0890882C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_08908830;
L_08908830:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_5 = (0u | 60u);
      if (branch_taken) {
          goto L_08908840;
      }
      goto L_08908838;
    }
L_08908838:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908868;
      }
      goto L_08908840;
    }
L_08908840:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_5 = (0u | 60u);
      if (branch_taken) {
          goto L_08908850;
      }
      goto L_08908848;
    }
L_08908848:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908868;
      }
      goto L_08908850;
    }
L_08908850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (~(ctx.gpr[18] | 0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(564));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08908868;
L_08908868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 18u);
      if (branch_taken) {
          goto L_08908880;
      }
      goto L_08908878;
    }
L_08908878:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908888;
      }
      goto L_08908880;
    }
L_08908880:
    aot_gpr_31 = (0x08908888u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908888u) goto L_08908888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908888:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08908894u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908894u) goto L_08908894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908894:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089088A0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089088A0u) goto L_089088A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089088A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089088ACu);
    aot_gpr_5 = (0u | 0u);
    goto L_08908D60;
L_089088AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089088D4;
      }
      goto L_089088B4;
    }
L_089088B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 59u);
      if (branch_taken) {
          goto L_089088CC;
      }
      goto L_089088C4;
    }
L_089088C4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089088D4;
      }
      goto L_089088CC;
    }
L_089088CC:
    aot_gpr_31 = (0x089088D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089088D4u) goto L_089088D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089088D4:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089088F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08908920u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08908A2C;
L_08908920:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08908934u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 647u, 0x0891BA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908934u) goto L_08908934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908934:
    aot_gpr_31 = (0x0890893Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890893Cu) goto L_0890893C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890893C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908974;
      }
      goto L_08908948;
    }
L_08908948:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08908968;
      }
      goto L_08908958;
    }
L_08908958:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(50))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08908974;
      }
      goto L_08908968;
    }
L_08908968:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08908974u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908974u) goto L_08908974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908974:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0890898C;
    }
    goto L_08908980;
L_08908980:
    aot_gpr_31 = (0x08908988u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908988u) goto L_08908988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0890898C;
L_0890898C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x089089A0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089089A0u) goto L_089089A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089089A0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089089B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x089089DCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08908A2C;
L_089089DC:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089089F0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 647u, 0x0891BA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089089F0u) goto L_089089F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089089F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08908A08;
    }
    goto L_089089FC;
L_089089FC:
    aot_gpr_31 = (0x08908A04u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908A04u) goto L_08908A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908A04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08908A08;
L_08908A08:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08908A18u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908A18u) goto L_08908A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908A18:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908A2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_31 = (0x08908A5Cu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908A5Cu) goto L_08908A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908A5C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (49408u << 16u);
      if (branch_taken) {
          goto L_08908BE8;
      }
      goto L_08908A68;
    }
L_08908A68:
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 152u);
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (4u << 16u);
    goto L_08908A7C;
L_08908A7C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08908ADC;
      }
      goto L_08908A90;
    }
L_08908A90:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908AC8;
      }
      goto L_08908A9C;
    }
L_08908A9C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08908AB8;
    }
    goto L_08908AA4;
L_08908AA4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AB0;
    }
L_08908AB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908B60;
      }
      goto L_08908AB8;
    }
L_08908AB8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AC0;
    }
L_08908AC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908B60;
      }
      goto L_08908AC8;
    }
L_08908AC8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 28 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AD4;
    }
L_08908AD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908ADC;
    }
L_08908ADC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 45 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908B14;
      }
      goto L_08908AE8;
    }
L_08908AE8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08908B04;
      }
      goto L_08908AF0;
    }
L_08908AF0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 44 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AFC;
    }
L_08908AFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908B60;
      }
      goto L_08908B04;
    }
L_08908B04:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B0C;
    }
L_08908B0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908B14;
    }
L_08908B14:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 261 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908B20;
    }
L_08908B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908B58;
      }
      goto L_08908B38;
    }
L_08908B38:
    aot_gpr_31 = (0x08908B40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908B40u) goto L_08908B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08908B58;
      }
      goto L_08908B48;
    }
L_08908B48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08908B58;
L_08908B58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908B60;
    }
L_08908B60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B78;
    }
L_08908B78:
    aot_gpr_31 = (0x08908B80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908B80u) goto L_08908B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908B80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B88;
    }
L_08908B88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08908B98;
L_08908B98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908BA0;
    }
L_08908BA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908BB8;
    }
L_08908BB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908BD0;
    }
L_08908BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08908BE0;
L_08908BE0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08908A7C;
      }
      goto L_08908BE8;
    }
L_08908BE8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908C10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08908C34u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 647u, 0x0891BA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908C34u) goto L_08908C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908C34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08908C40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908C40u) goto L_08908C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908C40:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908C50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 45u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 46u);
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908C68;
    }
L_08908C68:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 48u);
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908C70;
    }
L_08908C70:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908C78;
    }
L_08908C78:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (0u | 58u);
      if (branch_taken) {
          goto L_08908CAC;
      }
      goto L_08908C88;
    }
L_08908C88:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08908C9C;
      }
      goto L_08908C90;
    }
L_08908C90:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    aot_gpr_6 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08908CA4;
      }
      goto L_08908C9C;
    }
L_08908C9C:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    goto L_08908CA4;
L_08908CA4:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908CAC;
    }
L_08908CAC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_6 = (aot_gpr_6 & 4096u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 17u);
      if (branch_taken) {
          goto L_08908CE8;
      }
      goto L_08908CBC;
    }
L_08908CBC:
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08908CD4;
      }
      goto L_08908CC8;
    }
L_08908CC8:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    aot_gpr_6 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08908CDC;
      }
      goto L_08908CD4;
    }
L_08908CD4:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    goto L_08908CDC;
L_08908CDC:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908CE4;
    }
L_08908CE4:
    aot_gpr_6 = (0u | 17u);
    goto L_08908CE8;
L_08908CE8:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08908D50;
      }
      goto L_08908CF0;
    }
L_08908CF0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(216));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08908D08u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908D08u) goto L_08908D08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08908D20u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908D20u) goto L_08908D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    aot_gpr_4 = (aot_gpr_4 >> 12u);
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908D50;
      }
      goto L_08908D48;
    }
L_08908D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08908D54;
      }
      goto L_08908D50;
    }
L_08908D50:
    ctx.gpr[2] = (0u | 0u);
    goto L_08908D54;
L_08908D54:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908D60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08908DA4;
      }
      goto L_08908D84;
    }
L_08908D84:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 50u);
      if (branch_taken) {
          goto L_08908DAC;
      }
      goto L_08908D90;
    }
L_08908D90:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908D9C;
    }
L_08908D9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908DC8;
      }
      goto L_08908DA4;
    }
L_08908DA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908E60;
      }
      goto L_08908DAC;
    }
L_08908DAC:
    aot_gpr_5 = (0u | 44u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908DB8;
    }
L_08908DB8:
    aot_gpr_31 = (0x08908DC0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890F994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908DC0u) goto L_08908DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908DC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908DC8;
    }
L_08908DC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908DE8;
      }
      goto L_08908DD4;
    }
L_08908DD4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08908DE4;
      }
      goto L_08908DDC;
    }
L_08908DDC:
    aot_gpr_31 = (0x08908DE4u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1136));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908DE4u) goto L_08908DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908DE4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1136), 0u);
    goto L_08908DE8;
L_08908DE8:
    aot_gpr_31 = (0x08908DF0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0890B488;
L_08908DF0:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08908E04;
      }
      goto L_08908DF8;
    }
L_08908DF8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08908E04u);
    aot_gpr_5 = (0u | 50u);
    goto L_08908E78;
L_08908E04:
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_16 != aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08908E44;
      }
      goto L_08908E10;
    }
L_08908E10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08908E24u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908E24u) goto L_08908E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08908E40u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908E40u) goto L_08908E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908E40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08908E44;
L_08908E44:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2228), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08908E60u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908E60u) goto L_08908E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908E60:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908E78:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2232), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08908E80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_6 = (65280u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1927), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(480), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (0u | 100u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x08908ED0u);
    aot_gpr_5 = (0u | 67u);
    goto L_08908D60;
L_08908ED0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(512));
    aot_gpr_31 = (0x08908EF8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(496), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908EF8u) goto L_08908EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908EF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08908F30;
      }
      goto L_08908F18;
    }
L_08908F18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08908F34;
    }
    goto L_08908F28;
L_08908F28:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08908F44;
      }
      goto L_08908F30;
    }
L_08908F30:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08908F34;
L_08908F34:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08908F40u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908F40u) goto L_08908F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908F40:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08908F44;
L_08908F44:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (0u | 10u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08908F64u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0107_entry, 107u, 466u, 0x089B1C20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908F64u) goto L_08908F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908F64:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(624), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908FC4;
      }
      goto L_08908FA0;
    }
L_08908FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(376));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08908FBCu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908FBCu) goto L_08908FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908FBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(628), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08909030;
      }
      goto L_08908FC4;
    }
L_08908FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08908FFC;
      }
      goto L_08908FD8;
    }
L_08908FD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(376));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08908FF4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08908FF4u) goto L_08908FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08908FF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(628), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08909030;
      }
      goto L_08908FFC;
    }
L_08908FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08909030;
      }
      goto L_08909010;
    }
L_08909010:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(376));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x0890902Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890902Cu) goto L_0890902C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890902C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    goto L_08909030;
L_08909030:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909054:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2236)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890905C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 58u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08909090;
      }
      goto L_08909084;
    }
L_08909084:
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08909098;
      }
      goto L_08909090;
    }
L_08909090:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08909098;
L_08909098:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089090B4;
      }
      goto L_089090A0;
    }
L_089090A0:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_5 = (0u | 21u);
      if (branch_taken) {
          goto L_089090BC;
      }
      goto L_089090AC;
    }
L_089090AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909104;
      }
      goto L_089090B4;
    }
L_089090B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909168;
      }
      goto L_089090BC;
    }
L_089090BC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 9u);
      if (branch_taken) {
          goto L_08909104;
      }
      goto L_089090C4;
    }
L_089090C4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08909104;
      }
      goto L_089090CC;
    }
L_089090CC:
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089090E0;
      }
      goto L_089090D8;
    }
L_089090D8:
    aot_gpr_31 = (0x089090E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089090E0u) goto L_089090E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089090E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089090ECu);
    aot_gpr_5 = (0u | 1u);
    goto L_08908D60;
L_089090EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089090F8u);
    aot_gpr_5 = (0u | 1u);
    goto L_0890BE50;
L_089090F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08909104u);
    aot_gpr_5 = (0u | 0u);
    goto L_08908E78;
L_08909104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08909168;
      }
      goto L_08909110;
    }
L_08909110:
    aot_gpr_31 = (0x08909118u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909118u) goto L_08909118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909118:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20268)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20272)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08909134u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909134u) goto L_08909134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909134:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2240), aot_gpr_4);
    goto L_08909168;
L_08909168:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[18] = aot_run_words[1];
      ctx.gpr[19] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909180:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 61u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089091C0;
      }
      goto L_0890919C;
    }
L_0890919C:
    aot_gpr_31 = (0x089091A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_089091A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (50298u << 16u);
        goto L_089091C8;
    }
    goto L_089091B8;
L_089091B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089091E0;
      }
      goto L_089091C0;
    }
L_089091C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909260;
      }
      goto L_089091C8;
    }
L_089091C8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    goto L_089091CC;
L_089091CC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089091CC;
      }
      goto L_089091DC;
    }
L_089091DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    goto L_089091E0;
L_089091E0:
    aot_gpr_31 = (0x089091E8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089091E8u) goto L_089091E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089091E8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08909228;
      }
      goto L_089091F4;
    }
L_089091F4:
    aot_gpr_6 = (0u | 6u);
    goto L_089091F8;
L_089091F8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
      if (branch_taken) {
          goto L_0890921C;
      }
      goto L_08909204;
    }
L_08909204:
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08909228;
      }
      goto L_0890921C;
    }
L_0890921C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089091F8;
      }
      goto L_08909228;
    }
L_08909228:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08909244;
      }
      goto L_08909230;
    }
L_08909230:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08909244u);
    ctx.gpr[7] = (0u | 6u);
    goto L_089089B8;
L_08909244:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (51200u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_08909260;
L_08909260:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909270:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0890928Cu);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890928Cu) goto L_0890928C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890928C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890929C;
      }
      goto L_08909294;
    }
L_08909294:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089092C8;
      }
      goto L_0890929C;
    }
L_0890929C:
    aot_gpr_31 = (0x089092A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089092A4u) goto L_089092A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089092A4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089092B0u);
    aot_gpr_5 = (0u | 2u);
    goto L_08908D60;
L_089092B0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089092C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08909A64;
L_089092C8:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089092DC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1736)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089092F8;
      }
      goto L_089092F0;
    }
L_089092F0:
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1736), aot_gpr_5);
    goto L_089092F8;
L_089092F8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909300:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08909314u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909314u) goto L_08909314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909314:
    aot_gpr_31 = (0x0890931Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08909B60;
L_0890931C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890932C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 17u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08909360;
      }
      goto L_08909344;
    }
L_08909344:
    aot_gpr_6 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (0u | 22u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08909370;
      }
      goto L_08909358;
    }
L_08909358:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 16u);
      if (branch_taken) {
          goto L_08909368;
      }
      goto L_08909360;
    }
L_08909360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909388;
      }
      goto L_08909368;
    }
L_08909368:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08909378;
      }
      goto L_08909370;
    }
L_08909370:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    goto L_08909378;
L_08909378:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1716)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08909388u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    goto L_08909394;
L_08909388:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909394:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1716)));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (ctx.gpr[7] | aot_gpr_6);
    ctx.gpr[7] = (16457u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089093FC;
      }
      goto L_089093D8;
    }
L_089093D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x089093F8u);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089093F8u) goto L_089093F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089093F8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089093FC;
L_089093FC:
    aot_gpr_31 = (0x08909404u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909404u) goto L_08909404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909404:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = aot_fpr_12 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08909434;
      }
      goto L_08909420;
    }
L_08909420:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
      if (branch_taken) {
          goto L_08909458;
      }
      goto L_08909434;
    }
L_08909434:
    aot_fpr_14 = aot_fpr_12 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08909458;
      }
      goto L_08909448;
    }
L_08909448:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_08909458;
L_08909458:
    ctx.fpr[15] = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_08909478;
    }
    goto L_08909478;
L_08909478:
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089094A0;
      }
      goto L_08909494;
    }
L_08909494:
    aot_fpr_14 = ctx.fpr[15] / aot_fpr_20;
    ctx.gpr[17] = (0u | 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    goto L_089094A0;
L_089094A0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089094C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x089094ECu);
    aot_gpr_6 = (0u | 172u);
    goto L_08908C10;
L_089094EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08909528;
      }
      goto L_089094F4;
    }
L_089094F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08909504u);
    aot_gpr_6 = (0u | 218u);
    goto L_08908C10;
L_08909504:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08909528;
      }
      goto L_0890950C;
    }
L_0890950C:
    aot_gpr_31 = (0x08909514u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909514u) goto L_08909514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909514:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(816));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1025));
      if (branch_taken) {
          goto L_08909530;
      }
      goto L_08909520;
    }
L_08909520:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909550;
      }
      goto L_08909528;
    }
L_08909528:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909698;
      }
      goto L_08909530;
    }
L_08909530:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08909550;
      }
      goto L_08909540;
    }
L_08909540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    goto L_08909550;
L_08909550:
    aot_gpr_31 = (0x08909558u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909558u) goto L_08909558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909634;
      }
      goto L_08909560;
    }
L_08909560:
    aot_gpr_31 = (0x08909568u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909568u) goto L_08909568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089095A4;
      }
      goto L_08909584;
    }
L_08909584:
    aot_gpr_31 = (0x0890958Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890958Cu) goto L_0890958C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890958C:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(816));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0890959Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890959Cu) goto L_0890959C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890959C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089095B8;
      }
      goto L_089095A4;
    }
L_089095A4:
    aot_gpr_31 = (0x089095ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089095ACu) goto L_089095AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089095AC:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    goto L_089095B8;
L_089095B8:
    aot_gpr_31 = (0x089095C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089095C0u) goto L_089095C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089095C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089095D4;
      }
      goto L_089095C8;
    }
L_089095C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089095D4u);
    aot_gpr_5 = (0u | 137u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089095D4u) goto L_089095D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089095D4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089095E0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 645u, 0x089F3D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089095E0u) goto L_089095E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089095E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (ctx.gpr[2] & 1u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 << 10u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x08909604u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909604u) goto L_08909604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909604:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
      if (branch_taken) {
          goto L_0890962C;
      }
      goto L_0890960C;
    }
L_0890960C:
    aot_gpr_31 = (0x08909614u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909614u) goto L_08909614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909614:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x0890962Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08909A64;
L_0890962C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909698;
      }
      goto L_08909634;
    }
L_08909634:
    aot_gpr_31 = (0x0890963Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890963Cu) goto L_0890963C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890963C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909670;
      }
      goto L_08909644;
    }
L_08909644:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3228)));
    aot_gpr_31 = (0x08909654u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 49u, 0x089F44B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909654u) goto L_08909654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (ctx.gpr[2] & 1u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 << 10u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08909698;
      }
      goto L_08909670;
    }
L_08909670:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08909680u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 49u, 0x089F44B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909680u) goto L_08909680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (ctx.gpr[2] & 1u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 << 10u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08909698;
L_08909698:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089096B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0890970C;
      }
      goto L_089096D0;
    }
L_089096D0:
    aot_gpr_31 = (0x089096D8u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(816));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 654u, 0x089F3E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089096D8u) goto L_089096D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089096D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089096F8;
      }
      goto L_089096E0;
    }
L_089096E0:
    aot_gpr_31 = (0x089096E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089096E8u) goto L_089096E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089096E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890972C;
      }
      goto L_089096F0;
    }
L_089096F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909734;
      }
      goto L_089096F8;
    }
L_089096F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08909734;
      }
      goto L_0890970C;
    }
L_0890970C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08909734;
      }
      goto L_0890972C;
    }
L_0890972C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08909734;
L_08909734:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909744:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 256u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08909784u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909784u) goto L_08909784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
        goto L_089097A8;
    }
    goto L_08909794;
L_08909794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    goto L_089097A8;
L_089097A8:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x089097C4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089097C4u) goto L_089097C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089097C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_089097E8;
      }
      goto L_089097DC;
    }
L_089097DC:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
      if (branch_taken) {
          goto L_089097F4;
      }
      goto L_089097E8;
    }
L_089097E8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    goto L_089097F4;
L_089097F4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909804:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 | 256u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08909848;
      }
      goto L_08909840;
    }
L_08909840:
    aot_gpr_31 = (0x08909848u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909848u) goto L_08909848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909848:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1716), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08909858u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909858u) goto L_08909858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909858:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08909864u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909864u) goto L_08909864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909864:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1736), 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909880:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-257));
      if (branch_taken) {
          goto L_089098C4;
      }
      goto L_089098A0;
    }
L_089098A0:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 512u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), 0u);
    goto L_089098C4;
L_089098C4:
    aot_gpr_31 = (0x089098CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089098CCu) goto L_089098CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089098CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089098DC;
      }
      goto L_089098D4;
    }
L_089098D4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089098DC;
L_089098DC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089098EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 55u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 60u);
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_089098FC;
    }
L_089098FC:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 17u);
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_08909904;
    }
L_08909904:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_0890990C;
    }
L_0890990C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_0890991C;
    }
L_0890991C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(776)));
    aot_gpr_5 = (0u | 47u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 44u);
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_0890992C;
    }
L_0890992C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_08909934;
    }
L_08909934:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08909944;
      }
      goto L_0890993C;
    }
L_0890993C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909948;
      }
      goto L_08909944;
    }
L_08909944:
    ctx.gpr[2] = (0u | 1u);
    goto L_08909948;
L_08909948:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909950:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08909968u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(816));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 633u, 0x089F3C20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909968u) goto L_08909968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909980;
      }
      goto L_08909970;
    }
L_08909970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08909980;
L_08909980:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909990:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[8] = (0u | 17u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089099C0;
      }
      goto L_089099B8;
    }
L_089099B8:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089099EC;
      }
      goto L_089099C0;
    }
L_089099C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (aot_gpr_6 & 64u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_089099EC;
      }
      goto L_089099D0;
    }
L_089099D0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 16u);
        goto L_08909A00;
    }
    goto L_089099E4;
L_089099E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089099F4;
      }
      goto L_089099EC;
    }
L_089099EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_089099F4;
    }
L_089099F4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_089099FC;
    }
L_089099FC:
    aot_gpr_4 = (aot_gpr_6 | 16u);
    goto L_08909A00;
L_08909A00:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-129));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x08909A3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089098EC;
L_08909A3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_08909A44;
    }
L_08909A44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    goto L_08909A54;
L_08909A54:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909A64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 & 255u);
    aot_gpr_5 = (ctx.gpr[7] & 255u);
    aot_gpr_6 = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (0u | 17u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08909AA0;
      }
      goto L_08909A98;
    }
L_08909A98:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08909ACC;
      }
      goto L_08909AA0;
    }
L_08909AA0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (aot_gpr_6 & 64u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08909ACC;
      }
      goto L_08909AB0;
    }
L_08909AB0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08909ADC;
      }
      goto L_08909AC4;
    }
L_08909AC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909AD4;
      }
      goto L_08909ACC;
    }
L_08909ACC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909B4C;
      }
      goto L_08909AD4;
    }
L_08909AD4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08909B4C;
      }
      goto L_08909ADC;
    }
L_08909ADC:
    aot_gpr_5 = (aot_gpr_6 | 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_5);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), aot_gpr_4);
    aot_gpr_31 = (0x08909AFCu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909AFCu) goto L_08909AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909AFC:
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9200u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_6 = (ctx.gpr[17] & 1u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 << 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x08909B34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089098EC;
L_08909B34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909B4C;
      }
      goto L_08909B3C;
    }
L_08909B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    goto L_08909B4C;
L_08909B4C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909B60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 & 64u);
      if (branch_taken) {
          goto L_08909C10;
      }
      goto L_08909B80;
    }
L_08909B80:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_08909C10;
      }
      goto L_08909B88;
    }
L_08909B88:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x08909BB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089098EC;
L_08909BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909BC8;
      }
      goto L_08909BB8;
    }
L_08909BB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(860), aot_gpr_4);
    goto L_08909BC8;
L_08909BC8:
    aot_gpr_31 = (0x08909BD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909BD0u) goto L_08909BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08909BE8;
      }
      goto L_08909BD8;
    }
L_08909BD8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_08909BF4;
      }
      goto L_08909BE8;
    }
L_08909BE8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_08909BF4;
L_08909BF4:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_08909C08;
      }
      goto L_08909C00;
    }
L_08909C00:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08909C10;
      }
      goto L_08909C08;
    }
L_08909C08:
    aot_gpr_31 = (0x08909C10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08909300;
L_08909C10:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909C20:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2120)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909C28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08909C70;
      }
      goto L_08909C40;
    }
L_08909C40:
    aot_gpr_31 = (0x08909C48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909C48u) goto L_08909C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909C48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909C68;
      }
      goto L_08909C50;
    }
L_08909C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08909C80;
      }
      goto L_08909C60;
    }
L_08909C60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 57u);
      if (branch_taken) {
          goto L_08909C78;
      }
      goto L_08909C68;
    }
L_08909C68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909C70;
    }
L_08909C70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909C78;
    }
L_08909C78:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08909C88;
      }
      goto L_08909C80;
    }
L_08909C80:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08909C88;
L_08909C88:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08909C68;
      }
      goto L_08909C90;
    }
L_08909C90:
    aot_gpr_4 = (aot_gpr_4 ^ 68u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08909D10;
      }
      goto L_08909CA4;
    }
L_08909CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08909D08;
      }
      goto L_08909CBC;
    }
L_08909CBC:
    aot_gpr_31 = (0x08909CC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08909B60;
L_08909CC4:
    aot_gpr_31 = (0x08909CCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08909880;
L_08909CCC:
    aot_gpr_31 = (0x08909CD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909CD4u) goto L_08909CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909CD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08909CE0u);
    aot_gpr_5 = (0u | 68u);
    goto L_08908D60;
L_08909CE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08909CF0u);
    aot_gpr_6 = (0u | 142u);
    goto L_08908C10;
L_08909CF0:
    aot_gpr_5 = (16512u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08909D18;
      }
      goto L_08909D00;
    }
L_08909D00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909D08;
    }
L_08909D08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909D10;
    }
L_08909D10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909D18;
    }
L_08909D18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08909D2Cu);
    ctx.gpr[7] = (0u | 142u);
    goto L_089088F4;
L_08909D2C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909D3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (16325u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 7864u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08909DB8;
      }
      goto L_08909D8C;
    }
L_08909D8C:
    aot_gpr_31 = (0x08909D94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909D94u) goto L_08909D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08909DB0;
      }
      goto L_08909D9C;
    }
L_08909D9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08909DC0;
      }
      goto L_08909DA8;
    }
L_08909DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909DB0;
    }
L_08909DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909DB8;
    }
L_08909DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909DC0;
    }
L_08909DC0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08909DF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909DF4u) goto L_08909DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909DF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08909E9C;
      }
      goto L_08909E00;
    }
L_08909E00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 43u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08909E20;
      }
      goto L_08909E10;
    }
L_08909E10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 44u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08909E28;
      }
      goto L_08909E20;
    }
L_08909E20:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08909E28;
L_08909E28:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08909E9C;
      }
      goto L_08909E30;
    }
L_08909E30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16261u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15897u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_31 = (0x08909E90u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909E90u) goto L_08909E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08909E9C;
      }
      goto L_08909E98;
    }
L_08909E98:
    ctx.gpr[17] = (0u | 1u);
    goto L_08909E9C;
L_08909E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909EA4;
    }
L_08909EA4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909EBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 4096u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08909F68;
      }
      goto L_08909EDC;
    }
L_08909EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x08909EF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909EF8u) goto L_08909EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909EF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08909F48;
      }
      goto L_08909F00;
    }
L_08909F00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08909F18;
    }
    goto L_08909F0C;
L_08909F0C:
    aot_gpr_31 = (0x08909F14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909F14u) goto L_08909F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08909F18;
L_08909F18:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08909F24u);
    aot_gpr_6 = (0u | 140u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909F24u) goto L_08909F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909F24:
    aot_gpr_4 = (0u | 22u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08909F48u);
    ctx.gpr[7] = (0u | 140u);
    goto L_089088F4;
L_08909F48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08909F68;
      }
      goto L_08909F58;
    }
L_08909F58:
    aot_gpr_31 = (0x08909F60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 261u, 0x088E29C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909F60u) goto L_08909F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909F60:
    aot_gpr_31 = (0x08909F68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08909F68u) goto L_08909F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08909F68:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909F78:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08909F84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (16513u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(328)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_5 | 18350u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[15])) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FD0;
    }
L_08909FD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_6 = (8192u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FE4;
    }
L_08909FE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 58u);
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FF4;
    }
L_08909FF4:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FFC;
    }
L_08909FFC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x0890A038u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A038u) goto L_0890A038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A038:
    if (ctx.gpr[2] != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
        goto L_0890A13C;
    }
    goto L_0890A040;
L_0890A040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 41u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A050;
    }
L_0890A050:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A078;
      }
      goto L_0890A068;
    }
L_0890A068:
    aot_gpr_31 = (0x0890A070u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890A1A0;
L_0890A070:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A078;
    }
L_0890A078:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20380)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A090;
    }
L_0890A090:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890A0A0u);
    aot_gpr_6 = (0u | 142u);
    goto L_08908C10;
L_0890A0A0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890A10C;
      }
      goto L_0890A0AC;
    }
L_0890A0AC:
    aot_gpr_31 = (0x0890A0B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A0B4u) goto L_0890A0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A0B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890A134;
      }
      goto L_0890A0BC;
    }
L_0890A0BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0890A0D4;
    }
    goto L_0890A0C8;
L_0890A0C8:
    aot_gpr_31 = (0x0890A0D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A0D0u) goto L_0890A0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A0D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0890A0D4;
L_0890A0D4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0890A0E0u);
    aot_gpr_6 = (0u | 142u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A0E0u) goto L_0890A0E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A0E0:
    aot_gpr_4 = (0u | 86u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890A104u);
    ctx.gpr[7] = (0u | 142u);
    goto L_089088F4;
L_0890A104:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A134;
      }
      goto L_0890A10C;
    }
L_0890A10C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890A134;
      }
      goto L_0890A128;
    }
L_0890A128:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20380)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0890A134;
L_0890A134:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A13C;
    }
L_0890A13C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16294u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890A188;
      }
      goto L_0890A160;
    }
L_0890A160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890A188;
      }
      goto L_0890A170;
    }
L_0890A170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A188;
    }
L_0890A188:
    aot_gpr_31 = (0x0890A190u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890A1A0;
L_0890A190:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890A1A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 58u);
      if (branch_taken) {
          goto L_0890A1F0;
      }
      goto L_0890A1CC;
    }
L_0890A1CC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890A1F0;
      }
      goto L_0890A1D4;
    }
L_0890A1D4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0890A1E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A1E0u) goto L_0890A1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A1E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890A1F8;
      }
      goto L_0890A1E8;
    }
L_0890A1E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A1F0;
    }
L_0890A1F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A468;
      }
      goto L_0890A1F8;
    }
L_0890A1F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890A208u);
    aot_gpr_6 = (0u | 139u);
    goto L_08908C10;
L_0890A208:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0890A22C;
      }
      goto L_0890A214;
    }
L_0890A214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_4 = (aot_gpr_4 ^ 68u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890A270;
      }
      goto L_0890A22C;
    }
L_0890A22C:
    aot_gpr_6 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x0890A244u);
    aot_gpr_6 = (4u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 187u, 0x0886D3B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A244u) goto L_0890A244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A244:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20380)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890A278;
      }
      goto L_0890A268;
    }
L_0890A268:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A334;
      }
      goto L_0890A270;
    }
L_0890A270:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A468;
      }
      goto L_0890A278;
    }
L_0890A278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0890A290;
    }
    goto L_0890A284;
L_0890A284:
    aot_gpr_31 = (0x0890A28Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A28Cu) goto L_0890A28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A28C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0890A290;
L_0890A290:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0890A29Cu);
    aot_gpr_6 = (0u | 139u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A29Cu) goto L_0890A29C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A29C:
    aot_gpr_4 = (0u | 84u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A2E0;
      }
      goto L_0890A2BC;
    }
L_0890A2BC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (49608u << 16u);
    ctx.gpr[18] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890A2D8u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A2D8u) goto L_0890A2D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A2D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A2F8;
      }
      goto L_0890A2E0;
    }
L_0890A2E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890A2F4u);
    ctx.gpr[7] = (0u | 139u);
    goto L_089089B8;
L_0890A2F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0890A2F8;
L_0890A2F8:
    aot_gpr_31 = (0x0890A300u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A300u) goto L_0890A300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A308;
    }
L_0890A308:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890A314u);
    aot_gpr_5 = (0u | 105u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A314u) goto L_0890A314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A314:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0890A32Cu);
    aot_gpr_6 = (0u | 35u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A32Cu) goto L_0890A32C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A32C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A334;
    }
L_0890A334:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_0890A35C;
      }
      goto L_0890A340;
    }
L_0890A340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_0890A3D4;
      }
      goto L_0890A34C;
    }
L_0890A34C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A3D4;
      }
      goto L_0890A35C;
    }
L_0890A35C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890A370u);
    ctx.gpr[7] = (0u | 141u);
    goto L_089089B8;
L_0890A370:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x0890A38Cu);
    aot_gpr_6 = (0u | 36u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A38Cu) goto L_0890A38C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A38C:
    aot_gpr_31 = (0x0890A394u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A394u) goto L_0890A394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890A3A8;
      }
      goto L_0890A39C;
    }
L_0890A39C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890A3A8u);
    aot_gpr_5 = (0u | 105u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A3A8u) goto L_0890A3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A3A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3B4;
    }
L_0890A3B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3C4;
    }
L_0890A3C4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3D4;
    }
L_0890A3D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A3EC;
      }
      goto L_0890A3E4;
    }
L_0890A3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3EC;
    }
L_0890A3EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890A400u);
    ctx.gpr[7] = (0u | 141u);
    goto L_089089B8;
L_0890A400:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x0890A41Cu);
    aot_gpr_6 = (0u | 35u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A41Cu) goto L_0890A41C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A41C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0890A45C;
      }
      goto L_0890A440;
    }
L_0890A440:
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890A454u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13684));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A454u) goto L_0890A454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A454:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A468;
      }
      goto L_0890A45C;
    }
L_0890A45C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x0890A468u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890CA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A468u) goto L_0890A468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A468:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890A484:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1268)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A564;
      }
      goto L_0890A4B0;
    }
L_0890A4B0:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0890A4CC;
      }
      goto L_0890A4C0;
    }
L_0890A4C0:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0890A4CC;
L_0890A4CC:
    aot_gpr_5 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x0890A4ECu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A4ECu) goto L_0890A4EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A4EC:
    aot_gpr_6 = (ctx.gpr[20] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0890A500u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A500u) goto L_0890A500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A500:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1744)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0890A55C;
      }
      goto L_0890A538;
    }
L_0890A538:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1748)));
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0890A554;
      }
      goto L_0890A548;
    }
L_0890A548:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1744), aot_gpr_4);
      if (branch_taken) {
          goto L_0890A55C;
      }
      goto L_0890A554;
    }
L_0890A554:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1744), aot_gpr_4);
    goto L_0890A55C;
L_0890A55C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A59C;
      }
      goto L_0890A564;
    }
L_0890A564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1744)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A59C;
      }
      goto L_0890A578;
    }
L_0890A578:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1748)));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A594;
      }
      goto L_0890A588;
    }
L_0890A588:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1744), aot_gpr_4);
      if (branch_taken) {
          goto L_0890A59C;
      }
      goto L_0890A594;
    }
L_0890A594:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1744), aot_gpr_4);
    goto L_0890A59C;
L_0890A59C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890A5BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1264)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A680;
      }
      goto L_0890A5E8;
    }
L_0890A5E8:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0890A604;
      }
      goto L_0890A5F8;
    }
L_0890A5F8:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0890A604;
L_0890A604:
    aot_gpr_5 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x0890A624u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A624u) goto L_0890A624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A624:
    aot_gpr_6 = (ctx.gpr[20] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0890A638u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A638u) goto L_0890A638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A638:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1748)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0890A678;
      }
      goto L_0890A670;
    }
L_0890A670:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1748), aot_gpr_4);
    goto L_0890A678;
L_0890A678:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A708;
      }
      goto L_0890A680;
    }
L_0890A680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1748)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A708;
      }
      goto L_0890A694;
    }
L_0890A694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890A700;
      }
      goto L_0890A6A4;
    }
L_0890A6A4:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0890A6C4;
      }
      goto L_0890A6B8;
    }
L_0890A6B8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_0890A6C4;
L_0890A6C4:
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_0890A6EC;
    }
    goto L_0890A6E0;
L_0890A6E0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0890A6FC;
      }
      goto L_0890A6EC;
    }
L_0890A6EC:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_0890A6FC;
L_0890A6FC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_0890A700;
L_0890A700:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1748), aot_gpr_4);
    goto L_0890A708;
L_0890A708:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890A728:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    aot_gpr_6 = (0u | 17u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0890A7AC;
      }
      goto L_0890A750;
    }
L_0890A750:
    aot_gpr_31 = (0x0890A758u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A758u) goto L_0890A758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A758:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890A7A4;
      }
      goto L_0890A760;
    }
L_0890A760:
    aot_gpr_31 = (0x0890A768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A768u) goto L_0890A768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890A788;
      }
      goto L_0890A770;
    }
L_0890A770:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890A7B4;
      }
      goto L_0890A780;
    }
L_0890A780:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A818;
      }
      goto L_0890A788;
    }
L_0890A788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (2048u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A7A4;
    }
L_0890A7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A7AC;
    }
L_0890A7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A7B4;
    }
L_0890A7B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890A808;
      }
      goto L_0890A7C4;
    }
L_0890A7C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0890A808;
      }
      goto L_0890A7D4;
    }
L_0890A7D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890A7F8;
      }
      goto L_0890A7E4;
    }
L_0890A7E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_0890A818;
      }
      goto L_0890A7F8;
    }
L_0890A7F8:
    aot_gpr_31 = (0x0890A800u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890A800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A808;
    }
L_0890A808:
    aot_gpr_31 = (0x0890A810u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890A810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A818;
    }
L_0890A818:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0890A874;
      }
      goto L_0890A820;
    }
L_0890A820:
    aot_gpr_31 = (0x0890A828u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A828u) goto L_0890A828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A828:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20260)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20264)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0890A83Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A83Cu) goto L_0890A83C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A83C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[17] = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_0890A874;
L_0890A874:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_0890A8A0;
      }
      goto L_0890A890;
    }
L_0890A890:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0890A8A0;
L_0890A8A0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 ^ 39u);
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x0890A8BCu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A8BCu) goto L_0890A8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890A8CC;
      }
      goto L_0890A8C4;
    }
L_0890A8C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A8DC;
      }
      goto L_0890A8CC;
    }
L_0890A8CC:
    aot_gpr_31 = (0x0890A8D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890A8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A8DC;
    }
L_0890A8DC:
    aot_gpr_31 = (0x0890A8E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A8E4u) goto L_0890A8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A8E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890A9AC;
      }
      goto L_0890A8EC;
    }
L_0890A8EC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 7u);
        goto L_0890A914;
    }
    goto L_0890A904;
L_0890A904:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_0890A914;
      }
      goto L_0890A914;
    }
L_0890A914:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0890A948;
      }
      goto L_0890A924;
    }
L_0890A924:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_0890A960;
      }
      goto L_0890A940;
    }
L_0890A940:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0890A974;
      }
      goto L_0890A948;
    }
L_0890A948:
    aot_gpr_31 = (0x0890A950u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890B900;
L_0890A950:
    aot_gpr_31 = (0x0890A958u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890A958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A960;
    }
L_0890A960:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(56)));
    goto L_0890A974;
L_0890A974:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 ^ 39u);
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x0890A98Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890A98Cu) goto L_0890A98C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890A98C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890A99C;
      }
      goto L_0890A994;
    }
L_0890A994:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890A8DC;
      }
      goto L_0890A99C;
    }
L_0890A99C:
    aot_gpr_31 = (0x0890A9A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890A9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A9AC;
    }
L_0890A9AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0890A9D0;
      }
      goto L_0890A9C0;
    }
L_0890A9C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0890A9D0;
L_0890A9D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 39u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0890AA3C;
      }
      goto L_0890A9E0;
    }
L_0890A9E0:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1032)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0890AA2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0113_entry, 113u, 174u, 0x089C89A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AA2Cu) goto L_0890AA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AA2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890AA3C;
      }
      goto L_0890AA34;
    }
L_0890AA34:
    aot_gpr_31 = (0x0890AA3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890AA3C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0890AA50u);
    aot_gpr_5 = (0u | 5u);
    goto L_08908D60;
L_0890AA50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890AA5Cu);
    aot_gpr_5 = (0u | 2u);
    goto L_0890BE50;
L_0890AA5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    ctx.gpr[2] = (0u | 1u);
    goto L_0890AA70;
L_0890AA70:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890AA84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_gpr_31 = (0x0890AAACu);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AAACu) goto L_0890AAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AAAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890AB24;
      }
      goto L_0890AAB4;
    }
L_0890AAB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AACCu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AACCu) goto L_0890AACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AACC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AAE4u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AAE4u) goto L_0890AAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AAE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890AB24;
      }
      goto L_0890AB0C;
    }
L_0890AB0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[17] = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0890AB2C;
      }
      goto L_0890AB1C;
    }
L_0890AB1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890AB6C;
      }
      goto L_0890AB24;
    }
L_0890AB24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890AC3C;
      }
      goto L_0890AB2C;
    }
L_0890AB2C:
    aot_gpr_31 = (0x0890AB34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AB34u) goto L_0890AB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AB34:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0890AB6C;
      }
      goto L_0890AB4C;
    }
L_0890AB4C:
    aot_gpr_31 = (0x0890AB54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AB54u) goto L_0890AB54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AB54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890AB9C;
      }
      goto L_0890AB6C;
    }
L_0890AB6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890AB94;
      }
      goto L_0890AB7C;
    }
L_0890AB7C:
    aot_gpr_31 = (0x0890AB84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 539u, 0x08906704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AB84u) goto L_0890AB84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AB84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890ABA4;
      }
      goto L_0890AB8C;
    }
L_0890AB8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890ABAC;
      }
      goto L_0890AB94;
    }
L_0890AB94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890AC3C;
      }
      goto L_0890AB9C;
    }
L_0890AB9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890AC3C;
      }
      goto L_0890ABA4;
    }
L_0890ABA4:
    aot_gpr_31 = (0x0890ABACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ABACu) goto L_0890ABAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ABAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0890ABC0;
      }
      goto L_0890ABB8;
    }
L_0890ABB8:
    aot_gpr_31 = (0x0890ABC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ABC0u) goto L_0890ABC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ABC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890ABD8u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ABD8u) goto L_0890ABD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ABD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x0890ABFCu);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ABFCu) goto L_0890ABFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ABFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890AC08u);
    aot_gpr_5 = (0u | 6u);
    goto L_08908D60;
L_0890AC08:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0890AC24;
      }
      goto L_0890AC1C;
    }
L_0890AC1C:
    aot_gpr_31 = (0x0890AC24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890B488;
L_0890AC24:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890AC30u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AC30u) goto L_0890AC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AC30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890AC3Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AC3Cu) goto L_0890AC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AC3C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890AC58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0890AC7Cu);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AC7Cu) goto L_0890AC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AC7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890ACF4;
      }
      goto L_0890AC84;
    }
L_0890AC84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AC9Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AC9Cu) goto L_0890AC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AC9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890ACB4u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ACB4u) goto L_0890ACB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ACB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890ACF4;
      }
      goto L_0890ACDC;
    }
L_0890ACDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 39u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890ACFC;
      }
      goto L_0890ACEC;
    }
L_0890ACEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890AD0C;
      }
      goto L_0890ACF4;
    }
L_0890ACF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890ADAC;
      }
      goto L_0890ACFC;
    }
L_0890ACFC:
    aot_gpr_31 = (0x0890AD04u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AD04u) goto L_0890AD04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AD04:
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_16;
      if (branch_taken) {
          goto L_0890AD1C;
      }
      goto L_0890AD0C;
    }
L_0890AD0C:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0890AD24;
      }
      goto L_0890AD14;
    }
L_0890AD14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890ADAC;
      }
      goto L_0890AD1C;
    }
L_0890AD1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890ADAC;
      }
      goto L_0890AD24;
    }
L_0890AD24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AD3Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AD3Cu) goto L_0890AD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AD3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x0890AD60u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AD60u) goto L_0890AD60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AD60:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890AD6Cu);
    aot_gpr_5 = (0u | 39u);
    goto L_08908D60;
L_0890AD6C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890AD78u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AD78u) goto L_0890AD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AD78:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890AD84u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AD84u) goto L_0890AD84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AD84:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890AD90u);
    aot_gpr_5 = (0u | 6u);
    goto L_0890BE50;
L_0890AD90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0890ADACu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ADACu) goto L_0890ADAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ADAC:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890ADC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x0890ADE0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2060)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890ADE0u) goto L_0890ADE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890ADE0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890AE4C;
      }
      goto L_0890ADEC;
    }
L_0890ADEC:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890AE44;
      }
      goto L_0890AE28;
    }
L_0890AE28:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0890AE34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 763u, 0x0890F4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AE34u) goto L_0890AE34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AE34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890AE54;
      }
      goto L_0890AE3C;
    }
L_0890AE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890AE80;
      }
      goto L_0890AE44;
    }
L_0890AE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890AE80;
      }
      goto L_0890AE4C;
    }
L_0890AE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890AE80;
      }
      goto L_0890AE54;
    }
L_0890AE54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890AE60u);
    aot_gpr_5 = (0u | 6u);
    goto L_0890BE50;
L_0890AE60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0890AE7Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AE7Cu) goto L_0890AE7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AE7C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890AE80;
L_0890AE80:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890AE94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0890AEACu);
    aot_gpr_5 = (0u | 1u);
    goto L_0890BE50;
L_0890AEAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0890AEC8u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AEC8u) goto L_0890AEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AEC8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890AED8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0890AF00u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AF00u) goto L_0890AF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AF00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890AF78;
      }
      goto L_0890AF08;
    }
L_0890AF08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AF20u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AF20u) goto L_0890AF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AF20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AF38u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AF38u) goto L_0890AF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AF38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890AF78;
      }
      goto L_0890AF60;
    }
L_0890AF60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[18] = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0890AF80;
      }
      goto L_0890AF70;
    }
L_0890AF70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890AF90;
      }
      goto L_0890AF78;
    }
L_0890AF78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AF80;
    }
L_0890AF80:
    aot_gpr_31 = (0x0890AF88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AF88u) goto L_0890AF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AF88:
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_16;
      if (branch_taken) {
          goto L_0890AFB8;
      }
      goto L_0890AF90;
    }
L_0890AF90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890AFB0;
      }
      goto L_0890AFA0;
    }
L_0890AFA0:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0890AFC0;
      }
      goto L_0890AFA8;
    }
L_0890AFA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AFB0;
    }
L_0890AFB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AFB8;
    }
L_0890AFB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AFC0;
    }
L_0890AFC0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0890AFD0;
      }
      goto L_0890AFC8;
    }
L_0890AFC8:
    aot_gpr_31 = (0x0890AFD0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AFD0u) goto L_0890AFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AFD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890AFE8u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890AFE8u) goto L_0890AFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890AFE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x0890B00Cu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B00Cu) goto L_0890B00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B00C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890B024;
      }
      goto L_0890B01C;
    }
L_0890B01C:
    aot_gpr_31 = (0x0890B024u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0890B488;
L_0890B024:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890B038u);
    aot_gpr_5 = (0u | 7u);
    goto L_08908D60;
L_0890B038:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890B044u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B044u) goto L_0890B044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B044:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890B050u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B050u) goto L_0890B050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B050:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0890B05Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_0890BE50;
L_0890B05C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B078:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0890B08Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0890905C;
L_0890B08C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1936), static_cast<std::uint8_t>(0u));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B0A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890B0E4u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B0E4u) goto L_0890B0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B0E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890B0FCu);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B0FCu) goto L_0890B0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B0FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890B188;
      }
      goto L_0890B124;
    }
L_0890B124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2072)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890B180;
      }
      goto L_0890B138;
    }
L_0890B138:
    aot_gpr_31 = (0x0890B140u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B140u) goto L_0890B140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B178;
      }
      goto L_0890B148;
    }
L_0890B148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890B178;
      }
      goto L_0890B158;
    }
L_0890B158:
    aot_gpr_6 = (16457u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (aot_gpr_6 | 4059u);
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
      if (branch_taken) {
          goto L_0890B190;
      }
      goto L_0890B170;
    }
L_0890B170:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B1BC;
      }
      goto L_0890B178;
    }
L_0890B178:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B180;
    }
L_0890B180:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B188;
    }
L_0890B188:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B190;
    }
L_0890B190:
    aot_gpr_31 = (0x0890B198u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B198u) goto L_0890B198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B198:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0890B1A4u);
    aot_gpr_5 = (0u | 8u);
    goto L_08908D60;
L_0890B1A4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0890B1B0u);
    aot_gpr_5 = (0u | 4u);
    goto L_0890BE50;
L_0890B1B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0890B1BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 44u, 0x089102D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B1BCu) goto L_0890B1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B1BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x0890B1D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B1D4u) goto L_0890B1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B1D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1368), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0890B200u);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B200u) goto L_0890B200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B200:
    aot_gpr_31 = (0x0890B208u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B208u) goto L_0890B208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B208:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = aot_fpr_13 + aot_fpr_20;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B23C;
      }
      goto L_0890B228;
    }
L_0890B228:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B23C;
    }
L_0890B23C:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B250;
    }
L_0890B250:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0890B260;
L_0890B260:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B27C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890B2B8u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B2B8u) goto L_0890B2B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B2B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0890B2D0u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B2D0u) goto L_0890B2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B2D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890B330;
      }
      goto L_0890B2F8;
    }
L_0890B2F8:
    aot_gpr_31 = (0x0890B300u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B300u) goto L_0890B300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B328;
      }
      goto L_0890B308;
    }
L_0890B308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890B328;
      }
      goto L_0890B318;
    }
L_0890B318:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0890B338;
      }
      goto L_0890B320;
    }
L_0890B320:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B328;
    }
L_0890B328:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B330;
    }
L_0890B330:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B338;
    }
L_0890B338:
    aot_gpr_31 = (0x0890B340u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B340u) goto L_0890B340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B340:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B34Cu);
    aot_gpr_5 = (0u | 4u);
    goto L_0890BE50;
L_0890B34C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B358u);
    aot_gpr_5 = (0u | 9u);
    goto L_08908D60;
L_0890B358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B374u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B374u) goto L_0890B374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B374:
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0890B3AC;
      }
      goto L_0890B38C;
    }
L_0890B38C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1368), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890B3C0;
      }
      goto L_0890B3AC;
    }
L_0890B3AC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1368), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0890B3C0;
L_0890B3C0:
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0890B3CCu);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B3CCu) goto L_0890B3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B3CC:
    aot_gpr_31 = (0x0890B3D4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B3D4u) goto L_0890B3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B3D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = aot_fpr_12 + aot_fpr_20;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B408;
      }
      goto L_0890B3F4;
    }
L_0890B3F4:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B408;
    }
L_0890B408:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B41C;
    }
L_0890B41C:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0890B42C;
L_0890B42C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B448:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0890B45Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B45Cu) goto L_0890B45C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B45C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1740), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1368), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B488:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_0890B490;
L_0890B490:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(908), 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890B490;
      }
      goto L_0890B4A4;
    }
L_0890B4A4:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B4B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x0890B4C4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B4C4u) goto L_0890B4C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B4C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B5F0;
      }
      goto L_0890B4CC;
    }
L_0890B4CC:
    aot_gpr_31 = (0x0890B4D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B4D4u) goto L_0890B4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B4D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890B5F0;
      }
      goto L_0890B4F0;
    }
L_0890B4F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890B568;
      }
      goto L_0890B508;
    }
L_0890B508:
    aot_gpr_31 = (0x0890B510u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B510u) goto L_0890B510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B510:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 7u);
        goto L_0890B534;
    }
    goto L_0890B51C;
L_0890B51C:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_0890B53C;
      }
      goto L_0890B534;
    }
L_0890B534:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    goto L_0890B53C;
L_0890B53C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0890B548u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890A728;
L_0890B548:
    aot_gpr_31 = (0x0890B550u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B550u) goto L_0890B550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B550:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0890B560u);
    aot_gpr_6 = (0u | 20000u);
    goto L_0890B27C;
L_0890B560:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B5F8;
      }
      goto L_0890B568;
    }
L_0890B568:
    aot_gpr_31 = (0x0890B570u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B570u) goto L_0890B570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B570:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890B5C8;
      }
      goto L_0890B5C0;
    }
L_0890B5C0:
    aot_gpr_4 = (0u | 50u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_0890B5C8;
L_0890B5C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B5D4u);
    aot_gpr_5 = (0u | 121u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B5D4u) goto L_0890B5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B5D4:
    aot_gpr_31 = (0x0890B5DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B5DCu) goto L_0890B5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B5DC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0890B5E8u);
    aot_gpr_5 = (0u | 123u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B5E8u) goto L_0890B5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B5E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B5F8;
      }
      goto L_0890B5F0;
    }
L_0890B5F0:
    aot_gpr_31 = (0x0890B5F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890905C;
L_0890B5F8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B608:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x0890B630u);
    aot_gpr_6 = (0u | 152u);
    goto L_08908C10;
L_0890B630:
    aot_fpr_20 = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0890B6BC;
      }
      goto L_0890B63C;
    }
L_0890B63C:
    aot_gpr_31 = (0x0890B644u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B644u) goto L_0890B644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B644:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B64C;
    }
L_0890B64C:
    aot_gpr_31 = (0x0890B654u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B654u) goto L_0890B654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B65C;
    }
L_0890B65C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B670;
    }
L_0890B670:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0890B694u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B694u) goto L_0890B694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B694:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x0890B6ACu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 261u, 0x08A1D580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B6ACu) goto L_0890B6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B6AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0890B6BC;
L_0890B6BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890B6E4;
      }
      goto L_0890B6C8;
    }
L_0890B6C8:
    aot_gpr_31 = (0x0890B6D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B6D0u) goto L_0890B6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B6E4;
      }
      goto L_0890B6D8;
    }
L_0890B6D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0890B6E4;
L_0890B6E4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0890B6F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B6F0u) goto L_0890B6F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B6F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B71C;
      }
      goto L_0890B6F8;
    }
L_0890B6F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B714u);
    aot_gpr_5 = (0u | 58u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B714u) goto L_0890B714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B714:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890B748;
      }
      goto L_0890B71C;
    }
L_0890B71C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890B748;
      }
      goto L_0890B728;
    }
L_0890B728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 17u);
      if (branch_taken) {
          goto L_0890B740;
      }
      goto L_0890B738;
    }
L_0890B738:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0890B748;
      }
      goto L_0890B740;
    }
L_0890B740:
    aot_gpr_31 = (0x0890B748u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B748u) goto L_0890B748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B748:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B754u);
    aot_gpr_5 = (0u | 58u);
    goto L_08908D60;
L_0890B754:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B760u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B760u) goto L_0890B760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B760:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2116), 0u);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x0890B784u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B784u) goto L_0890B784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B784:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x0890B790u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B790u) goto L_0890B790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B790:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0890B7A8u);
    ctx.gpr[8] = (0u | 250u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B7A8u) goto L_0890B7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B7A8:
    aot_gpr_31 = (0x0890B7B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B7B0u) goto L_0890B7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B7B0:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[2];
      if (branch_taken) {
          goto L_0890B864;
      }
      goto L_0890B7B8;
    }
L_0890B7B8:
    aot_gpr_6 = (50298u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x0890B7CCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B7CCu) goto L_0890B7CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B7CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890B854;
      }
      goto L_0890B7E0;
    }
L_0890B7E0:
    aot_gpr_31 = (0x0890B7E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B7E8u) goto L_0890B7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B7E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890B84C;
      }
      goto L_0890B7F0;
    }
L_0890B7F0:
    aot_gpr_31 = (0x0890B7F8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B7F8u) goto L_0890B7F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B7F8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20244)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20248)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0890B80Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B80Cu) goto L_0890B80C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B80C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(30712));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-182)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890B854;
      }
      goto L_0890B84C;
    }
L_0890B84C:
    aot_gpr_31 = (0x0890B854u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 814u, 0x088F79BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B854u) goto L_0890B854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B854:
    aot_gpr_31 = (0x0890B85Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 754u, 0x088F3C48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B85Cu) goto L_0890B85C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B85C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_0890B87C;
      }
      goto L_0890B864;
    }
L_0890B864:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
        goto L_0890B87C;
    }
    goto L_0890B870;
L_0890B870:
    aot_gpr_31 = (0x0890B878u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 814u, 0x088F79BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B878u) goto L_0890B878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    goto L_0890B87C;
L_0890B87C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1780))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-12289));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (0u | 6u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0890B8D8u);
    ctx.gpr[8] = (0u | 1000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B8D8u) goto L_0890B8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B8D8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x0890B8E4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 614u, 0x08A066D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B8E4u) goto L_0890B8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B8E4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890B900:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x0890B918u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B918u) goto L_0890B918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B918:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890B930;
      }
      goto L_0890B920;
    }
L_0890B920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0890BA0C;
      }
      goto L_0890B930;
    }
L_0890B930:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B93Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_08908D60;
L_0890B93C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B948u);
    aot_gpr_5 = (0u | 0u);
    goto L_0890BE50;
L_0890B948:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B954u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B954u) goto L_0890B954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B954:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0890B970u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B970u) goto L_0890B970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B970:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B97Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B97Cu) goto L_0890B97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B97C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0890B99Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 44u, 0x089102D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B99Cu) goto L_0890B99C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B99C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890B9A8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B9A8u) goto L_0890B9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B9A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1368), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1372), 0u);
    aot_gpr_4 = (aot_gpr_4 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x0890B9CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890B9CCu) goto L_0890B9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890B9CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2116), 0u);
    goto L_0890BA0C;
L_0890BA0C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BA20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 36u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 57u);
      if (branch_taken) {
          goto L_0890BADC;
      }
      goto L_0890BA40;
    }
L_0890BA40:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 58u);
      if (branch_taken) {
          goto L_0890BADC;
      }
      goto L_0890BA48;
    }
L_0890BA48:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0890BADC;
      }
      goto L_0890BA50;
    }
L_0890BA50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BA5Cu);
    aot_gpr_5 = (0u | 36u);
    goto L_08908D60;
L_0890BA5C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (49280u << 16u);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0890BA88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BA88u) goto L_0890BA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BA88:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890BAA4u);
    ctx.gpr[7] = (0u | 159u);
    goto L_089088F4;
L_0890BAA4:
    aot_gpr_5 = (2192u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BAB8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20748));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BAB8u) goto L_0890BAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BAB8:
    aot_gpr_4 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1676)));
    aot_gpr_5 = (0u | 48u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
        goto L_0890BAE4;
    }
    goto L_0890BAD4;
L_0890BAD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890BB00;
      }
      goto L_0890BADC;
    }
L_0890BADC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890BB0C;
      }
      goto L_0890BAE4;
    }
L_0890BAE4:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1676), aot_gpr_4);
    goto L_0890BB00;
L_0890BB00:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BB0Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BB0Cu) goto L_0890BB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BB0C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BB1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2232)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 36u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0890BB48;
      }
      goto L_0890BB3C;
    }
L_0890BB3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BB48u);
    aot_gpr_5 = (0u | 0u);
    goto L_08908E78;
L_0890BB48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BB58u);
    aot_gpr_6 = (0u | 161u);
    goto L_08908C10;
L_0890BB58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890BB98;
      }
      goto L_0890BB60;
    }
L_0890BB60:
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890BB7Cu);
    ctx.gpr[7] = (0u | 160u);
    goto L_089088F4;
L_0890BB7C:
    aot_gpr_5 = (2192u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BB90u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20812));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BB90u) goto L_0890BB90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BB90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_0890BBA8;
      }
      goto L_0890BB98;
    }
L_0890BB98:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x0890BBA4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 235u, 0x0890514Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BBA4u) goto L_0890BBA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BBA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_0890BBA8;
L_0890BBA8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0890BBB8;
      }
      goto L_0890BBB0;
    }
L_0890BBB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890BBD8;
      }
      goto L_0890BBB8;
    }
L_0890BBB8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BBC4u);
    aot_gpr_5 = (0u | 1u);
    goto L_08908D60;
L_0890BBC4:
    aot_gpr_31 = (0x0890BBCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BBCCu) goto L_0890BBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BBCC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BBD8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BBD8u) goto L_0890BBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BBD8:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BBEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0890BC08u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BC08u) goto L_0890BC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BC10;
    }
L_0890BC10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BC20u);
    aot_gpr_6 = (0u | 159u);
    goto L_08908C10;
L_0890BC20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BC34u);
    aot_gpr_6 = (0u | 160u);
    goto L_08908C10;
L_0890BC34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BC48u);
    aot_gpr_6 = (0u | 161u);
    goto L_08908C10;
L_0890BC48:
    aot_gpr_4 = (ctx.gpr[18] | ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890BC7C;
      }
      goto L_0890BC58;
    }
L_0890BC58:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0890BC74u);
    ctx.gpr[7] = (0u | 161u);
    goto L_089088F4;
L_0890BC74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BC7C;
    }
L_0890BC7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0890BCFC;
      }
      goto L_0890BC84;
    }
L_0890BC84:
    aot_gpr_4 = (16051u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCA4;
    }
L_0890BCA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCB0;
    }
L_0890BCB0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BCBCu);
    aot_gpr_5 = (0u | 330u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BCBCu) goto L_0890BCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BCBC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCC8;
    }
L_0890BCC8:
    aot_gpr_31 = (0x0890BCD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BCD0u) goto L_0890BCD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BCD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCD8;
    }
L_0890BCD8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0890BCE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BCE8u) goto L_0890BCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BCE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr_31 = (0x0890BCF4u);
    aot_gpr_5 = (0u | 330u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D4940u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BCF4u) goto L_0890BCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BCF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCFC;
    }
L_0890BCFC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BD04;
    }
L_0890BD04:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BD20;
    }
L_0890BD20:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BD38;
    }
L_0890BD38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BD44u);
    aot_gpr_5 = (0u | 330u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BD44u) goto L_0890BD44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BD44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890BD7C;
      }
      goto L_0890BD50;
    }
L_0890BD50:
    aot_gpr_31 = (0x0890BD58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BD58u) goto L_0890BD58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BD58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0890BD7C;
      }
      goto L_0890BD60;
    }
L_0890BD60:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0890BD70u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BD70u) goto L_0890BD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BD70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr_31 = (0x0890BD7Cu);
    aot_gpr_5 = (0u | 330u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0116_entry, 116u, 125u, 0x089D49DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BD7Cu) goto L_0890BD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BD7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1676)));
    aot_gpr_31 = (0x0890BD88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0890816C;
L_0890BD88:
    aot_gpr_4 = (0u | 48u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1676), aot_gpr_4);
    goto L_0890BD90;
L_0890BD90:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BDA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0890BDB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BDB8u) goto L_0890BDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BDB8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0890BDF0;
      }
      goto L_0890BDC4;
    }
L_0890BDC4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_6 & 16u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_0890BDE4;
      }
      goto L_0890BDDC;
    }
L_0890BDDC:
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    goto L_0890BDE4;
L_0890BDE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890BDC4;
      }
      goto L_0890BDF0;
    }
L_0890BDF0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BDFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0890BE0Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BE0Cu) goto L_0890BE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BE0C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0890BE44;
      }
      goto L_0890BE18;
    }
L_0890BE18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_5 & 16u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0890BE38;
      }
      goto L_0890BE30;
    }
L_0890BE30:
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0890BE38;
L_0890BE38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0890BE18;
      }
      goto L_0890BE44;
    }
L_0890BE44:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BE50:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2244), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BE58:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2252), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BE60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0890BE7Cu);
    aot_gpr_6 = (0u | 2u);
    goto L_08908C10;
L_0890BE7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890BE94;
      }
      goto L_0890BE84;
    }
L_0890BE84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BE94u);
    aot_gpr_6 = (0u | 3u);
    goto L_08908C10;
L_0890BE94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890BEAC;
      }
      goto L_0890BE9C;
    }
L_0890BE9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BEACu);
    aot_gpr_6 = (0u | 4u);
    goto L_08908C10;
L_0890BEAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0890BEC4;
      }
      goto L_0890BEB4;
    }
L_0890BEB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0890BEC4u);
    aot_gpr_6 = (0u | 5u);
    goto L_08908C10;
L_0890BEC4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BED4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    ctx.gpr[2] = (aot_gpr_4 & 2u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0890BEE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (17204u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[22];
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1924))))));
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23472));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0890BF5Cu);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BF5Cu) goto L_0890BF5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BF5C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x0890BF7Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08909990;
L_0890BF7C:
    aot_gpr_31 = (0x0890BF84u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 563u, 0x08A8EF4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0890BF84u) goto L_0890BF84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0890BF84:
    aot_fpr_14 = ctx.fpr[24] + aot_fpr_20;
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_0890BFBC;
      }
      goto L_0890BFAC;
    }
L_0890BFAC:
    aot_gpr_4 = (17332u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
      if (branch_taken) {
          goto L_0890BFDC;
      }
      goto L_0890BFBC;
    }
L_0890BFBC:
    aot_fpr_14 = ctx.fpr[24] - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0890BFDC;
      }
      goto L_0890BFD0;
    }
L_0890BFD0:
    aot_gpr_4 = (17332u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_0890BFDC;
L_0890BFDC:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_0890BFF8;
    }
    goto L_0890BFF8;
L_0890BFF8:
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.pc = 0x0890C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0065(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0065_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_65(Runtime &runtime) {
    runtime.register_generated_unit(65u, 0x08908000u, 16384u, &recomp_unit_0065, &recomp_unit_0065_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08908000u, &recomp_unit_0065, "recomp_unit_0065",
                                          kEntryMasks_recomp_unit_0065, 64u);
}
} // namespace psprecomp
