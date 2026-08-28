#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0015[64] = {
    0xA5294A5282800005ull, 0x2404048180A52904ull, 0x81092124404A50E0ull, 0x1115488C00534A88ull,
    0x9455048129050829ull, 0x2A00109449028904ull, 0x52000000A5210000ull, 0x52000000A5000000ull,
    0x00000014A5000000ull, 0x0014A00000000A40ull, 0xA00000000A400000ull, 0x0052800014800014ull,
    0xA401249249148029ull, 0xA241252009249248ull, 0x0140080004251240ull, 0x8280000005200000ull,
    0x0001480000005280ull, 0x800014800014A000ull, 0x4012492494829052ull, 0x340252A00924924Aull,
    0x0294000002A80000ull, 0x0004000002940000ull, 0x0000528000015480ull, 0x0000AA5000002940ull,
    0x000014A000002940ull, 0x0124A00AA55552A8ull, 0x82A9221120024950ull, 0xA4A5400204A00204ull,
    0x4888820902890494ull, 0x0014800000290425ull, 0x25200924924A4000ull, 0x2000000A50049249ull,
    0x0249249290000005ull, 0x4802940124924948ull, 0x5254A40148029401ull, 0x0A82490920814052ull,
    0x0282A52080008023ull, 0x4251009492452495ull, 0x440942128254A022ull, 0x088822012A001110ull,
    0x20044820A0020888ull, 0x4128A84942204A4Aull, 0x12842504A80A0021ull, 0x1044025400222088ull,
    0x0890414004111011ull, 0x44944942204A4A20ull, 0x08284A0952808909ull, 0x1250881292880112ull,
    0x0950140042825125ull, 0x094944011208284Aull, 0x008484A252892844ull, 0x82042A49224A4885ull,
    0x1521024881492080ull, 0x4920094549202489ull, 0x49489224A49224A5ull, 0x80944A9124494924ull,
    0x4A109412A1402248ull, 0x4110095000888220ull, 0x2241050010444044ull, 0x45424A1102525100ull,
    0x8254028040248809ull, 0x950008882204A212ull, 0x5001044404441100ull, 0x5088129288022410ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0015[64] = {
    1u, 19u, 34u, 51u, 70u, 89u, 104u, 113u, 120u, 126u, 133u, 138u, 147u, 165u, 183u, 193u,
    199u, 206u, 214u, 232u, 251u, 259u, 264u, 273u, 283u, 291u, 312u, 329u, 343u, 359u, 369u, 384u,
    396u, 409u, 426u, 443u, 459u, 472u, 492u, 509u, 521u, 532u, 551u, 566u, 578u, 590u, 608u, 625u,
    641u, 657u, 673u, 690u, 709u, 724u, 742u, 764u, 784u, 801u, 813u, 825u, 842u, 856u, 871u, 882u,
};
void recomp_unit_0015_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,2,5,29,17 fprs=12,13,14,20 gpr_occ=4176 fpr_occ=1270 gpr_total=5102 fpr_total=1656
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08840000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0015[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0015[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08840000;
    case 2u: goto L_08840008;
    case 3u: goto L_0884005C;
    case 4u: goto L_08840064;
    case 5u: goto L_0884007C;
    case 6u: goto L_08840084;
    case 7u: goto L_08840090;
    case 8u: goto L_08840098;
    case 9u: goto L_088400A4;
    case 10u: goto L_088400AC;
    case 11u: goto L_088400B8;
    case 12u: goto L_088400C0;
    case 13u: goto L_088400CC;
    case 14u: goto L_088400D4;
    case 15u: goto L_088400E0;
    case 16u: goto L_088400E8;
    case 17u: goto L_088400F4;
    case 18u: goto L_088400FC;
    case 19u: goto L_08840108;
    case 20u: goto L_08840120;
    case 21u: goto L_0884012C;
    case 22u: goto L_08840134;
    case 23u: goto L_08840140;
    case 24u: goto L_08840148;
    case 25u: goto L_08840154;
    case 26u: goto L_0884015C;
    case 27u: goto L_0884017C;
    case 28u: goto L_08840180;
    case 29u: goto L_0884019C;
    case 30u: goto L_088401A8;
    case 31u: goto L_088401C8;
    case 32u: goto L_088401E8;
    case 33u: goto L_088401F4;
    case 34u: goto L_08840214;
    case 35u: goto L_08840218;
    case 36u: goto L_0884021C;
    case 37u: goto L_08840230;
    case 38u: goto L_08840238;
    case 39u: goto L_08840244;
    case 40u: goto L_0884024C;
    case 41u: goto L_08840258;
    case 42u: goto L_08840278;
    case 43u: goto L_08840288;
    case 44u: goto L_08840294;
    case 45u: goto L_088402A0;
    case 46u: goto L_088402B4;
    case 47u: goto L_088402C0;
    case 48u: goto L_088402CC;
    case 49u: goto L_088402E0;
    case 50u: goto L_088402FC;
    case 51u: goto L_0884030C;
    case 52u: goto L_0884031C;
    case 53u: goto L_08840324;
    case 54u: goto L_0884032C;
    case 55u: goto L_08840338;
    case 56u: goto L_08840340;
    case 57u: goto L_08840344;
    case 58u: goto L_08840350;
    case 59u: goto L_08840358;
    case 60u: goto L_08840388;
    case 61u: goto L_0884038C;
    case 62u: goto L_0884039C;
    case 63u: goto L_088403AC;
    case 64u: goto L_088403B8;
    case 65u: goto L_088403C0;
    case 66u: goto L_088403C8;
    case 67u: goto L_088403D0;
    case 68u: goto L_088403E0;
    case 69u: goto L_088403F0;
    case 70u: goto L_08840400;
    case 71u: goto L_0884040C;
    case 72u: goto L_08840414;
    case 73u: goto L_0884042C;
    case 74u: goto L_08840440;
    case 75u: goto L_08840448;
    case 76u: goto L_08840460;
    case 77u: goto L_0884046C;
    case 78u: goto L_08840474;
    case 79u: goto L_08840480;
    case 80u: goto L_0884049C;
    case 81u: goto L_088404A8;
    case 82u: goto L_088404C0;
    case 83u: goto L_088404C8;
    case 84u: goto L_088404D0;
    case 85u: goto L_088404D8;
    case 86u: goto L_088404E8;
    case 87u: goto L_088404F0;
    case 88u: goto L_088404FC;
    case 89u: goto L_08840508;
    case 90u: goto L_08840520;
    case 91u: goto L_0884052C;
    case 92u: goto L_0884053C;
    case 93u: goto L_08840544;
    case 94u: goto L_08840560;
    case 95u: goto L_0884056C;
    case 96u: goto L_08840578;
    case 97u: goto L_08840588;
    case 98u: goto L_08840590;
    case 99u: goto L_0884059C;
    case 100u: goto L_088405B0;
    case 101u: goto L_088405E4;
    case 102u: goto L_088405EC;
    case 103u: goto L_088405F4;
    case 104u: goto L_08840640;
    case 105u: goto L_08840654;
    case 106u: goto L_08840660;
    case 107u: goto L_08840668;
    case 108u: goto L_08840674;
    case 109u: goto L_0884067C;
    case 110u: goto L_088406E4;
    case 111u: goto L_088406F0;
    case 112u: goto L_088406F8;
    case 113u: goto L_08840760;
    case 114u: goto L_08840768;
    case 115u: goto L_08840774;
    case 116u: goto L_0884077C;
    case 117u: goto L_088407E4;
    case 118u: goto L_088407F0;
    case 119u: goto L_088407F8;
    case 120u: goto L_08840860;
    case 121u: goto L_08840868;
    case 122u: goto L_08840874;
    case 123u: goto L_0884087C;
    case 124u: goto L_08840888;
    case 125u: goto L_08840890;
    case 126u: goto L_08840918;
    case 127u: goto L_08840924;
    case 128u: goto L_0884092C;
    case 129u: goto L_088409B4;
    case 130u: goto L_088409BC;
    case 131u: goto L_088409C8;
    case 132u: goto L_088409D0;
    case 133u: goto L_08840A58;
    case 134u: goto L_08840A64;
    case 135u: goto L_08840A6C;
    case 136u: goto L_08840AF4;
    case 137u: goto L_08840AFC;
    case 138u: goto L_08840B08;
    case 139u: goto L_08840B10;
    case 140u: goto L_08840B5C;
    case 141u: goto L_08840B68;
    case 142u: goto L_08840B70;
    case 143u: goto L_08840BBC;
    case 144u: goto L_08840BC4;
    case 145u: goto L_08840BD0;
    case 146u: goto L_08840BD8;
    case 147u: goto L_08840C00;
    case 148u: goto L_08840C0C;
    case 149u: goto L_08840C14;
    case 150u: goto L_08840C3C;
    case 151u: goto L_08840C48;
    case 152u: goto L_08840C50;
    case 153u: goto L_08840C60;
    case 154u: goto L_08840C6C;
    case 155u: goto L_08840C78;
    case 156u: goto L_08840C84;
    case 157u: goto L_08840C90;
    case 158u: goto L_08840C9C;
    case 159u: goto L_08840CA8;
    case 160u: goto L_08840CB4;
    case 161u: goto L_08840CC0;
    case 162u: goto L_08840CE8;
    case 163u: goto L_08840CF4;
    case 164u: goto L_08840CFC;
    case 165u: goto L_08840D0C;
    case 166u: goto L_08840D18;
    case 167u: goto L_08840D24;
    case 168u: goto L_08840D30;
    case 169u: goto L_08840D3C;
    case 170u: goto L_08840D48;
    case 171u: goto L_08840D54;
    case 172u: goto L_08840D60;
    case 173u: goto L_08840D6C;
    case 174u: goto L_08840D94;
    case 175u: goto L_08840DA0;
    case 176u: goto L_08840DA8;
    case 177u: goto L_08840DB4;
    case 178u: goto L_08840DC0;
    case 179u: goto L_08840DD8;
    case 180u: goto L_08840DE4;
    case 181u: goto L_08840DF4;
    case 182u: goto L_08840DFC;
    case 183u: goto L_08840E18;
    case 184u: goto L_08840E24;
    case 185u: goto L_08840E30;
    case 186u: goto L_08840E40;
    case 187u: goto L_08840E48;
    case 188u: goto L_08840E54;
    case 189u: goto L_08840E68;
    case 190u: goto L_08840EAC;
    case 191u: goto L_08840ED8;
    case 192u: goto L_08840EE0;
    case 193u: goto L_08840F54;
    case 194u: goto L_08840F60;
    case 195u: goto L_08840F68;
    case 196u: goto L_08840FDC;
    case 197u: goto L_08840FE4;
    case 198u: goto L_08840FFC;
    case 199u: goto L_0884101C;
    case 200u: goto L_08841024;
    case 201u: goto L_08841030;
    case 202u: goto L_08841038;
    case 203u: goto L_088410AC;
    case 204u: goto L_088410B8;
    case 205u: goto L_088410C0;
    case 206u: goto L_08841134;
    case 207u: goto L_0884113C;
    case 208u: goto L_08841148;
    case 209u: goto L_08841150;
    case 210u: goto L_0884119C;
    case 211u: goto L_088411A8;
    case 212u: goto L_088411B0;
    case 213u: goto L_088411FC;
    case 214u: goto L_08841204;
    case 215u: goto L_08841210;
    case 216u: goto L_08841218;
    case 217u: goto L_08841230;
    case 218u: goto L_0884123C;
    case 219u: goto L_08841244;
    case 220u: goto L_0884125C;
    case 221u: goto L_08841268;
    case 222u: goto L_08841270;
    case 223u: goto L_0884127C;
    case 224u: goto L_08841288;
    case 225u: goto L_08841294;
    case 226u: goto L_088412A0;
    case 227u: goto L_088412AC;
    case 228u: goto L_088412B8;
    case 229u: goto L_088412C4;
    case 230u: goto L_088412D0;
    case 231u: goto L_088412F8;
    case 232u: goto L_08841304;
    case 233u: goto L_0884130C;
    case 234u: goto L_08841318;
    case 235u: goto L_08841324;
    case 236u: goto L_08841330;
    case 237u: goto L_0884133C;
    case 238u: goto L_08841348;
    case 239u: goto L_08841354;
    case 240u: goto L_08841360;
    case 241u: goto L_0884136C;
    case 242u: goto L_08841394;
    case 243u: goto L_0884139C;
    case 244u: goto L_088413A4;
    case 245u: goto L_088413B0;
    case 246u: goto L_088413B8;
    case 247u: goto L_088413C4;
    case 248u: goto L_088413E8;
    case 249u: goto L_088413F0;
    case 250u: goto L_088413F4;
    case 251u: goto L_0884144C;
    case 252u: goto L_08841454;
    case 253u: goto L_0884145C;
    case 254u: goto L_08841464;
    case 255u: goto L_088414C8;
    case 256u: goto L_088414D0;
    case 257u: goto L_088414DC;
    case 258u: goto L_088414E4;
    case 259u: goto L_08841548;
    case 260u: goto L_08841550;
    case 261u: goto L_0884155C;
    case 262u: goto L_08841564;
    case 263u: goto L_088415C8;
    case 264u: goto L_0884161C;
    case 265u: goto L_08841628;
    case 266u: goto L_08841630;
    case 267u: goto L_08841638;
    case 268u: goto L_08841640;
    case 269u: goto L_0884169C;
    case 270u: goto L_088416A4;
    case 271u: goto L_088416B0;
    case 272u: goto L_088416B8;
    case 273u: goto L_08841718;
    case 274u: goto L_08841720;
    case 275u: goto L_0884172C;
    case 276u: goto L_08841734;
    case 277u: goto L_08841790;
    case 278u: goto L_08841798;
    case 279u: goto L_088417A4;
    case 280u: goto L_088417AC;
    case 281u: goto L_088417B4;
    case 282u: goto L_088417BC;
    case 283u: goto L_08841818;
    case 284u: goto L_08841820;
    case 285u: goto L_0884182C;
    case 286u: goto L_08841834;
    case 287u: goto L_08841894;
    case 288u: goto L_0884189C;
    case 289u: goto L_088418A8;
    case 290u: goto L_088418B0;
    case 291u: goto L_0884190C;
    case 292u: goto L_08841914;
    case 293u: goto L_0884191C;
    case 294u: goto L_08841924;
    case 295u: goto L_08841930;
    case 296u: goto L_08841938;
    case 297u: goto L_08841940;
    case 298u: goto L_08841948;
    case 299u: goto L_08841950;
    case 300u: goto L_08841958;
    case 301u: goto L_08841960;
    case 302u: goto L_08841968;
    case 303u: goto L_08841974;
    case 304u: goto L_0884197C;
    case 305u: goto L_08841984;
    case 306u: goto L_0884198C;
    case 307u: goto L_088419B4;
    case 308u: goto L_088419BC;
    case 309u: goto L_088419C8;
    case 310u: goto L_088419D4;
    case 311u: goto L_088419E0;
    case 312u: goto L_08841A10;
    case 313u: goto L_08841A18;
    case 314u: goto L_08841A20;
    case 315u: goto L_08841A2C;
    case 316u: goto L_08841A38;
    case 317u: goto L_08841A44;
    case 318u: goto L_08841A74;
    case 319u: goto L_08841A80;
    case 320u: goto L_08841A90;
    case 321u: goto L_08841AA4;
    case 322u: goto L_08841AB4;
    case 323u: goto L_08841AC0;
    case 324u: goto L_08841ACC;
    case 325u: goto L_08841AD4;
    case 326u: goto L_08841ADC;
    case 327u: goto L_08841AE4;
    case 328u: goto L_08841AFC;
    case 329u: goto L_08841B08;
    case 330u: goto L_08841B24;
    case 331u: goto L_08841B54;
    case 332u: goto L_08841B5C;
    case 333u: goto L_08841B68;
    case 334u: goto L_08841B84;
    case 335u: goto L_08841BB8;
    case 336u: goto L_08841BC0;
    case 337u: goto L_08841BC8;
    case 338u: goto L_08841BD4;
    case 339u: goto L_08841BDC;
    case 340u: goto L_08841BE8;
    case 341u: goto L_08841BF4;
    case 342u: goto L_08841BFC;
    case 343u: goto L_08841C08;
    case 344u: goto L_08841C10;
    case 345u: goto L_08841C1C;
    case 346u: goto L_08841C28;
    case 347u: goto L_08841C40;
    case 348u: goto L_08841C4C;
    case 349u: goto L_08841C5C;
    case 350u: goto L_08841C64;
    case 351u: goto L_08841C80;
    case 352u: goto L_08841C8C;
    case 353u: goto L_08841CA4;
    case 354u: goto L_08841CBC;
    case 355u: goto L_08841CCC;
    case 356u: goto L_08841CDC;
    case 357u: goto L_08841CEC;
    case 358u: goto L_08841CF8;
    case 359u: goto L_08841D00;
    case 360u: goto L_08841D08;
    case 361u: goto L_08841D14;
    case 362u: goto L_08841D28;
    case 363u: goto L_08841D40;
    case 364u: goto L_08841D4C;
    case 365u: goto L_08841D54;
    case 366u: goto L_08841DBC;
    case 367u: goto L_08841DC8;
    case 368u: goto L_08841DD0;
    case 369u: goto L_08841E38;
    case 370u: goto L_08841E44;
    case 371u: goto L_08841E4C;
    case 372u: goto L_08841E58;
    case 373u: goto L_08841E64;
    case 374u: goto L_08841E70;
    case 375u: goto L_08841E7C;
    case 376u: goto L_08841E88;
    case 377u: goto L_08841E94;
    case 378u: goto L_08841EA0;
    case 379u: goto L_08841EAC;
    case 380u: goto L_08841ED4;
    case 381u: goto L_08841EE0;
    case 382u: goto L_08841EE8;
    case 383u: goto L_08841EF4;
    case 384u: goto L_08841F00;
    case 385u: goto L_08841F0C;
    case 386u: goto L_08841F18;
    case 387u: goto L_08841F24;
    case 388u: goto L_08841F30;
    case 389u: goto L_08841F3C;
    case 390u: goto L_08841F48;
    case 391u: goto L_08841F70;
    case 392u: goto L_08841F78;
    case 393u: goto L_08841F84;
    case 394u: goto L_08841F8C;
    case 395u: goto L_08841FF4;
    case 396u: goto L_08842000;
    case 397u: goto L_08842008;
    case 398u: goto L_08842070;
    case 399u: goto L_0884207C;
    case 400u: goto L_08842084;
    case 401u: goto L_08842090;
    case 402u: goto L_0884209C;
    case 403u: goto L_088420A8;
    case 404u: goto L_088420B4;
    case 405u: goto L_088420C0;
    case 406u: goto L_088420CC;
    case 407u: goto L_088420D8;
    case 408u: goto L_088420E4;
    case 409u: goto L_0884210C;
    case 410u: goto L_08842118;
    case 411u: goto L_08842120;
    case 412u: goto L_0884212C;
    case 413u: goto L_08842138;
    case 414u: goto L_08842144;
    case 415u: goto L_08842150;
    case 416u: goto L_0884215C;
    case 417u: goto L_08842168;
    case 418u: goto L_08842174;
    case 419u: goto L_08842180;
    case 420u: goto L_088421A8;
    case 421u: goto L_088421B0;
    case 422u: goto L_088421BC;
    case 423u: goto L_088421C4;
    case 424u: goto L_088421EC;
    case 425u: goto L_088421F8;
    case 426u: goto L_08842200;
    case 427u: goto L_08842228;
    case 428u: goto L_08842230;
    case 429u: goto L_0884223C;
    case 430u: goto L_08842244;
    case 431u: goto L_0884226C;
    case 432u: goto L_08842278;
    case 433u: goto L_08842280;
    case 434u: goto L_088422A8;
    case 435u: goto L_088422B4;
    case 436u: goto L_088422BC;
    case 437u: goto L_088422C8;
    case 438u: goto L_088422D0;
    case 439u: goto L_088422D8;
    case 440u: goto L_088422E4;
    case 441u: goto L_088422F0;
    case 442u: goto L_088422F8;
    case 443u: goto L_08842304;
    case 444u: goto L_08842310;
    case 445u: goto L_08842318;
    case 446u: goto L_08842338;
    case 447u: goto L_08842340;
    case 448u: goto L_0884235C;
    case 449u: goto L_08842374;
    case 450u: goto L_08842380;
    case 451u: goto L_0884238C;
    case 452u: goto L_088423A0;
    case 453u: goto L_088423AC;
    case 454u: goto L_088423B8;
    case 455u: goto L_088423C4;
    case 456u: goto L_088423DC;
    case 457u: goto L_088423E4;
    case 458u: goto L_088423EC;
    case 459u: goto L_08842400;
    case 460u: goto L_08842404;
    case 461u: goto L_08842414;
    case 462u: goto L_0884243C;
    case 463u: goto L_0884247C;
    case 464u: goto L_08842494;
    case 465u: goto L_088424A0;
    case 466u: goto L_088424A8;
    case 467u: goto L_088424B4;
    case 468u: goto L_088424BC;
    case 469u: goto L_088424C4;
    case 470u: goto L_088424DC;
    case 471u: goto L_088424E4;
    case 472u: goto L_08842500;
    case 473u: goto L_08842508;
    case 474u: goto L_08842510;
    case 475u: goto L_0884251C;
    case 476u: goto L_08842528;
    case 477u: goto L_08842534;
    case 478u: goto L_08842540;
    case 479u: goto L_08842548;
    case 480u: goto L_08842558;
    case 481u: goto L_08842564;
    case 482u: goto L_08842570;
    case 483u: goto L_0884257C;
    case 484u: goto L_08842588;
    case 485u: goto L_08842590;
    case 486u: goto L_0884259C;
    case 487u: goto L_088425C0;
    case 488u: goto L_088425D0;
    case 489u: goto L_088425D8;
    case 490u: goto L_088425E4;
    case 491u: goto L_088425F8;
    case 492u: goto L_08842604;
    case 493u: goto L_08842614;
    case 494u: goto L_08842634;
    case 495u: goto L_0884263C;
    case 496u: goto L_08842648;
    case 497u: goto L_08842650;
    case 498u: goto L_08842658;
    case 499u: goto L_08842664;
    case 500u: goto L_0884267C;
    case 501u: goto L_08842684;
    case 502u: goto L_08842690;
    case 503u: goto L_088426A4;
    case 504u: goto L_088426B8;
    case 505u: goto L_088426C0;
    case 506u: goto L_088426CC;
    case 507u: goto L_088426E8;
    case 508u: goto L_088426F8;
    case 509u: goto L_08842710;
    case 510u: goto L_08842720;
    case 511u: goto L_08842730;
    case 512u: goto L_08842764;
    case 513u: goto L_0884276C;
    case 514u: goto L_08842774;
    case 515u: goto L_08842780;
    case 516u: goto L_088427A4;
    case 517u: goto L_088427B4;
    case 518u: goto L_088427CC;
    case 519u: goto L_088427DC;
    case 520u: goto L_088427EC;
    case 521u: goto L_0884280C;
    case 522u: goto L_0884281C;
    case 523u: goto L_0884282C;
    case 524u: goto L_08842844;
    case 525u: goto L_08842874;
    case 526u: goto L_0884287C;
    case 527u: goto L_08842894;
    case 528u: goto L_088428AC;
    case 529u: goto L_088428B8;
    case 530u: goto L_088428C8;
    case 531u: goto L_088428F4;
    case 532u: goto L_08842904;
    case 533u: goto L_0884290C;
    case 534u: goto L_08842918;
    case 535u: goto L_08842924;
    case 536u: goto L_0884292C;
    case 537u: goto L_08842938;
    case 538u: goto L_08842954;
    case 539u: goto L_08842964;
    case 540u: goto L_08842978;
    case 541u: goto L_08842980;
    case 542u: goto L_0884298C;
    case 543u: goto L_08842998;
    case 544u: goto L_088429AC;
    case 545u: goto L_088429B4;
    case 546u: goto L_088429BC;
    case 547u: goto L_088429CC;
    case 548u: goto L_088429D4;
    case 549u: goto L_088429E0;
    case 550u: goto L_088429F8;
    case 551u: goto L_08842A00;
    case 552u: goto L_08842A14;
    case 553u: goto L_08842A44;
    case 554u: goto L_08842A4C;
    case 555u: goto L_08842A6C;
    case 556u: goto L_08842A74;
    case 557u: goto L_08842A7C;
    case 558u: goto L_08842A88;
    case 559u: goto L_08842AA0;
    case 560u: goto L_08842AA8;
    case 561u: goto L_08842AB4;
    case 562u: goto L_08842AC8;
    case 563u: goto L_08842ADC;
    case 564u: goto L_08842AE4;
    case 565u: goto L_08842AF0;
    case 566u: goto L_08842B0C;
    case 567u: goto L_08842B1C;
    case 568u: goto L_08842B34;
    case 569u: goto L_08842B44;
    case 570u: goto L_08842B54;
    case 571u: goto L_08842B88;
    case 572u: goto L_08842B90;
    case 573u: goto L_08842B98;
    case 574u: goto L_08842BA4;
    case 575u: goto L_08842BC8;
    case 576u: goto L_08842BD8;
    case 577u: goto L_08842BF0;
    case 578u: goto L_08842C00;
    case 579u: goto L_08842C10;
    case 580u: goto L_08842C30;
    case 581u: goto L_08842C40;
    case 582u: goto L_08842C50;
    case 583u: goto L_08842C68;
    case 584u: goto L_08842C98;
    case 585u: goto L_08842CA0;
    case 586u: goto L_08842CB8;
    case 587u: goto L_08842CD0;
    case 588u: goto L_08842CDC;
    case 589u: goto L_08842CEC;
    case 590u: goto L_08842D14;
    case 591u: goto L_08842D24;
    case 592u: goto L_08842D2C;
    case 593u: goto L_08842D38;
    case 594u: goto L_08842D44;
    case 595u: goto L_08842D4C;
    case 596u: goto L_08842D58;
    case 597u: goto L_08842D74;
    case 598u: goto L_08842D84;
    case 599u: goto L_08842D98;
    case 600u: goto L_08842DA0;
    case 601u: goto L_08842DAC;
    case 602u: goto L_08842DB8;
    case 603u: goto L_08842DC8;
    case 604u: goto L_08842DD0;
    case 605u: goto L_08842DDC;
    case 606u: goto L_08842DE8;
    case 607u: goto L_08842DF8;
    case 608u: goto L_08842E00;
    case 609u: goto L_08842E0C;
    case 610u: goto L_08842E20;
    case 611u: goto L_08842E2C;
    case 612u: goto L_08842E3C;
    case 613u: goto L_08842E5C;
    case 614u: goto L_08842E64;
    case 615u: goto L_08842E70;
    case 616u: goto L_08842E78;
    case 617u: goto L_08842E80;
    case 618u: goto L_08842E8C;
    case 619u: goto L_08842EA4;
    case 620u: goto L_08842EAC;
    case 621u: goto L_08842EB8;
    case 622u: goto L_08842ECC;
    case 623u: goto L_08842ED4;
    case 624u: goto L_08842EEC;
    case 625u: goto L_08842F04;
    case 626u: goto L_08842F10;
    case 627u: goto L_08842F20;
    case 628u: goto L_08842F4C;
    case 629u: goto L_08842F5C;
    case 630u: goto L_08842F64;
    case 631u: goto L_08842F70;
    case 632u: goto L_08842F7C;
    case 633u: goto L_08842F84;
    case 634u: goto L_08842F90;
    case 635u: goto L_08842FAC;
    case 636u: goto L_08842FBC;
    case 637u: goto L_08842FD0;
    case 638u: goto L_08842FD8;
    case 639u: goto L_08842FE4;
    case 640u: goto L_08842FF0;
    case 641u: goto L_08843000;
    case 642u: goto L_08843008;
    case 643u: goto L_08843014;
    case 644u: goto L_08843020;
    case 645u: goto L_08843030;
    case 646u: goto L_08843038;
    case 647u: goto L_08843044;
    case 648u: goto L_0884305C;
    case 649u: goto L_08843064;
    case 650u: goto L_08843078;
    case 651u: goto L_088430A8;
    case 652u: goto L_088430B0;
    case 653u: goto L_088430D0;
    case 654u: goto L_088430D8;
    case 655u: goto L_088430E0;
    case 656u: goto L_088430EC;
    case 657u: goto L_08843104;
    case 658u: goto L_0884310C;
    case 659u: goto L_08843118;
    case 660u: goto L_0884312C;
    case 661u: goto L_08843134;
    case 662u: goto L_0884314C;
    case 663u: goto L_08843164;
    case 664u: goto L_08843170;
    case 665u: goto L_08843180;
    case 666u: goto L_088431A8;
    case 667u: goto L_088431B8;
    case 668u: goto L_088431C0;
    case 669u: goto L_088431CC;
    case 670u: goto L_088431D8;
    case 671u: goto L_088431E0;
    case 672u: goto L_088431EC;
    case 673u: goto L_08843208;
    case 674u: goto L_08843218;
    case 675u: goto L_0884322C;
    case 676u: goto L_08843234;
    case 677u: goto L_08843240;
    case 678u: goto L_0884324C;
    case 679u: goto L_0884325C;
    case 680u: goto L_08843264;
    case 681u: goto L_08843270;
    case 682u: goto L_08843278;
    case 683u: goto L_08843284;
    case 684u: goto L_08843294;
    case 685u: goto L_0884329C;
    case 686u: goto L_088432A8;
    case 687u: goto L_088432BC;
    case 688u: goto L_088432C8;
    case 689u: goto L_088432DC;
    case 690u: goto L_08843300;
    case 691u: goto L_08843308;
    case 692u: goto L_0884331C;
    case 693u: goto L_0884332C;
    case 694u: goto L_08843338;
    case 695u: goto L_08843344;
    case 696u: goto L_0884334C;
    case 697u: goto L_08843358;
    case 698u: goto L_08843364;
    case 699u: goto L_08843374;
    case 700u: goto L_08843380;
    case 701u: goto L_0884338C;
    case 702u: goto L_08843398;
    case 703u: goto L_088433A4;
    case 704u: goto L_088433AC;
    case 705u: goto L_088433B4;
    case 706u: goto L_088433C8;
    case 707u: goto L_088433E4;
    case 708u: goto L_088433FC;
    case 709u: goto L_0884341C;
    case 710u: goto L_08843434;
    case 711u: goto L_08843440;
    case 712u: goto L_0884344C;
    case 713u: goto L_08843458;
    case 714u: goto L_08843460;
    case 715u: goto L_0884347C;
    case 716u: goto L_0884348C;
    case 717u: goto L_08843498;
    case 718u: goto L_088434A4;
    case 719u: goto L_088434C0;
    case 720u: goto L_088434D4;
    case 721u: goto L_088434E0;
    case 722u: goto L_088434E8;
    case 723u: goto L_088434F0;
    case 724u: goto L_08843500;
    case 725u: goto L_0884350C;
    case 726u: goto L_0884351C;
    case 727u: goto L_08843528;
    case 728u: goto L_08843534;
    case 729u: goto L_08843554;
    case 730u: goto L_08843560;
    case 731u: goto L_0884356C;
    case 732u: goto L_08843578;
    case 733u: goto L_08843580;
    case 734u: goto L_08843588;
    case 735u: goto L_08843598;
    case 736u: goto L_088435A0;
    case 737u: goto L_088435AC;
    case 738u: goto L_088435D4;
    case 739u: goto L_088435E0;
    case 740u: goto L_088435EC;
    case 741u: goto L_088435F8;
    case 742u: goto L_08843600;
    case 743u: goto L_08843608;
    case 744u: goto L_08843614;
    case 745u: goto L_0884361C;
    case 746u: goto L_08843628;
    case 747u: goto L_08843634;
    case 748u: goto L_08843644;
    case 749u: goto L_08843650;
    case 750u: goto L_0884365C;
    case 751u: goto L_08843668;
    case 752u: goto L_08843674;
    case 753u: goto L_0884367C;
    case 754u: goto L_08843688;
    case 755u: goto L_08843694;
    case 756u: goto L_088436A4;
    case 757u: goto L_088436B0;
    case 758u: goto L_088436BC;
    case 759u: goto L_088436CC;
    case 760u: goto L_088436D8;
    case 761u: goto L_088436E0;
    case 762u: goto L_088436EC;
    case 763u: goto L_088436F8;
    case 764u: goto L_08843708;
    case 765u: goto L_08843714;
    case 766u: goto L_08843720;
    case 767u: goto L_0884372C;
    case 768u: goto L_08843738;
    case 769u: goto L_08843740;
    case 770u: goto L_0884374C;
    case 771u: goto L_08843758;
    case 772u: goto L_08843768;
    case 773u: goto L_08843774;
    case 774u: goto L_08843780;
    case 775u: goto L_08843790;
    case 776u: goto L_0884379C;
    case 777u: goto L_088437A4;
    case 778u: goto L_088437AC;
    case 779u: goto L_088437B8;
    case 780u: goto L_088437C8;
    case 781u: goto L_088437D0;
    case 782u: goto L_088437DC;
    case 783u: goto L_088437FC;
    case 784u: goto L_0884380C;
    case 785u: goto L_08843818;
    case 786u: goto L_08843824;
    case 787u: goto L_08843834;
    case 788u: goto L_08843858;
    case 789u: goto L_08843860;
    case 790u: goto L_08843874;
    case 791u: goto L_0884387C;
    case 792u: goto L_08843884;
    case 793u: goto L_08843890;
    case 794u: goto L_088438A8;
    case 795u: goto L_088438B0;
    case 796u: goto L_088438BC;
    case 797u: goto L_088438D0;
    case 798u: goto L_088438E4;
    case 799u: goto L_088438EC;
    case 800u: goto L_088438F8;
    case 801u: goto L_08843914;
    case 802u: goto L_08843924;
    case 803u: goto L_0884393C;
    case 804u: goto L_0884394C;
    case 805u: goto L_0884395C;
    case 806u: goto L_08843990;
    case 807u: goto L_08843998;
    case 808u: goto L_088439A0;
    case 809u: goto L_088439AC;
    case 810u: goto L_088439D0;
    case 811u: goto L_088439E0;
    case 812u: goto L_088439F8;
    case 813u: goto L_08843A08;
    case 814u: goto L_08843A18;
    case 815u: goto L_08843A38;
    case 816u: goto L_08843A48;
    case 817u: goto L_08843A58;
    case 818u: goto L_08843A70;
    case 819u: goto L_08843AA0;
    case 820u: goto L_08843AA8;
    case 821u: goto L_08843AC0;
    case 822u: goto L_08843AD8;
    case 823u: goto L_08843AE4;
    case 824u: goto L_08843AF4;
    case 825u: goto L_08843B20;
    case 826u: goto L_08843B30;
    case 827u: goto L_08843B38;
    case 828u: goto L_08843B44;
    case 829u: goto L_08843B50;
    case 830u: goto L_08843B58;
    case 831u: goto L_08843B64;
    case 832u: goto L_08843B80;
    case 833u: goto L_08843B90;
    case 834u: goto L_08843BA4;
    case 835u: goto L_08843BAC;
    case 836u: goto L_08843BB8;
    case 837u: goto L_08843BC4;
    case 838u: goto L_08843BD8;
    case 839u: goto L_08843BE0;
    case 840u: goto L_08843BE8;
    case 841u: goto L_08843BF8;
    case 842u: goto L_08843C00;
    case 843u: goto L_08843C0C;
    case 844u: goto L_08843C2C;
    case 845u: goto L_08843C3C;
    case 846u: goto L_08843C48;
    case 847u: goto L_08843C54;
    case 848u: goto L_08843C78;
    case 849u: goto L_08843C9C;
    case 850u: goto L_08843CA4;
    case 851u: goto L_08843CC8;
    case 852u: goto L_08843CD0;
    case 853u: goto L_08843CD8;
    case 854u: goto L_08843CE4;
    case 855u: goto L_08843CFC;
    case 856u: goto L_08843D04;
    case 857u: goto L_08843D10;
    case 858u: goto L_08843D24;
    case 859u: goto L_08843D34;
    case 860u: goto L_08843D3C;
    case 861u: goto L_08843D48;
    case 862u: goto L_08843D64;
    case 863u: goto L_08843D74;
    case 864u: goto L_08843D8C;
    case 865u: goto L_08843D9C;
    case 866u: goto L_08843DAC;
    case 867u: goto L_08843DE0;
    case 868u: goto L_08843DE8;
    case 869u: goto L_08843DF0;
    case 870u: goto L_08843DFC;
    case 871u: goto L_08843E20;
    case 872u: goto L_08843E30;
    case 873u: goto L_08843E48;
    case 874u: goto L_08843E58;
    case 875u: goto L_08843E68;
    case 876u: goto L_08843E88;
    case 877u: goto L_08843E98;
    case 878u: goto L_08843EA8;
    case 879u: goto L_08843EC0;
    case 880u: goto L_08843EF0;
    case 881u: goto L_08843EF8;
    case 882u: goto L_08843F10;
    case 883u: goto L_08843F28;
    case 884u: goto L_08843F34;
    case 885u: goto L_08843F44;
    case 886u: goto L_08843F6C;
    case 887u: goto L_08843F7C;
    case 888u: goto L_08843F84;
    case 889u: goto L_08843F90;
    case 890u: goto L_08843F9C;
    case 891u: goto L_08843FA4;
    case 892u: goto L_08843FB0;
    case 893u: goto L_08843FCC;
    case 894u: goto L_08843FDC;
    case 895u: goto L_08843FF0;
    case 896u: goto L_08843FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08840000:
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08840064;
      }
      goto L_08840008;
    }
L_08840008:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0884005Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 3u, 0x0884005Cu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884005Cu) goto L_0884005C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884005C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884007C;
      }
      goto L_08840064;
    }
L_08840064:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x0884007Cu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 5u, 0x0884007Cu, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884007Cu) goto L_0884007C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884007C:
    aot_gpr_31 = (0x08840084u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840084u) goto L_08840084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840084:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08840090;
    }
L_08840090:
    aot_gpr_31 = (0x08840098u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840098u) goto L_08840098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840098:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400A4;
    }
L_088400A4:
    aot_gpr_31 = (0x088400ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400ACu) goto L_088400AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400AC:
    aot_gpr_4 = (0u | 246u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400B8;
    }
L_088400B8:
    aot_gpr_31 = (0x088400C0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400C0u) goto L_088400C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400C0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400CC;
    }
L_088400CC:
    aot_gpr_31 = (0x088400D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400D4u) goto L_088400D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400D4:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400E0;
    }
L_088400E0:
    aot_gpr_31 = (0x088400E8u);
    ctx.gpr[16] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 16u, 0x088400E8u, 0x08833F6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 859u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 859u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400E8u) goto L_088400E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088400E8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 21 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_088400F4;
L_088400F4:
    aot_gpr_31 = (0x088400FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 18u, 0x088400FCu, 0x08833F6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 859u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 859u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400FCu) goto L_088400FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088400FC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0884012C;
      }
      goto L_08840108;
    }
L_08840108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_31 = (0x08840120u);
    ctx.gpr[18] = (aot_gpr_4 & 63u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 20u, 0x08840120u, 0x08833F74u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 860u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 860u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 860u, 0x08833F74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840120u) goto L_08840120;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840120:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_2) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_0884012C;
L_0884012C:
    aot_gpr_31 = (0x08840134u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 22u, 0x08840134u, 0x08833F6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 859u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 859u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840134u) goto L_08840134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840134:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 6 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_08840140;
L_08840140:
    aot_gpr_31 = (0x08840148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 24u, 0x08840148u, 0x08833F6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 859u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 859u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840148u) goto L_08840148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840148:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 7 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
        goto L_08840180;
    }
    goto L_08840154;
L_08840154:
    aot_gpr_31 = (0x0884015Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 26u, 0x0884015Cu, 0x08833F74u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 860u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 860u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 860u, 0x08833F74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884015Cu) goto L_0884015C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884015C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_0884017C;
L_0884017C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    goto L_08840180;
L_08840180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088401A8;
      }
      goto L_0884019C;
    }
L_0884019C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088401A8;
L_088401A8:
    aot_gpr_4 = (18243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20480u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_088401C8;
L_088401C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088401F4;
      }
      goto L_088401E8;
    }
L_088401E8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088401F4;
L_088401F4:
    aot_gpr_4 = (18243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20480u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0884021C;
      }
      goto L_08840214;
    }
L_08840214:
    ctx.gpr[16] = (0u | 1u);
    goto L_08840218;
L_08840218:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0884021C;
L_0884021C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840230;
    }
L_08840230:
    aot_gpr_31 = (0x08840238u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840238u) goto L_08840238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840238:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840244;
    }
L_08840244:
    aot_gpr_31 = (0x0884024Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884024Cu) goto L_0884024C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884024C:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08840278;
      }
      goto L_08840258;
    }
L_08840258:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[16] & 1u);
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840278;
    }
L_08840278:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840288;
    }
L_08840288:
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x08840294u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840294u) goto L_08840294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840294:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088402A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402A0u) goto L_088402A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088402B4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2112));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 46u, 0x088402B4u, 0x08830240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 35u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 35u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402B4u) goto L_088402B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088402B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088402C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402C0u) goto L_088402C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402C0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088402CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402CCu) goto L_088402CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088402E0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2116));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 49u, 0x088402E0u, 0x08830240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 35u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 35u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402E0u) goto L_088402E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088402E0:
    aot_fpr_12 = ctx.fpr[22] + ctx.fpr[0];
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_088402FC;
    }
L_088402FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0884030C;
L_0884030C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884031Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 52u, 0x0884031Cu, 0x08830E2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 196u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 196u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884031Cu) goto L_0884031C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884031C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08840344;
      }
      goto L_08840324;
    }
L_08840324:
    aot_gpr_31 = (0x0884032Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 54u, 0x0884032Cu, 0x08830890u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 120u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 120u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884032Cu) goto L_0884032C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884032C:
    aot_gpr_4 = (aot_gpr_2 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08840340;
      }
      goto L_08840338;
    }
L_08840338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08840344;
      }
      goto L_08840340;
    }
L_08840340:
    ctx.gpr[16] = (0u | 1u);
    goto L_08840344;
L_08840344:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08840350u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 58u, 0x08840350u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840350u) goto L_08840350;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840350:
    { const bool branch_taken = aot_gpr_2 != aot_gpr_17;
      if (branch_taken) {
          goto L_0884038C;
      }
      goto L_08840358;
    }
L_08840358:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0884038C;
      }
      goto L_08840388;
    }
L_08840388:
    ctx.gpr[19] = (0u | 1u);
    goto L_0884038C;
L_0884038C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088403B8;
      }
      goto L_0884039C;
    }
L_0884039C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088403B8;
      }
      goto L_088403AC;
    }
L_088403AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(627)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088403C8;
      }
      goto L_088403B8;
    }
L_088403B8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088403C8;
      }
      goto L_088403C0;
    }
L_088403C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08841BC0;
      }
      goto L_088403C8;
    }
L_088403C8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08841BC0;
      }
      goto L_088403D0;
    }
L_088403D0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2128));
    aot_gpr_31 = (0x088403E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088403E0u) goto L_088403E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088403E0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x088403F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088403F0u) goto L_088403F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088403F0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840400u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 70u, 0x08840400u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840400u) goto L_08840400;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840400:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884040Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 71u, 0x0884040Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884040Cu) goto L_0884040C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884040C:
    aot_gpr_31 = (0x08840414u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 72u, 0x08840414u, 0x08830634u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 82u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 82u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 82u, 0x08830634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840414u) goto L_08840414;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840414:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_12)) && aot_fpr_20 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08840448;
      }
      goto L_0884042C;
    }
L_0884042C:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_31 = (0x08840440u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 74u, 0x08840440u, 0x08830678u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 85u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 85u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 85u, 0x08830678u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840440u) goto L_08840440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840440:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884046C;
      }
      goto L_08840448;
    }
L_08840448:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2240));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08840460u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840460u) goto L_08840460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840460:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    aot_gpr_31 = (0x0884046Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 77u, 0x0884046Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884046Cu) goto L_0884046C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884046C:
    aot_gpr_31 = (0x08840474u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840474u) goto L_08840474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840474:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    aot_gpr_31 = (0x08840480u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 79u, 0x08840480u, 0x088302B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840480u) goto L_08840480;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840480:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088404A8;
      }
      goto L_0884049C;
    }
L_0884049C:
    aot_gpr_4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088404C8;
      }
      goto L_088404A8;
    }
L_088404A8:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088404C8;
      }
      goto L_088404C0;
    }
L_088404C0:
    aot_gpr_4 = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_088404C8;
L_088404C8:
    aot_gpr_31 = (0x088404D0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 84u, 0x088404D0u, 0x08830508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 70u, 0x08830508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404D0u) goto L_088404D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088404D0:
    aot_gpr_31 = (0x088404D8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 85u, 0x088404D8u, 0x088305B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 76u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 76u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404D8u) goto L_088404D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088404D8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2208));
    aot_gpr_31 = (0x088404E8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404E8u) goto L_088404E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088404E8:
    aot_gpr_31 = (0x088404F0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 87u, 0x088404F0u, 0x08830840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 114u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 114u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404F0u) goto L_088404F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088404F0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088404FCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 88u, 0x088404FCu, 0x08830DB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 184u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 184u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404FCu) goto L_088404FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088404FC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840508u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 89u, 0x08840508u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840508u) goto L_08840508;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840508:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(2128));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08840520u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 90u, 0x08840520u, 0x08830288u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 39u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 39u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840520u) goto L_08840520;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840520:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0884052Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 91u, 0x0884052Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884052Cu) goto L_0884052C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884052C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884053Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 92u, 0x0884053Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884053Cu) goto L_0884053C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884053C:
    aot_gpr_31 = (0x08840544u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 93u, 0x08840544u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840544u) goto L_08840544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840544:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2208)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840560u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 94u, 0x08840560u, 0x0883032Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840560u) goto L_08840560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840560:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884056Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 95u, 0x0884056Cu, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884056Cu) goto L_0884056C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884056C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08840578u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840578u) goto L_08840578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840578:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08840588u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 97u, 0x08840588u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840588u) goto L_08840588;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840588:
    aot_gpr_31 = (0x08840590u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840590u) goto L_08840590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840590:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0884059Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 99u, 0x0884059Cu, 0x088302B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884059Cu) goto L_0884059C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884059C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08840BC4;
      }
      goto L_088405B0;
    }
L_088405B0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[6] = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088405F4;
      }
      goto L_088405E4;
    }
L_088405E4:
    aot_gpr_31 = (0x088405ECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 102u, 0x088405ECu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088405ECu) goto L_088405EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088405EC:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_2;
      if (branch_taken) {
          goto L_08840BC4;
      }
      goto L_088405F4;
    }
L_088405F4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[28] = ctx.fpr[28] + aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (49016u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_08840640;
    }
L_08840640:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_08840654;
    }
L_08840654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08840660u);
    aot_gpr_5 = (64u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 106u, 0x08840660u, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840660u) goto L_08840660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840660:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08840768;
      }
      goto L_08840668;
    }
L_08840668:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840674u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840674u) goto L_08840674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840674:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088406E4;
      }
      goto L_0884067C;
    }
L_0884067C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088406E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 110u, 0x088406E4u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088406E4u) goto L_088406E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088406E4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088406F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088406F0u) goto L_088406F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088406F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_088406F8;
    }
L_088406F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(7));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840760u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 113u, 0x08840760u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840760u) goto L_08840760;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840760:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_08840768;
    }
L_08840768:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840774u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840774u) goto L_08840774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840774:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088407E4;
      }
      goto L_0884077C;
    }
L_0884077C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088407E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 117u, 0x088407E4u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088407E4u) goto L_088407E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088407E4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088407F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088407F0u) goto L_088407F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088407F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_088407F8;
    }
L_088407F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(7));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840860u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 120u, 0x08840860u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840860u) goto L_08840860;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840860:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08840AFC;
      }
      goto L_08840868;
    }
L_08840868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08840874u);
    aot_gpr_5 = (64u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 122u, 0x08840874u, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840874u) goto L_08840874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840874:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088409BC;
      }
      goto L_0884087C;
    }
L_0884087C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840888u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840888u) goto L_08840888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840888:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840918;
      }
      goto L_08840890;
    }
L_08840890:
    aot_gpr_4 = (17214u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840918u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 126u, 0x08840918u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840918u) goto L_08840918;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840918:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840924u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840924u) goto L_08840924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840924:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_0884092C;
    }
L_0884092C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (17214u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088409B4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 129u, 0x088409B4u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088409B4u) goto L_088409B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088409B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_088409BC;
    }
L_088409BC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088409C8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088409C8u) goto L_088409C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088409C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840A58;
      }
      goto L_088409D0;
    }
L_088409D0:
    aot_gpr_4 = (17234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (17219u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840A58u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 133u, 0x08840A58u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840A58u) goto L_08840A58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840A58:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840A64u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840A64u) goto L_08840A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840A64:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840A6C;
    }
L_08840A6C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (17234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (17219u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840AF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 136u, 0x08840AF4u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840AF4u) goto L_08840AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840AF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840AFC;
    }
L_08840AFC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840B08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840B08u) goto L_08840B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840B08:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840B5C;
      }
      goto L_08840B10;
    }
L_08840B10:
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840B5Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 140u, 0x08840B5Cu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840B5Cu) goto L_08840B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840B5C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840B68u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840B68u) goto L_08840B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840B68:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840B70;
    }
L_08840B70:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840BBCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 143u, 0x08840BBCu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840BBCu) goto L_08840BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840BBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840BC4;
    }
L_08840BC4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840BD0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840BD0u) goto L_08840BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840BD0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840C00;
      }
      goto L_08840BD8;
    }
L_08840BD8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08840C00u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 147u, 0x08840C00u, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C00u) goto L_08840C00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C00:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840C0Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C0Cu) goto L_08840C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C0C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840C14;
    }
L_08840C14:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08840C3Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 150u, 0x08840C3Cu, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C3Cu) goto L_08840C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C3C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840C48u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C48u) goto L_08840C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C48:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840CE8;
      }
      goto L_08840C50;
    }
L_08840C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08840CE8;
      }
      goto L_08840C60;
    }
L_08840C60:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2256));
    aot_gpr_31 = (0x08840C6Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 154u, 0x08840C6Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C6Cu) goto L_08840C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C6C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840C78u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 155u, 0x08840C78u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C78u) goto L_08840C78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C78:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2272));
    aot_gpr_31 = (0x08840C84u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 156u, 0x08840C84u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C84u) goto L_08840C84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C84:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840C90u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 157u, 0x08840C90u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C90u) goto L_08840C90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2288));
    aot_gpr_31 = (0x08840C9Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 158u, 0x08840C9Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C9Cu) goto L_08840C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840C9C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840CA8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CA8u) goto L_08840CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CA8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2304));
    aot_gpr_31 = (0x08840CB4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 160u, 0x08840CB4u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CB4u) goto L_08840CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840CB4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840CC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 161u, 0x08840CC0u, 0x08830D2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 174u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 174u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 174u, 0x08830D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CC0u) goto L_08840CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840CC0:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08840CE8u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 162u, 0x08840CE8u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CE8u) goto L_08840CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840CE8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840CF4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CF4u) goto L_08840CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CF4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840D94;
      }
      goto L_08840CFC;
    }
L_08840CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08840D94;
      }
      goto L_08840D0C;
    }
L_08840D0C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2320));
    aot_gpr_31 = (0x08840D18u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 166u, 0x08840D18u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D18u) goto L_08840D18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D18:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D24u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 167u, 0x08840D24u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D24u) goto L_08840D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D24:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2336));
    aot_gpr_31 = (0x08840D30u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 168u, 0x08840D30u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D30u) goto L_08840D30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D30:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D3Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 169u, 0x08840D3Cu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D3Cu) goto L_08840D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D3C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2352));
    aot_gpr_31 = (0x08840D48u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 170u, 0x08840D48u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D48u) goto L_08840D48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D48:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D54u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D54u) goto L_08840D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D54:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2368));
    aot_gpr_31 = (0x08840D60u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 172u, 0x08840D60u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D60u) goto L_08840D60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D60:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D6Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 173u, 0x08840D6Cu, 0x08830D2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 174u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 174u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 174u, 0x08830D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D6Cu) goto L_08840D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D6C:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08840D94u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 174u, 0x08840D94u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D94u) goto L_08840D94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840D94:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2224));
    aot_gpr_31 = (0x08840DA0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DA0u) goto L_08840DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DA0:
    aot_gpr_31 = (0x08840DA8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 176u, 0x08840DA8u, 0x08830840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 114u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 114u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DA8u) goto L_08840DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DA8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840DB4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 177u, 0x08840DB4u, 0x08830DB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 184u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 184u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DB4u) goto L_08840DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DB4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840DC0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 178u, 0x08840DC0u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DC0u) goto L_08840DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DC0:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(2128));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08840DD8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 179u, 0x08840DD8u, 0x08830288u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 39u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 39u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DD8u) goto L_08840DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DD8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08840DE4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 180u, 0x08840DE4u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DE4u) goto L_08840DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DE4:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840DF4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 181u, 0x08840DF4u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DF4u) goto L_08840DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DF4:
    aot_gpr_31 = (0x08840DFCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 182u, 0x08840DFCu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DFCu) goto L_08840DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840DFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2224)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840E18u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 183u, 0x08840E18u, 0x0883032Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E18u) goto L_08840E18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840E18:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840E24u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 184u, 0x08840E24u, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E24u) goto L_08840E24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840E24:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08840E30u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E30u) goto L_08840E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E30:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08840E40u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 186u, 0x08840E40u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E40u) goto L_08840E40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840E40:
    aot_gpr_31 = (0x08840E48u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E48u) goto L_08840E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E48:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840E54u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 188u, 0x08840E54u, 0x088302B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E54u) goto L_08840E54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840E54:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08841204;
      }
      goto L_08840E68;
    }
L_08840E68:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 + aot_fpr_20;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_13;
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08840FE4;
      }
      goto L_08840EAC;
    }
L_08840EAC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840ED8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840ED8u) goto L_08840ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840ED8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08840F54;
      }
      goto L_08840EE0;
    }
L_08840EE0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840F54u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 193u, 0x08840F54u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840F54u) goto L_08840F54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840F54:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840F60u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840F60u) goto L_08840F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840F60:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08840F68;
    }
L_08840F68:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840FDCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 196u, 0x08840FDCu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840FDCu) goto L_08840FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08840FDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08840FE4;
    }
L_08840FE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(608)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0884101C;
      }
      goto L_08840FFC;
    }
L_08840FFC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_13;
    goto L_0884101C;
L_0884101C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_0884113C;
      }
      goto L_08841024;
    }
L_08841024:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841030u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841030u) goto L_08841030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841030:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088410AC;
      }
      goto L_08841038;
    }
L_08841038:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088410ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 203u, 0x088410ACu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088410ACu) goto L_088410AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088410AC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088410B8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088410B8u) goto L_088410B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088410B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_088410C0;
    }
L_088410C0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08841134u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 206u, 0x08841134u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841134u) goto L_08841134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841134:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_0884113C;
    }
L_0884113C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841148u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841148u) goto L_08841148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841148:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884119C;
      }
      goto L_08841150;
    }
L_08841150:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x0884119Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 210u, 0x0884119Cu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884119Cu) goto L_0884119C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884119C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088411A8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088411A8u) goto L_088411A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088411A8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_088411B0;
    }
L_088411B0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088411FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 213u, 0x088411FCu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088411FCu) goto L_088411FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088411FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08841204;
    }
L_08841204:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841210u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841210u) goto L_08841210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841210:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841230;
      }
      goto L_08841218;
    }
L_08841218:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x08841230u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 217u, 0x08841230u, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841230u) goto L_08841230;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841230:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884123Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884123Cu) goto L_0884123C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884123C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08841244;
    }
L_08841244:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x0884125Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 220u, 0x0884125Cu, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884125Cu) goto L_0884125C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884125C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841268u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841268u) goto L_08841268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841268:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088412F8;
      }
      goto L_08841270;
    }
L_08841270:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2384));
    aot_gpr_31 = (0x0884127Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 223u, 0x0884127Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884127Cu) goto L_0884127C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884127C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841288u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 224u, 0x08841288u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841288u) goto L_08841288;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841288:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2400));
    aot_gpr_31 = (0x08841294u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 225u, 0x08841294u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841294u) goto L_08841294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841294:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088412A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 226u, 0x088412A0u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412A0u) goto L_088412A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088412A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2416));
    aot_gpr_31 = (0x088412ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 227u, 0x088412ACu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412ACu) goto L_088412AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088412AC:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088412B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412B8u) goto L_088412B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412B8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2432));
    aot_gpr_31 = (0x088412C4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 229u, 0x088412C4u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412C4u) goto L_088412C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088412C4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088412D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 230u, 0x088412D0u, 0x08830D34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412D0u) goto L_088412D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088412D0:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x088412F8u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 231u, 0x088412F8u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412F8u) goto L_088412F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088412F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841304u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841304u) goto L_08841304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841304:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841394;
      }
      goto L_0884130C;
    }
L_0884130C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2448));
    aot_gpr_31 = (0x08841318u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 234u, 0x08841318u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841318u) goto L_08841318;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841318:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841324u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 235u, 0x08841324u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841324u) goto L_08841324;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841324:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2464));
    aot_gpr_31 = (0x08841330u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 236u, 0x08841330u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841330u) goto L_08841330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841330:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884133Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 237u, 0x0884133Cu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884133Cu) goto L_0884133C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884133C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2480));
    aot_gpr_31 = (0x08841348u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 238u, 0x08841348u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841348u) goto L_08841348;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841348:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841354u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841354u) goto L_08841354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841354:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2496));
    aot_gpr_31 = (0x08841360u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 240u, 0x08841360u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841360u) goto L_08841360;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841360:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884136Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 241u, 0x0884136Cu, 0x08830D34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884136Cu) goto L_0884136C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884136C:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841394u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 242u, 0x08841394u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841394u) goto L_08841394;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841394:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_0884139C;
    }
L_0884139C:
    aot_gpr_31 = (0x088413A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413A4u) goto L_088413A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413A4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_31 = (0x088413B0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 245u, 0x088413B0u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413B0u) goto L_088413B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088413B0:
    aot_gpr_31 = (0x088413B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413B8u) goto L_088413B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413B8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088413C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413C4u) goto L_088413C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413C4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088413F4;
      }
      goto L_088413E8;
    }
L_088413E8:
    aot_gpr_31 = (0x088413F0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 249u, 0x088413F0u, 0x08830548u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 73u, 0x08830548u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413F0u) goto L_088413F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088413F0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088413F4;
L_088413F4:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2212)));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2184)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884144Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884144Cu) goto L_0884144C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884144C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_088414D0;
      }
      goto L_08841454;
    }
L_08841454:
    aot_gpr_31 = (0x0884145Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884145Cu) goto L_0884145C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884145C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088414D0;
      }
      goto L_08841464;
    }
L_08841464:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(22));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49248u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16480u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16307u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_gpr_31 = (0x088414C8u);
    ctx.gpr[11] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 255u, 0x088414C8u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088414C8u) goto L_088414C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088414C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088415C8;
      }
      goto L_088414D0;
    }
L_088414D0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088414DCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088414DCu) goto L_088414DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088414DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841550;
      }
      goto L_088414E4;
    }
L_088414E4:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(22));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49248u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16480u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16670u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16307u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_gpr_31 = (0x08841548u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 259u, 0x08841548u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841548u) goto L_08841548;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841548:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088415C8;
      }
      goto L_08841550;
    }
L_08841550:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884155Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884155Cu) goto L_0884155C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884155C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088415C8;
      }
      goto L_08841564;
    }
L_08841564:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(22));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49248u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16480u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16307u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_gpr_31 = (0x088415C8u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 263u, 0x088415C8u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088415C8u) goto L_088415C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088415C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2212)));
    aot_gpr_4 = (16657u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2228)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08841798;
      }
      goto L_0884161C;
    }
L_0884161C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841628u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841628u) goto L_08841628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841628:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_088416A4;
      }
      goto L_08841630;
    }
L_08841630:
    aot_gpr_31 = (0x08841638u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841638u) goto L_08841638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841638:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088416A4;
      }
      goto L_08841640;
    }
L_08841640:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[9] = (0u | 22u);
    ctx.gpr[10] = (0u | 22u);
    aot_gpr_31 = (0x0884169Cu);
    ctx.gpr[11] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 269u, 0x0884169Cu, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884169Cu) goto L_0884169C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884169C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_088416A4;
    }
L_088416A4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088416B0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088416B0u) goto L_088416B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088416B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841720;
      }
      goto L_088416B8;
    }
L_088416B8:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16670u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[9] = (0u | 22u);
    ctx.gpr[10] = (0u | 22u);
    aot_gpr_31 = (0x08841718u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 273u, 0x08841718u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841718u) goto L_08841718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841718:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841720;
    }
L_08841720:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884172Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884172Cu) goto L_0884172C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884172C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841734;
    }
L_08841734:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[9] = (0u | 22u);
    ctx.gpr[10] = (0u | 22u);
    aot_gpr_31 = (0x08841790u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 277u, 0x08841790u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841790u) goto L_08841790;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841790:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841798;
    }
L_08841798:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088417A4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088417A4u) goto L_088417A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088417A4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08841820;
      }
      goto L_088417AC;
    }
L_088417AC:
    aot_gpr_31 = (0x088417B4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088417B4u) goto L_088417B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088417B4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841820;
      }
      goto L_088417BC;
    }
L_088417BC:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 40u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841818u);
    ctx.gpr[11] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 283u, 0x08841818u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841818u) goto L_08841818;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841818:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841820;
    }
L_08841820:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884182Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884182Cu) goto L_0884182C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884182C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884189C;
      }
      goto L_08841834;
    }
L_08841834:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16670u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 40u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841894u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 287u, 0x08841894u, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841894u) goto L_08841894;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841894:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_0884189C;
    }
L_0884189C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088418A8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088418A8u) goto L_088418A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088418A8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_088418B0;
    }
L_088418B0:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 40u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0884190Cu);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 291u, 0x0884190Cu, 0x08A96364u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 338u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884190Cu) goto L_0884190C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884190C:
    aot_gpr_31 = (0x08841914u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 292u, 0x08841914u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841914u) goto L_08841914;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841914:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_2;
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_0884191C;
    }
L_0884191C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841924;
    }
L_08841924:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841930u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841930u) goto L_08841930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841930:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08841948;
      }
      goto L_08841938;
    }
L_08841938:
    aot_gpr_31 = (0x08841940u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841940u) goto L_08841940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841940:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841A74;
      }
      goto L_08841948;
    }
L_08841948:
    aot_gpr_31 = (0x08841950u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 299u, 0x08841950u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841950u) goto L_08841950;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841950:
    aot_gpr_31 = (0x08841958u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841958u) goto L_08841958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841958:
    aot_gpr_31 = (0x08841960u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 301u, 0x08841960u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841960u) goto L_08841960;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841960:
    aot_gpr_31 = (0x08841968u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841968u) goto L_08841968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841968:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08841974u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 303u, 0x08841974u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841974u) goto L_08841974;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841974:
    aot_gpr_31 = (0x0884197Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884197Cu) goto L_0884197C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884197C:
    aot_gpr_31 = (0x08841984u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 305u, 0x08841984u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841984u) goto L_08841984;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841984:
    aot_gpr_31 = (0x0884198Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884198Cu) goto L_0884198C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884198C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_13;
    aot_gpr_4 = (15951u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23592u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08841A18;
      }
      goto L_088419B4;
    }
L_088419B4:
    aot_gpr_31 = (0x088419BCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419BCu) goto L_088419BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088419BC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2560));
    aot_gpr_31 = (0x088419C8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 309u, 0x088419C8u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419C8u) goto L_088419C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088419C8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088419D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419D4u) goto L_088419D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088419D4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2576));
    aot_gpr_31 = (0x088419E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 311u, 0x088419E0u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419E0u) goto L_088419E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088419E0:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08841A10u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 312u, 0x08841A10u, 0x08B25C64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 403u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 403u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A10u) goto L_08841A10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841A10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08841A74;
      }
      goto L_08841A18;
    }
L_08841A18:
    aot_gpr_31 = (0x08841A20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A20u) goto L_08841A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A20:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2592));
    aot_gpr_31 = (0x08841A2Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 315u, 0x08841A2Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A2Cu) goto L_08841A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841A2C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841A38u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A38u) goto L_08841A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A38:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2608));
    aot_gpr_31 = (0x08841A44u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 317u, 0x08841A44u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A44u) goto L_08841A44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841A44:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08841A74u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 318u, 0x08841A74u, 0x08B25C64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 403u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 403u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A74u) goto L_08841A74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841A74:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2512));
    aot_gpr_31 = (0x08841A80u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A80u) goto L_08841A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A80:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2528));
    aot_gpr_31 = (0x08841A90u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A90u) goto L_08841A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A90:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08841AA4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 321u, 0x08841AA4u, 0x0883032Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841AA4u) goto L_08841AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841AA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08841AB4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 322u, 0x08841AB4u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841AB4u) goto L_08841AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841AB4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    aot_gpr_31 = (0x08841AC0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 323u, 0x08841AC0u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841AC0u) goto L_08841AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841AC0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841ACCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841ACCu) goto L_08841ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841ACC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08841AE4;
      }
      goto L_08841AD4;
    }
L_08841AD4:
    aot_gpr_31 = (0x08841ADCu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841ADCu) goto L_08841ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841ADC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841AE4;
    }
L_08841AE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(608)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08841B5C;
      }
      goto L_08841AFC;
    }
L_08841AFC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2624));
    aot_gpr_31 = (0x08841B08u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 329u, 0x08841B08u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B08u) goto L_08841B08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841B08:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2640));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08841B24u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B24u) goto L_08841B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B24:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08841B54u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 331u, 0x08841B54u, 0x08B25C64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 403u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 403u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B54u) goto L_08841B54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841B54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841B5C;
    }
L_08841B5C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2656));
    aot_gpr_31 = (0x08841B68u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 333u, 0x08841B68u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B68u) goto L_08841B68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841B68:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2672));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08841B84u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B84u) goto L_08841B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B84:
    aot_gpr_4 = (16608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08841BB8u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 335u, 0x08841BB8u, 0x08B25C64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 403u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 403u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841BB8u) goto L_08841BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841BB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BC0;
    }
L_08841BC0:
    aot_gpr_31 = (0x08841BC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841BC8u) goto L_08841BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841BC8:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BD4;
    }
L_08841BD4:
    aot_gpr_31 = (0x08841BDCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841BDCu) goto L_08841BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841BDC:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BE8;
    }
L_08841BE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(627)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BF4;
    }
L_08841BF4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BFC;
    }
L_08841BFC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2736));
    aot_gpr_31 = (0x08841C08u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C08u) goto L_08841C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C08:
    aot_gpr_31 = (0x08841C10u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 344u, 0x08841C10u, 0x08830840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 114u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 114u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C10u) goto L_08841C10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C10:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841C1Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 345u, 0x08841C1Cu, 0x08830DB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 184u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 184u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C1Cu) goto L_08841C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C1C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841C28u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 346u, 0x08841C28u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C28u) goto L_08841C28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C28:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2688));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08841C40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 347u, 0x08841C40u, 0x08830288u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 39u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 39u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C40u) goto L_08841C40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08841C4Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 348u, 0x08841C4Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C4Cu) goto L_08841C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C4C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841C5Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 349u, 0x08841C5Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C5Cu) goto L_08841C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C5C:
    aot_gpr_31 = (0x08841C64u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 350u, 0x08841C64u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C64u) goto L_08841C64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2736)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08841C80u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 351u, 0x08841C80u, 0x0883032Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C80u) goto L_08841C80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841C8Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 352u, 0x08841C8Cu, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C8Cu) goto L_08841C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841C8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(608)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08841CBC;
      }
      goto L_08841CA4;
    }
L_08841CA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842230;
      }
      goto L_08841CBC;
    }
L_08841CBC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2768));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2752));
    aot_gpr_31 = (0x08841CCCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CCCu) goto L_08841CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841CCC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08841CDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CDCu) goto L_08841CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841CDC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08841CECu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 357u, 0x08841CECu, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CECu) goto L_08841CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841CEC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841CF8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 358u, 0x08841CF8u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CF8u) goto L_08841CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841CF8:
    aot_gpr_31 = (0x08841D00u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 359u, 0x08841D00u, 0x0883060Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 81u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 81u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 81u, 0x0883060Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D00u) goto L_08841D00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841D00:
    aot_gpr_31 = (0x08841D08u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D08u) goto L_08841D08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841D08:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841D14u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 361u, 0x08841D14u, 0x088302B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D14u) goto L_08841D14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841D14:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088421B0;
      }
      goto L_08841D28;
    }
L_08841D28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08841F78;
      }
      goto L_08841D40;
    }
L_08841D40:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841D4Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D4Cu) goto L_08841D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841D4C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841DBC;
      }
      goto L_08841D54;
    }
L_08841D54:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08841DBCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 366u, 0x08841DBCu, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841DBCu) goto L_08841DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841DBC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841DC8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841DC8u) goto L_08841DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841DC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841E38;
      }
      goto L_08841DD0;
    }
L_08841DD0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08841E38u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 369u, 0x08841E38u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E38u) goto L_08841E38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841E38:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841E44u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E44u) goto L_08841E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E44:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841ED4;
      }
      goto L_08841E4C;
    }
L_08841E4C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2784));
    aot_gpr_31 = (0x08841E58u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 372u, 0x08841E58u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E58u) goto L_08841E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841E58:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841E64u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 373u, 0x08841E64u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E64u) goto L_08841E64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841E64:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2800));
    aot_gpr_31 = (0x08841E70u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 374u, 0x08841E70u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E70u) goto L_08841E70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841E70:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841E7Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 375u, 0x08841E7Cu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E7Cu) goto L_08841E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841E7C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2816));
    aot_gpr_31 = (0x08841E88u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 376u, 0x08841E88u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E88u) goto L_08841E88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841E88:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841E94u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E94u) goto L_08841E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E94:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2832));
    aot_gpr_31 = (0x08841EA0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 378u, 0x08841EA0u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EA0u) goto L_08841EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841EA0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841EACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 379u, 0x08841EACu, 0x08830D34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EACu) goto L_08841EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841EAC:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841ED4u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 380u, 0x08841ED4u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841ED4u) goto L_08841ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841ED4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841EE0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EE0u) goto L_08841EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841EE0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08841EE8;
    }
L_08841EE8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2848));
    aot_gpr_31 = (0x08841EF4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 383u, 0x08841EF4u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EF4u) goto L_08841EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841EF4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F00u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 384u, 0x08841F00u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F00u) goto L_08841F00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F00:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2864));
    aot_gpr_31 = (0x08841F0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 385u, 0x08841F0Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F0Cu) goto L_08841F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F0C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F18u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 386u, 0x08841F18u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F18u) goto L_08841F18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F18:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2880));
    aot_gpr_31 = (0x08841F24u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 387u, 0x08841F24u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F24u) goto L_08841F24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F24:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F30u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F30u) goto L_08841F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F30:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2896));
    aot_gpr_31 = (0x08841F3Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 389u, 0x08841F3Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F3Cu) goto L_08841F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F3C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 390u, 0x08841F48u, 0x08830D34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F48u) goto L_08841F48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F48:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841F70u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 391u, 0x08841F70u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F70u) goto L_08841F70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841F70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08841F78;
    }
L_08841F78:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841F84u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F84u) goto L_08841F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F84:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08841FF4;
      }
      goto L_08841F8C;
    }
L_08841F8C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08841FF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 395u, 0x08841FF4u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841FF4u) goto L_08841FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08841FF4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842000u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842000u) goto L_08842000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842000:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842070;
      }
      goto L_08842008;
    }
L_08842008:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08842070u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 398u, 0x08842070u, 0x08981324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 311u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 311u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842070u) goto L_08842070;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842070:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884207Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884207Cu) goto L_0884207C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884207C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884210C;
      }
      goto L_08842084;
    }
L_08842084:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2912));
    aot_gpr_31 = (0x08842090u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 401u, 0x08842090u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842090u) goto L_08842090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842090:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884209Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 402u, 0x0884209Cu, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884209Cu) goto L_0884209C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884209C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2928));
    aot_gpr_31 = (0x088420A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 403u, 0x088420A8u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420A8u) goto L_088420A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088420A8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088420B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 404u, 0x088420B4u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420B4u) goto L_088420B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088420B4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2944));
    aot_gpr_31 = (0x088420C0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 405u, 0x088420C0u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420C0u) goto L_088420C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088420C0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088420CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420CCu) goto L_088420CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420CC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2960));
    aot_gpr_31 = (0x088420D8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 407u, 0x088420D8u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420D8u) goto L_088420D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088420D8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088420E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 408u, 0x088420E4u, 0x08830D34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420E4u) goto L_088420E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088420E4:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0884210Cu);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 409u, 0x0884210Cu, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884210Cu) goto L_0884210C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884210C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842118u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842118u) goto L_08842118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842118:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08842120;
    }
L_08842120:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2976));
    aot_gpr_31 = (0x0884212Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 412u, 0x0884212Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884212Cu) goto L_0884212C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884212C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842138u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 413u, 0x08842138u, 0x088307A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 103u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 103u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842138u) goto L_08842138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842138:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2992));
    aot_gpr_31 = (0x08842144u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 414u, 0x08842144u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842144u) goto L_08842144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842144:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842150u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 415u, 0x08842150u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842150u) goto L_08842150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842150:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3008));
    aot_gpr_31 = (0x0884215Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 416u, 0x0884215Cu, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884215Cu) goto L_0884215C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884215C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842168u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842168u) goto L_08842168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842168:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3024));
    aot_gpr_31 = (0x08842174u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 418u, 0x08842174u, 0x08830460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842174u) goto L_08842174;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842174:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842180u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 419u, 0x08842180u, 0x08830D34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842180u) goto L_08842180;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842180:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x088421A8u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 420u, 0x088421A8u, 0x088AB01Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421A8u) goto L_088421A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088421A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_088421B0;
    }
L_088421B0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088421BCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421BCu) goto L_088421BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088421BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088421EC;
      }
      goto L_088421C4;
    }
L_088421C4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088421ECu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 424u, 0x088421ECu, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421ECu) goto L_088421EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088421EC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088421F8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421F8u) goto L_088421F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088421F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08842200;
    }
L_08842200:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08842228u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 427u, 0x08842228u, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842228u) goto L_08842228;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08842230;
    }
L_08842230:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884223Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884223Cu) goto L_0884223C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884223C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0884226C;
      }
      goto L_08842244;
    }
L_08842244:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x0884226Cu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 431u, 0x0884226Cu, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884226Cu) goto L_0884226C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884226C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842278u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0D88C, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842278u) goto L_08842278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842278:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08842280;
    }
L_08842280:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088422A8u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 434u, 0x088422A8u, 0x08981398u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422A8u) goto L_088422A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088422A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x088422B4u);
    aot_gpr_5 = (512u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 435u, 0x088422B4u, 0x08830CE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 166u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 166u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422B4u) goto L_088422B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088422B4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088422D0;
      }
      goto L_088422BC;
    }
L_088422BC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088422C8u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 437u, 0x088422C8u, 0x08A979D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 527u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 527u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422C8u) goto L_088422C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088422C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842304;
      }
      goto L_088422D0;
    }
L_088422D0:
    aot_gpr_31 = (0x088422D8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422D8u) goto L_088422D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088422D8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_088422F8;
      }
      goto L_088422E4;
    }
L_088422E4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088422F0u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 441u, 0x088422F0u, 0x08A979D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 527u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 527u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422F0u) goto L_088422F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088422F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842304;
      }
      goto L_088422F8;
    }
L_088422F8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08842304u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 443u, 0x08842304u, 0x08A979D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 527u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 527u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842304u) goto L_08842304;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842310u);
    aot_gpr_5 = (512u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 444u, 0x08842310u, 0x08830CE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 166u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 166u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842310u) goto L_08842310;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842310:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_08842318;
    }
L_08842318:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (15846u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26215u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_08842338;
    }
L_08842338:
    aot_gpr_31 = (0x08842340u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842340u) goto L_08842340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842340:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_0884235C;
    }
L_0884235C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3048), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08842374u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842374u) goto L_08842374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842374:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08842380u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842380u) goto L_08842380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842380:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0884238Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884238Cu) goto L_0884238C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884238C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3048));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088423A0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 452u, 0x088423A0u, 0x08893460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 519u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 519u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423A0u) goto L_088423A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088423A0:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088423ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423ACu) goto L_088423AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423AC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088423B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423B8u) goto L_088423B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088423C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423C4u) goto L_088423C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423C4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3052));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088423DCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 456u, 0x088423DCu, 0x08AF8668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423DCu) goto L_088423DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088423DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088423EC;
      }
      goto L_088423E4;
    }
L_088423E4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088423EC;
L_088423EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(3052)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_08842400;
    }
L_08842400:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(3052)));
    goto L_08842404;
L_08842404:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842414u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3040), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 461u, 0x08842414u, 0x08830904u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 125u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 125u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842414u) goto L_08842414;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842414:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3044), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3044));
    aot_gpr_31 = (0x0884243Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3040));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 462u, 0x0884243Cu, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884243Cu) goto L_0884243C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884243C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (15846u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26215u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15836u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 10485u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_31 = (0x0884247Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 463u, 0x0884247Cu, 0x088305A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 75u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 75u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 75u, 0x088305A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884247Cu) goto L_0884247C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884247C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842494u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842494u) goto L_08842494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842494:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088424B4;
      }
      goto L_088424A0;
    }
L_088424A0:
    aot_gpr_31 = (0x088424A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088424A8u) goto L_088424A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088424A8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-972));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_088424BC;
      }
      goto L_088424B4;
    }
L_088424B4:
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_088424BC;
L_088424BC:
    aot_gpr_31 = (0x088424C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088424C4u) goto L_088424C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088424C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_088424DC;
    }
L_088424DC:
    aot_gpr_31 = (0x088424E4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088424E4u) goto L_088424E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088424E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842500u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0193.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 472u, 0x08842500u, 0x08B09D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0193_entry(rt, ctx, 371u, aot_mem);
#else
        recomp_unit_0193_entry(rt, ctx, 371u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 371u, 0x08B09D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842500u) goto L_08842500;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842500:
    aot_gpr_31 = (0x08842508u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 473u, 0x08842508u, 0x08830694u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 86u, 0x08830694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842508u) goto L_08842508;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842508:
    aot_gpr_31 = (0x08842510u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 474u, 0x08842510u, 0x08830840u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 114u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 114u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842510u) goto L_08842510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842510:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884251Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884251Cu) goto L_0884251C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884251C:
    aot_gpr_4 = (0u | 246u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0884259C;
      }
      goto L_08842528;
    }
L_08842528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0884259C;
      }
      goto L_08842534;
    }
L_08842534:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(3056));
    aot_gpr_31 = (0x08842540u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 478u, 0x08842540u, 0x08830694u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 86u, 0x08830694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842540u) goto L_08842540;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842540:
    aot_gpr_31 = (0x08842548u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 479u, 0x08842548u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842548u) goto L_08842548;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842548:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842558u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 480u, 0x08842558u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842558u) goto L_08842558;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842558:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3136));
    aot_gpr_31 = (0x08842564u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 481u, 0x08842564u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842564u) goto L_08842564;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842564:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08842570u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 482u, 0x08842570u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842570u) goto L_08842570;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842570:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1852)));
    aot_gpr_31 = (0x0884257Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 483u, 0x0884257Cu, 0x0885FA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 921u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 921u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884257Cu) goto L_0884257C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884257C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08842588u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 484u, 0x08842588u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842588u) goto L_08842588;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842588:
    aot_gpr_31 = (0x08842590u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 485u, 0x08842590u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842590u) goto L_08842590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842590:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884259Cu);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 486u, 0x0884259Cu, 0x0883072Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 93u, 0x0883072Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884259Cu) goto L_0884259C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884259C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088425C0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1280)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 487u, 0x088425C0u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425C0u) goto L_088425C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088425C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088425D0u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 488u, 0x088425D0u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425D0u) goto L_088425D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088425D0:
    aot_gpr_31 = (0x088425D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 489u, 0x088425D8u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425D8u) goto L_088425D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088425D8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088425E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 490u, 0x088425E4u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425E4u) goto L_088425E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088425E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088425F8u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 491u, 0x088425F8u, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425F8u) goto L_088425F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088425F8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0884263C;
      }
      goto L_08842604;
    }
L_08842604:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08842614u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 493u, 0x08842614u, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842614u) goto L_08842614;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842614:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842634u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 494u, 0x08842634u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842634u) goto L_08842634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842634:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842648;
      }
      goto L_0884263C;
    }
L_0884263C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842648u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 496u, 0x08842648u, 0x0885F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 917u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 917u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842648u) goto L_08842648;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842648:
    aot_gpr_31 = (0x08842650u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842650u) goto L_08842650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842650:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842918;
      }
      goto L_08842658;
    }
L_08842658:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0884287C;
      }
      goto L_08842664;
    }
L_08842664:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0884287C;
      }
      goto L_0884267C;
    }
L_0884267C:
    aot_gpr_31 = (0x08842684u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 501u, 0x08842684u, 0x08830A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842684u) goto L_08842684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842684:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0884287C;
      }
      goto L_08842690;
    }
L_08842690:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x088426A4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 503u, 0x088426A4u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426A4u) goto L_088426A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088426A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0884276C;
      }
      goto L_088426B8;
    }
L_088426B8:
    aot_gpr_31 = (0x088426C0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426C0u) goto L_088426C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426C0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3152));
    aot_gpr_31 = (0x088426CCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426CCu) goto L_088426CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426CC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3168));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3184));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088426E8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426E8u) goto L_088426E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088426F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 508u, 0x088426F8u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426F8u) goto L_088426F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088426F8:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3200));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842710u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 509u, 0x08842710u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842710u) goto L_08842710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842710:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842720u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 510u, 0x08842720u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842720u) goto L_08842720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842720:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08842730u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 511u, 0x08842730u, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842730u) goto L_08842730;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842730:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08842764u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 512u, 0x08842764u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842764u) goto L_08842764;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842764:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842918;
      }
      goto L_0884276C;
    }
L_0884276C:
    aot_gpr_31 = (0x08842774u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842774u) goto L_08842774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842774:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3216));
    aot_gpr_31 = (0x08842780u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842780u) goto L_08842780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842780:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3232));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3248));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3264));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088427A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427A4u) goto L_088427A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088427A4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088427B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 517u, 0x088427B4u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427B4u) goto L_088427B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088427B4:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3280));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088427CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 518u, 0x088427CCu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427CCu) goto L_088427CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088427CC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088427DCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 519u, 0x088427DCu, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427DCu) goto L_088427DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088427DC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088427ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 520u, 0x088427ECu, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427ECu) goto L_088427EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088427EC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3296));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0884280Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884280Cu) goto L_0884280C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884280C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0884281Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 522u, 0x0884281Cu, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884281Cu) goto L_0884281C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884281C:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0884282Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 523u, 0x0884282Cu, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884282Cu) goto L_0884282C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884282C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842844u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 524u, 0x08842844u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842844u) goto L_08842844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842844:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08842874u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 525u, 0x08842874u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842874u) goto L_08842874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842874:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842918;
      }
      goto L_0884287C;
    }
L_0884287C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842894u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 527u, 0x08842894u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842894u) goto L_08842894;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842894:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x088428ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088428ACu) goto L_088428AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088428AC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_088428C8;
      }
      goto L_088428B8;
    }
L_088428B8:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_088428C8;
L_088428C8:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3320), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3320));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3324), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088428F4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3324));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 531u, 0x088428F4u, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088428F4u) goto L_088428F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088428F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3316), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3316));
    aot_gpr_31 = (0x08842904u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3312));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 532u, 0x08842904u, 0x08830368u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842904u) goto L_08842904;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842904:
    aot_gpr_31 = (0x0884290Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 533u, 0x0884290Cu, 0x088304E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884290Cu) goto L_0884290C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884290C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842918u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 534u, 0x08842918u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842918u) goto L_08842918;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842924u);
    aot_gpr_5 = (0u | 16384u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 535u, 0x08842924u, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842924u) goto L_08842924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842924:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08842980;
      }
      goto L_0884292C;
    }
L_0884292C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842938u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 537u, 0x08842938u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842938u) goto L_08842938;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842938:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842954u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 538u, 0x08842954u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842954u) goto L_08842954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842954:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842964u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 539u, 0x08842964u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842964u) goto L_08842964;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842964:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842978u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 540u, 0x08842978u, 0x0886004Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842978u) goto L_08842978;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842978:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842998;
      }
      goto L_08842980;
    }
L_08842980:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884298Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 542u, 0x0884298Cu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884298Cu) goto L_0884298C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884298C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842998u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 543u, 0x08842998u, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842998u) goto L_08842998;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842998:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088429ACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 544u, 0x088429ACu, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429ACu) goto L_088429AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429AC:
    aot_gpr_31 = (0x088429B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 545u, 0x088429B4u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429B4u) goto L_088429B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429B4:
    aot_gpr_31 = (0x088429BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1292)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 546u, 0x088429BCu, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429BCu) goto L_088429BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429BC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088429CCu);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 547u, 0x088429CCu, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429CCu) goto L_088429CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429CC:
    aot_gpr_31 = (0x088429D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 548u, 0x088429D4u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429D4u) goto L_088429D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429D4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088429E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 549u, 0x088429E0u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429E0u) goto L_088429E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1624)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x088429F8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 550u, 0x088429F8u, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429F8u) goto L_088429F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088429F8:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08842A4C;
      }
      goto L_08842A00;
    }
L_08842A00:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08842A14u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 552u, 0x08842A14u, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A14u) goto L_08842A14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842A14:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842A44u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 553u, 0x08842A44u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A44u) goto L_08842A44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842A44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842A6C;
      }
      goto L_08842A4C;
    }
L_08842A4C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08842A6Cu);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 555u, 0x08842A6Cu, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A6Cu) goto L_08842A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842A6C:
    aot_gpr_31 = (0x08842A74u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A74u) goto L_08842A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842A74:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842D38;
      }
      goto L_08842A7C;
    }
L_08842A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08842CA0;
      }
      goto L_08842A88;
    }
L_08842A88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842CA0;
      }
      goto L_08842AA0;
    }
L_08842AA0:
    aot_gpr_31 = (0x08842AA8u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 560u, 0x08842AA8u, 0x08830A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AA8u) goto L_08842AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842AA8:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08842CA0;
      }
      goto L_08842AB4;
    }
L_08842AB4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16329u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08842AC8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 562u, 0x08842AC8u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AC8u) goto L_08842AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842ADC;
    }
L_08842ADC:
    aot_gpr_31 = (0x08842AE4u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AE4u) goto L_08842AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842AE4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3328));
    aot_gpr_31 = (0x08842AF0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AF0u) goto L_08842AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842AF0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3344));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3360));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842B0Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B0Cu) goto L_08842B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B0C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842B1Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 567u, 0x08842B1Cu, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B1Cu) goto L_08842B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842B1C:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3376));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842B34u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 568u, 0x08842B34u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B34u) goto L_08842B34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842B34:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842B44u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 569u, 0x08842B44u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B44u) goto L_08842B44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842B44:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08842B54u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 570u, 0x08842B54u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B54u) goto L_08842B54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842B54:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08842B88u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 571u, 0x08842B88u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B88u) goto L_08842B88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842B88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842D38;
      }
      goto L_08842B90;
    }
L_08842B90:
    aot_gpr_31 = (0x08842B98u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B98u) goto L_08842B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B98:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3392));
    aot_gpr_31 = (0x08842BA4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BA4u) goto L_08842BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842BA4:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3408));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3424));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3440));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842BC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BC8u) goto L_08842BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842BC8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842BD8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 576u, 0x08842BD8u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BD8u) goto L_08842BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842BD8:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3456));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842BF0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 577u, 0x08842BF0u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BF0u) goto L_08842BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842BF0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842C00u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 578u, 0x08842C00u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C00u) goto L_08842C00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842C00:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08842C10u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 579u, 0x08842C10u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C10u) goto L_08842C10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842C10:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3472));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842C30u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C30u) goto L_08842C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C30:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08842C40u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 581u, 0x08842C40u, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C40u) goto L_08842C40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842C40:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842C50u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 582u, 0x08842C50u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C50u) goto L_08842C50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842C50:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842C68u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 583u, 0x08842C68u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C68u) goto L_08842C68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842C68:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08842C98u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 584u, 0x08842C98u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C98u) goto L_08842C98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842C98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842D38;
      }
      goto L_08842CA0;
    }
L_08842CA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842CB8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 586u, 0x08842CB8u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842CB8u) goto L_08842CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842CB8:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08842CD0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842CD0u) goto L_08842CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842CD0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08842CEC;
      }
      goto L_08842CDC;
    }
L_08842CDC:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08842CEC;
L_08842CEC:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3488), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3496), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3496));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3500), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842D14u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3500));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 590u, 0x08842D14u, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D14u) goto L_08842D14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D14:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3492), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3492));
    aot_gpr_31 = (0x08842D24u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3488));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 591u, 0x08842D24u, 0x08830368u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D24u) goto L_08842D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D24:
    aot_gpr_31 = (0x08842D2Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 592u, 0x08842D2Cu, 0x088304E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D2Cu) goto L_08842D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D2C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842D38u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 593u, 0x08842D38u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D38u) goto L_08842D38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842D44u);
    aot_gpr_5 = (0u | 16384u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 594u, 0x08842D44u, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D44u) goto L_08842D44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D44:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08842DA0;
      }
      goto L_08842D4C;
    }
L_08842D4C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842D58u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 596u, 0x08842D58u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D58u) goto L_08842D58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D58:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842D74u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 597u, 0x08842D74u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D74u) goto L_08842D74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D74:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842D84u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 598u, 0x08842D84u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D84u) goto L_08842D84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D84:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842D98u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 599u, 0x08842D98u, 0x0886004Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D98u) goto L_08842D98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842D98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842DB8;
      }
      goto L_08842DA0;
    }
L_08842DA0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842DACu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 601u, 0x08842DACu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DACu) goto L_08842DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842DAC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842DB8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 602u, 0x08842DB8u, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DB8u) goto L_08842DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842DB8:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08842DC8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 603u, 0x08842DC8u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DC8u) goto L_08842DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842DC8:
    aot_gpr_31 = (0x08842DD0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 604u, 0x08842DD0u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DD0u) goto L_08842DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842DD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1276)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843008;
      }
      goto L_08842DDC;
    }
L_08842DDC:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842DE8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1276)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 606u, 0x08842DE8u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DE8u) goto L_08842DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842DE8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842DF8u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 607u, 0x08842DF8u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DF8u) goto L_08842DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842DF8:
    aot_gpr_31 = (0x08842E00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 608u, 0x08842E00u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E00u) goto L_08842E00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842E00:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08842E0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 609u, 0x08842E0Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E0Cu) goto L_08842E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842E0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842E20u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 610u, 0x08842E20u, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E20u) goto L_08842E20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842E20:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08842E64;
      }
      goto L_08842E2C;
    }
L_08842E2C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08842E3Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 612u, 0x08842E3Cu, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E3Cu) goto L_08842E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842E3C:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842E5Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 613u, 0x08842E5Cu, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E5Cu) goto L_08842E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842E5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842E70;
      }
      goto L_08842E64;
    }
L_08842E64:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842E70u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 615u, 0x08842E70u, 0x0885F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 917u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 917u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E70u) goto L_08842E70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842E70:
    aot_gpr_31 = (0x08842E78u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E78u) goto L_08842E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E78:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08842F70;
      }
      goto L_08842E80;
    }
L_08842E80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842E8C;
    }
L_08842E8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842EA4;
    }
L_08842EA4:
    aot_gpr_31 = (0x08842EACu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 620u, 0x08842EACu, 0x08830A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842EACu) goto L_08842EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842EAC:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842EB8;
    }
L_08842EB8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08842ECCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 622u, 0x08842ECCu, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842ECCu) goto L_08842ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842ECC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842F70;
      }
      goto L_08842ED4;
    }
L_08842ED4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842EECu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 624u, 0x08842EECu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842EECu) goto L_08842EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842EEC:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08842F04u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F04u) goto L_08842F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F04:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08842F20;
      }
      goto L_08842F10;
    }
L_08842F10:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08842F20;
L_08842F20:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3504), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3512), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3512));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3516), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08842F4Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3516));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 628u, 0x08842F4Cu, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F4Cu) goto L_08842F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842F4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3508), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3508));
    aot_gpr_31 = (0x08842F5Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3504));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 629u, 0x08842F5Cu, 0x08830368u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F5Cu) goto L_08842F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842F5C:
    aot_gpr_31 = (0x08842F64u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 630u, 0x08842F64u, 0x088304E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F64u) goto L_08842F64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842F64:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842F70u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 631u, 0x08842F70u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F70u) goto L_08842F70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842F70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842F7Cu);
    aot_gpr_5 = (0u | 16384u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 632u, 0x08842F7Cu, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F7Cu) goto L_08842F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842F7C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08842FD8;
      }
      goto L_08842F84;
    }
L_08842F84:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842F90u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 634u, 0x08842F90u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F90u) goto L_08842F90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842F90:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842FACu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 635u, 0x08842FACu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FACu) goto L_08842FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842FAC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842FBCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 636u, 0x08842FBCu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FBCu) goto L_08842FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842FBC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842FD0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 637u, 0x08842FD0u, 0x0886004Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FD0u) goto L_08842FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842FD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08842FF0;
      }
      goto L_08842FD8;
    }
L_08842FD8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842FE4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 639u, 0x08842FE4u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FE4u) goto L_08842FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842FE4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842FF0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 640u, 0x08842FF0u, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FF0u) goto L_08842FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08842FF0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843000u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 641u, 0x08843000u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843000u) goto L_08843000;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843000:
    aot_gpr_31 = (0x08843008u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 642u, 0x08843008u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843008u) goto L_08843008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1288)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843264;
      }
      goto L_08843014;
    }
L_08843014:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843020u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1288)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 644u, 0x08843020u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843020u) goto L_08843020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843020:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843030u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 645u, 0x08843030u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843030u) goto L_08843030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843030:
    aot_gpr_31 = (0x08843038u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 646u, 0x08843038u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843038u) goto L_08843038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843038:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843044u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 647u, 0x08843044u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843044u) goto L_08843044;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843044:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1624)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x0884305Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 648u, 0x0884305Cu, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884305Cu) goto L_0884305C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884305C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
      if (branch_taken) {
          goto L_088430B0;
      }
      goto L_08843064;
    }
L_08843064:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08843078u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 650u, 0x08843078u, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843078u) goto L_08843078;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843078:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088430A8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 651u, 0x088430A8u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088430A8u) goto L_088430A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088430A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088430D0;
      }
      goto L_088430B0;
    }
L_088430B0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x088430D0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 653u, 0x088430D0u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088430D0u) goto L_088430D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088430D0:
    aot_gpr_31 = (0x088430D8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088430D8u) goto L_088430D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088430D8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088431CC;
      }
      goto L_088430E0;
    }
L_088430E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843134;
      }
      goto L_088430EC;
    }
L_088430EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08843134;
      }
      goto L_08843104;
    }
L_08843104:
    aot_gpr_31 = (0x0884310Cu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 658u, 0x0884310Cu, 0x08830A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884310Cu) goto L_0884310C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884310C:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843134;
      }
      goto L_08843118;
    }
L_08843118:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16329u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x0884312Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 660u, 0x0884312Cu, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884312Cu) goto L_0884312C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884312C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088431CC;
      }
      goto L_08843134;
    }
L_08843134:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884314Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 662u, 0x0884314Cu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884314Cu) goto L_0884314C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884314C:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08843164u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843164u) goto L_08843164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843164:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843180;
      }
      goto L_08843170;
    }
L_08843170:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08843180;
L_08843180:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3528), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3532), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088431A8u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3532));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 666u, 0x088431A8u, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431A8u) goto L_088431A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088431A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3524), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3524));
    aot_gpr_31 = (0x088431B8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3520));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 667u, 0x088431B8u, 0x08830368u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431B8u) goto L_088431B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088431B8:
    aot_gpr_31 = (0x088431C0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 668u, 0x088431C0u, 0x088304E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431C0u) goto L_088431C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088431C0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088431CCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 669u, 0x088431CCu, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431CCu) goto L_088431CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088431CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x088431D8u);
    aot_gpr_5 = (0u | 16384u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 670u, 0x088431D8u, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431D8u) goto L_088431D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088431D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08843234;
      }
      goto L_088431E0;
    }
L_088431E0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088431ECu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 672u, 0x088431ECu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431ECu) goto L_088431EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088431EC:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843208u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 673u, 0x08843208u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843208u) goto L_08843208;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843208:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843218u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 674u, 0x08843218u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843218u) goto L_08843218;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843218:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0884322Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 675u, 0x0884322Cu, 0x0886004Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884322Cu) goto L_0884322C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884322C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884324C;
      }
      goto L_08843234;
    }
L_08843234:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843240u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 677u, 0x08843240u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843240u) goto L_08843240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843240:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0884324Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 678u, 0x0884324Cu, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884324Cu) goto L_0884324C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884324C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x0884325Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 679u, 0x0884325Cu, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884325Cu) goto L_0884325C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884325C:
    aot_gpr_31 = (0x08843264u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 680u, 0x08843264u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843264u) goto L_08843264;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843270u);
    aot_gpr_5 = (1024u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 681u, 0x08843270u, 0x08830CE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 166u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 166u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843270u) goto L_08843270;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843270:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088434F0;
      }
      goto L_08843278;
    }
L_08843278:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843284u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 683u, 0x08843284u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843284u) goto L_08843284;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843284:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843294u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 684u, 0x08843294u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843294u) goto L_08843294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843294:
    aot_gpr_31 = (0x0884329Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 685u, 0x0884329Cu, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884329Cu) goto L_0884329C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884329C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088432A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 686u, 0x088432A8u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088432A8u) goto L_088432A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088432A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088432BCu);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 687u, 0x088432BCu, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088432BCu) goto L_088432BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088432BC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843308;
      }
      goto L_088432C8;
    }
L_088432C8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_gpr_31 = (0x088432DCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 689u, 0x088432DCu, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088432DCu) goto L_088432DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088432DC:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[24] + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843300u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 690u, 0x08843300u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843300u) goto L_08843300;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843300:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0884331C;
      }
      goto L_08843308;
    }
L_08843308:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0884331Cu);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 692u, 0x0884331Cu, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884331Cu) goto L_0884331C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884331C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884332Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 693u, 0x0884332Cu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884332Cu) goto L_0884332C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884332C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843338u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 694u, 0x08843338u, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843338u) goto L_08843338;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843338:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843344u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 695u, 0x08843344u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843344u) goto L_08843344;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843344:
    aot_gpr_31 = (0x0884334Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 696u, 0x0884334Cu, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884334Cu) goto L_0884334C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884334C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843434;
      }
      goto L_08843358;
    }
L_08843358:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843364u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 698u, 0x08843364u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843364u) goto L_08843364;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843364:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843374u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 699u, 0x08843374u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843374u) goto L_08843374;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843374:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843380u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 700u, 0x08843380u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843380u) goto L_08843380;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843380:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884338Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 701u, 0x0884338Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884338Cu) goto L_0884338C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884338C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_31 = (0x08843398u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 702u, 0x08843398u, 0x0885F9D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 919u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 919u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843398u) goto L_08843398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843398:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088433A4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 703u, 0x088433A4u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088433A4u) goto L_088433A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088433A4:
    aot_gpr_31 = (0x088433ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 704u, 0x088433ACu, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088433ACu) goto L_088433AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088433AC:
    aot_gpr_31 = (0x088433B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 705u, 0x088433B4u, 0x08830E04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 191u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 191u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088433B4u) goto L_088433B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088433B4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[0]) || std::isnan(aot_fpr_12)) && ctx.fpr[0] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088433E4;
      }
      goto L_088433C8;
    }
L_088433C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (16119u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 21980u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088433FC;
      }
      goto L_088433E4;
    }
L_088433E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (15982u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 11457u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088433FC;
L_088433FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (16584u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08843434;
      }
      goto L_0884341C;
    }
L_0884341C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (16584u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08843434;
L_08843434:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08843440u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 711u, 0x08843440u, 0x08B0D940u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 382u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 382u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843440u) goto L_08843440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843440:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0884344C;
    }
L_0884344C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08843458;
    }
L_08843458:
    aot_gpr_31 = (0x08843460u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 714u, 0x08843460u, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843460u) goto L_08843460;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843460:
    aot_gpr_4 = (16068u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 38922u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0884347Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 715u, 0x0884347Cu, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884347Cu) goto L_0884347C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884347C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884348Cu);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 716u, 0x0884348Cu, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884348Cu) goto L_0884348C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884348C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843498u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 717u, 0x08843498u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843498u) goto L_08843498;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843498:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088434A4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 718u, 0x088434A4u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434A4u) goto L_088434A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088434A4:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088434C0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 719u, 0x088434C0u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434C0u) goto L_088434C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088434C0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088434D4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 720u, 0x088434D4u, 0x088600C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 5u, 0x088600C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434D4u) goto L_088434D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088434D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088434E0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 721u, 0x088434E0u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434E0u) goto L_088434E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088434E0:
    aot_gpr_31 = (0x088434E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 722u, 0x088434E8u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434E8u) goto L_088434E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088434E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088434F0;
    }
L_088434F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08843608;
      }
      goto L_08843500;
    }
L_08843500:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0884350Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 725u, 0x0884350Cu, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884350Cu) goto L_0884350C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884350C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884351Cu);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 726u, 0x0884351Cu, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884351Cu) goto L_0884351C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884351C:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843528u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 727u, 0x08843528u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843528u) goto L_08843528;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843528:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08843534u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 728u, 0x08843534u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843534u) goto L_08843534;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843534:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843554u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 729u, 0x08843554u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843554u) goto L_08843554;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843554:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843560u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 730u, 0x08843560u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843560u) goto L_08843560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843560:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884356Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 731u, 0x0884356Cu, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884356Cu) goto L_0884356C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884356C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843578u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 732u, 0x08843578u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843578u) goto L_08843578;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843578:
    aot_gpr_31 = (0x08843580u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 733u, 0x08843580u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843580u) goto L_08843580;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843580:
    aot_gpr_31 = (0x08843588u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1284)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 734u, 0x08843588u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843588u) goto L_08843588;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843588:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843598u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 735u, 0x08843598u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843598u) goto L_08843598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843598:
    aot_gpr_31 = (0x088435A0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 736u, 0x088435A0u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435A0u) goto L_088435A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088435A0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088435ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 737u, 0x088435ACu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435ACu) goto L_088435AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088435AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1620)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1604)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088435D4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 738u, 0x088435D4u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435D4u) goto L_088435D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088435D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088435E0u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 739u, 0x088435E0u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435E0u) goto L_088435E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088435E0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088435ECu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 740u, 0x088435ECu, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435ECu) goto L_088435EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088435EC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088435F8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 741u, 0x088435F8u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435F8u) goto L_088435F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088435F8:
    aot_gpr_31 = (0x08843600u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 742u, 0x08843600u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843600u) goto L_08843600;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843600:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08843608;
    }
L_08843608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843614u);
    aot_gpr_5 = (512u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 744u, 0x08843614u, 0x08830CE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 166u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 166u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843614u) goto L_08843614;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843614:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088437AC;
      }
      goto L_0884361C;
    }
L_0884361C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0884367C;
      }
      goto L_08843628;
    }
L_08843628:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843634u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 747u, 0x08843634u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843634u) goto L_08843634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843634:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843644u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 748u, 0x08843644u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843644u) goto L_08843644;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843644:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843650u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 749u, 0x08843650u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843650u) goto L_08843650;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843650:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884365Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 750u, 0x0884365Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884365Cu) goto L_0884365C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884365C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_gpr_31 = (0x08843668u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 751u, 0x08843668u, 0x0885FA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 921u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 921u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843668u) goto L_08843668;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843668:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843674u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 752u, 0x08843674u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843674u) goto L_08843674;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843674:
    aot_gpr_31 = (0x0884367Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 753u, 0x0884367Cu, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884367Cu) goto L_0884367C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884367C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088436E0;
      }
      goto L_08843688;
    }
L_08843688:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843694u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 755u, 0x08843694u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843694u) goto L_08843694;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843694:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088436A4u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 756u, 0x088436A4u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436A4u) goto L_088436A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436A4:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088436B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 757u, 0x088436B0u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436B0u) goto L_088436B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088436BCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 758u, 0x088436BCu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436BCu) goto L_088436BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x088436CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 759u, 0x088436CCu, 0x0885FA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 921u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 921u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436CCu) goto L_088436CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088436D8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 760u, 0x088436D8u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436D8u) goto L_088436D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436D8:
    aot_gpr_31 = (0x088436E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 761u, 0x088436E0u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436E0u) goto L_088436E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843740;
      }
      goto L_088436EC;
    }
L_088436EC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088436F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 763u, 0x088436F8u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436F8u) goto L_088436F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088436F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843708u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 764u, 0x08843708u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843708u) goto L_08843708;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843708:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843714u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 765u, 0x08843714u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843714u) goto L_08843714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843714:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843720u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 766u, 0x08843720u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843720u) goto L_08843720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843720:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    aot_gpr_31 = (0x0884372Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 767u, 0x0884372Cu, 0x0885F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 917u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 917u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884372Cu) goto L_0884372C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884372C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843738u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 768u, 0x08843738u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843738u) goto L_08843738;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843738:
    aot_gpr_31 = (0x08843740u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 769u, 0x08843740u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843740u) goto L_08843740;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843740:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0884374C;
    }
L_0884374C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843758u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1316)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 771u, 0x08843758u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843758u) goto L_08843758;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843758:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843768u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 772u, 0x08843768u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843768u) goto L_08843768;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843768:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843774u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 773u, 0x08843774u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843774u) goto L_08843774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843774:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843780u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 774u, 0x08843780u, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843780u) goto L_08843780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843780:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x08843790u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 775u, 0x08843790u, 0x0885F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 917u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 917u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843790u) goto L_08843790;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843790:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884379Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 776u, 0x0884379Cu, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884379Cu) goto L_0884379C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884379C:
    aot_gpr_31 = (0x088437A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 777u, 0x088437A4u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437A4u) goto L_088437A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088437A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088437AC;
    }
L_088437AC:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088437B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 779u, 0x088437B8u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437B8u) goto L_088437B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088437B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088437C8u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 780u, 0x088437C8u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437C8u) goto L_088437C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088437C8:
    aot_gpr_31 = (0x088437D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 781u, 0x088437D0u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437D0u) goto L_088437D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088437D0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088437DCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 782u, 0x088437DCu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437DCu) goto L_088437DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088437DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0884380C;
      }
      goto L_088437FC;
    }
L_088437FC:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_0884380C;
L_0884380C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08843818u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 785u, 0x08843818u, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843818u) goto L_08843818;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843818:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843860;
      }
      goto L_08843824;
    }
L_08843824:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08843834u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 787u, 0x08843834u, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843834u) goto L_08843834;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843834:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843858u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 788u, 0x08843858u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843858u) goto L_08843858;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843858:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843874;
      }
      goto L_08843860;
    }
L_08843860:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08843874u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 790u, 0x08843874u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843874u) goto L_08843874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843874:
    aot_gpr_31 = (0x0884387Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884387Cu) goto L_0884387C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884387C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08843B44;
      }
      goto L_08843884;
    }
L_08843884:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_08843890;
    }
L_08843890:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1544)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_088438A8;
    }
L_088438A8:
    aot_gpr_31 = (0x088438B0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 795u, 0x088438B0u, 0x08830A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438B0u) goto L_088438B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088438B0:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_088438BC;
    }
L_088438BC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x088438D0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 797u, 0x088438D0u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438D0u) goto L_088438D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088438D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843998;
      }
      goto L_088438E4;
    }
L_088438E4:
    aot_gpr_31 = (0x088438ECu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438ECu) goto L_088438EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088438EC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3536));
    aot_gpr_31 = (0x088438F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438F8u) goto L_088438F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088438F8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3552));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3568));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843914u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843914u) goto L_08843914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843914:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843924u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 802u, 0x08843924u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843924u) goto L_08843924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843924:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3584));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0884393Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 803u, 0x0884393Cu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884393Cu) goto L_0884393C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884393C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x0884394Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 804u, 0x0884394Cu, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884394Cu) goto L_0884394C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884394C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0884395Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 805u, 0x0884395Cu, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884395Cu) goto L_0884395C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0884395C:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08843990u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 806u, 0x08843990u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843990u) goto L_08843990;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843990:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843B44;
      }
      goto L_08843998;
    }
L_08843998:
    aot_gpr_31 = (0x088439A0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439A0u) goto L_088439A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3600));
    aot_gpr_31 = (0x088439ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439ACu) goto L_088439AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439AC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3616));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3632));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3648));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088439D0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439D0u) goto L_088439D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439D0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088439E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 811u, 0x088439E0u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439E0u) goto L_088439E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088439E0:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3664));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088439F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 812u, 0x088439F8u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439F8u) goto L_088439F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088439F8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08843A08u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 813u, 0x08843A08u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A08u) goto L_08843A08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843A08:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08843A18u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 814u, 0x08843A18u, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A18u) goto L_08843A18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843A18:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3680));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843A38u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A38u) goto L_08843A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A38:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08843A48u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 816u, 0x08843A48u, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A48u) goto L_08843A48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843A48:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843A58u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 817u, 0x08843A58u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A58u) goto L_08843A58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843A58:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843A70u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 818u, 0x08843A70u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A70u) goto L_08843A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843A70:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08843AA0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 819u, 0x08843AA0u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843AA0u) goto L_08843AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843AA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843B44;
      }
      goto L_08843AA8;
    }
L_08843AA8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    ctx.fpr[22] = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843AC0u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 821u, 0x08843AC0u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843AC0u) goto L_08843AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843AC0:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_14;
    aot_gpr_31 = (0x08843AD8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843AD8u) goto L_08843AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843AD8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843AF4;
      }
      goto L_08843AE4;
    }
L_08843AE4:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08843AF4;
L_08843AF4:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3696), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3704), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3704));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3708), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08843B20u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3708));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 825u, 0x08843B20u, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B20u) goto L_08843B20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3700), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3700));
    aot_gpr_31 = (0x08843B30u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3696));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 826u, 0x08843B30u, 0x08830368u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B30u) goto L_08843B30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B30:
    aot_gpr_31 = (0x08843B38u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 827u, 0x08843B38u, 0x088304E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B38u) goto L_08843B38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B38:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843B44u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 828u, 0x08843B44u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B44u) goto L_08843B44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843B50u);
    aot_gpr_5 = (0u | 512u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 829u, 0x08843B50u, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B50u) goto L_08843B50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B50:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08843BAC;
      }
      goto L_08843B58;
    }
L_08843B58:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843B64u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 831u, 0x08843B64u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B64u) goto L_08843B64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B64:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843B80u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 832u, 0x08843B80u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B80u) goto L_08843B80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B80:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843B90u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 833u, 0x08843B90u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B90u) goto L_08843B90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843B90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08843BA4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 834u, 0x08843BA4u, 0x0886004Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BA4u) goto L_08843BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843BC4;
      }
      goto L_08843BAC;
    }
L_08843BAC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843BB8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 836u, 0x08843BB8u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BB8u) goto L_08843BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BB8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843BC4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 837u, 0x08843BC4u, 0x0886001Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BC4u) goto L_08843BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BC4:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843BD8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 838u, 0x08843BD8u, 0x088307B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 105u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 105u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BD8u) goto L_08843BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BD8:
    aot_gpr_31 = (0x08843BE0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 839u, 0x08843BE0u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BE0u) goto L_08843BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BE0:
    aot_gpr_31 = (0x08843BE8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1284)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 840u, 0x08843BE8u, 0x08830238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BE8u) goto L_08843BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BE8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843BF8u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 841u, 0x08843BF8u, 0x088306B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BF8u) goto L_08843BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843BF8:
    aot_gpr_31 = (0x08843C00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 842u, 0x08843C00u, 0x088307ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C00u) goto L_08843C00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843C00:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08843C0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 843u, 0x08843C0Cu, 0x08830668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C0Cu) goto L_08843C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843C0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1620)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08843C3C;
      }
      goto L_08843C2C;
    }
L_08843C2C:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08843C3C;
L_08843C3C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08843C48u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 846u, 0x08843C48u, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C48u) goto L_08843C48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843C48:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843CA4;
      }
      goto L_08843C54;
    }
L_08843C54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1604)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_13;
    aot_gpr_31 = (0x08843C78u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 848u, 0x08843C78u, 0x08830498u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C78u) goto L_08843C78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843C78:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843C9Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 849u, 0x08843C9Cu, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C9Cu) goto L_08843C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843C9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843CC8;
      }
      goto L_08843CA4;
    }
L_08843CA4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1604)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08843CC8u);
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 851u, 0x08843CC8u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843CC8u) goto L_08843CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843CC8:
    aot_gpr_31 = (0x08843CD0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843CD0u) goto L_08843CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843CD0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08843F90;
      }
      goto L_08843CD8;
    }
L_08843CD8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843EF8;
      }
      goto L_08843CE4;
    }
L_08843CE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08843EF8;
      }
      goto L_08843CFC;
    }
L_08843CFC:
    aot_gpr_31 = (0x08843D04u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 856u, 0x08843D04u, 0x08830A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D04u) goto L_08843D04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843D04:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843EF8;
      }
      goto L_08843D10;
    }
L_08843D10:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16329u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08843D24u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 858u, 0x08843D24u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D24u) goto L_08843D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843D24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08843DE8;
      }
      goto L_08843D34;
    }
L_08843D34:
    aot_gpr_31 = (0x08843D3Cu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D3Cu) goto L_08843D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D3C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3712));
    aot_gpr_31 = (0x08843D48u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D48u) goto L_08843D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D48:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3728));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3744));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843D64u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D64u) goto L_08843D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D64:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843D74u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 863u, 0x08843D74u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D74u) goto L_08843D74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843D74:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3760));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843D8Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 864u, 0x08843D8Cu, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D8Cu) goto L_08843D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843D8C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843D9Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 865u, 0x08843D9Cu, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D9Cu) goto L_08843D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843D9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08843DACu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 866u, 0x08843DACu, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DACu) goto L_08843DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843DAC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08843DE0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 867u, 0x08843DE0u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DE0u) goto L_08843DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843DE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843F90;
      }
      goto L_08843DE8;
    }
L_08843DE8:
    aot_gpr_31 = (0x08843DF0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DF0u) goto L_08843DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843DF0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3776));
    aot_gpr_31 = (0x08843DFCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DFCu) goto L_08843DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843DFC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3792));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3808));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3824));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843E20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E20u) goto L_08843E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E20:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843E30u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 872u, 0x08843E30u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E30u) goto L_08843E30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843E30:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3840));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843E48u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 873u, 0x08843E48u, 0x08830794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E48u) goto L_08843E48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843E48:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843E58u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 874u, 0x08843E58u, 0x08830310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 44u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 44u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E58u) goto L_08843E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843E58:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08843E68u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 875u, 0x08843E68u, 0x088302F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E68u) goto L_08843E68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843E68:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3856));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843E88u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E88u) goto L_08843E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E88:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08843E98u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 877u, 0x08843E98u, 0x088302E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 42u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 42u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E98u) goto L_08843E98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843E98:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843EA8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 878u, 0x08843EA8u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843EA8u) goto L_08843EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843EA8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843EC0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 879u, 0x08843EC0u, 0x08830424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843EC0u) goto L_08843EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843EC0:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08843EF0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 880u, 0x08843EF0u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843EF0u) goto L_08843EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843EF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08843F90;
      }
      goto L_08843EF8;
    }
L_08843EF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843F10u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 882u, 0x08843F10u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F10u) goto L_08843F10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843F10:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08843F28u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F28u) goto L_08843F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F28:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08843F44;
      }
      goto L_08843F34;
    }
L_08843F34:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08843F44;
L_08843F44:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3872), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3880), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3880));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3884), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843F6Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3884));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 886u, 0x08843F6Cu, 0x088303FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F6Cu) goto L_08843F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843F6C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3876), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3876));
    aot_gpr_31 = (0x08843F7Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3872));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 887u, 0x08843F7Cu, 0x08830368u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F7Cu) goto L_08843F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843F7C:
    aot_gpr_31 = (0x08843F84u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 888u, 0x08843F84u, 0x088304E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F84u) goto L_08843F84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843F84:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843F90u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 889u, 0x08843F90u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F90u) goto L_08843F90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843F90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843F9Cu);
    aot_gpr_5 = (0u | 512u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 890u, 0x08843F9Cu, 0x08830CD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F9Cu) goto L_08843F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843F9C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08843FF8;
      }
      goto L_08843FA4;
    }
L_08843FA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843FB0u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 892u, 0x08843FB0u, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FB0u) goto L_08843FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843FB0:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843FCCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 893u, 0x08843FCCu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FCCu) goto L_08843FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843FCC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843FDCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 894u, 0x08843FDCu, 0x08830D98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FDCu) goto L_08843FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843FDC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843FF0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0015->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0015_entry, 895u, 0x08843FF0u, 0x0886004Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FF0u) goto L_08843FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08843FF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 2u, 0x08844010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08843FF8;
    }
L_08843FF8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08844004u);
    aot_gpr_5 = (0u | 1u);
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0015(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0015_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_15(Runtime &runtime) {
    runtime.register_generated_unit(15u, 0x08840000u, 16384u, &recomp_unit_0015, &recomp_unit_0015_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08840000u, &recomp_unit_0015, "recomp_unit_0015",
                                          kEntryMasks_recomp_unit_0015, 64u);
}
} // namespace psprecomp
