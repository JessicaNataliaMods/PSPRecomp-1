#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0072[64] = {
    0xAAA5415554A25555ull, 0x114AAAAAAAAAAAAAull, 0x050495008A012955ull, 0x01000A0511449642ull,
    0x94A5554000400010ull, 0x8922290215555550ull, 0x020188281514AA94ull, 0x002A022AA9000400ull,
    0xAAA8288452888500ull, 0x25171111042552A2ull, 0x54492A2908221052ull, 0x52800088840558A8ull,
    0x0A402010AA549155ull, 0x11AA8210A2000412ull, 0x14A4004100401542ull, 0x1362262444105415ull,
    0x2A640A993122852Bull, 0x104489624425446Aull, 0x0A50A8509588888Aull, 0x405542942A142545ull,
    0x02A81400C5540000ull, 0x00A00100029848D5ull, 0x0108249040201041ull, 0x0421250928490402ull,
    0x0124A424A1241008ull, 0x8442122480492884ull, 0x0010002084120200ull, 0x0000080000020000ull,
    0x2008808000000200ull, 0x4804028000040404ull, 0x3454288888A04820ull, 0x0404000000054811ull,
    0x2111280400110020ull, 0x01406110000A8854ull, 0x252200000000000Dull, 0x9088000000002428ull,
    0x90000000000004AAull, 0x9080020001010D10ull, 0x0040526915211548ull, 0x04454A2084000000ull,
    0x0000108449444548ull, 0x5119400500001400ull, 0x000018A915550224ull, 0x4021429929211410ull,
    0x4A0000A28010A480ull, 0x028AD5488AAA8A22ull, 0x0085511290121000ull, 0x0800229112094A45ull,
    0xA480140088080080ull, 0xAA84828414086112ull, 0x321080A095050480ull, 0x00280008000128A9ull,
    0x91481454A8884294ull, 0x885242204525494Aull, 0x2A48890000952A08ull, 0x241020214081524Aull,
    0x208488AA02555492ull, 0x28A9424204109510ull, 0x4088112242888892ull, 0x920515240112A204ull,
    0x4494524C90AC4444ull, 0x4A92514545229144ull, 0xA084480454562222ull, 0x1120914AA8452A04ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0072[64] = {
    1u, 29u, 58u, 76u, 91u, 105u, 127u, 145u, 157u, 176u, 197u, 216u, 232u, 251u, 266u, 279u,
    299u, 323u, 343u, 363u, 384u, 397u, 411u, 422u, 437u, 452u, 468u, 475u, 477u, 482u, 490u, 507u,
    515u, 525u, 538u, 546u, 554u, 561u, 571u, 589u, 599u, 612u, 623u, 639u, 656u, 668u, 691u, 704u,
    720u, 730u, 748u, 763u, 773u, 793u, 813u, 829u, 844u, 864u, 881u, 897u, 914u, 935u, 957u, 975u,
};
void recomp_unit_0072_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,2,6,16 fprs=12,13,20,14 gpr_occ=4214 fpr_occ=571 gpr_total=5578 fpr_total=723
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08924000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0072[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0072[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08924000;
    case 2u: goto L_08924008;
    case 3u: goto L_08924010;
    case 4u: goto L_08924018;
    case 5u: goto L_08924020;
    case 6u: goto L_08924028;
    case 7u: goto L_08924030;
    case 8u: goto L_08924038;
    case 9u: goto L_08924044;
    case 10u: goto L_08924054;
    case 11u: goto L_0892405C;
    case 12u: goto L_08924068;
    case 13u: goto L_08924070;
    case 14u: goto L_08924078;
    case 15u: goto L_08924080;
    case 16u: goto L_08924088;
    case 17u: goto L_08924090;
    case 18u: goto L_08924098;
    case 19u: goto L_089240A0;
    case 20u: goto L_089240B8;
    case 21u: goto L_089240C0;
    case 22u: goto L_089240C8;
    case 23u: goto L_089240D4;
    case 24u: goto L_089240DC;
    case 25u: goto L_089240E4;
    case 26u: goto L_089240EC;
    case 27u: goto L_089240F4;
    case 28u: goto L_089240FC;
    case 29u: goto L_08924104;
    case 30u: goto L_0892410C;
    case 31u: goto L_08924114;
    case 32u: goto L_0892411C;
    case 33u: goto L_08924124;
    case 34u: goto L_0892412C;
    case 35u: goto L_08924134;
    case 36u: goto L_0892413C;
    case 37u: goto L_08924144;
    case 38u: goto L_0892414C;
    case 39u: goto L_08924154;
    case 40u: goto L_0892415C;
    case 41u: goto L_08924164;
    case 42u: goto L_0892416C;
    case 43u: goto L_08924174;
    case 44u: goto L_0892417C;
    case 45u: goto L_08924184;
    case 46u: goto L_0892418C;
    case 47u: goto L_08924194;
    case 48u: goto L_0892419C;
    case 49u: goto L_089241A4;
    case 50u: goto L_089241AC;
    case 51u: goto L_089241B4;
    case 52u: goto L_089241BC;
    case 53u: goto L_089241C4;
    case 54u: goto L_089241CC;
    case 55u: goto L_089241D8;
    case 56u: goto L_089241E0;
    case 57u: goto L_089241F0;
    case 58u: goto L_08924200;
    case 59u: goto L_08924208;
    case 60u: goto L_08924210;
    case 61u: goto L_08924218;
    case 62u: goto L_08924220;
    case 63u: goto L_0892422C;
    case 64u: goto L_08924234;
    case 65u: goto L_08924240;
    case 66u: goto L_08924264;
    case 67u: goto L_0892426C;
    case 68u: goto L_0892427C;
    case 69u: goto L_089242A0;
    case 70u: goto L_089242A8;
    case 71u: goto L_089242B0;
    case 72u: goto L_089242BC;
    case 73u: goto L_089242C8;
    case 74u: goto L_089242E0;
    case 75u: goto L_089242E8;
    case 76u: goto L_08924304;
    case 77u: goto L_08924318;
    case 78u: goto L_08924324;
    case 79u: goto L_08924328;
    case 80u: goto L_08924330;
    case 81u: goto L_0892433C;
    case 82u: goto L_08924348;
    case 83u: goto L_08924358;
    case 84u: goto L_08924360;
    case 85u: goto L_08924370;
    case 86u: goto L_08924380;
    case 87u: goto L_08924388;
    case 88u: goto L_089243A4;
    case 89u: goto L_089243AC;
    case 90u: goto L_089243E0;
    case 91u: goto L_08924410;
    case 92u: goto L_08924458;
    case 93u: goto L_08924498;
    case 94u: goto L_089244A0;
    case 95u: goto L_089244A8;
    case 96u: goto L_089244B0;
    case 97u: goto L_089244B8;
    case 98u: goto L_089244C0;
    case 99u: goto L_089244C8;
    case 100u: goto L_089244D4;
    case 101u: goto L_089244DC;
    case 102u: goto L_089244E8;
    case 103u: goto L_089244F0;
    case 104u: goto L_089244FC;
    case 105u: goto L_08924510;
    case 106u: goto L_08924518;
    case 107u: goto L_08924520;
    case 108u: goto L_08924528;
    case 109u: goto L_08924530;
    case 110u: goto L_08924538;
    case 111u: goto L_08924540;
    case 112u: goto L_08924548;
    case 113u: goto L_08924550;
    case 114u: goto L_08924558;
    case 115u: goto L_08924560;
    case 116u: goto L_08924568;
    case 117u: goto L_08924570;
    case 118u: goto L_08924584;
    case 119u: goto L_089245A0;
    case 120u: goto L_089245AC;
    case 121u: goto L_089245B4;
    case 122u: goto L_089245C4;
    case 123u: goto L_089245D4;
    case 124u: goto L_089245E0;
    case 125u: goto L_089245EC;
    case 126u: goto L_089245FC;
    case 127u: goto L_08924608;
    case 128u: goto L_08924610;
    case 129u: goto L_0892461C;
    case 130u: goto L_08924624;
    case 131u: goto L_0892462C;
    case 132u: goto L_08924634;
    case 133u: goto L_0892463C;
    case 134u: goto L_08924648;
    case 135u: goto L_08924650;
    case 136u: goto L_08924660;
    case 137u: goto L_08924668;
    case 138u: goto L_08924670;
    case 139u: goto L_0892468C;
    case 140u: goto L_08924694;
    case 141u: goto L_089246AC;
    case 142u: goto L_089246BC;
    case 143u: goto L_089246C0;
    case 144u: goto L_089246E4;
    case 145u: goto L_08924728;
    case 146u: goto L_08924760;
    case 147u: goto L_0892476C;
    case 148u: goto L_08924774;
    case 149u: goto L_0892477C;
    case 150u: goto L_08924784;
    case 151u: goto L_0892478C;
    case 152u: goto L_08924794;
    case 153u: goto L_089247A4;
    case 154u: goto L_089247C4;
    case 155u: goto L_089247CC;
    case 156u: goto L_089247D4;
    case 157u: goto L_08924820;
    case 158u: goto L_08924828;
    case 159u: goto L_0892483C;
    case 160u: goto L_0892484C;
    case 161u: goto L_0892485C;
    case 162u: goto L_08924864;
    case 163u: goto L_08924870;
    case 164u: goto L_08924878;
    case 165u: goto L_08924888;
    case 166u: goto L_0892489C;
    case 167u: goto L_089248AC;
    case 168u: goto L_089248B4;
    case 169u: goto L_089248CC;
    case 170u: goto L_089248D4;
    case 171u: goto L_089248DC;
    case 172u: goto L_089248E4;
    case 173u: goto L_089248EC;
    case 174u: goto L_089248F4;
    case 175u: goto L_089248FC;
    case 176u: goto L_08924904;
    case 177u: goto L_08924914;
    case 178u: goto L_0892491C;
    case 179u: goto L_08924924;
    case 180u: goto L_08924930;
    case 181u: goto L_08924938;
    case 182u: goto L_08924940;
    case 183u: goto L_08924948;
    case 184u: goto L_08924954;
    case 185u: goto L_08924968;
    case 186u: goto L_08924980;
    case 187u: goto L_08924990;
    case 188u: goto L_089249A0;
    case 189u: goto L_089249B0;
    case 190u: goto L_089249C0;
    case 191u: goto L_089249C4;
    case 192u: goto L_089249C8;
    case 193u: goto L_089249D0;
    case 194u: goto L_089249E0;
    case 195u: goto L_089249E8;
    case 196u: goto L_089249F4;
    case 197u: goto L_08924A04;
    case 198u: goto L_08924A10;
    case 199u: goto L_08924A18;
    case 200u: goto L_08924A30;
    case 201u: goto L_08924A44;
    case 202u: goto L_08924A54;
    case 203u: goto L_08924A6C;
    case 204u: goto L_08924A80;
    case 205u: goto L_08924A8C;
    case 206u: goto L_08924A94;
    case 207u: goto L_08924AA4;
    case 208u: goto L_08924AAC;
    case 209u: goto L_08924AB4;
    case 210u: goto L_08924AC0;
    case 211u: goto L_08924ACC;
    case 212u: goto L_08924AD8;
    case 213u: goto L_08924AE8;
    case 214u: goto L_08924AF0;
    case 215u: goto L_08924AF8;
    case 216u: goto L_08924B0C;
    case 217u: goto L_08924B14;
    case 218u: goto L_08924B1C;
    case 219u: goto L_08924B2C;
    case 220u: goto L_08924B30;
    case 221u: goto L_08924B38;
    case 222u: goto L_08924B40;
    case 223u: goto L_08924B48;
    case 224u: goto L_08924B68;
    case 225u: goto L_08924B7C;
    case 226u: goto L_08924B8C;
    case 227u: goto L_08924B9C;
    case 228u: goto L_08924BDC;
    case 229u: goto L_08924BE4;
    case 230u: goto L_08924BF0;
    case 231u: goto L_08924BF8;
    case 232u: goto L_08924C00;
    case 233u: goto L_08924C08;
    case 234u: goto L_08924C10;
    case 235u: goto L_08924C18;
    case 236u: goto L_08924C20;
    case 237u: goto L_08924C30;
    case 238u: goto L_08924C3C;
    case 239u: goto L_08924C48;
    case 240u: goto L_08924C50;
    case 241u: goto L_08924C58;
    case 242u: goto L_08924C64;
    case 243u: goto L_08924C6C;
    case 244u: goto L_08924C74;
    case 245u: goto L_08924C7C;
    case 246u: goto L_08924C90;
    case 247u: goto L_08924CB4;
    case 248u: goto L_08924CD8;
    case 249u: goto L_08924CE4;
    case 250u: goto L_08924CEC;
    case 251u: goto L_08924D04;
    case 252u: goto L_08924D10;
    case 253u: goto L_08924D28;
    case 254u: goto L_08924D64;
    case 255u: goto L_08924D74;
    case 256u: goto L_08924D7C;
    case 257u: goto L_08924D90;
    case 258u: goto L_08924DA4;
    case 259u: goto L_08924DBC;
    case 260u: goto L_08924DC4;
    case 261u: goto L_08924DCC;
    case 262u: goto L_08924DD4;
    case 263u: goto L_08924DDC;
    case 264u: goto L_08924DE0;
    case 265u: goto L_08924DF0;
    case 266u: goto L_08924E04;
    case 267u: goto L_08924E18;
    case 268u: goto L_08924E20;
    case 269u: goto L_08924E28;
    case 270u: goto L_08924E30;
    case 271u: goto L_08924E58;
    case 272u: goto L_08924E80;
    case 273u: goto L_08924E98;
    case 274u: goto L_08924EC8;
    case 275u: goto L_08924ED4;
    case 276u: goto L_08924EDC;
    case 277u: goto L_08924EE8;
    case 278u: goto L_08924EF0;
    case 279u: goto L_08924F00;
    case 280u: goto L_08924F08;
    case 281u: goto L_08924F10;
    case 282u: goto L_08924F28;
    case 283u: goto L_08924F30;
    case 284u: goto L_08924F38;
    case 285u: goto L_08924F50;
    case 286u: goto L_08924F68;
    case 287u: goto L_08924F78;
    case 288u: goto L_08924F88;
    case 289u: goto L_08924F94;
    case 290u: goto L_08924FA4;
    case 291u: goto L_08924FA8;
    case 292u: goto L_08924FB4;
    case 293u: goto L_08924FC4;
    case 294u: goto L_08924FD4;
    case 295u: goto L_08924FD8;
    case 296u: goto L_08924FE0;
    case 297u: goto L_08924FE4;
    case 298u: goto L_08924FF0;
    case 299u: goto L_08925000;
    case 300u: goto L_08925004;
    case 301u: goto L_0892500C;
    case 302u: goto L_08925014;
    case 303u: goto L_08925020;
    case 304u: goto L_08925028;
    case 305u: goto L_0892503C;
    case 306u: goto L_08925044;
    case 307u: goto L_08925054;
    case 308u: goto L_08925060;
    case 309u: goto L_08925070;
    case 310u: goto L_08925074;
    case 311u: goto L_08925080;
    case 312u: goto L_0892508C;
    case 313u: goto L_08925090;
    case 314u: goto L_0892509C;
    case 315u: goto L_089250A4;
    case 316u: goto L_089250AC;
    case 317u: goto L_089250C8;
    case 318u: goto L_089250D4;
    case 319u: goto L_089250D8;
    case 320u: goto L_089250E4;
    case 321u: goto L_089250EC;
    case 322u: goto L_089250F4;
    case 323u: goto L_08925104;
    case 324u: goto L_0892510C;
    case 325u: goto L_08925114;
    case 326u: goto L_08925118;
    case 327u: goto L_08925128;
    case 328u: goto L_08925138;
    case 329u: goto L_08925140;
    case 330u: goto L_08925148;
    case 331u: goto L_08925154;
    case 332u: goto L_08925168;
    case 333u: goto L_08925178;
    case 334u: goto L_08925184;
    case 335u: goto L_08925194;
    case 336u: goto L_08925198;
    case 337u: goto L_089251A0;
    case 338u: goto L_089251AC;
    case 339u: goto L_089251BC;
    case 340u: goto L_089251C8;
    case 341u: goto L_089251D8;
    case 342u: goto L_089251F0;
    case 343u: goto L_08925204;
    case 344u: goto L_0892520C;
    case 345u: goto L_0892521C;
    case 346u: goto L_0892522C;
    case 347u: goto L_0892523C;
    case 348u: goto L_0892524C;
    case 349u: goto L_0892525C;
    case 350u: goto L_08925260;
    case 351u: goto L_08925268;
    case 352u: goto L_08925270;
    case 353u: goto L_0892527C;
    case 354u: goto L_08925290;
    case 355u: goto L_08925298;
    case 356u: goto L_089252AC;
    case 357u: goto L_089252B4;
    case 358u: goto L_089252BC;
    case 359u: goto L_089252D0;
    case 360u: goto L_089252D8;
    case 361u: goto L_089252E4;
    case 362u: goto L_089252EC;
    case 363u: goto L_08925300;
    case 364u: goto L_08925308;
    case 365u: goto L_08925318;
    case 366u: goto L_08925320;
    case 367u: goto L_08925328;
    case 368u: goto L_08925334;
    case 369u: goto L_08925348;
    case 370u: goto L_08925350;
    case 371u: goto L_08925364;
    case 372u: goto L_0892536C;
    case 373u: goto L_08925374;
    case 374u: goto L_08925388;
    case 375u: goto L_08925390;
    case 376u: goto L_0892539C;
    case 377u: goto L_089253A4;
    case 378u: goto L_089253B8;
    case 379u: goto L_089253C0;
    case 380u: goto L_089253C8;
    case 381u: goto L_089253D0;
    case 382u: goto L_089253D8;
    case 383u: goto L_089253F8;
    case 384u: goto L_08925448;
    case 385u: goto L_08925450;
    case 386u: goto L_08925458;
    case 387u: goto L_08925460;
    case 388u: goto L_08925468;
    case 389u: goto L_08925478;
    case 390u: goto L_0892547C;
    case 391u: goto L_089254A8;
    case 392u: goto L_089254B0;
    case 393u: goto L_089254CC;
    case 394u: goto L_089254D4;
    case 395u: goto L_089254DC;
    case 396u: goto L_089254E4;
    case 397u: goto L_08925500;
    case 398u: goto L_08925508;
    case 399u: goto L_08925510;
    case 400u: goto L_08925518;
    case 401u: goto L_0892551C;
    case 402u: goto L_0892552C;
    case 403u: goto L_08925538;
    case 404u: goto L_0892554C;
    case 405u: goto L_08925550;
    case 406u: goto L_0892555C;
    case 407u: goto L_08925564;
    case 408u: goto L_089255A0;
    case 409u: goto L_089255D4;
    case 410u: goto L_089255DC;
    case 411u: goto L_08925600;
    case 412u: goto L_08925618;
    case 413u: goto L_08925630;
    case 414u: goto L_08925654;
    case 415u: goto L_08925678;
    case 416u: goto L_08925690;
    case 417u: goto L_0892569C;
    case 418u: goto L_089256A8;
    case 419u: goto L_089256B4;
    case 420u: goto L_089256CC;
    case 421u: goto L_089256E0;
    case 422u: goto L_08925704;
    case 423u: goto L_08925728;
    case 424u: goto L_08925740;
    case 425u: goto L_0892574C;
    case 426u: goto L_08925758;
    case 427u: goto L_0892576C;
    case 428u: goto L_08925774;
    case 429u: goto L_08925780;
    case 430u: goto L_0892578C;
    case 431u: goto L_089257A0;
    case 432u: goto L_089257A8;
    case 433u: goto L_089257B4;
    case 434u: goto L_089257C0;
    case 435u: goto L_089257D4;
    case 436u: goto L_089257E8;
    case 437u: goto L_0892580C;
    case 438u: goto L_08925830;
    case 439u: goto L_08925848;
    case 440u: goto L_08925854;
    case 441u: goto L_08925860;
    case 442u: goto L_08925874;
    case 443u: goto L_0892587C;
    case 444u: goto L_08925888;
    case 445u: goto L_08925894;
    case 446u: goto L_089258A8;
    case 447u: goto L_089258B4;
    case 448u: goto L_089258BC;
    case 449u: goto L_089258C8;
    case 450u: goto L_089258D4;
    case 451u: goto L_089258E0;
    case 452u: goto L_08925908;
    case 453u: goto L_0892591C;
    case 454u: goto L_0892592C;
    case 455u: goto L_08925934;
    case 456u: goto L_08925940;
    case 457u: goto L_0892594C;
    case 458u: goto L_08925958;
    case 459u: goto L_0892597C;
    case 460u: goto L_08925988;
    case 461u: goto L_08925994;
    case 462u: goto L_089259A4;
    case 463u: goto L_089259B0;
    case 464u: goto L_089259C4;
    case 465u: goto L_089259D8;
    case 466u: goto L_089259E8;
    case 467u: goto L_089259FC;
    case 468u: goto L_08925A24;
    case 469u: goto L_08925A44;
    case 470u: goto L_08925A50;
    case 471u: goto L_08925A68;
    case 472u: goto L_08925A7C;
    case 473u: goto L_08925A94;
    case 474u: goto L_08925AD0;
    case 475u: goto L_08925B44;
    case 476u: goto L_08925BAC;
    case 477u: goto L_08925C24;
    case 478u: goto L_08925C9C;
    case 479u: goto L_08925CBC;
    case 480u: goto L_08925CCC;
    case 481u: goto L_08925CF4;
    case 482u: goto L_08925D08;
    case 483u: goto L_08925D28;
    case 484u: goto L_08925D48;
    case 485u: goto L_08925D9C;
    case 486u: goto L_08925DA4;
    case 487u: goto L_08925DC8;
    case 488u: goto L_08925DEC;
    case 489u: goto L_08925DF8;
    case 490u: goto L_08925E14;
    case 491u: goto L_08925E2C;
    case 492u: goto L_08925E38;
    case 493u: goto L_08925E54;
    case 494u: goto L_08925E5C;
    case 495u: goto L_08925E6C;
    case 496u: goto L_08925E7C;
    case 497u: goto L_08925E8C;
    case 498u: goto L_08925E9C;
    case 499u: goto L_08925EAC;
    case 500u: goto L_08925EB4;
    case 501u: goto L_08925EC8;
    case 502u: goto L_08925ED0;
    case 503u: goto L_08925ED8;
    case 504u: goto L_08925EE8;
    case 505u: goto L_08925EF0;
    case 506u: goto L_08925EF4;
    case 507u: goto L_08925F00;
    case 508u: goto L_08925F10;
    case 509u: goto L_08925F2C;
    case 510u: goto L_08925F38;
    case 511u: goto L_08925F40;
    case 512u: goto L_08925F48;
    case 513u: goto L_08925FC8;
    case 514u: goto L_08925FE8;
    case 515u: goto L_08926014;
    case 516u: goto L_08926040;
    case 517u: goto L_08926050;
    case 518u: goto L_08926088;
    case 519u: goto L_089260AC;
    case 520u: goto L_089260B4;
    case 521u: goto L_089260C0;
    case 522u: goto L_089260D0;
    case 523u: goto L_089260E0;
    case 524u: goto L_089260F4;
    case 525u: goto L_08926108;
    case 526u: goto L_08926110;
    case 527u: goto L_08926118;
    case 528u: goto L_0892612C;
    case 529u: goto L_0892613C;
    case 530u: goto L_08926144;
    case 531u: goto L_0892614C;
    case 532u: goto L_08926190;
    case 533u: goto L_089261A0;
    case 534u: goto L_089261B4;
    case 535u: goto L_089261B8;
    case 536u: goto L_089261D8;
    case 537u: goto L_089261E0;
    case 538u: goto L_08926200;
    case 539u: goto L_08926208;
    case 540u: goto L_0892620C;
    case 541u: goto L_089262C4;
    case 542u: goto L_089262D4;
    case 543u: goto L_089262E0;
    case 544u: goto L_089262E8;
    case 545u: goto L_089262F4;
    case 546u: goto L_0892630C;
    case 547u: goto L_08926314;
    case 548u: goto L_08926328;
    case 549u: goto L_08926334;
    case 550u: goto L_089263CC;
    case 551u: goto L_089263DC;
    case 552u: goto L_089263F0;
    case 553u: goto L_089263FC;
    case 554u: goto L_08926404;
    case 555u: goto L_0892640C;
    case 556u: goto L_08926414;
    case 557u: goto L_0892641C;
    case 558u: goto L_08926428;
    case 559u: goto L_089264F0;
    case 560u: goto L_089264FC;
    case 561u: goto L_08926510;
    case 562u: goto L_08926520;
    case 563u: goto L_08926528;
    case 564u: goto L_0892652C;
    case 565u: goto L_08926540;
    case 566u: goto L_08926560;
    case 567u: goto L_089265A4;
    case 568u: goto L_089265DC;
    case 569u: goto L_089265F0;
    case 570u: goto L_089265FC;
    case 571u: goto L_0892660C;
    case 572u: goto L_08926618;
    case 573u: goto L_08926620;
    case 574u: goto L_08926628;
    case 575u: goto L_08926630;
    case 576u: goto L_08926640;
    case 577u: goto L_08926654;
    case 578u: goto L_08926660;
    case 579u: goto L_08926668;
    case 580u: goto L_08926670;
    case 581u: goto L_08926680;
    case 582u: goto L_0892668C;
    case 583u: goto L_08926694;
    case 584u: goto L_08926698;
    case 585u: goto L_089266A4;
    case 586u: goto L_089266B0;
    case 587u: goto L_089266B8;
    case 588u: goto L_089266D8;
    case 589u: goto L_08926768;
    case 590u: goto L_0892677C;
    case 591u: goto L_08926794;
    case 592u: goto L_089267A4;
    case 593u: goto L_089267AC;
    case 594u: goto L_089267B8;
    case 595u: goto L_089267C0;
    case 596u: goto L_089267C8;
    case 597u: goto L_089267D8;
    case 598u: goto L_089267E8;
    case 599u: goto L_0892680C;
    case 600u: goto L_08926818;
    case 601u: goto L_08926820;
    case 602u: goto L_08926828;
    case 603u: goto L_08926838;
    case 604u: goto L_08926848;
    case 605u: goto L_08926858;
    case 606u: goto L_08926860;
    case 607u: goto L_0892686C;
    case 608u: goto L_08926878;
    case 609u: goto L_08926888;
    case 610u: goto L_0892689C;
    case 611u: goto L_089268B0;
    case 612u: goto L_08926928;
    case 613u: goto L_08926930;
    case 614u: goto L_08926980;
    case 615u: goto L_08926988;
    case 616u: goto L_089269B8;
    case 617u: goto L_089269C0;
    case 618u: goto L_089269CC;
    case 619u: goto L_089269D0;
    case 620u: goto L_089269E0;
    case 621u: goto L_089269F0;
    case 622u: goto L_089269F8;
    case 623u: goto L_08926A08;
    case 624u: goto L_08926A14;
    case 625u: goto L_08926A24;
    case 626u: goto L_08926A40;
    case 627u: goto L_08926A48;
    case 628u: goto L_08926A50;
    case 629u: goto L_08926A58;
    case 630u: goto L_08926A60;
    case 631u: goto L_08926A68;
    case 632u: goto L_08926A70;
    case 633u: goto L_08926A80;
    case 634u: goto L_08926A8C;
    case 635u: goto L_08926A94;
    case 636u: goto L_08926A9C;
    case 637u: goto L_08926AAC;
    case 638u: goto L_08926AB0;
    case 639u: goto L_08926B10;
    case 640u: goto L_08926B28;
    case 641u: goto L_08926B30;
    case 642u: goto L_08926B40;
    case 643u: goto L_08926B54;
    case 644u: goto L_08926B60;
    case 645u: goto L_08926B6C;
    case 646u: goto L_08926B74;
    case 647u: goto L_08926B80;
    case 648u: goto L_08926B8C;
    case 649u: goto L_08926B90;
    case 650u: goto L_08926B9C;
    case 651u: goto L_08926BA4;
    case 652u: goto L_08926BB8;
    case 653u: goto L_08926BC0;
    case 654u: goto L_08926BD4;
    case 655u: goto L_08926BF8;
    case 656u: goto L_08926C1C;
    case 657u: goto L_08926C28;
    case 658u: goto L_08926C34;
    case 659u: goto L_08926C3C;
    case 660u: goto L_08926C50;
    case 661u: goto L_08926C7C;
    case 662u: goto L_08926C84;
    case 663u: goto L_08926C94;
    case 664u: goto L_08926C9C;
    case 665u: goto L_08926CE4;
    case 666u: goto L_08926CEC;
    case 667u: goto L_08926CF8;
    case 668u: goto L_08926D04;
    case 669u: goto L_08926D14;
    case 670u: goto L_08926D24;
    case 671u: goto L_08926D2C;
    case 672u: goto L_08926D3C;
    case 673u: goto L_08926D44;
    case 674u: goto L_08926D4C;
    case 675u: goto L_08926D54;
    case 676u: goto L_08926D5C;
    case 677u: goto L_08926D64;
    case 678u: goto L_08926D6C;
    case 679u: goto L_08926D7C;
    case 680u: goto L_08926D8C;
    case 681u: goto L_08926D98;
    case 682u: goto L_08926DA0;
    case 683u: goto L_08926DA8;
    case 684u: goto L_08926DB0;
    case 685u: goto L_08926DB8;
    case 686u: goto L_08926DBC;
    case 687u: goto L_08926DC4;
    case 688u: goto L_08926DCC;
    case 689u: goto L_08926DDC;
    case 690u: goto L_08926DE4;
    case 691u: goto L_08926E30;
    case 692u: goto L_08926E44;
    case 693u: goto L_08926E50;
    case 694u: goto L_08926E70;
    case 695u: goto L_08926E7C;
    case 696u: goto L_08926E84;
    case 697u: goto L_08926E90;
    case 698u: goto L_08926EA0;
    case 699u: goto L_08926EB0;
    case 700u: goto L_08926EB8;
    case 701u: goto L_08926EC0;
    case 702u: goto L_08926EC8;
    case 703u: goto L_08926EDC;
    case 704u: goto L_08926F00;
    case 705u: goto L_08926F08;
    case 706u: goto L_08926F18;
    case 707u: goto L_08926F24;
    case 708u: goto L_08926F2C;
    case 709u: goto L_08926F38;
    case 710u: goto L_08926F40;
    case 711u: goto L_08926F4C;
    case 712u: goto L_08926F64;
    case 713u: goto L_08926F70;
    case 714u: goto L_08926F80;
    case 715u: goto L_08926F90;
    case 716u: goto L_08926F9C;
    case 717u: goto L_08926FA4;
    case 718u: goto L_08926FB4;
    case 719u: goto L_08926FEC;
    case 720u: goto L_0892701C;
    case 721u: goto L_0892704C;
    case 722u: goto L_0892706C;
    case 723u: goto L_0892707C;
    case 724u: goto L_089270A8;
    case 725u: goto L_089270B0;
    case 726u: goto L_089270DC;
    case 727u: goto L_089270E8;
    case 728u: goto L_089270F4;
    case 729u: goto L_089270FC;
    case 730u: goto L_08927104;
    case 731u: goto L_08927110;
    case 732u: goto L_08927120;
    case 733u: goto L_08927134;
    case 734u: goto L_08927138;
    case 735u: goto L_0892714C;
    case 736u: goto L_08927168;
    case 737u: goto L_08927170;
    case 738u: goto L_08927188;
    case 739u: goto L_0892719C;
    case 740u: goto L_089271A4;
    case 741u: goto L_089271BC;
    case 742u: goto L_089271C8;
    case 743u: goto L_089271DC;
    case 744u: goto L_089271E4;
    case 745u: goto L_089271EC;
    case 746u: goto L_089271F4;
    case 747u: goto L_089271FC;
    case 748u: goto L_0892721C;
    case 749u: goto L_08927228;
    case 750u: goto L_08927240;
    case 751u: goto L_08927248;
    case 752u: goto L_08927260;
    case 753u: goto L_08927268;
    case 754u: goto L_08927270;
    case 755u: goto L_0892727C;
    case 756u: goto L_08927294;
    case 757u: goto L_0892729C;
    case 758u: goto L_089272BC;
    case 759u: goto L_089272D0;
    case 760u: goto L_089272E4;
    case 761u: goto L_089272F0;
    case 762u: goto L_089272F4;
    case 763u: goto L_08927300;
    case 764u: goto L_0892730C;
    case 765u: goto L_08927314;
    case 766u: goto L_0892731C;
    case 767u: goto L_0892732C;
    case 768u: goto L_08927334;
    case 769u: goto L_08927340;
    case 770u: goto L_0892738C;
    case 771u: goto L_089273CC;
    case 772u: goto L_089273D4;
    case 773u: goto L_08927408;
    case 774u: goto L_08927410;
    case 775u: goto L_0892741C;
    case 776u: goto L_08927424;
    case 777u: goto L_08927438;
    case 778u: goto L_0892744C;
    case 779u: goto L_0892745C;
    case 780u: goto L_0892746C;
    case 781u: goto L_08927474;
    case 782u: goto L_0892747C;
    case 783u: goto L_08927488;
    case 784u: goto L_08927490;
    case 785u: goto L_08927498;
    case 786u: goto L_089274A8;
    case 787u: goto L_089274B0;
    case 788u: goto L_089274CC;
    case 789u: goto L_089274D8;
    case 790u: goto L_089274E0;
    case 791u: goto L_089274F0;
    case 792u: goto L_089274FC;
    case 793u: goto L_08927504;
    case 794u: goto L_0892750C;
    case 795u: goto L_08927518;
    case 796u: goto L_08927520;
    case 797u: goto L_0892752C;
    case 798u: goto L_08927538;
    case 799u: goto L_08927540;
    case 800u: goto L_08927548;
    case 801u: goto L_08927554;
    case 802u: goto L_08927560;
    case 803u: goto L_08927568;
    case 804u: goto L_08927578;
    case 805u: goto L_08927594;
    case 806u: goto L_089275A4;
    case 807u: goto L_089275B8;
    case 808u: goto L_089275C4;
    case 809u: goto L_089275D0;
    case 810u: goto L_089275D8;
    case 811u: goto L_089275EC;
    case 812u: goto L_089275FC;
    case 813u: goto L_0892760C;
    case 814u: goto L_08927624;
    case 815u: goto L_0892762C;
    case 816u: goto L_08927634;
    case 817u: goto L_08927640;
    case 818u: goto L_08927648;
    case 819u: goto L_08927650;
    case 820u: goto L_0892765C;
    case 821u: goto L_089276A0;
    case 822u: goto L_089276AC;
    case 823u: goto L_089276BC;
    case 824u: goto L_089276CC;
    case 825u: goto L_089276D8;
    case 826u: goto L_089276E4;
    case 827u: goto L_089276EC;
    case 828u: goto L_089276F4;
    case 829u: goto L_08927704;
    case 830u: goto L_0892770C;
    case 831u: goto L_08927718;
    case 832u: goto L_08927724;
    case 833u: goto L_08927730;
    case 834u: goto L_08927738;
    case 835u: goto L_08927740;
    case 836u: goto L_0892775C;
    case 837u: goto L_08927778;
    case 838u: goto L_08927780;
    case 839u: goto L_08927794;
    case 840u: goto L_089277B4;
    case 841u: goto L_089277D0;
    case 842u: goto L_089277E8;
    case 843u: goto L_089277F4;
    case 844u: goto L_08927804;
    case 845u: goto L_08927810;
    case 846u: goto L_0892781C;
    case 847u: goto L_08927828;
    case 848u: goto L_08927830;
    case 849u: goto L_08927838;
    case 850u: goto L_08927840;
    case 851u: goto L_08927848;
    case 852u: goto L_08927850;
    case 853u: goto L_08927858;
    case 854u: goto L_08927864;
    case 855u: goto L_08927884;
    case 856u: goto L_0892788C;
    case 857u: goto L_08927894;
    case 858u: goto L_0892789C;
    case 859u: goto L_089278AC;
    case 860u: goto L_089278BC;
    case 861u: goto L_089278C8;
    case 862u: goto L_089278DC;
    case 863u: goto L_089278F4;
    case 864u: goto L_08927910;
    case 865u: goto L_08927920;
    case 866u: goto L_08927928;
    case 867u: goto L_08927930;
    case 868u: goto L_0892793C;
    case 869u: goto L_08927950;
    case 870u: goto L_08927968;
    case 871u: goto L_08927984;
    case 872u: goto L_08927998;
    case 873u: goto L_089279A4;
    case 874u: goto L_089279B8;
    case 875u: goto L_089279C0;
    case 876u: goto L_089279CC;
    case 877u: goto L_089279D4;
    case 878u: goto L_089279DC;
    case 879u: goto L_089279EC;
    case 880u: goto L_089279F4;
    case 881u: goto L_08927A04;
    case 882u: goto L_08927A10;
    case 883u: goto L_08927A1C;
    case 884u: goto L_08927A2C;
    case 885u: goto L_08927A3C;
    case 886u: goto L_08927A4C;
    case 887u: goto L_08927A5C;
    case 888u: goto L_08927A64;
    case 889u: goto L_08927A78;
    case 890u: goto L_08927A84;
    case 891u: goto L_08927A94;
    case 892u: goto L_08927AA0;
    case 893u: goto L_08927AB0;
    case 894u: goto L_08927ACC;
    case 895u: goto L_08927ADC;
    case 896u: goto L_08927AF8;
    case 897u: goto L_08927B08;
    case 898u: goto L_08927B24;
    case 899u: goto L_08927B34;
    case 900u: goto L_08927B3C;
    case 901u: goto L_08927B44;
    case 902u: goto L_08927B50;
    case 903u: goto L_08927B60;
    case 904u: goto L_08927B88;
    case 905u: goto L_08927B94;
    case 906u: goto L_08927BA0;
    case 907u: goto L_08927BA8;
    case 908u: goto L_08927BB0;
    case 909u: goto L_08927BC0;
    case 910u: goto L_08927BC8;
    case 911u: goto L_08927BE4;
    case 912u: goto L_08927BF0;
    case 913u: goto L_08927BFC;
    case 914u: goto L_08927C08;
    case 915u: goto L_08927C18;
    case 916u: goto L_08927C28;
    case 917u: goto L_08927C38;
    case 918u: goto L_08927C48;
    case 919u: goto L_08927C4C;
    case 920u: goto L_08927C54;
    case 921u: goto L_08927C5C;
    case 922u: goto L_08927C70;
    case 923u: goto L_08927C7C;
    case 924u: goto L_08927C88;
    case 925u: goto L_08927C8C;
    case 926u: goto L_08927C98;
    case 927u: goto L_08927CA4;
    case 928u: goto L_08927CB0;
    case 929u: goto L_08927CB8;
    case 930u: goto L_08927CC8;
    case 931u: goto L_08927CD0;
    case 932u: goto L_08927CDC;
    case 933u: goto L_08927CE8;
    case 934u: goto L_08927CF8;
    case 935u: goto L_08927D08;
    case 936u: goto L_08927D18;
    case 937u: goto L_08927D20;
    case 938u: goto L_08927D30;
    case 939u: goto L_08927D3C;
    case 940u: goto L_08927D44;
    case 941u: goto L_08927D54;
    case 942u: goto L_08927D60;
    case 943u: goto L_08927D68;
    case 944u: goto L_08927D78;
    case 945u: goto L_08927D80;
    case 946u: goto L_08927D88;
    case 947u: goto L_08927D98;
    case 948u: goto L_08927DA0;
    case 949u: goto L_08927DB0;
    case 950u: goto L_08927DB8;
    case 951u: goto L_08927DC4;
    case 952u: goto L_08927DD0;
    case 953u: goto L_08927DDC;
    case 954u: goto L_08927DE4;
    case 955u: goto L_08927DEC;
    case 956u: goto L_08927DF8;
    case 957u: goto L_08927E04;
    case 958u: goto L_08927E14;
    case 959u: goto L_08927E24;
    case 960u: goto L_08927E34;
    case 961u: goto L_08927E44;
    case 962u: goto L_08927E48;
    case 963u: goto L_08927E50;
    case 964u: goto L_08927E58;
    case 965u: goto L_08927E68;
    case 966u: goto L_08927E70;
    case 967u: goto L_08927E78;
    case 968u: goto L_08927E88;
    case 969u: goto L_08927EAC;
    case 970u: goto L_08927EB8;
    case 971u: goto L_08927EC8;
    case 972u: goto L_08927EDC;
    case 973u: goto L_08927EF4;
    case 974u: goto L_08927EFC;
    case 975u: goto L_08927F08;
    case 976u: goto L_08927F24;
    case 977u: goto L_08927F2C;
    case 978u: goto L_08927F34;
    case 979u: goto L_08927F40;
    case 980u: goto L_08927F48;
    case 981u: goto L_08927F58;
    case 982u: goto L_08927F6C;
    case 983u: goto L_08927F74;
    case 984u: goto L_08927F7C;
    case 985u: goto L_08927F84;
    case 986u: goto L_08927F8C;
    case 987u: goto L_08927F98;
    case 988u: goto L_08927FA0;
    case 989u: goto L_08927FB0;
    case 990u: goto L_08927FBC;
    case 991u: goto L_08927FD4;
    case 992u: goto L_08927FE0;
    case 993u: goto L_08927FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08924000:
    aot_gpr_31 = (0x08924008u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924008u) goto L_08924008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924008:
    aot_gpr_31 = (0x08924010u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924010u) goto L_08924010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924010:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924018;
    }
L_08924018:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924020;
    }
L_08924020:
    aot_gpr_31 = (0x08924028u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 309u, 0x088E571Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924028u) goto L_08924028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924028:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924030;
    }
L_08924030:
    aot_gpr_31 = (0x08924038u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 169u, 0x08910A14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924038u) goto L_08924038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924038:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1056), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08924068;
      }
      goto L_08924044;
    }
L_08924044:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08924054u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 36u, 0x088E43E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924054u) goto L_08924054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924054:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08924068;
      }
      goto L_0892405C;
    }
L_0892405C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08924068u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924068u) goto L_08924068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924068:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924070;
    }
L_08924070:
    aot_gpr_31 = (0x08924078u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924078u) goto L_08924078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924078:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089240D4;
      }
      goto L_08924080;
    }
L_08924080:
    aot_gpr_31 = (0x08924088u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924088u) goto L_08924088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924088:
    aot_gpr_31 = (0x08924090u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 378u, 0x08905BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924090u) goto L_08924090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924090:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089240D4;
      }
      goto L_08924098;
    }
L_08924098:
    aot_gpr_31 = (0x089240A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240A0u) goto L_089240A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240A0:
    aot_gpr_4 = (16390u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089240B8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240B8u) goto L_089240B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089240D4;
      }
      goto L_089240C0;
    }
L_089240C0:
    aot_gpr_31 = (0x089240C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240C8u) goto L_089240C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240C8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089240D4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 14u, 0x089380CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240D4u) goto L_089240D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240D4:
    aot_gpr_31 = (0x089240DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 460u, 0x088E3634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240DCu) goto L_089240DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089240E4;
    }
L_089240E4:
    aot_gpr_31 = (0x089240ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 12u, 0x0890C0DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240ECu) goto L_089240EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089240F4;
    }
L_089240F4:
    aot_gpr_31 = (0x089240FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 260u, 0x0893176Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089240FCu) goto L_089240FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089240FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924104;
    }
L_08924104:
    aot_gpr_31 = (0x0892410Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 701u, 0x0890713Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892410Cu) goto L_0892410C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892410C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924114;
    }
L_08924114:
    aot_gpr_31 = (0x0892411Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892411Cu) goto L_0892411C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892411C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924124;
    }
L_08924124:
    aot_gpr_31 = (0x0892412Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 324u, 0x089162D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892412Cu) goto L_0892412C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892412C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924134;
    }
L_08924134:
    aot_gpr_31 = (0x0892413Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 731u, 0x08907360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892413Cu) goto L_0892413C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892413C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924144;
    }
L_08924144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892414C;
    }
L_0892414C:
    aot_gpr_31 = (0x08924154u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 437u, 0x089ADBC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924154u) goto L_08924154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924154:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089246E4;
      }
      goto L_0892415C;
    }
L_0892415C:
    aot_gpr_31 = (0x08924164u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 727u, 0x0890730Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924164u) goto L_08924164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924164:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892416C;
    }
L_0892416C:
    aot_gpr_31 = (0x08924174u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 377u, 0x089165E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924174u) goto L_08924174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924174:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892417C;
    }
L_0892417C:
    aot_gpr_31 = (0x08924184u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 784u, 0x0890787Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924184u) goto L_08924184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892418C;
    }
L_0892418C:
    aot_gpr_31 = (0x08924194u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 435u, 0x0890DCC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924194u) goto L_08924194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924194:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892419C;
    }
L_0892419C:
    aot_gpr_31 = (0x089241A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 155u, 0x088E89D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089241A4u) goto L_089241A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089241A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089241AC;
    }
L_089241AC:
    aot_gpr_31 = (0x089241B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 940u, 0x0890BBECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089241B4u) goto L_089241B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089241B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089241BC;
    }
L_089241BC:
    aot_gpr_31 = (0x089241C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089241C4u) goto L_089241C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089241C4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089241CC;
    }
L_089241CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089242B0;
      }
      goto L_089241D8;
    }
L_089241D8:
    aot_gpr_31 = (0x089241E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089241E0u) goto L_089241E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089241E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1368)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08924210;
      }
      goto L_089241F0;
    }
L_089241F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1712)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08924210;
      }
      goto L_08924200;
    }
L_08924200:
    aot_gpr_31 = (0x08924208u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1712)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924208u) goto L_08924208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924208:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924210;
    }
L_08924210:
    aot_gpr_31 = (0x08924218u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924218u) goto L_08924218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924218:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0892426C;
      }
      goto L_08924220;
    }
L_08924220:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    aot_gpr_31 = (0x0892422Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892422Cu) goto L_0892422C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892422C:
    aot_gpr_31 = (0x08924234u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924234u) goto L_08924234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924234:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1068));
    aot_gpr_31 = (0x08924240u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924240u) goto L_08924240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924240:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), aot_gpr_6);
    aot_gpr_31 = (0x08924264u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924264u) goto L_08924264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242A0;
      }
      goto L_0892426C;
    }
L_0892426C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1084));
    aot_gpr_31 = (0x0892427Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 15u, 0x089100C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892427Cu) goto L_0892427C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892427C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), aot_gpr_6);
    aot_gpr_31 = (0x089242A0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089242A0u) goto L_089242A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089242A0:
    aot_gpr_31 = (0x089242A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089242A8u) goto L_089242A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089242A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089242B0;
    }
L_089242B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089242BCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089242BCu) goto L_089242BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089242BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089242C8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089242C8u) goto L_089242C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089242C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089242E0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089242E0u) goto L_089242E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089242E0:
    aot_gpr_31 = (0x089242E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 702u, 0x08912CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089242E8u) goto L_089242E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089242E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08924304u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924304u) goto L_08924304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (2048u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
        goto L_08924328;
    }
    goto L_08924318;
L_08924318:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1935)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_08924324;
    }
L_08924324:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    goto L_08924328;
L_08924328:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_08924330;
    }
L_08924330:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1935)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08924348;
      }
      goto L_0892433C;
    }
L_0892433C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1935)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1935), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08924348;
L_08924348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_08924358;
    }
L_08924358:
    aot_gpr_31 = (0x08924360u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924360u) goto L_08924360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924360:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08924370u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924370u) goto L_08924370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924370:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08924380u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924380u) goto L_08924380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924380:
    aot_gpr_31 = (0x08924388u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 353u, 0x089059E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924388u) goto L_08924388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924388:
    aot_gpr_4 = (17692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_089243A4;
    }
L_089243A4:
    aot_gpr_31 = (0x089243ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089243ACu) goto L_089243AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089243AC:
    aot_gpr_4 = (aot_gpr_2 & 127u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15044u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (15897u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x089243E0u);
    ctx.fpr[22] = aot_fpr_12 + aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089243E0u) goto L_089243E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089243E0:
    aot_gpr_4 = (aot_gpr_2 & 127u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15333u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 24642u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08924410u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924410u) goto L_08924410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924410:
    aot_gpr_4 = (aot_gpr_2 & 127u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_20;
    aot_gpr_4 = (16512u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08924458u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924458u) goto L_08924458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924458:
    ctx.gpr[11] = (aot_gpr_2 & 4095u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2000));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08924498u);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924498u) goto L_08924498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924498:
    aot_gpr_31 = (0x089244A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244A0u) goto L_089244A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244A0:
    aot_gpr_31 = (0x089244A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244A8u) goto L_089244A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244A8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089244FC;
      }
      goto L_089244B0;
    }
L_089244B0:
    aot_gpr_31 = (0x089244B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244B8u) goto L_089244B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089244FC;
      }
      goto L_089244C0;
    }
L_089244C0:
    aot_gpr_31 = (0x089244C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244C8u) goto L_089244C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244C8:
    aot_gpr_4 = (0u | 17u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_089244E8;
      }
      goto L_089244D4;
    }
L_089244D4:
    aot_gpr_31 = (0x089244DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244DCu) goto L_089244DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244DC:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_089244F0;
      }
      goto L_089244E8;
    }
L_089244E8:
    aot_gpr_31 = (0x089244F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244F0u) goto L_089244F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089244FCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089244FCu) goto L_089244FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089244FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (1024u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924510;
    }
L_08924510:
    aot_gpr_31 = (0x08924518u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924518u) goto L_08924518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924518:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924520;
    }
L_08924520:
    aot_gpr_31 = (0x08924528u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924528u) goto L_08924528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924528:
    aot_gpr_31 = (0x08924530u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924530u) goto L_08924530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924530:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924538;
    }
L_08924538:
    aot_gpr_31 = (0x08924540u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924540u) goto L_08924540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924540:
    aot_gpr_31 = (0x08924548u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924548u) goto L_08924548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924548:
    aot_gpr_31 = (0x08924550u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924550u) goto L_08924550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924550:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924558;
    }
L_08924558:
    aot_gpr_31 = (0x08924560u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924560u) goto L_08924560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924560:
    aot_gpr_31 = (0x08924568u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 259u, 0x08B00ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924568u) goto L_08924568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924568:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924570;
    }
L_08924570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (2048u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924584;
    }
L_08924584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (2048u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089245A0u);
    aot_gpr_5 = (0u | 119u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089245A0u) goto L_089245A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089245A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1952)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089245E0;
      }
      goto L_089245AC;
    }
L_089245AC:
    aot_gpr_31 = (0x089245B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089245B4u) goto L_089245B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089245B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1956)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089245E0;
      }
      goto L_089245C4;
    }
L_089245C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089245D4u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089245D4u) goto L_089245D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089245D4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1952), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1956), 0u);
    goto L_089245E0;
L_089245E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-20331)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_089245EC;
    }
L_089245EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_089245FC;
    }
L_089245FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_08924608;
    }
L_08924608:
    aot_gpr_31 = (0x08924610u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924610u) goto L_08924610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924610:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892461Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892461Cu) goto L_0892461C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892461C:
    aot_gpr_31 = (0x08924624u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924624u) goto L_08924624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924624:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_0892462C;
    }
L_0892462C:
    aot_gpr_31 = (0x08924634u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924634u) goto L_08924634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924634:
    aot_gpr_31 = (0x0892463Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892463Cu) goto L_0892463C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892463C:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_08924648;
    }
L_08924648:
    aot_gpr_31 = (0x08924650u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924650u) goto L_08924650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924650:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_08924660;
    }
L_08924660:
    aot_gpr_31 = (0x08924668u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924668u) goto L_08924668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924668:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_08924670;
    }
L_08924670:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x0892468Cu);
    aot_gpr_6 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892468Cu) goto L_0892468C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892468C:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
        goto L_089246C0;
    }
    goto L_08924694;
L_08924694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089246ACu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089246ACu) goto L_089246AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089246AC:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089246BCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 465u, 0x0881EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089246BCu) goto L_089246BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089246BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    goto L_089246C0;
L_089246C0:
    aot_gpr_5 = (61440u << 16u);
    aot_gpr_6 = (aot_gpr_4 & 32768u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 >> 15u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 28u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_089246E4;
L_089246E4:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(1256), aot_run_words);
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
      aot_gpr_31 = aot_run_words[14];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08924728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1156)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(172), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08924774;
      }
      goto L_08924760;
    }
L_08924760:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08924784;
      }
      goto L_0892476C;
    }
L_0892476C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089247A4;
      }
      goto L_08924774;
    }
L_08924774:
    aot_gpr_31 = (0x0892477Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892477Cu) goto L_0892477C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892477C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924784;
    }
L_08924784:
    aot_gpr_31 = (0x0892478Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892478Cu) goto L_0892478C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892478C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089247A4;
      }
      goto L_08924794;
    }
L_08924794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089247CC;
      }
      goto L_089247A4;
    }
L_089247A4:
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08924828;
      }
      goto L_089247C4;
    }
L_089247C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08924980;
      }
      goto L_089247CC;
    }
L_089247CC:
    aot_gpr_31 = (0x089247D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089247D4u) goto L_089247D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089247D4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924820u);
    aot_gpr_6 = (0u | 4000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924820u) goto L_08924820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924820:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924828;
    }
L_08924828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1752)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08924864;
      }
      goto L_0892483C;
    }
L_0892483C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 237u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924878;
      }
      goto L_0892484C;
    }
L_0892484C:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892485Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 784u, 0x089AF330u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892485Cu) goto L_0892485C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892485C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924864;
    }
L_08924864:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924870u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924870u) goto L_08924870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924870:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924878;
    }
L_08924878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924904;
      }
      goto L_08924888;
    }
L_08924888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 112u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089248EC;
      }
      goto L_0892489C;
    }
L_0892489C:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089248ACu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 325u, 0x089A9AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089248ACu) goto L_089248AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089248AC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089248D4;
      }
      goto L_089248B4;
    }
L_089248B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08924AF8;
    }
    goto L_089248CC;
L_089248CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08924B68;
      }
      goto L_089248D4;
    }
L_089248D4:
    aot_gpr_31 = (0x089248DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089248DCu) goto L_089248DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089248DC:
    aot_gpr_31 = (0x089248E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089248E4u) goto L_089248E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089248E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_089248EC;
    }
L_089248EC:
    aot_gpr_31 = (0x089248F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089248F4u) goto L_089248F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089248F4:
    aot_gpr_31 = (0x089248FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089248FCu) goto L_089248FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089248FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924904;
    }
L_08924904:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924914u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 863u, 0x089AF91Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924914u) goto L_08924914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924914:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08924968;
      }
      goto L_0892491C;
    }
L_0892491C:
    aot_gpr_31 = (0x08924924u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924924u) goto L_08924924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924924:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08924948;
      }
      goto L_08924930;
    }
L_08924930:
    aot_gpr_31 = (0x08924938u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924938u) goto L_08924938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924938:
    aot_gpr_31 = (0x08924940u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924940u) goto L_08924940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924940:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08924954;
      }
      goto L_08924948;
    }
L_08924948:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924954u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924954u) goto L_08924954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924968;
    }
L_08924968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924980;
    }
L_08924980:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089249C0;
      }
      goto L_08924990;
    }
L_08924990:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 8u);
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_4 = (0u | 1u);
        goto L_089249C4;
    }
    goto L_089249A0;
L_089249A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 9u);
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_4 = (0u | 1u);
        goto L_089249C4;
    }
    goto L_089249B0;
L_089249B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_089249C8;
      }
      goto L_089249C0;
    }
L_089249C0:
    aot_gpr_4 = (0u | 1u);
    goto L_089249C4;
L_089249C4:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_089249C8;
L_089249C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089249E8;
      }
      goto L_089249D0;
    }
L_089249D0:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089249E0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 784u, 0x089AF330u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089249E0u) goto L_089249E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089249E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_089249E8;
    }
L_089249E8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08924A94;
      }
      goto L_089249F4;
    }
L_089249F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08924A94;
      }
      goto L_08924A04;
    }
L_08924A04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924A10u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 726u, 0x089AB6C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924A10u) goto L_08924A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924A10:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08924A44;
      }
      goto L_08924A18;
    }
L_08924A18:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08924A30u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924A30u) goto L_08924A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924A30:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924A44;
    }
L_08924A44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924A80;
      }
      goto L_08924A54;
    }
L_08924A54:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 8u);
    aot_gpr_31 = (0x08924A6Cu);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924A6Cu) goto L_08924A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924A6C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924A80;
    }
L_08924A80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924A8Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924A8Cu) goto L_08924A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924A8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924A94;
    }
L_08924A94:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924AA4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 784u, 0x089AF330u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924AA4u) goto L_08924AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924AA4:
    aot_gpr_31 = (0x08924AACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924AACu) goto L_08924AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924AAC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AB4;
    }
L_08924AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AC0;
    }
L_08924AC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924ACC;
    }
L_08924ACC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AD8;
    }
L_08924AD8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AE8;
    }
L_08924AE8:
    aot_gpr_31 = (0x08924AF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924AF0u) goto L_08924AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924AF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924AF8;
    }
L_08924AF8:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924B68;
      }
      goto L_08924B0C;
    }
L_08924B0C:
    aot_gpr_31 = (0x08924B14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924B14u) goto L_08924B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924B14:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08924B30;
    }
    goto L_08924B1C;
L_08924B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924BF8;
      }
      goto L_08924B2C;
    }
L_08924B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08924B30;
L_08924B30:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08924BF8;
      }
      goto L_08924B38;
    }
L_08924B38:
    aot_gpr_31 = (0x08924B40u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924B40u) goto L_08924B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924B40:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08924BF8;
      }
      goto L_08924B48;
    }
L_08924B48:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08924BE4;
      }
      goto L_08924B68;
    }
L_08924B68:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08924B7Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0073_entry, 73u, 765u, 0x0892B110u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924B7Cu) goto L_08924B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924B7C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924B8Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924B8Cu) goto L_08924B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924B8C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924B9Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924B9Cu) goto L_08924B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924B9C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08924CD8;
      }
      goto L_08924BDC;
    }
L_08924BDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08924C74;
      }
      goto L_08924BE4;
    }
L_08924BE4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924BF0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0073_entry, 73u, 878u, 0x0892BA54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924BF0u) goto L_08924BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924BF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924BF8;
    }
L_08924BF8:
    aot_gpr_31 = (0x08924C00u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C00u) goto L_08924C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C00:
    aot_gpr_31 = (0x08924C08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C08u) goto L_08924C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C08:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08924C20;
      }
      goto L_08924C10;
    }
L_08924C10:
    aot_gpr_31 = (0x08924C18u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C18u) goto L_08924C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08924C3C;
      }
      goto L_08924C20;
    }
L_08924C20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924C3C;
      }
      goto L_08924C30;
    }
L_08924C30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1752), aot_gpr_4);
    goto L_08924C3C;
L_08924C3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924C48u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C48u) goto L_08924C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C48:
    aot_gpr_31 = (0x08924C50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C50u) goto L_08924C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C50:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08924C64;
      }
      goto L_08924C58;
    }
L_08924C58:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08924C64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C64u) goto L_08924C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C64:
    aot_gpr_31 = (0x08924C6Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924C6Cu) goto L_08924C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924C6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924C74;
    }
L_08924C74:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16512u << 16u);
      if (branch_taken) {
          goto L_08924CEC;
      }
      goto L_08924C7C;
    }
L_08924C7C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924CEC;
      }
      goto L_08924C90;
    }
L_08924C90:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924CD8;
      }
      goto L_08924CB4;
    }
L_08924CB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924CEC;
      }
      goto L_08924CD8;
    }
L_08924CD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924CE4u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924CE4u) goto L_08924CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924CE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08924D10;
      }
      goto L_08924CEC;
    }
L_08924CEC:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924D10;
      }
      goto L_08924D04;
    }
L_08924D04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924D10u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924D10u) goto L_08924D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924D10:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924D7C;
      }
      goto L_08924D28;
    }
L_08924D28:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08924D74;
      }
      goto L_08924D64;
    }
L_08924D64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08924D74;
L_08924D74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08924D90;
      }
      goto L_08924D7C;
    }
L_08924D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65534u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08924D90;
L_08924D90:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08924DDC;
      }
      goto L_08924DA4;
    }
L_08924DA4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12176)));
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
L_08924DBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DC4;
    }
L_08924DC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DCC;
    }
L_08924DCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 4u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DD4;
    }
L_08924DD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 8u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DDC;
    }
L_08924DDC:
    aot_gpr_4 = (0u | 0u);
    goto L_08924DE0;
L_08924DE0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08924E04;
      }
      goto L_08924DF0;
    }
L_08924DF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08924E18;
      }
      goto L_08924E04;
    }
L_08924E04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08924E18;
L_08924E18:
    aot_gpr_31 = (0x08924E20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924E20u) goto L_08924E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924E20:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E28;
    }
L_08924E28:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E30;
    }
L_08924E30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16332u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E58;
    }
L_08924E58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E80;
    }
L_08924E80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08924EDC;
      }
      goto L_08924E98;
    }
L_08924E98:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 11u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 31u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924EF0;
      }
      goto L_08924EC8;
    }
L_08924EC8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924ED4u);
    aot_gpr_5 = (0u | 1000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 367u, 0x0890D81Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924ED4u) goto L_08924ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924ED4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924EDC;
    }
L_08924EDC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08924EE8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924EE8u) goto L_08924EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924EE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924EF0;
    }
L_08924EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 34u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08924F10;
      }
      goto L_08924F00;
    }
L_08924F00:
    aot_gpr_31 = (0x08924F08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 429u, 0x0890DC74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924F08u) goto L_08924F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924F08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924F10;
    }
L_08924F10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(562)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089253D0;
      }
      goto L_08924F28;
    }
L_08924F28:
    aot_gpr_31 = (0x08924F30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08924F30u) goto L_08924F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08924F30:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089253D0;
      }
      goto L_08924F38;
    }
L_08924F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924F50;
    }
L_08924F50:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12120)));
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
L_08924F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08924F88;
      }
      goto L_08924F78;
    }
L_08924F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925044;
      }
      goto L_08924F88;
    }
L_08924F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
        goto L_08924FA8;
    }
    goto L_08924F94;
L_08924F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925028;
      }
      goto L_08924FA4;
    }
L_08924FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    goto L_08924FA8;
L_08924FA8:
    aot_gpr_5 = (0u | 10u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08924FD8;
    }
    goto L_08924FB4;
L_08924FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 8u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08924FD8;
    }
    goto L_08924FC4;
L_08924FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 20u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
        goto L_08924FE4;
    }
    goto L_08924FD4;
L_08924FD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08924FD8;
L_08924FD8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08925014;
      }
      goto L_08924FE0;
    }
L_08924FE0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    goto L_08924FE4;
L_08924FE4:
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925004;
      }
      goto L_08924FF0;
    }
L_08924FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925028;
      }
      goto L_08925000;
    }
L_08925000:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08925004;
L_08925004:
    aot_gpr_31 = (0x0892500Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892500Cu) goto L_0892500C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892500C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08925028;
      }
      goto L_08925014;
    }
L_08925014:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08925020u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925020u) goto L_08925020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925020:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_08925028;
    }
L_08925028:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892503Cu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892503Cu) goto L_0892503C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892503C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_08925044;
    }
L_08925044:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925054;
    }
L_08925054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
        goto L_08925074;
    }
    goto L_08925060;
L_08925060:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925070;
    }
L_08925070:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    goto L_08925074;
L_08925074:
    aot_gpr_5 = (0u | 10u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
        goto L_08925090;
    }
    goto L_08925080;
L_08925080:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_0892508C;
L_0892508C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    goto L_08925090;
L_08925090:
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089250D4;
      }
      goto L_0892509C;
    }
L_0892509C:
    aot_gpr_31 = (0x089250A4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089250A4u) goto L_089250A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089250A4:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_089250AC;
L_089250AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
        goto L_089250D8;
    }
    goto L_089250C8;
L_089250C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_089250D4;
L_089250D4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    goto L_089250D8;
L_089250D8:
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089250F4;
      }
      goto L_089250E4;
    }
L_089250E4:
    aot_gpr_31 = (0x089250ECu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089250ECu) goto L_089250EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089250EC:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_089250F4;
L_089250F4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925104;
    }
L_08925104:
    aot_gpr_31 = (0x0892510Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892510Cu) goto L_0892510C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892510C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925114;
    }
L_08925114:
    ctx.gpr[18] = (0u | 1u);
    goto L_08925118;
L_08925118:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925128;
    }
L_08925128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925138;
    }
L_08925138:
    aot_gpr_31 = (0x08925140u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925140u) goto L_08925140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925140:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925148;
    }
L_08925148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925154;
    }
L_08925154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925168;
    }
L_08925168:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (0u | 51u);
    aot_gpr_31 = (0x08925178u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925178u) goto L_08925178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925178:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925184u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925184u) goto L_08925184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925184:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08925194u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925194u) goto L_08925194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925194:
    ctx.gpr[18] = (0u | 1u);
    goto L_08925198;
L_08925198:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089251F0;
      }
      goto L_089251A0;
    }
L_089251A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089251ACu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089251ACu) goto L_089251AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089251AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251BC;
    }
L_089251BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251C8;
    }
L_089251C8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251D8;
    }
L_089251D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(460));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251F0;
    }
L_089251F0:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925204u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925204u) goto L_08925204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925204:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_0892520C;
    }
L_0892520C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892523C;
      }
      goto L_0892521C;
    }
L_0892521C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892523C;
      }
      goto L_0892522C;
    }
L_0892522C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925308;
      }
      goto L_0892523C;
    }
L_0892523C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925260;
      }
      goto L_0892524C;
    }
L_0892524C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089252EC;
      }
      goto L_0892525C;
    }
L_0892525C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08925260;
L_08925260:
    aot_gpr_31 = (0x08925268u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925268u) goto L_08925268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925268:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089252EC;
      }
      goto L_08925270;
    }
L_08925270:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892527Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892527Cu) goto L_0892527C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892527C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089252AC;
      }
      goto L_08925290;
    }
L_08925290:
    aot_gpr_31 = (0x08925298u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925298u) goto L_08925298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925298:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089252D8;
      }
      goto L_089252AC;
    }
L_089252AC:
    aot_gpr_31 = (0x089252B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089252B4u) goto L_089252B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089252B4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089252BC;
    }
L_089252BC:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089252D0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089252D0u) goto L_089252D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089252D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089252D8;
    }
L_089252D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089252E4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089252E4u) goto L_089252E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089252E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089252EC;
    }
L_089252EC:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925300u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925300u) goto L_08925300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925300:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_08925308;
    }
L_08925308:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089253A4;
      }
      goto L_08925318;
    }
L_08925318:
    aot_gpr_31 = (0x08925320u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925320u) goto L_08925320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925320:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089253A4;
      }
      goto L_08925328;
    }
L_08925328:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925334u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925334u) goto L_08925334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925364;
      }
      goto L_08925348;
    }
L_08925348:
    aot_gpr_31 = (0x08925350u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925350u) goto L_08925350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925390;
      }
      goto L_08925364;
    }
L_08925364:
    aot_gpr_31 = (0x0892536Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892536Cu) goto L_0892536C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892536C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_08925374;
    }
L_08925374:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925388u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925388u) goto L_08925388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925388:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_08925390;
    }
L_08925390:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892539Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892539Cu) goto L_0892539C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892539C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089253A4;
    }
L_089253A4:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089253B8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089253B8u) goto L_089253B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089253B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_089253C0;
    }
L_089253C0:
    aot_gpr_31 = (0x089253C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089253C8u) goto L_089253C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089253C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_089253D0;
    }
L_089253D0:
    aot_gpr_31 = (0x089253D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089253D8u) goto L_089253D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089253D8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(160), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_089253F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(488), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08925460;
      }
      goto L_08925448;
    }
L_08925448:
    aot_gpr_31 = (0x08925450u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925450u) goto L_08925450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925450:
    if (aot_gpr_16 == aot_gpr_2) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
        goto L_08925468;
    }
    goto L_08925458;
L_08925458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
      if (branch_taken) {
          goto L_0892547C;
      }
      goto L_08925460;
    }
L_08925460:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925468;
    }
L_08925468:
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089254DC;
      }
      goto L_08925478;
    }
L_08925478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    goto L_0892547C;
L_0892547C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(512)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(576)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(256)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(384)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(448)));
    aot_gpr_31 = (0x089254A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 358u, 0x08A96658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089254A8u) goto L_089254A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089254A8:
    aot_gpr_31 = (0x089254B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089254B0u) goto L_089254B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089254B0:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089254CCu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089254CCu) goto L_089254CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089254CC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089254E4;
      }
      goto L_089254D4;
    }
L_089254D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0892551C;
      }
      goto L_089254DC;
    }
L_089254DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_089254E4;
    }
L_089254E4:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_31 = (0x08925500u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 197u, 0x089DD460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925500u) goto L_08925500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925500:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0892551C;
      }
      goto L_08925508;
    }
L_08925508:
    aot_gpr_31 = (0x08925510u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925510u) goto L_08925510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925510:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0892551C;
      }
      goto L_08925518;
    }
L_08925518:
    ctx.gpr[17] = (0u | 1u);
    goto L_0892551C;
L_0892551C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925550;
      }
      goto L_0892552C;
    }
L_0892552C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925550;
      }
      goto L_08925538;
    }
L_08925538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925550;
      }
      goto L_0892554C;
    }
L_0892554C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08925550;
L_08925550:
    aot_gpr_4 = (ctx.gpr[17] | ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089258A8;
      }
      goto L_0892555C;
    }
L_0892555C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089255D4;
      }
      goto L_08925564;
    }
L_08925564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
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
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16076u << 16u);
      if (branch_taken) {
          goto L_089255D4;
      }
      goto L_089255A0;
    }
L_089255A0:
    aot_gpr_6 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (16153u << 16u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_6 = (0u | 203u);
    aot_gpr_31 = (0x089255D4u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089255D4u) goto L_089255D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089255D4:
    if (ctx.gpr[17] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
        goto L_08925618;
    }
    goto L_089255DC;
L_089255DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
        goto L_08925618;
    }
    goto L_08925600;
L_08925600:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
    goto L_08925618;
L_08925618:
    aot_gpr_4 = (16256u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_31 = (0x08925630u);
    ctx.fpr[26] = aot_fpr_12 + ctx.fpr[22];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925630u) goto L_08925630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925630:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
    aot_fpr_14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - aot_fpr_13;
    ctx.fpr[30] = aot_fpr_13 + ctx.fpr[22];
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_14;
    aot_gpr_31 = (0x08925654u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925654u) goto L_08925654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925654:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_31 = (0x08925678u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925678u) goto L_08925678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925678:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[24];
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_31 = (0x08925690u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925690u) goto L_08925690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925690:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0892569Cu);
    aot_gpr_4 = (0u | 17u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892569Cu) goto L_0892569C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892569C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089256A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089256A8u) goto L_089256A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089256A8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089256B4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089256B4u) goto L_089256B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089256B4:
    aot_gpr_4 = (ctx.gpr[18] << 6u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089256CCu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089256CCu) goto L_089256CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089256CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20348)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_31 = (0x089256E0u);
    ctx.fpr[26] = aot_fpr_12 + ctx.fpr[22];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089256E0u) goto L_089256E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089256E0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20348)));
    aot_fpr_14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - aot_fpr_13;
    ctx.fpr[30] = aot_fpr_13 + ctx.fpr[22];
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_14;
    aot_gpr_31 = (0x08925704u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925704u) goto L_08925704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925704:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20348)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_31 = (0x08925728u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925728u) goto L_08925728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925728:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[24];
    aot_gpr_4 = (0u | 15u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_31 = (0x08925740u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925740u) goto L_08925740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925740:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892574Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892574Cu) goto L_0892574C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892574C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08925758u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925758u) goto L_08925758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925758:
    aot_gpr_4 = (ctx.gpr[19] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0892576Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892576Cu) goto L_0892576C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892576C:
    aot_gpr_31 = (0x08925774u);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925774u) goto L_08925774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925774:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925780u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925780u) goto L_08925780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925780:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0892578Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892578Cu) goto L_0892578C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892578C:
    aot_gpr_4 = (ctx.gpr[19] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089257A0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089257A0u) goto L_089257A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089257A0:
    aot_gpr_31 = (0x089257A8u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089257A8u) goto L_089257A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089257A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089257B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089257B4u) goto L_089257B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089257B4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089257C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089257C0u) goto L_089257C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089257C0:
    aot_gpr_4 = (ctx.gpr[19] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089257D4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089257D4u) goto L_089257D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089257D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20344)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_31 = (0x089257E8u);
    ctx.fpr[26] = aot_fpr_12 + ctx.fpr[22];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089257E8u) goto L_089257E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089257E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20344)));
    aot_fpr_14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - aot_fpr_13;
    ctx.fpr[30] = aot_fpr_13 + ctx.fpr[22];
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_14;
    aot_gpr_31 = (0x0892580Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892580Cu) goto L_0892580C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892580C:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20344)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_31 = (0x08925830u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925830u) goto L_08925830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925830:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    aot_gpr_4 = (0u | 3u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_31 = (0x08925848u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925848u) goto L_08925848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925848:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925854u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925854u) goto L_08925854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925854:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08925860u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925860u) goto L_08925860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925860:
    aot_gpr_4 = (ctx.gpr[19] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08925874u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925874u) goto L_08925874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925874:
    aot_gpr_31 = (0x0892587Cu);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892587Cu) goto L_0892587C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892587C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925888u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925888u) goto L_08925888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925888:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925894u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925894u) goto L_08925894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925894:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089258A8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089258A8u) goto L_089258A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089258A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-20329)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925908;
      }
      goto L_089258B4;
    }
L_089258B4:
    aot_gpr_31 = (0x089258BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089258BCu) goto L_089258BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089258BC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089258C8u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089258C8u) goto L_089258C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089258C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089258D4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089258D4u) goto L_089258D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089258D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089258E0u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089258E0u) goto L_089258E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089258E0:
    aot_gpr_5 = (16416u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08925908u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925908u) goto L_08925908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (64u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089259B0;
      }
      goto L_0892591C;
    }
L_0892591C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1926))))));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089259B0;
      }
      goto L_0892592C;
    }
L_0892592C:
    aot_gpr_31 = (0x08925934u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925934u) goto L_08925934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925934:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08925940u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925940u) goto L_08925940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925940:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892594Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892594Cu) goto L_0892594C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892594C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08925958u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925958u) goto L_08925958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925958:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[18] << 6u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr_31 = (0x0892597Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892597Cu) goto L_0892597C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892597C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925988u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925988u) goto L_08925988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925988:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925994u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925994u) goto L_08925994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925994:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089259B0;
      }
      goto L_089259A4;
    }
L_089259A4:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr_31 = (0x089259B0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089259B0u) goto L_089259B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089259B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (64u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259C4;
    }
L_089259C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259D8;
    }
L_089259D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1926))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259E8;
    }
L_089259E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259FC;
    }
L_089259FC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08925A24u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925A24u) goto L_08925A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925A24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1926))))));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(700)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08925A44u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925A44u) goto L_08925A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925A44:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08925A50u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925A50u) goto L_08925A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925A50:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (aot_gpr_2 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08925A68u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925A68u) goto L_08925A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925A68:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1926))))));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08925C9C;
      }
      goto L_08925A7C;
    }
L_08925A7C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12064)));
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
L_08925A94:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925AD0;
    }
L_08925AD0:
    aot_gpr_4 = (48419u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15651u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925B44;
    }
L_08925B44:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925BAC;
    }
L_08925BAC:
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15651u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925C24;
    }
L_08925C24:
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15651u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925C9C;
    }
L_08925C9C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(128), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08925CBC;
L_08925CBC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_08925CCC;
    }
L_08925CCC:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (0u | 8u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08925CF4u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925CF4u) goto L_08925CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925CF4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08925CCC;
      }
      goto L_08925D08;
    }
L_08925D08:
    aot_gpr_4 = (16025u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925D28;
    }
L_08925D28:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2024)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925D48;
    }
L_08925D48:
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08925D9C;
    }
    goto L_08925D9C;
L_08925D9C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925DA4;
    }
L_08925DA4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08925DC8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925DC8u) goto L_08925DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925DC8:
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
        goto L_08925DF8;
    }
    goto L_08925DEC;
L_08925DEC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08925DF8;
      }
      goto L_08925DF8;
    }
L_08925DF8:
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08925E54;
      }
      goto L_08925E14;
    }
L_08925E14:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_08925E38;
    }
    goto L_08925E2C;
L_08925E2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08925E38;
      }
      goto L_08925E38;
    }
L_08925E38:
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08925E5C;
      }
      goto L_08925E54;
    }
L_08925E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925E5C;
    }
L_08925E5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E6C;
    }
L_08925E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E7C;
    }
L_08925E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E8C;
    }
L_08925E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E9C;
    }
L_08925E9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08925EB4;
      }
      goto L_08925EAC;
    }
L_08925EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925EB4;
    }
L_08925EB4:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08925EC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925EC8u) goto L_08925EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925EC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08925ED8;
      }
      goto L_08925ED0;
    }
L_08925ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925ED8;
    }
L_08925ED8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08925EE8u);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925EE8u) goto L_08925EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925EE8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925EF0;
    }
L_08925EF0:
    ctx.gpr[18] = (0u | 0u);
    goto L_08925EF4;
L_08925EF4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925F00;
    }
L_08925F00:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925F10;
    }
L_08925F10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(17)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 6u);
      if (branch_taken) {
          goto L_08925F40;
      }
      goto L_08925F2C;
    }
L_08925F2C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08925F48;
      }
      goto L_08925F38;
    }
L_08925F38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926040;
      }
      goto L_08925F40;
    }
L_08925F40:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08925F38;
      }
      goto L_08925F48;
    }
L_08925F48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(48);
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08925FC8u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925FC8u) goto L_08925FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925FC8:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08925FE8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08925FE8u) goto L_08925FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08925FE8:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08926014u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926014u) goto L_08926014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926014:
    ctx.gpr[10] = (aot_gpr_2 & 65535u);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    aot_gpr_4 = (0u | 38u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08926040u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926040u) goto L_08926040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926040:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08925F10;
      }
      goto L_08926050;
    }
L_08926050:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(488), aot_run_words);
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
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08926088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words); }
    aot_gpr_31 = (0x089260ACu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089260ACu) goto L_089260AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089260AC:
    if (aot_gpr_2 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260B4;
L_089260B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260C0;
L_089260C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 63u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260D0;
L_089260D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 60u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260E0;
L_089260E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == ctx.gpr[17]) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260F4;
L_089260F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_08926108;
L_08926108:
    aot_gpr_31 = (0x08926110u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926110u) goto L_08926110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926110:
    if (aot_gpr_2 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_08926118;
L_08926118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926144;
      }
      goto L_0892612C;
    }
L_0892612C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892614C;
      }
      goto L_0892613C;
    }
L_0892613C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892620C;
      }
      goto L_08926144;
    }
L_08926144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_0892614C;
    }
L_0892614C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 1u);
    if (aot_gpr_5 == aot_gpr_6) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
        goto L_089261B8;
    }
    goto L_08926190;
L_08926190:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_5 == ctx.gpr[17]) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
        goto L_089261B8;
    }
    goto L_089261A0;
L_089261A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_6 = (0u | 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
        goto L_089261E0;
    }
    goto L_089261B4;
L_089261B4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    goto L_089261B8;
L_089261B8:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08926208;
      }
      goto L_089261D8;
    }
L_089261D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089261E0;
    }
L_089261E0:
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08926208;
      }
      goto L_08926200;
    }
L_08926200:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_08926208;
    }
L_08926208:
    aot_fpr_12 = std::bit_cast<float>(0u);
    goto L_0892620C;
L_0892620C:
    aot_gpr_5 = (18944u << 16u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (50944u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (19200u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (18432u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (ctx.gpr[8] >> 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (18688u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089262D4;
      }
      goto L_089262C4;
    }
L_089262C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089262D4;
L_089262D4:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x089262E0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1276));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 648u, 0x0890380Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089262E0u) goto L_089262E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089262E0:
    aot_gpr_31 = (0x089262E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 129u, 0x08AD0934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089262E8u) goto L_089262E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089262E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089262F4;
    }
L_089262F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_0892630C;
    }
L_0892630C:
    aot_gpr_31 = (0x08926314u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926314u) goto L_08926314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(724)));
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08926328u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926328u) goto L_08926328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926328:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926334u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926334u) goto L_08926334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(772)));
    ctx.gpr[17] = (ctx.gpr[17] << 6u);
    ctx.gpr[17] = (aot_gpr_2 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_gpr_31 = (0x089263CCu);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(60), aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089263CCu) goto L_089263CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089263CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(772)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08926404;
      }
      goto L_089263DC;
    }
L_089263DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (43691u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08926404;
      }
      goto L_089263F0;
    }
L_089263F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x089263FCu);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089263FCu) goto L_089263FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089263FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0892640C;
      }
      goto L_08926404;
    }
L_08926404:
    aot_gpr_31 = (0x0892640Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892640Cu) goto L_0892640C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892640C:
    aot_gpr_31 = (0x08926414u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926414u) goto L_08926414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926414:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_0892641C;
    }
L_0892641C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3240)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_08926428;
    }
L_08926428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3240)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[7], aot_gpr_4};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3248)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089264FC;
      }
      goto L_089264F0;
    }
L_089264F0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3248)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089264FC;
L_089264FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), aot_gpr_4);
      if (branch_taken) {
          goto L_08926528;
      }
      goto L_08926510;
    }
L_08926510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_0892652C;
    }
    goto L_08926520;
L_08926520:
    aot_gpr_31 = (0x08926528u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926528u) goto L_08926528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_0892652C;
L_0892652C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_31 = (0x08926540u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926540u) goto L_08926540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3248)));
    aot_gpr_31 = (0x08926560u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926560u) goto L_08926560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926560:
    aot_gpr_4 = (48544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8848)));
    aot_gpr_4 = (aot_gpr_4 | 1798u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8852)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16132u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55010u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8856)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (15512u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8384u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089265A4u);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 5u, 0x088600C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089265A4u) goto L_089265A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089265A4:
    aot_gpr_4 = (16212u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14680u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (47747u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15975u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 27787u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x089265DCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089265DCu) goto L_089265DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089265DC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089265F0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089265F0u) goto L_089265F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089265F0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089265FCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089265FCu) goto L_089265FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089265FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926620;
      }
      goto L_0892660C;
    }
L_0892660C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926620;
      }
      goto L_08926618;
    }
L_08926618:
    aot_gpr_31 = (0x08926620u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926620u) goto L_08926620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926620:
    aot_gpr_31 = (0x08926628u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926628u) goto L_08926628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926628:
    aot_gpr_31 = (0x08926630u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926630u) goto L_08926630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926630:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3240)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926668;
      }
      goto L_08926640;
    }
L_08926640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (43691u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08926668;
      }
      goto L_08926654;
    }
L_08926654:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08926660u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926660u) goto L_08926660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926670;
      }
      goto L_08926668;
    }
L_08926668:
    aot_gpr_31 = (0x08926670u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926670u) goto L_08926670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_08926698;
    }
    goto L_08926680;
L_08926680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_08926698;
    }
    goto L_0892668C;
L_0892668C:
    aot_gpr_31 = (0x08926694u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926694u) goto L_08926694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_08926698;
L_08926698:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089266A4;
    }
L_089266A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089266B0;
    }
L_089266B0:
    aot_gpr_31 = (0x089266B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089266B8u) goto L_089266B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089266B8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_089266D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(304))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 | 512u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(336), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (8192u << 16u);
      if (branch_taken) {
          goto L_08926794;
      }
      goto L_08926768;
    }
L_08926768:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926794;
      }
      goto L_0892677C;
    }
L_0892677C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(192));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08926794u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926794u) goto L_08926794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089267D8;
      }
      goto L_089267A4;
    }
L_089267A4:
    aot_gpr_31 = (0x089267ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089267ACu) goto L_089267AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089267AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267B8;
    }
L_089267B8:
    aot_gpr_31 = (0x089267C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089267C0u) goto L_089267C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089267C0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267C8;
    }
L_089267C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267D8;
    }
L_089267D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 38u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267E8;
    }
L_089267E8:
    ctx.gpr[7] = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (16128u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (0u | 40u);
    aot_gpr_31 = (0x0892680Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892680Cu) goto L_0892680C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892680C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_08926818;
    }
L_08926818:
    aot_gpr_31 = (0x08926820u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926820u) goto L_08926820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926820:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_08926828;
    }
L_08926828:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08926838u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926838u) goto L_08926838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08926858;
      }
      goto L_08926848;
    }
L_08926848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926860;
      }
      goto L_08926858;
    }
L_08926858:
    aot_gpr_31 = (0x08926860u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926860u) goto L_08926860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926860:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892686Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892686Cu) goto L_0892686C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892686C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089269D0;
      }
      goto L_08926878;
    }
L_08926878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089268B0;
      }
      goto L_08926888;
    }
L_08926888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089268B0;
      }
      goto L_0892689C;
    }
L_0892689C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089269D0;
      }
      goto L_089268B0;
    }
L_089268B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08926928u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926928u) goto L_08926928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926928:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089269C0;
      }
      goto L_08926930;
    }
L_08926930:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(96), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08926980u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926980u) goto L_08926980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926980:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089269C0;
      }
      goto L_08926988;
    }
L_08926988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x089269B8u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089269B8u) goto L_089269B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089269B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089269CC;
      }
      goto L_089269C0;
    }
L_089269C0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    aot_gpr_31 = (0x089269CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089269CCu) goto L_089269CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089269CC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    goto L_089269D0;
L_089269D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 63u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926F08;
      }
      goto L_089269E0;
    }
L_089269E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926A48;
      }
      goto L_089269F0;
    }
L_089269F0:
    aot_gpr_31 = (0x089269F8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089269F8u) goto L_089269F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089269F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2308)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A08;
    }
L_08926A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A14;
    }
L_08926A14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A24;
    }
L_08926A24:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08926A40u);
    aot_gpr_6 = (0u | 110u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926A40u) goto L_08926A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926A40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A48;
    }
L_08926A48:
    aot_gpr_31 = (0x08926A50u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926A50u) goto L_08926A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926A50:
    aot_gpr_31 = (0x08926A58u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926A58u) goto L_08926A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926A58:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08926A70;
      }
      goto L_08926A60;
    }
L_08926A60:
    aot_gpr_31 = (0x08926A68u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926A68u) goto L_08926A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926A68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926A70;
    }
L_08926A70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926A80;
    }
L_08926A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926A8C;
    }
L_08926A8C:
    aot_gpr_31 = (0x08926A94u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926A94u) goto L_08926A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926A94:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
        goto L_08926AB0;
    }
    goto L_08926A9C;
L_08926A9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926AAC;
    }
L_08926AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    goto L_08926AB0;
L_08926AB0:
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926B10u);
    aot_gpr_6 = (0u | 12000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B10u) goto L_08926B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x08926B28u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B28u) goto L_08926B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B28:
    aot_gpr_31 = (0x08926B30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B30u) goto L_08926B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B30:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08926B54;
      }
      goto L_08926B40;
    }
L_08926B40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 71 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08926B74;
      }
      goto L_08926B54;
    }
L_08926B54:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926B60u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B60u) goto L_08926B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B60:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926B6Cu);
    aot_gpr_5 = (0u | 119u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B6Cu) goto L_08926B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926B90;
      }
      goto L_08926B74;
    }
L_08926B74:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926B80u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B80u) goto L_08926B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B80:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926B8Cu);
    aot_gpr_5 = (0u | 142u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B8Cu) goto L_08926B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B8C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08926B90;
L_08926B90:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926B9Cu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926B9Cu) goto L_08926B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926B9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926BA4;
    }
L_08926BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926C3C;
      }
      goto L_08926BB8;
    }
L_08926BB8:
    aot_gpr_31 = (0x08926BC0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926BC0u) goto L_08926BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926BC0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08926BD4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926BD4u) goto L_08926BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926BD4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_31 = (0x08926BF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926BF8u) goto L_08926BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926BF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 20u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926C28;
      }
      goto L_08926C1C;
    }
L_08926C1C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926C28u);
    aot_gpr_5 = (0u | 30000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926C28u) goto L_08926C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926C28:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926C34u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926C34u) goto L_08926C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926C34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926C3C;
    }
L_08926C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[19] = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926E84;
      }
      goto L_08926C50;
    }
L_08926C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (65535u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_31 = (0x08926C7Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926C7Cu) goto L_08926C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926C7C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08926CF8;
      }
      goto L_08926C84;
    }
L_08926C84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08926CF8;
      }
      goto L_08926C94;
    }
L_08926C94:
    aot_gpr_31 = (0x08926C9Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926C9Cu) goto L_08926C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926C9C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16480u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08926CF8;
      }
      goto L_08926CE4;
    }
L_08926CE4:
    aot_gpr_31 = (0x08926CECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926CECu) goto L_08926CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926CEC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926CF8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926CF8u) goto L_08926CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08926D2C;
      }
      goto L_08926D04;
    }
L_08926D04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08926E50;
      }
      goto L_08926D14;
    }
L_08926D14:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926D24u);
    aot_gpr_5 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926D24u) goto L_08926D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926D24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926E50;
      }
      goto L_08926D2C;
    }
L_08926D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D3C;
    }
L_08926D3C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D44;
    }
L_08926D44:
    aot_gpr_31 = (0x08926D4Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926D4Cu) goto L_08926D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926D4C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08926D6C;
      }
      goto L_08926D54;
    }
L_08926D54:
    aot_gpr_31 = (0x08926D5Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926D5Cu) goto L_08926D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926D5C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D64;
    }
L_08926D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D6C;
    }
L_08926D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D7C;
    }
L_08926D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 50u);
      if (branch_taken) {
          goto L_08926DA0;
      }
      goto L_08926D8C;
    }
L_08926D8C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D98;
    }
L_08926D98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926DA8;
      }
      goto L_08926DA0;
    }
L_08926DA0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926DA8;
    }
L_08926DA8:
    aot_gpr_31 = (0x08926DB0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2192)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926DB0u) goto L_08926DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926DB0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926DB8;
    }
L_08926DB8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08926DBC;
L_08926DBC:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08926DE4;
    }
    goto L_08926DC4;
L_08926DC4:
    aot_gpr_31 = (0x08926DCCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926DCCu) goto L_08926DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926DCC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926DDCu);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926DDCu) goto L_08926DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926DDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926E30;
      }
      goto L_08926DE4;
    }
L_08926DE4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926E30u);
    aot_gpr_6 = (0u | 14000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926E30u) goto L_08926E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926E30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    aot_gpr_31 = (0x08926E44u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926E44u) goto L_08926E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926E44:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926E50u);
    aot_gpr_5 = (0u | 142u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926E50u) goto L_08926E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926E50:
    aot_gpr_4 = (0u | 1500u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08926E70u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926E70u) goto L_08926E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926E70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926E7Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926E7Cu) goto L_08926E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926E84;
    }
L_08926E84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926E90;
    }
L_08926E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926EA0;
    }
L_08926EA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926EB0;
    }
L_08926EB0:
    aot_gpr_31 = (0x08926EB8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926EB8u) goto L_08926EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926EB8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926EC0;
    }
L_08926EC0:
    aot_gpr_31 = (0x08926EC8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926EC8u) goto L_08926EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926EC8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08926EDCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926EDCu) goto L_08926EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926EDC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_31 = (0x08926F00u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926F00u) goto L_08926F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926F00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926F08;
    }
L_08926F08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926F18;
    }
L_08926F18:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926F24u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926F24u) goto L_08926F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926F24:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08926F38;
      }
      goto L_08926F2C;
    }
L_08926F2C:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08926F38;
L_08926F38:
    aot_gpr_31 = (0x08926F40u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926F40u) goto L_08926F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926F40:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08926F4Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926F4Cu) goto L_08926F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926F4C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08926F64u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926F64u) goto L_08926F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926F64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927260;
      }
      goto L_08926F70;
    }
L_08926F70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 20u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926F80;
    }
L_08926F80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926F90;
    }
L_08926F90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08926F9Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08926F9Cu) goto L_08926F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08926F9C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926FA4;
    }
L_08926FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926FB4;
    }
L_08926FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(196), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(204)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_0892701C;
    }
    goto L_08926FEC;
L_08926FEC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(1918)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(100));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_0892701C;
L_0892701C:
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(172)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-100));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_0892704C;
    }
    goto L_0892704C;
L_0892704C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 << 8u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 5u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    goto L_0892706C;
L_0892706C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    aot_gpr_31 = (0x0892707Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892707Cu) goto L_0892707C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892707C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(564));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (~(aot_gpr_5 | 0u));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_089271BC;
      }
      goto L_089270A8;
    }
L_089270A8:
    aot_gpr_31 = (0x089270B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089270B0u) goto L_089270B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089270B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_16 = (0u | 6u);
      if (branch_taken) {
          goto L_089270E8;
      }
      goto L_089270DC;
    }
L_089270DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(680), aot_gpr_5);
    goto L_089270E8;
L_089270E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_08927110;
      }
      goto L_089270F4;
    }
L_089270F4:
    aot_gpr_31 = (0x089270FCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089270FCu) goto L_089270FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089270FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927110;
      }
      goto L_08927104;
    }
L_08927104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08927110u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927110u) goto L_08927110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927110:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08927138;
    }
    goto L_08927120;
L_08927120:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_08927134;
    }
L_08927134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    goto L_08927138;
L_08927138:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_31 = (0x0892714Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[29], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892714Cu) goto L_0892714C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892714C:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20004)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20008)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08927168u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927168u) goto L_08927168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927168:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_08927170;
    }
L_08927170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_31 = (0x08927188u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[29], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927188u) goto L_08927188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927188:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0892719Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892719Cu) goto L_0892719C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892719C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_089271A4;
    }
L_089271A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1280));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_089271BC;
    }
L_089271BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x089271C8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089271C8u) goto L_089271C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089271C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_089271DC;
    }
L_089271DC:
    aot_gpr_31 = (0x089271E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089271E4u) goto L_089271E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089271E4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_089271EC;
    }
L_089271EC:
    aot_gpr_31 = (0x089271F4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 233u, 0x08B00DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089271F4u) goto L_089271F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089271F4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_089271FC;
    }
L_089271FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[21]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_0892721C;
    }
L_0892721C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08927228u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927228u) goto L_08927228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927228:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08927240u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 465u, 0x0896DCA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927240u) goto L_08927240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927240:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927260;
      }
      goto L_08927248;
    }
L_08927248:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(613));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08927260;
L_08927260:
    aot_gpr_31 = (0x08927268u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927268u) goto L_08927268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927268:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927294;
      }
      goto L_08927270;
    }
L_08927270:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0892727Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 615u, 0x088C6FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892727Cu) goto L_0892727C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892727C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (51200u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_08927294;
L_08927294:
    aot_gpr_31 = (0x0892729Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 107u, 0x08908630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892729Cu) goto L_0892729C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892729C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (61440u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089272E4;
      }
      goto L_089272BC;
    }
L_089272BC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1500u);
    aot_gpr_6 = (0u | 30u);
    aot_gpr_31 = (0x089272D0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089272D0u) goto L_089272D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089272D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (57344u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    goto L_089272E4;
L_089272E4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089272F4;
      }
      goto L_089272F0;
    }
L_089272F0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2116), 0u);
    goto L_089272F4;
L_089272F4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08927300u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927300u) goto L_08927300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927300:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0892730Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892730Cu) goto L_0892730C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892730C:
    aot_gpr_31 = (0x08927314u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927314u) goto L_08927314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927314:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08927340;
      }
      goto L_0892731C;
    }
L_0892731C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927340;
      }
      goto L_0892732C;
    }
L_0892732C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08927340;
      }
      goto L_08927334;
    }
L_08927334:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08927340u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927340u) goto L_08927340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (64512u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_4);
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(312), aot_run_words);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0892738C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(68), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(96), aot_run_words); }
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08927410;
      }
      goto L_089273CC;
    }
L_089273CC:
    aot_gpr_31 = (0x089273D4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089273D4u) goto L_089273D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089273D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
        goto L_08927424;
    }
    goto L_08927408;
L_08927408:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_08927410;
    }
L_08927410:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0892741Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892741Cu) goto L_0892741C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892741C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927424;
    }
L_08927424:
    aot_gpr_5 = (0u | 55u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_08927438;
    }
L_08927438:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_0892744C;
    }
L_0892744C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892746C;
      }
      goto L_0892745C;
    }
L_0892745C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_0892746C;
    }
L_0892746C:
    aot_gpr_31 = (0x08927474u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927474u) goto L_08927474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927474:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_16 = (0u | 2u);
      if (branch_taken) {
          goto L_08927498;
      }
      goto L_0892747C;
    }
L_0892747C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_08927540;
      }
      goto L_08927488;
    }
L_08927488:
    aot_gpr_31 = (0x08927490u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927490u) goto L_08927490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927490:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08927540;
      }
      goto L_08927498;
    }
L_08927498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_089274E0;
      }
      goto L_089274A8;
    }
L_089274A8:
    aot_gpr_31 = (0x089274B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089274B0u) goto L_089274B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089274B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x089274CCu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089274CCu) goto L_089274CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089274CC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089274D8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089274D8u) goto L_089274D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089274D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_089274E0;
    }
L_089274E0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x089274F0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_089266D8;
L_089274F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892750C;
      }
      goto L_089274FC;
    }
L_089274FC:
    aot_gpr_31 = (0x08927504u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927504u) goto L_08927504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927504:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0892752C;
      }
      goto L_0892750C;
    }
L_0892750C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08927518u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927518u) goto L_08927518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927518:
    aot_gpr_31 = (0x08927520u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927520u) goto L_08927520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927520:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892752Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892752Cu) goto L_0892752C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892752C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927538u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927538u) goto L_08927538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927538:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_08927540;
    }
L_08927540:
    aot_gpr_31 = (0x08927548u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927548u) goto L_08927548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927548:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927554u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927554u) goto L_08927554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927554:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927560u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927560u) goto L_08927560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927560:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927568;
    }
L_08927568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927594;
      }
      goto L_08927578;
    }
L_08927578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_08927594;
L_08927594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089275D0;
      }
      goto L_089275A4;
    }
L_089275A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_31 = (0x089275B8u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089275B8u) goto L_089275B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089275B8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089275D0;
      }
      goto L_089275C4;
    }
L_089275C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3280)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3280), aot_gpr_5);
    goto L_089275D0;
L_089275D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275D8;
    }
L_089275D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275EC;
    }
L_089275EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275FC;
    }
L_089275FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_0892760C;
    }
L_0892760C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 20u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[30] = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08927634;
      }
      goto L_08927624;
    }
L_08927624:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_0892762C;
    }
L_0892762C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927634;
    }
L_08927634:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_08927640;
    }
L_08927640:
    aot_gpr_31 = (0x08927648u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927648u) goto L_08927648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927648:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_08927650;
    }
L_08927650:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_0892765C;
    }
L_0892765C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(200), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(196), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(3000));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(192), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    goto L_089276A0;
L_089276A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_089276BC;
      }
      goto L_089276AC;
    }
L_089276AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089276CC;
      }
      goto L_089276BC;
    }
L_089276BC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(615))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089276CC;
L_089276CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089276E4;
      }
      goto L_089276D8;
    }
L_089276D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(562)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(562), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089276E4;
L_089276E4:
    aot_gpr_31 = (0x089276ECu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089276ECu) goto L_089276EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089276EC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0892770C;
      }
      goto L_089276F4;
    }
L_089276F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892770C;
      }
      goto L_08927704;
    }
L_08927704:
    aot_gpr_31 = (0x0892770Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892770Cu) goto L_0892770C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892770C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08927724;
      }
      goto L_08927718;
    }
L_08927718:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927724u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927724u) goto L_08927724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927724:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_08927840;
      }
      goto L_08927730;
    }
L_08927730:
    aot_gpr_31 = (0x08927738u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927738u) goto L_08927738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927738:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089277E8;
      }
      goto L_08927740;
    }
L_08927740:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08927778;
      }
      goto L_0892775C;
    }
L_0892775C:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08927778u);
    aot_gpr_6 = (0u | 24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927778u) goto L_08927778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927778:
    aot_gpr_31 = (0x08927780u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927780u) goto L_08927780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 32u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089277D0;
      }
      goto L_08927794;
    }
L_08927794:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (46887u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 50604u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x089277B4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089277B4u) goto L_089277B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089277B4:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_089277D0;
L_089277D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x089277E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 612u, 0x088C6FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089277E8u) goto L_089277E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089277E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089277F4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089277F4u) goto L_089277F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089277F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927810;
      }
      goto L_08927804;
    }
L_08927804:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08927810;
L_08927810:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0892781Cu);
    aot_gpr_5 = (0u | 55u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892781Cu) goto L_0892781C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892781C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927828u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927828u) goto L_08927828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927828:
    aot_gpr_31 = (0x08927830u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 970u, 0x0890BDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927830u) goto L_08927830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927830:
    aot_gpr_31 = (0x08927838u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927838u) goto L_08927838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927838:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927840;
    }
L_08927840:
    aot_gpr_31 = (0x08927848u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927848u) goto L_08927848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927848:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927864;
      }
      goto L_08927850;
    }
L_08927850:
    aot_gpr_31 = (0x08927858u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927858u) goto L_08927858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927858:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08927864;
L_08927864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-12289));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(558)));
    aot_gpr_5 = (0u | 65535u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0892788C;
      }
      goto L_08927884;
    }
L_08927884:
    aot_gpr_4 = (0u | 15000u);
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_0892788C;
L_0892788C:
    aot_gpr_31 = (0x08927894u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927894u) goto L_08927894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927894:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927930;
      }
      goto L_0892789C;
    }
L_0892789C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    aot_gpr_16 = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_089278C8;
      }
      goto L_089278AC;
    }
L_089278AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089278C8;
      }
      goto L_089278BC;
    }
L_089278BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08927920;
      }
      goto L_089278C8;
    }
L_089278C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 32u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927910;
      }
      goto L_089278DC;
    }
L_089278DC:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x089278F4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089278F4u) goto L_089278F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089278F4:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08927910;
L_08927910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08927920;
L_08927920:
    aot_gpr_31 = (0x08927928u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 612u, 0x088C6FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927928u) goto L_08927928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927928:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927998;
      }
      goto L_08927930;
    }
L_08927930:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08927998;
      }
      goto L_0892793C;
    }
L_0892793C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 32u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927984;
      }
      goto L_08927950;
    }
L_08927950:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08927968u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927968u) goto L_08927968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927968:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08927984;
L_08927984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08927998;
L_08927998:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08927A78;
      }
      goto L_089279A4;
    }
L_089279A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (32768u << 16u);
      if (branch_taken) {
          goto L_08927A78;
      }
      goto L_089279B8;
    }
L_089279B8:
    ctx.gpr[18] = (1024u << 16u);
    ctx.gpr[17] = (2u << 16u);
    goto L_089279C0;
L_089279C0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089279CCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089279CCu) goto L_089279CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089279CC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_089279D4;
    }
L_089279D4:
    aot_gpr_31 = (0x089279DCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089279DCu) goto L_089279DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089279DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_089279EC;
    }
L_089279EC:
    aot_gpr_31 = (0x089279F4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089279F4u) goto L_089279F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089279F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_08927A04;
    }
L_08927A04:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927A10u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927A10u) goto L_08927A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927A10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08927A2C;
      }
      goto L_08927A1C;
    }
L_08927A1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_08927A2C;
    }
L_08927A2C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927A3Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927A3Cu) goto L_08927A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927A3C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08927A4Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927A4Cu) goto L_08927A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927A4C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927A5Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927A5Cu) goto L_08927A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927A5C:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1728), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08927A64;
L_08927A64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089279C0;
      }
      goto L_08927A78;
    }
L_08927A78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08927A94;
      }
      goto L_08927A84;
    }
L_08927A84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_gpr_4 = (0u | 59u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08927C5C;
      }
      goto L_08927A94;
    }
L_08927A94:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927AA0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927AA0u) goto L_08927AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08927ACC;
      }
      goto L_08927AB0;
    }
L_08927AB0:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5448), aot_gpr_4);
    goto L_08927ACC;
L_08927ACC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927AF8;
      }
      goto L_08927ADC;
    }
L_08927ADC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), aot_gpr_4);
    goto L_08927AF8;
L_08927AF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927B24;
      }
      goto L_08927B08;
    }
L_08927B08:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), aot_gpr_4);
    goto L_08927B24;
L_08927B24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927B50;
      }
      goto L_08927B34;
    }
L_08927B34:
    aot_gpr_31 = (0x08927B3Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927B3Cu) goto L_08927B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927B3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927B50;
      }
      goto L_08927B44;
    }
L_08927B44:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927B50u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927B50u) goto L_08927B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927B50:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927B88;
      }
      goto L_08927B60;
    }
L_08927B60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08927B88u);
    aot_gpr_6 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927B88u) goto L_08927B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927B88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927B94;
    }
L_08927B94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927BA0;
    }
L_08927BA0:
    aot_gpr_31 = (0x08927BA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927BA8u) goto L_08927BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927BA8:
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_2;
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927BB0;
    }
L_08927BB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927BC0;
    }
L_08927BC0:
    aot_gpr_31 = (0x08927BC8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927BC8u) goto L_08927BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927BC8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_gpr_4 = (0u | 25u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08927BE4;
L_08927BE4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927BF0u);
    aot_gpr_5 = (0u | 55u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927BF0u) goto L_08927BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927BF0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927BFCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927BFCu) goto L_08927BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927BFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08927E78;
      }
      goto L_08927C08;
    }
L_08927C08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C18;
    }
L_08927C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 49u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C28;
    }
L_08927C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C38;
    }
L_08927C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927C4C;
      }
      goto L_08927C48;
    }
L_08927C48:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(640), 0u);
    goto L_08927C4C;
L_08927C4C:
    aot_gpr_31 = (0x08927C54u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927C54u) goto L_08927C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927C54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927E78;
      }
      goto L_08927C5C;
    }
L_08927C5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[18] = (0u | 17u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08927C8C;
      }
      goto L_08927C70;
    }
L_08927C70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08927C8C;
      }
      goto L_08927C7C;
    }
L_08927C7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[23];
      if (branch_taken) {
          goto L_08927C8C;
      }
      goto L_08927C88;
    }
L_08927C88:
    ctx.gpr[17] = (0u | 1u);
    goto L_08927C8C;
L_08927C8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08927CE8;
      }
      goto L_08927C98;
    }
L_08927C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08927CE8;
      }
      goto L_08927CA4;
    }
L_08927CA4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927CB0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927CB0u) goto L_08927CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927CB0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08927CD0;
      }
      goto L_08927CB8;
    }
L_08927CB8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927CC8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927CC8u) goto L_08927CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927CC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927CDC;
      }
      goto L_08927CD0;
    }
L_08927CD0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927CDCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927CDCu) goto L_08927CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927CDC:
    aot_gpr_16 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927CE8;
    }
L_08927CE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927D08;
      }
      goto L_08927CF8;
    }
L_08927CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927D20;
      }
      goto L_08927D08;
    }
L_08927D08:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927D18u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927D18u) goto L_08927D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927D18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927D20;
    }
L_08927D20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927D44;
      }
      goto L_08927D30;
    }
L_08927D30:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927D3Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927D3Cu) goto L_08927D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927D3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927D44;
    }
L_08927D44:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2274)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 11u);
      if (branch_taken) {
          goto L_08927D80;
      }
      goto L_08927D54;
    }
L_08927D54:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08927DB8;
      }
      goto L_08927D60;
    }
L_08927D60:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927DA0;
      }
      goto L_08927D68;
    }
L_08927D68:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927D78u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927D78u) goto L_08927D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927D78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927D80;
    }
L_08927D80:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927DB8;
      }
      goto L_08927D88;
    }
L_08927D88:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927D98u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927D98u) goto L_08927D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927D98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927DA0;
    }
L_08927DA0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927DB0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927DB0u) goto L_08927DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927DB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927DB8;
    }
L_08927DB8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08927DC4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927DC4u) goto L_08927DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927DC4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927DD0u);
    aot_gpr_5 = (0u | 55u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927DD0u) goto L_08927DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927DD0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927DDCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927DDCu) goto L_08927DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927DDC:
    aot_gpr_31 = (0x08927DE4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927DE4u) goto L_08927DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927DE4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927E04;
      }
      goto L_08927DEC;
    }
L_08927DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08927E04;
      }
      goto L_08927DF8;
    }
L_08927DF8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927E04u);
    aot_gpr_5 = (0u | 51u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927E04u) goto L_08927E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927E04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927E44;
      }
      goto L_08927E14;
    }
L_08927E14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 49u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927E44;
      }
      goto L_08927E24;
    }
L_08927E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08927E44;
      }
      goto L_08927E34;
    }
L_08927E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08927E48;
      }
      goto L_08927E44;
    }
L_08927E44:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(640), 0u);
    goto L_08927E48;
L_08927E48:
    aot_gpr_31 = (0x08927E50u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927E50u) goto L_08927E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927E50:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08927E68;
      }
      goto L_08927E58;
    }
L_08927E58:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08927E68u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927E68u) goto L_08927E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927E68:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08927E78;
      }
      goto L_08927E70;
    }
L_08927E70:
    aot_gpr_4 = (0u | 17u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08927E78;
L_08927E78:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_31 = (0x08927E88u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927E88u) goto L_08927E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927E88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927EC8;
      }
      goto L_08927EAC;
    }
L_08927EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(563)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927EC8;
      }
      goto L_08927EB8;
    }
L_08927EB8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_31 = (0x08927EC8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 623u, 0x08832ADCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927EC8u) goto L_08927EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08927EFC;
      }
      goto L_08927EDC;
    }
L_08927EDC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12032)));
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
L_08927EF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08927F08;
      }
      goto L_08927EFC;
    }
L_08927EFC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927F08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927F08u) goto L_08927F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927F08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_5 ^ ctx.gpr[21]);
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x08927F24u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927F24u) goto L_08927F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927F24:
    aot_gpr_31 = (0x08927F2Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927F2Cu) goto L_08927F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927F2C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927F48;
      }
      goto L_08927F34;
    }
L_08927F34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08927F48;
      }
      goto L_08927F40;
    }
L_08927F40:
    aot_gpr_31 = (0x08927F48u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927F48u) goto L_08927F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927F48:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08927F6C;
      }
      goto L_08927F58;
    }
L_08927F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65528u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08927F6C;
L_08927F6C:
    aot_gpr_31 = (0x08927F74u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927F74u) goto L_08927F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927F74:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08927FE0;
      }
      goto L_08927F7C;
    }
L_08927F7C:
    aot_gpr_31 = (0x08927F84u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 505u, 0x08B4223Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927F84u) goto L_08927F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927F84:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08927FE0;
      }
      goto L_08927F8C;
    }
L_08927F8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08927FE0;
      }
      goto L_08927F98;
    }
L_08927F98:
    aot_gpr_31 = (0x08927FA0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927FA0u) goto L_08927FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927FA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08927FD4;
      }
      goto L_08927FB0;
    }
L_08927FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08927FD4;
      }
      goto L_08927FBC;
    }
L_08927FBC:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08927FD4u);
    ctx.gpr[8] = (0u | 1500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08927FD4u) goto L_08927FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08927FD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08927FE0;
L_08927FE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08927FF0;
L_08927FF0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(68), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
    }
    ctx.pc = 0x08928000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0072(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0072_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_72(Runtime &runtime) {
    runtime.register_generated_unit(72u, 0x08924000u, 16384u, &recomp_unit_0072, &recomp_unit_0072_entry);
    runtime.register_function(0x08924000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924008u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924010u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924018u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924020u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924028u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924030u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924038u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924044u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924054u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892405Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924068u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924070u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924078u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924080u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924088u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924098u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924104u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892410Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892411Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924124u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892412Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892413Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892414Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892415Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924164u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892416Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924174u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892417Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892418Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892419Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924210u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924218u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924220u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892422Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924234u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924240u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924264u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892426Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892427Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924318u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924324u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924330u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892433Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924358u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924360u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924370u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924380u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924388u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924410u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924458u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924498u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924528u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924530u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924558u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924568u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924570u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924584u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924608u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924610u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892461Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892462Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892463Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924650u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924668u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924670u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892468Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924728u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924760u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892476Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924774u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892477Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924784u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892478Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924820u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892483Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892484Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892485Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924870u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892489Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924904u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924914u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892491Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924924u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924938u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924940u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924948u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924954u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924980u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924990u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ACCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ED4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925004u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892500Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925020u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925028u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892503Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925044u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925054u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925060u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925070u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925074u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925080u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892508Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892509Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925104u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892510Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925118u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925128u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925138u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925140u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925148u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925168u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925178u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925198u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925204u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892520Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892521Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892522Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892523Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892524Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892525Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925260u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925268u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892527Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925290u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925298u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925308u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925318u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925320u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925350u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925364u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892536Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925374u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925388u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925390u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892539Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925448u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925450u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925458u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925460u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925468u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925478u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892547Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925500u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925508u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892551Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892552Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892554Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892555Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925564u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925600u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925618u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925630u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925654u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925678u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925690u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892569Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925728u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925740u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892574Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925758u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892576Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925774u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925780u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892578Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892580Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925830u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925854u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925860u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925874u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892587Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892591Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892592Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925934u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925940u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892594Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925958u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892597Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925994u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926040u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926050u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926088u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926108u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926110u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926118u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892612Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892613Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892614Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926190u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892620Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892630Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926404u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892640Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926414u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892641Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926428u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926528u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892652Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892660Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926618u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926620u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926628u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926630u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926640u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926654u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926668u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926670u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926680u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892668Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926698u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926768u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892677Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892680Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926818u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926820u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926838u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926860u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892686Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892689Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926928u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926980u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892701Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892704Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892706Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892707Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927104u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927110u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927120u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927138u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892714Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927168u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927170u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927188u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892719Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892721Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927228u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927240u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927248u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927260u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927268u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892727Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927294u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892729Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892730Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892731Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892732Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927340u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892738Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927408u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927410u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892741Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927424u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927438u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892744Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892745Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892746Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927474u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892747Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927488u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927490u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927498u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927504u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892750Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892752Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927554u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927568u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927578u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892760Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892762Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927640u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927650u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892765Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892770Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927718u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927724u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927730u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927738u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927740u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892775Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927778u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927780u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927804u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927810u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892781Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927830u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927838u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927840u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927850u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927884u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892788Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892789Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927920u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927928u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892793Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927950u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927984u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927998u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927ACCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927ADCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FF0u, &recomp_unit_0072, "recomp_unit_0072");
}
} // namespace psprecomp
