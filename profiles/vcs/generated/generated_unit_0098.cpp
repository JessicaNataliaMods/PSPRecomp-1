#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
// Camera axes for the mouse and the pad's right stick; see the hook around
// L_0898E098 below.
#include "vcs_camera_input.hpp"
#include "vcs_vehicle_input.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0098[64] = {
    0x8592397259239725ull, 0x1004D5554135554Aull, 0x52802155494A5555ull, 0x54A804202A025551ull,
    0x086A055009250115ull, 0x21554880442AA910ull, 0x4010D40AA0124A02ull, 0x2A95551528005400ull,
    0xD52A54A94B4A2C91ull, 0xA2A5000A8008021Aull, 0x95296945922552AAull, 0x02A00200855AA54Aull,
    0x29437246E4955440ull, 0x9429486E48DC9225ull, 0x355555102E552121ull, 0xE5485509AAAAA881ull,
    0x5522554A20172A42ull, 0x52484AA925A1152Aull, 0x685CAA5216A90B95ull, 0x2354A955542A9521ull,
    0x55204AA902554812ull, 0x95008D2A012AA409ull, 0x155485CAA521472Aull, 0xA401110AAA502554ull,
    0x4D54810D4825494Aull, 0x291144A445135520ull, 0xB9521291144A4451ull, 0x082AA550A2AA8500ull,
    0x5528023515555500ull, 0x42AA90872955544Aull, 0x102A805082540AAAull, 0x84083152A0460204ull,
    0x0A14550118081062ull, 0x62A4D40461084A93ull, 0xA010000502118421ull, 0xB420003400A96A85ull,
    0x01100040022A8406ull, 0x0002A00015080020ull, 0x034103440D108420ull, 0xD103440D103440D1ull,
    0x206881A206881A20ull, 0x249012B90B551172ull, 0x2492492492492CA5ull, 0x020080532042C149ull,
    0xA294528A51528551ull, 0x14A294528A514514ull, 0x528A514A294528A5ull, 0x4A294528A514A294ull,
    0x28A514A294528A51ull, 0xB4934051415A49A0ull, 0x4A294528A514A282ull, 0x4804929208128A51ull,
    0x0151515286821012ull, 0x48042020291294AAull, 0x4900420040210040ull, 0x0221040092008200ull,
    0x0190404004100008ull, 0x1280401040200808ull, 0x2210C120281A8104ull, 0x0221108425080020ull,
    0x0041010042202192ull, 0x0041100100225080ull, 0x3220088000002200ull, 0x0808942000104499ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0098[64] = {
    1u, 30u, 54u, 78u, 97u, 115u, 134u, 150u, 169u, 197u, 212u, 239u, 257u, 282u, 308u, 333u,
    359u, 382u, 406u, 434u, 460u, 481u, 501u, 527u, 547u, 570u, 591u, 614u, 634u, 656u, 681u, 699u,
    715u, 731u, 753u, 765u, 784u, 795u, 803u, 818u, 838u, 855u, 879u, 902u, 917u, 941u, 963u, 987u,
    1010u, 1033u, 1056u, 1078u, 1096u, 1114u, 1131u, 1140u, 1149u, 1157u, 1166u, 1181u, 1192u, 1203u, 1212u, 1220u,
};
void recomp_unit_0098_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,2,29,16 fprs=12,13,20,14 gpr_occ=4477 fpr_occ=278 gpr_total=5338 fpr_total=317
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0898C000u;
        entry_id = 0u;
        if (entry_delta < 16368u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0098[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0098[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_0898C000;
    case 2u: goto L_0898C008;
    case 3u: goto L_0898C014;
    case 4u: goto L_0898C020;
    case 5u: goto L_0898C024;
    case 6u: goto L_0898C028;
    case 7u: goto L_0898C030;
    case 8u: goto L_0898C03C;
    case 9u: goto L_0898C040;
    case 10u: goto L_0898C044;
    case 11u: goto L_0898C054;
    case 12u: goto L_0898C060;
    case 13u: goto L_0898C06C;
    case 14u: goto L_0898C070;
    case 15u: goto L_0898C078;
    case 16u: goto L_0898C084;
    case 17u: goto L_0898C090;
    case 18u: goto L_0898C094;
    case 19u: goto L_0898C098;
    case 20u: goto L_0898C0A0;
    case 21u: goto L_0898C0AC;
    case 22u: goto L_0898C0B0;
    case 23u: goto L_0898C0B4;
    case 24u: goto L_0898C0C4;
    case 25u: goto L_0898C0D0;
    case 26u: goto L_0898C0DC;
    case 27u: goto L_0898C0E0;
    case 28u: goto L_0898C0E8;
    case 29u: goto L_0898C0FC;
    case 30u: goto L_0898C104;
    case 31u: goto L_0898C10C;
    case 32u: goto L_0898C118;
    case 33u: goto L_0898C120;
    case 34u: goto L_0898C128;
    case 35u: goto L_0898C130;
    case 36u: goto L_0898C138;
    case 37u: goto L_0898C140;
    case 38u: goto L_0898C148;
    case 39u: goto L_0898C150;
    case 40u: goto L_0898C154;
    case 41u: goto L_0898C160;
    case 42u: goto L_0898C178;
    case 43u: goto L_0898C180;
    case 44u: goto L_0898C188;
    case 45u: goto L_0898C190;
    case 46u: goto L_0898C198;
    case 47u: goto L_0898C1A0;
    case 48u: goto L_0898C1A8;
    case 49u: goto L_0898C1B0;
    case 50u: goto L_0898C1B8;
    case 51u: goto L_0898C1BC;
    case 52u: goto L_0898C1C8;
    case 53u: goto L_0898C1F0;
    case 54u: goto L_0898C200;
    case 55u: goto L_0898C208;
    case 56u: goto L_0898C210;
    case 57u: goto L_0898C218;
    case 58u: goto L_0898C220;
    case 59u: goto L_0898C228;
    case 60u: goto L_0898C230;
    case 61u: goto L_0898C238;
    case 62u: goto L_0898C244;
    case 63u: goto L_0898C24C;
    case 64u: goto L_0898C258;
    case 65u: goto L_0898C260;
    case 66u: goto L_0898C26C;
    case 67u: goto L_0898C278;
    case 68u: goto L_0898C280;
    case 69u: goto L_0898C288;
    case 70u: goto L_0898C290;
    case 71u: goto L_0898C298;
    case 72u: goto L_0898C2A0;
    case 73u: goto L_0898C2B4;
    case 74u: goto L_0898C2DC;
    case 75u: goto L_0898C2E4;
    case 76u: goto L_0898C2F0;
    case 77u: goto L_0898C2F8;
    case 78u: goto L_0898C300;
    case 79u: goto L_0898C310;
    case 80u: goto L_0898C318;
    case 81u: goto L_0898C320;
    case 82u: goto L_0898C328;
    case 83u: goto L_0898C330;
    case 84u: goto L_0898C338;
    case 85u: goto L_0898C344;
    case 86u: goto L_0898C364;
    case 87u: goto L_0898C36C;
    case 88u: goto L_0898C374;
    case 89u: goto L_0898C394;
    case 90u: goto L_0898C3A8;
    case 91u: goto L_0898C3CC;
    case 92u: goto L_0898C3D4;
    case 93u: goto L_0898C3DC;
    case 94u: goto L_0898C3E8;
    case 95u: goto L_0898C3F0;
    case 96u: goto L_0898C3F8;
    case 97u: goto L_0898C400;
    case 98u: goto L_0898C408;
    case 99u: goto L_0898C410;
    case 100u: goto L_0898C420;
    case 101u: goto L_0898C440;
    case 102u: goto L_0898C448;
    case 103u: goto L_0898C454;
    case 104u: goto L_0898C460;
    case 105u: goto L_0898C46C;
    case 106u: goto L_0898C490;
    case 107u: goto L_0898C498;
    case 108u: goto L_0898C4A0;
    case 109u: goto L_0898C4A8;
    case 110u: goto L_0898C4C4;
    case 111u: goto L_0898C4CC;
    case 112u: goto L_0898C4D4;
    case 113u: goto L_0898C4D8;
    case 114u: goto L_0898C4EC;
    case 115u: goto L_0898C510;
    case 116u: goto L_0898C520;
    case 117u: goto L_0898C52C;
    case 118u: goto L_0898C534;
    case 119u: goto L_0898C53C;
    case 120u: goto L_0898C544;
    case 121u: goto L_0898C54C;
    case 122u: goto L_0898C554;
    case 123u: goto L_0898C568;
    case 124u: goto L_0898C578;
    case 125u: goto L_0898C59C;
    case 126u: goto L_0898C5AC;
    case 127u: goto L_0898C5B8;
    case 128u: goto L_0898C5C0;
    case 129u: goto L_0898C5C8;
    case 130u: goto L_0898C5D0;
    case 131u: goto L_0898C5D8;
    case 132u: goto L_0898C5E0;
    case 133u: goto L_0898C5F4;
    case 134u: goto L_0898C604;
    case 135u: goto L_0898C624;
    case 136u: goto L_0898C62C;
    case 137u: goto L_0898C638;
    case 138u: goto L_0898C644;
    case 139u: goto L_0898C650;
    case 140u: goto L_0898C674;
    case 141u: goto L_0898C67C;
    case 142u: goto L_0898C684;
    case 143u: goto L_0898C68C;
    case 144u: goto L_0898C6A8;
    case 145u: goto L_0898C6B0;
    case 146u: goto L_0898C6B8;
    case 147u: goto L_0898C6BC;
    case 148u: goto L_0898C6D0;
    case 149u: goto L_0898C6F8;
    case 150u: goto L_0898C728;
    case 151u: goto L_0898C730;
    case 152u: goto L_0898C738;
    case 153u: goto L_0898C76C;
    case 154u: goto L_0898C774;
    case 155u: goto L_0898C780;
    case 156u: goto L_0898C788;
    case 157u: goto L_0898C790;
    case 158u: goto L_0898C7A0;
    case 159u: goto L_0898C7A8;
    case 160u: goto L_0898C7B0;
    case 161u: goto L_0898C7B8;
    case 162u: goto L_0898C7C0;
    case 163u: goto L_0898C7C8;
    case 164u: goto L_0898C7D0;
    case 165u: goto L_0898C7DC;
    case 166u: goto L_0898C7E4;
    case 167u: goto L_0898C7EC;
    case 168u: goto L_0898C7F4;
    case 169u: goto L_0898C800;
    case 170u: goto L_0898C810;
    case 171u: goto L_0898C81C;
    case 172u: goto L_0898C828;
    case 173u: goto L_0898C82C;
    case 174u: goto L_0898C834;
    case 175u: goto L_0898C844;
    case 176u: goto L_0898C84C;
    case 177u: goto L_0898C858;
    case 178u: goto L_0898C860;
    case 179u: goto L_0898C864;
    case 180u: goto L_0898C86C;
    case 181u: goto L_0898C878;
    case 182u: goto L_0898C880;
    case 183u: goto L_0898C88C;
    case 184u: goto L_0898C894;
    case 185u: goto L_0898C89C;
    case 186u: goto L_0898C8A8;
    case 187u: goto L_0898C8B0;
    case 188u: goto L_0898C8B8;
    case 189u: goto L_0898C8C4;
    case 190u: goto L_0898C8CC;
    case 191u: goto L_0898C8D4;
    case 192u: goto L_0898C8E0;
    case 193u: goto L_0898C8E8;
    case 194u: goto L_0898C8F0;
    case 195u: goto L_0898C8F8;
    case 196u: goto L_0898C8FC;
    case 197u: goto L_0898C904;
    case 198u: goto L_0898C90C;
    case 199u: goto L_0898C910;
    case 200u: goto L_0898C924;
    case 201u: goto L_0898C94C;
    case 202u: goto L_0898C97C;
    case 203u: goto L_0898C984;
    case 204u: goto L_0898C98C;
    case 205u: goto L_0898C9C0;
    case 206u: goto L_0898C9C8;
    case 207u: goto L_0898C9D4;
    case 208u: goto L_0898C9DC;
    case 209u: goto L_0898C9E4;
    case 210u: goto L_0898C9F4;
    case 211u: goto L_0898C9FC;
    case 212u: goto L_0898CA04;
    case 213u: goto L_0898CA0C;
    case 214u: goto L_0898CA14;
    case 215u: goto L_0898CA1C;
    case 216u: goto L_0898CA24;
    case 217u: goto L_0898CA30;
    case 218u: goto L_0898CA38;
    case 219u: goto L_0898CA40;
    case 220u: goto L_0898CA48;
    case 221u: goto L_0898CA54;
    case 222u: goto L_0898CA64;
    case 223u: goto L_0898CA70;
    case 224u: goto L_0898CA7C;
    case 225u: goto L_0898CA80;
    case 226u: goto L_0898CA88;
    case 227u: goto L_0898CA98;
    case 228u: goto L_0898CAA0;
    case 229u: goto L_0898CAAC;
    case 230u: goto L_0898CAB4;
    case 231u: goto L_0898CAB8;
    case 232u: goto L_0898CAC0;
    case 233u: goto L_0898CACC;
    case 234u: goto L_0898CAD4;
    case 235u: goto L_0898CAE0;
    case 236u: goto L_0898CAE8;
    case 237u: goto L_0898CAF0;
    case 238u: goto L_0898CAFC;
    case 239u: goto L_0898CB04;
    case 240u: goto L_0898CB0C;
    case 241u: goto L_0898CB18;
    case 242u: goto L_0898CB20;
    case 243u: goto L_0898CB28;
    case 244u: goto L_0898CB34;
    case 245u: goto L_0898CB3C;
    case 246u: goto L_0898CB44;
    case 247u: goto L_0898CB4C;
    case 248u: goto L_0898CB50;
    case 249u: goto L_0898CB58;
    case 250u: goto L_0898CB60;
    case 251u: goto L_0898CB68;
    case 252u: goto L_0898CB7C;
    case 253u: goto L_0898CBA4;
    case 254u: goto L_0898CBD4;
    case 255u: goto L_0898CBDC;
    case 256u: goto L_0898CBE4;
    case 257u: goto L_0898CC18;
    case 258u: goto L_0898CC28;
    case 259u: goto L_0898CC30;
    case 260u: goto L_0898CC38;
    case 261u: goto L_0898CC40;
    case 262u: goto L_0898CC48;
    case 263u: goto L_0898CC50;
    case 264u: goto L_0898CC5C;
    case 265u: goto L_0898CC68;
    case 266u: goto L_0898CC74;
    case 267u: goto L_0898CC78;
    case 268u: goto L_0898CC7C;
    case 269u: goto L_0898CC84;
    case 270u: goto L_0898CC88;
    case 271u: goto L_0898CC98;
    case 272u: goto L_0898CCA4;
    case 273u: goto L_0898CCB0;
    case 274u: goto L_0898CCB4;
    case 275u: goto L_0898CCB8;
    case 276u: goto L_0898CCC0;
    case 277u: goto L_0898CCC4;
    case 278u: goto L_0898CCD8;
    case 279u: goto L_0898CCE0;
    case 280u: goto L_0898CCEC;
    case 281u: goto L_0898CCF4;
    case 282u: goto L_0898CD00;
    case 283u: goto L_0898CD08;
    case 284u: goto L_0898CD14;
    case 285u: goto L_0898CD24;
    case 286u: goto L_0898CD30;
    case 287u: goto L_0898CD3C;
    case 288u: goto L_0898CD48;
    case 289u: goto L_0898CD4C;
    case 290u: goto L_0898CD50;
    case 291u: goto L_0898CD58;
    case 292u: goto L_0898CD5C;
    case 293u: goto L_0898CD6C;
    case 294u: goto L_0898CD78;
    case 295u: goto L_0898CD84;
    case 296u: goto L_0898CD88;
    case 297u: goto L_0898CD8C;
    case 298u: goto L_0898CD94;
    case 299u: goto L_0898CD98;
    case 300u: goto L_0898CDAC;
    case 301u: goto L_0898CDB8;
    case 302u: goto L_0898CDC0;
    case 303u: goto L_0898CDCC;
    case 304u: goto L_0898CDD4;
    case 305u: goto L_0898CDE8;
    case 306u: goto L_0898CDF0;
    case 307u: goto L_0898CDFC;
    case 308u: goto L_0898CE00;
    case 309u: goto L_0898CE14;
    case 310u: goto L_0898CE20;
    case 311u: goto L_0898CE34;
    case 312u: goto L_0898CE40;
    case 313u: goto L_0898CE48;
    case 314u: goto L_0898CE50;
    case 315u: goto L_0898CE58;
    case 316u: goto L_0898CE64;
    case 317u: goto L_0898CE68;
    case 318u: goto L_0898CE6C;
    case 319u: goto L_0898CE74;
    case 320u: goto L_0898CE90;
    case 321u: goto L_0898CEA0;
    case 322u: goto L_0898CEA8;
    case 323u: goto L_0898CEB0;
    case 324u: goto L_0898CEB8;
    case 325u: goto L_0898CEC0;
    case 326u: goto L_0898CEC8;
    case 327u: goto L_0898CED0;
    case 328u: goto L_0898CED8;
    case 329u: goto L_0898CEE0;
    case 330u: goto L_0898CEE8;
    case 331u: goto L_0898CEF0;
    case 332u: goto L_0898CEF4;
    case 333u: goto L_0898CF00;
    case 334u: goto L_0898CF1C;
    case 335u: goto L_0898CF2C;
    case 336u: goto L_0898CF34;
    case 337u: goto L_0898CF3C;
    case 338u: goto L_0898CF44;
    case 339u: goto L_0898CF4C;
    case 340u: goto L_0898CF54;
    case 341u: goto L_0898CF5C;
    case 342u: goto L_0898CF64;
    case 343u: goto L_0898CF6C;
    case 344u: goto L_0898CF74;
    case 345u: goto L_0898CF7C;
    case 346u: goto L_0898CF80;
    case 347u: goto L_0898CF8C;
    case 348u: goto L_0898CFA0;
    case 349u: goto L_0898CFA8;
    case 350u: goto L_0898CFB0;
    case 351u: goto L_0898CFB8;
    case 352u: goto L_0898CFCC;
    case 353u: goto L_0898CFD8;
    case 354u: goto L_0898CFE0;
    case 355u: goto L_0898CFE8;
    case 356u: goto L_0898CFF4;
    case 357u: goto L_0898CFF8;
    case 358u: goto L_0898CFFC;
    case 359u: goto L_0898D004;
    case 360u: goto L_0898D018;
    case 361u: goto L_0898D024;
    case 362u: goto L_0898D02C;
    case 363u: goto L_0898D034;
    case 364u: goto L_0898D040;
    case 365u: goto L_0898D044;
    case 366u: goto L_0898D048;
    case 367u: goto L_0898D050;
    case 368u: goto L_0898D074;
    case 369u: goto L_0898D084;
    case 370u: goto L_0898D08C;
    case 371u: goto L_0898D098;
    case 372u: goto L_0898D0A0;
    case 373u: goto L_0898D0A8;
    case 374u: goto L_0898D0B0;
    case 375u: goto L_0898D0B8;
    case 376u: goto L_0898D0C4;
    case 377u: goto L_0898D0D4;
    case 378u: goto L_0898D0E0;
    case 379u: goto L_0898D0E8;
    case 380u: goto L_0898D0F0;
    case 381u: goto L_0898D0F8;
    case 382u: goto L_0898D104;
    case 383u: goto L_0898D10C;
    case 384u: goto L_0898D114;
    case 385u: goto L_0898D120;
    case 386u: goto L_0898D128;
    case 387u: goto L_0898D130;
    case 388u: goto L_0898D140;
    case 389u: goto L_0898D154;
    case 390u: goto L_0898D15C;
    case 391u: goto L_0898D160;
    case 392u: goto L_0898D168;
    case 393u: goto L_0898D174;
    case 394u: goto L_0898D180;
    case 395u: goto L_0898D18C;
    case 396u: goto L_0898D194;
    case 397u: goto L_0898D19C;
    case 398u: goto L_0898D1A4;
    case 399u: goto L_0898D1AC;
    case 400u: goto L_0898D1B8;
    case 401u: goto L_0898D1CC;
    case 402u: goto L_0898D1D8;
    case 403u: goto L_0898D1E4;
    case 404u: goto L_0898D1F0;
    case 405u: goto L_0898D1F8;
    case 406u: goto L_0898D200;
    case 407u: goto L_0898D208;
    case 408u: goto L_0898D210;
    case 409u: goto L_0898D21C;
    case 410u: goto L_0898D220;
    case 411u: goto L_0898D224;
    case 412u: goto L_0898D22C;
    case 413u: goto L_0898D240;
    case 414u: goto L_0898D24C;
    case 415u: goto L_0898D254;
    case 416u: goto L_0898D25C;
    case 417u: goto L_0898D264;
    case 418u: goto L_0898D268;
    case 419u: goto L_0898D270;
    case 420u: goto L_0898D284;
    case 421u: goto L_0898D290;
    case 422u: goto L_0898D298;
    case 423u: goto L_0898D2A4;
    case 424u: goto L_0898D2AC;
    case 425u: goto L_0898D2B4;
    case 426u: goto L_0898D2BC;
    case 427u: goto L_0898D2C8;
    case 428u: goto L_0898D2CC;
    case 429u: goto L_0898D2D0;
    case 430u: goto L_0898D2D8;
    case 431u: goto L_0898D2EC;
    case 432u: goto L_0898D2F4;
    case 433u: goto L_0898D2F8;
    case 434u: goto L_0898D300;
    case 435u: goto L_0898D314;
    case 436u: goto L_0898D320;
    case 437u: goto L_0898D328;
    case 438u: goto L_0898D330;
    case 439u: goto L_0898D33C;
    case 440u: goto L_0898D344;
    case 441u: goto L_0898D34C;
    case 442u: goto L_0898D354;
    case 443u: goto L_0898D368;
    case 444u: goto L_0898D370;
    case 445u: goto L_0898D378;
    case 446u: goto L_0898D380;
    case 447u: goto L_0898D388;
    case 448u: goto L_0898D390;
    case 449u: goto L_0898D398;
    case 450u: goto L_0898D3A0;
    case 451u: goto L_0898D3AC;
    case 452u: goto L_0898D3B4;
    case 453u: goto L_0898D3BC;
    case 454u: goto L_0898D3C8;
    case 455u: goto L_0898D3D0;
    case 456u: goto L_0898D3D8;
    case 457u: goto L_0898D3E0;
    case 458u: goto L_0898D3E4;
    case 459u: goto L_0898D3F4;
    case 460u: goto L_0898D404;
    case 461u: goto L_0898D410;
    case 462u: goto L_0898D42C;
    case 463u: goto L_0898D438;
    case 464u: goto L_0898D440;
    case 465u: goto L_0898D448;
    case 466u: goto L_0898D450;
    case 467u: goto L_0898D458;
    case 468u: goto L_0898D464;
    case 469u: goto L_0898D480;
    case 470u: goto L_0898D48C;
    case 471u: goto L_0898D494;
    case 472u: goto L_0898D49C;
    case 473u: goto L_0898D4A4;
    case 474u: goto L_0898D4AC;
    case 475u: goto L_0898D4B8;
    case 476u: goto L_0898D4D4;
    case 477u: goto L_0898D4E0;
    case 478u: goto L_0898D4E8;
    case 479u: goto L_0898D4F0;
    case 480u: goto L_0898D4F8;
    case 481u: goto L_0898D500;
    case 482u: goto L_0898D50C;
    case 483u: goto L_0898D528;
    case 484u: goto L_0898D534;
    case 485u: goto L_0898D53C;
    case 486u: goto L_0898D544;
    case 487u: goto L_0898D54C;
    case 488u: goto L_0898D554;
    case 489u: goto L_0898D560;
    case 490u: goto L_0898D584;
    case 491u: goto L_0898D58C;
    case 492u: goto L_0898D594;
    case 493u: goto L_0898D5A0;
    case 494u: goto L_0898D5A8;
    case 495u: goto L_0898D5AC;
    case 496u: goto L_0898D5BC;
    case 497u: goto L_0898D5E0;
    case 498u: goto L_0898D5E8;
    case 499u: goto L_0898D5F0;
    case 500u: goto L_0898D5FC;
    case 501u: goto L_0898D604;
    case 502u: goto L_0898D60C;
    case 503u: goto L_0898D614;
    case 504u: goto L_0898D620;
    case 505u: goto L_0898D624;
    case 506u: goto L_0898D628;
    case 507u: goto L_0898D638;
    case 508u: goto L_0898D640;
    case 509u: goto L_0898D654;
    case 510u: goto L_0898D660;
    case 511u: goto L_0898D668;
    case 512u: goto L_0898D674;
    case 513u: goto L_0898D67C;
    case 514u: goto L_0898D684;
    case 515u: goto L_0898D68C;
    case 516u: goto L_0898D698;
    case 517u: goto L_0898D69C;
    case 518u: goto L_0898D6A0;
    case 519u: goto L_0898D6A8;
    case 520u: goto L_0898D6BC;
    case 521u: goto L_0898D6C8;
    case 522u: goto L_0898D6D0;
    case 523u: goto L_0898D6D8;
    case 524u: goto L_0898D6E0;
    case 525u: goto L_0898D6E8;
    case 526u: goto L_0898D6F0;
    case 527u: goto L_0898D708;
    case 528u: goto L_0898D710;
    case 529u: goto L_0898D718;
    case 530u: goto L_0898D720;
    case 531u: goto L_0898D728;
    case 532u: goto L_0898D734;
    case 533u: goto L_0898D750;
    case 534u: goto L_0898D758;
    case 535u: goto L_0898D764;
    case 536u: goto L_0898D76C;
    case 537u: goto L_0898D774;
    case 538u: goto L_0898D77C;
    case 539u: goto L_0898D784;
    case 540u: goto L_0898D78C;
    case 541u: goto L_0898D7A0;
    case 542u: goto L_0898D7B0;
    case 543u: goto L_0898D7C0;
    case 544u: goto L_0898D7E8;
    case 545u: goto L_0898D7F4;
    case 546u: goto L_0898D7FC;
    case 547u: goto L_0898D804;
    case 548u: goto L_0898D80C;
    case 549u: goto L_0898D818;
    case 550u: goto L_0898D820;
    case 551u: goto L_0898D82C;
    case 552u: goto L_0898D838;
    case 553u: goto L_0898D840;
    case 554u: goto L_0898D848;
    case 555u: goto L_0898D854;
    case 556u: goto L_0898D86C;
    case 557u: goto L_0898D878;
    case 558u: goto L_0898D880;
    case 559u: goto L_0898D888;
    case 560u: goto L_0898D88C;
    case 561u: goto L_0898D8A0;
    case 562u: goto L_0898D8BC;
    case 563u: goto L_0898D8C8;
    case 564u: goto L_0898D8D0;
    case 565u: goto L_0898D8D8;
    case 566u: goto L_0898D8E0;
    case 567u: goto L_0898D8E8;
    case 568u: goto L_0898D8EC;
    case 569u: goto L_0898D8F8;
    case 570u: goto L_0898D914;
    case 571u: goto L_0898D920;
    case 572u: goto L_0898D928;
    case 573u: goto L_0898D930;
    case 574u: goto L_0898D938;
    case 575u: goto L_0898D940;
    case 576u: goto L_0898D944;
    case 577u: goto L_0898D950;
    case 578u: goto L_0898D960;
    case 579u: goto L_0898D968;
    case 580u: goto L_0898D978;
    case 581u: goto L_0898D988;
    case 582u: goto L_0898D994;
    case 583u: goto L_0898D99C;
    case 584u: goto L_0898D9A8;
    case 585u: goto L_0898D9B8;
    case 586u: goto L_0898D9C0;
    case 587u: goto L_0898D9D0;
    case 588u: goto L_0898D9E0;
    case 589u: goto L_0898D9EC;
    case 590u: goto L_0898D9F4;
    case 591u: goto L_0898DA00;
    case 592u: goto L_0898DA10;
    case 593u: goto L_0898DA18;
    case 594u: goto L_0898DA28;
    case 595u: goto L_0898DA38;
    case 596u: goto L_0898DA44;
    case 597u: goto L_0898DA4C;
    case 598u: goto L_0898DA58;
    case 599u: goto L_0898DA68;
    case 600u: goto L_0898DA70;
    case 601u: goto L_0898DA80;
    case 602u: goto L_0898DA90;
    case 603u: goto L_0898DA9C;
    case 604u: goto L_0898DAA4;
    case 605u: goto L_0898DAB0;
    case 606u: goto L_0898DAC4;
    case 607u: goto L_0898DAD0;
    case 608u: goto L_0898DAD8;
    case 609u: goto L_0898DAE0;
    case 610u: goto L_0898DAEC;
    case 611u: goto L_0898DAF0;
    case 612u: goto L_0898DAF4;
    case 613u: goto L_0898DAFC;
    case 614u: goto L_0898DB20;
    case 615u: goto L_0898DB28;
    case 616u: goto L_0898DB3C;
    case 617u: goto L_0898DB44;
    case 618u: goto L_0898DB4C;
    case 619u: goto L_0898DB54;
    case 620u: goto L_0898DB5C;
    case 621u: goto L_0898DB64;
    case 622u: goto L_0898DB74;
    case 623u: goto L_0898DB7C;
    case 624u: goto L_0898DB90;
    case 625u: goto L_0898DB98;
    case 626u: goto L_0898DBA0;
    case 627u: goto L_0898DBA8;
    case 628u: goto L_0898DBB4;
    case 629u: goto L_0898DBBC;
    case 630u: goto L_0898DBC4;
    case 631u: goto L_0898DBCC;
    case 632u: goto L_0898DBD4;
    case 633u: goto L_0898DBEC;
    case 634u: goto L_0898DC20;
    case 635u: goto L_0898DC28;
    case 636u: goto L_0898DC30;
    case 637u: goto L_0898DC38;
    case 638u: goto L_0898DC40;
    case 639u: goto L_0898DC48;
    case 640u: goto L_0898DC50;
    case 641u: goto L_0898DC58;
    case 642u: goto L_0898DC60;
    case 643u: goto L_0898DC68;
    case 644u: goto L_0898DC70;
    case 645u: goto L_0898DC80;
    case 646u: goto L_0898DC88;
    case 647u: goto L_0898DC90;
    case 648u: goto L_0898DC94;
    case 649u: goto L_0898DCA4;
    case 650u: goto L_0898DCCC;
    case 651u: goto L_0898DCD4;
    case 652u: goto L_0898DCE0;
    case 653u: goto L_0898DCE8;
    case 654u: goto L_0898DCF0;
    case 655u: goto L_0898DCF8;
    case 656u: goto L_0898DD04;
    case 657u: goto L_0898DD0C;
    case 658u: goto L_0898DD18;
    case 659u: goto L_0898DD28;
    case 660u: goto L_0898DD30;
    case 661u: goto L_0898DD38;
    case 662u: goto L_0898DD40;
    case 663u: goto L_0898DD48;
    case 664u: goto L_0898DD50;
    case 665u: goto L_0898DD58;
    case 666u: goto L_0898DD60;
    case 667u: goto L_0898DD6C;
    case 668u: goto L_0898DD74;
    case 669u: goto L_0898DD80;
    case 670u: goto L_0898DD84;
    case 671u: goto L_0898DD88;
    case 672u: goto L_0898DD9C;
    case 673u: goto L_0898DDB0;
    case 674u: goto L_0898DDBC;
    case 675u: goto L_0898DDC4;
    case 676u: goto L_0898DDCC;
    case 677u: goto L_0898DDD4;
    case 678u: goto L_0898DDDC;
    case 679u: goto L_0898DDE4;
    case 680u: goto L_0898DDF8;
    case 681u: goto L_0898DE04;
    case 682u: goto L_0898DE0C;
    case 683u: goto L_0898DE14;
    case 684u: goto L_0898DE1C;
    case 685u: goto L_0898DE24;
    case 686u: goto L_0898DE2C;
    case 687u: goto L_0898DE48;
    case 688u: goto L_0898DE50;
    case 689u: goto L_0898DE58;
    case 690u: goto L_0898DE64;
    case 691u: goto L_0898DE7C;
    case 692u: goto L_0898DE90;
    case 693u: goto L_0898DE98;
    case 694u: goto L_0898DEBC;
    case 695u: goto L_0898DEC4;
    case 696u: goto L_0898DECC;
    case 697u: goto L_0898DED4;
    case 698u: goto L_0898DEF0;
    case 699u: goto L_0898DF08;
    case 700u: goto L_0898DF24;
    case 701u: goto L_0898DF44;
    case 702u: goto L_0898DF48;
    case 703u: goto L_0898DF58;
    case 704u: goto L_0898DF74;
    case 705u: goto L_0898DF7C;
    case 706u: goto L_0898DF84;
    case 707u: goto L_0898DF90;
    case 708u: goto L_0898DF98;
    case 709u: goto L_0898DFA0;
    case 710u: goto L_0898DFB0;
    case 711u: goto L_0898DFB4;
    case 712u: goto L_0898DFCC;
    case 713u: goto L_0898DFE8;
    case 714u: goto L_0898DFFC;
    case 715u: goto L_0898E004;
    case 716u: goto L_0898E014;
    case 717u: goto L_0898E018;
    case 718u: goto L_0898E030;
    case 719u: goto L_0898E04C;
    case 720u: goto L_0898E06C;
    case 721u: goto L_0898E070;
    case 722u: goto L_0898E080;
    case 723u: goto L_0898E0A0;
    case 724u: goto L_0898E0A8;
    case 725u: goto L_0898E0B0;
    case 726u: goto L_0898E0B8;
    case 727u: goto L_0898E0C8;
    case 728u: goto L_0898E0D0;
    case 729u: goto L_0898E0E4;
    case 730u: goto L_0898E0EC;
    case 731u: goto L_0898E100;
    case 732u: goto L_0898E104;
    case 733u: goto L_0898E110;
    case 734u: goto L_0898E11C;
    case 735u: goto L_0898E124;
    case 736u: goto L_0898E12C;
    case 737u: goto L_0898E138;
    case 738u: goto L_0898E14C;
    case 739u: goto L_0898E160;
    case 740u: goto L_0898E174;
    case 741u: goto L_0898E178;
    case 742u: goto L_0898E188;
    case 743u: goto L_0898E1A8;
    case 744u: goto L_0898E1B0;
    case 745u: goto L_0898E1B8;
    case 746u: goto L_0898E1BC;
    case 747u: goto L_0898E1C8;
    case 748u: goto L_0898E1D4;
    case 749u: goto L_0898E1DC;
    case 750u: goto L_0898E1E4;
    case 751u: goto L_0898E1F4;
    case 752u: goto L_0898E1F8;
    case 753u: goto L_0898E200;
    case 754u: goto L_0898E214;
    case 755u: goto L_0898E228;
    case 756u: goto L_0898E23C;
    case 757u: goto L_0898E240;
    case 758u: goto L_0898E250;
    case 759u: goto L_0898E264;
    case 760u: goto L_0898E280;
    case 761u: goto L_0898E288;
    case 762u: goto L_0898E2D0;
    case 763u: goto L_0898E2F4;
    case 764u: goto L_0898E2FC;
    case 765u: goto L_0898E300;
    case 766u: goto L_0898E308;
    case 767u: goto L_0898E31C;
    case 768u: goto L_0898E324;
    case 769u: goto L_0898E32C;
    case 770u: goto L_0898E334;
    case 771u: goto L_0898E338;
    case 772u: goto L_0898E340;
    case 773u: goto L_0898E34C;
    case 774u: goto L_0898E354;
    case 775u: goto L_0898E35C;
    case 776u: goto L_0898E388;
    case 777u: goto L_0898E390;
    case 778u: goto L_0898E394;
    case 779u: goto L_0898E3D4;
    case 780u: goto L_0898E3E8;
    case 781u: goto L_0898E3F0;
    case 782u: goto L_0898E3F4;
    case 783u: goto L_0898E3FC;
    case 784u: goto L_0898E404;
    case 785u: goto L_0898E408;
    case 786u: goto L_0898E428;
    case 787u: goto L_0898E43C;
    case 788u: goto L_0898E444;
    case 789u: goto L_0898E44C;
    case 790u: goto L_0898E454;
    case 791u: goto L_0898E464;
    case 792u: goto L_0898E498;
    case 793u: goto L_0898E4D0;
    case 794u: goto L_0898E4E0;
    case 795u: goto L_0898E514;
    case 796u: goto L_0898E54C;
    case 797u: goto L_0898E560;
    case 798u: goto L_0898E568;
    case 799u: goto L_0898E570;
    case 800u: goto L_0898E5B4;
    case 801u: goto L_0898E5BC;
    case 802u: goto L_0898E5C4;
    case 803u: goto L_0898E614;
    case 804u: goto L_0898E628;
    case 805u: goto L_0898E63C;
    case 806u: goto L_0898E650;
    case 807u: goto L_0898E660;
    case 808u: goto L_0898E668;
    case 809u: goto L_0898E66C;
    case 810u: goto L_0898E688;
    case 811u: goto L_0898E698;
    case 812u: goto L_0898E6A0;
    case 813u: goto L_0898E6A4;
    case 814u: goto L_0898E6C0;
    case 815u: goto L_0898E6D8;
    case 816u: goto L_0898E6E0;
    case 817u: goto L_0898E6E4;
    case 818u: goto L_0898E700;
    case 819u: goto L_0898E710;
    case 820u: goto L_0898E718;
    case 821u: goto L_0898E71C;
    case 822u: goto L_0898E738;
    case 823u: goto L_0898E748;
    case 824u: goto L_0898E750;
    case 825u: goto L_0898E754;
    case 826u: goto L_0898E770;
    case 827u: goto L_0898E780;
    case 828u: goto L_0898E788;
    case 829u: goto L_0898E78C;
    case 830u: goto L_0898E7A8;
    case 831u: goto L_0898E7B8;
    case 832u: goto L_0898E7C0;
    case 833u: goto L_0898E7C4;
    case 834u: goto L_0898E7E0;
    case 835u: goto L_0898E7F0;
    case 836u: goto L_0898E7F8;
    case 837u: goto L_0898E7FC;
    case 838u: goto L_0898E814;
    case 839u: goto L_0898E824;
    case 840u: goto L_0898E82C;
    case 841u: goto L_0898E830;
    case 842u: goto L_0898E84C;
    case 843u: goto L_0898E85C;
    case 844u: goto L_0898E864;
    case 845u: goto L_0898E868;
    case 846u: goto L_0898E884;
    case 847u: goto L_0898E894;
    case 848u: goto L_0898E89C;
    case 849u: goto L_0898E8A0;
    case 850u: goto L_0898E8BC;
    case 851u: goto L_0898E8CC;
    case 852u: goto L_0898E8D4;
    case 853u: goto L_0898E8D8;
    case 854u: goto L_0898E8F4;
    case 855u: goto L_0898E904;
    case 856u: goto L_0898E910;
    case 857u: goto L_0898E914;
    case 858u: goto L_0898E918;
    case 859u: goto L_0898E920;
    case 860u: goto L_0898E930;
    case 861u: goto L_0898E940;
    case 862u: goto L_0898E948;
    case 863u: goto L_0898E950;
    case 864u: goto L_0898E958;
    case 865u: goto L_0898E960;
    case 866u: goto L_0898E964;
    case 867u: goto L_0898E96C;
    case 868u: goto L_0898E980;
    case 869u: goto L_0898E98C;
    case 870u: goto L_0898E990;
    case 871u: goto L_0898E994;
    case 872u: goto L_0898E99C;
    case 873u: goto L_0898E9A4;
    case 874u: goto L_0898E9B0;
    case 875u: goto L_0898E9D0;
    case 876u: goto L_0898E9DC;
    case 877u: goto L_0898E9E8;
    case 878u: goto L_0898E9F4;
    case 879u: goto L_0898EA00;
    case 880u: goto L_0898EA08;
    case 881u: goto L_0898EA14;
    case 882u: goto L_0898EA1C;
    case 883u: goto L_0898EA28;
    case 884u: goto L_0898EA2C;
    case 885u: goto L_0898EA34;
    case 886u: goto L_0898EA40;
    case 887u: goto L_0898EA4C;
    case 888u: goto L_0898EA58;
    case 889u: goto L_0898EA64;
    case 890u: goto L_0898EA70;
    case 891u: goto L_0898EA7C;
    case 892u: goto L_0898EA88;
    case 893u: goto L_0898EA94;
    case 894u: goto L_0898EAA0;
    case 895u: goto L_0898EAAC;
    case 896u: goto L_0898EAB8;
    case 897u: goto L_0898EAC4;
    case 898u: goto L_0898EAD0;
    case 899u: goto L_0898EADC;
    case 900u: goto L_0898EAE8;
    case 901u: goto L_0898EAF4;
    case 902u: goto L_0898EB00;
    case 903u: goto L_0898EB0C;
    case 904u: goto L_0898EB18;
    case 905u: goto L_0898EB20;
    case 906u: goto L_0898EB38;
    case 907u: goto L_0898EB3C;
    case 908u: goto L_0898EB44;
    case 909u: goto L_0898EB58;
    case 910u: goto L_0898EB74;
    case 911u: goto L_0898EB80;
    case 912u: goto L_0898EB84;
    case 913u: goto L_0898EB90;
    case 914u: goto L_0898EB98;
    case 915u: goto L_0898EBBC;
    case 916u: goto L_0898EBE4;
    case 917u: goto L_0898EC00;
    case 918u: goto L_0898EC10;
    case 919u: goto L_0898EC18;
    case 920u: goto L_0898EC20;
    case 921u: goto L_0898EC28;
    case 922u: goto L_0898EC3C;
    case 923u: goto L_0898EC44;
    case 924u: goto L_0898EC50;
    case 925u: goto L_0898EC58;
    case 926u: goto L_0898EC60;
    case 927u: goto L_0898EC70;
    case 928u: goto L_0898EC78;
    case 929u: goto L_0898EC84;
    case 930u: goto L_0898EC8C;
    case 931u: goto L_0898EC9C;
    case 932u: goto L_0898ECA4;
    case 933u: goto L_0898ECB0;
    case 934u: goto L_0898ECB8;
    case 935u: goto L_0898ECC8;
    case 936u: goto L_0898ECD0;
    case 937u: goto L_0898ECDC;
    case 938u: goto L_0898ECE4;
    case 939u: goto L_0898ECF4;
    case 940u: goto L_0898ECFC;
    case 941u: goto L_0898ED08;
    case 942u: goto L_0898ED10;
    case 943u: goto L_0898ED20;
    case 944u: goto L_0898ED28;
    case 945u: goto L_0898ED38;
    case 946u: goto L_0898ED40;
    case 947u: goto L_0898ED50;
    case 948u: goto L_0898ED58;
    case 949u: goto L_0898ED64;
    case 950u: goto L_0898ED6C;
    case 951u: goto L_0898ED7C;
    case 952u: goto L_0898ED84;
    case 953u: goto L_0898ED90;
    case 954u: goto L_0898ED98;
    case 955u: goto L_0898EDA8;
    case 956u: goto L_0898EDB0;
    case 957u: goto L_0898EDBC;
    case 958u: goto L_0898EDC4;
    case 959u: goto L_0898EDD4;
    case 960u: goto L_0898EDDC;
    case 961u: goto L_0898EDE8;
    case 962u: goto L_0898EDF0;
    case 963u: goto L_0898EE00;
    case 964u: goto L_0898EE08;
    case 965u: goto L_0898EE14;
    case 966u: goto L_0898EE1C;
    case 967u: goto L_0898EE2C;
    case 968u: goto L_0898EE34;
    case 969u: goto L_0898EE40;
    case 970u: goto L_0898EE48;
    case 971u: goto L_0898EE58;
    case 972u: goto L_0898EE60;
    case 973u: goto L_0898EE6C;
    case 974u: goto L_0898EE74;
    case 975u: goto L_0898EE84;
    case 976u: goto L_0898EE8C;
    case 977u: goto L_0898EE98;
    case 978u: goto L_0898EEA0;
    case 979u: goto L_0898EEB0;
    case 980u: goto L_0898EEB8;
    case 981u: goto L_0898EEC4;
    case 982u: goto L_0898EECC;
    case 983u: goto L_0898EEDC;
    case 984u: goto L_0898EEE4;
    case 985u: goto L_0898EEF0;
    case 986u: goto L_0898EEF8;
    case 987u: goto L_0898EF08;
    case 988u: goto L_0898EF10;
    case 989u: goto L_0898EF1C;
    case 990u: goto L_0898EF24;
    case 991u: goto L_0898EF34;
    case 992u: goto L_0898EF3C;
    case 993u: goto L_0898EF48;
    case 994u: goto L_0898EF50;
    case 995u: goto L_0898EF60;
    case 996u: goto L_0898EF68;
    case 997u: goto L_0898EF74;
    case 998u: goto L_0898EF7C;
    case 999u: goto L_0898EF8C;
    case 1000u: goto L_0898EF94;
    case 1001u: goto L_0898EFA0;
    case 1002u: goto L_0898EFA8;
    case 1003u: goto L_0898EFB8;
    case 1004u: goto L_0898EFC0;
    case 1005u: goto L_0898EFCC;
    case 1006u: goto L_0898EFD4;
    case 1007u: goto L_0898EFE4;
    case 1008u: goto L_0898EFEC;
    case 1009u: goto L_0898EFF8;
    case 1010u: goto L_0898F000;
    case 1011u: goto L_0898F010;
    case 1012u: goto L_0898F018;
    case 1013u: goto L_0898F024;
    case 1014u: goto L_0898F02C;
    case 1015u: goto L_0898F03C;
    case 1016u: goto L_0898F044;
    case 1017u: goto L_0898F050;
    case 1018u: goto L_0898F058;
    case 1019u: goto L_0898F068;
    case 1020u: goto L_0898F070;
    case 1021u: goto L_0898F07C;
    case 1022u: goto L_0898F084;
    case 1023u: goto L_0898F094;
    case 1024u: goto L_0898F09C;
    case 1025u: goto L_0898F0A8;
    case 1026u: goto L_0898F0B0;
    case 1027u: goto L_0898F0C0;
    case 1028u: goto L_0898F0C8;
    case 1029u: goto L_0898F0D4;
    case 1030u: goto L_0898F0DC;
    case 1031u: goto L_0898F0EC;
    case 1032u: goto L_0898F0F4;
    case 1033u: goto L_0898F114;
    case 1034u: goto L_0898F11C;
    case 1035u: goto L_0898F120;
    case 1036u: goto L_0898F12C;
    case 1037u: goto L_0898F138;
    case 1038u: goto L_0898F144;
    case 1039u: goto L_0898F14C;
    case 1040u: goto L_0898F150;
    case 1041u: goto L_0898F158;
    case 1042u: goto L_0898F160;
    case 1043u: goto L_0898F178;
    case 1044u: goto L_0898F180;
    case 1045u: goto L_0898F190;
    case 1046u: goto L_0898F198;
    case 1047u: goto L_0898F1B8;
    case 1048u: goto L_0898F1C0;
    case 1049u: goto L_0898F1C4;
    case 1050u: goto L_0898F1D0;
    case 1051u: goto L_0898F1DC;
    case 1052u: goto L_0898F1E8;
    case 1053u: goto L_0898F1F0;
    case 1054u: goto L_0898F1F4;
    case 1055u: goto L_0898F1FC;
    case 1056u: goto L_0898F204;
    case 1057u: goto L_0898F21C;
    case 1058u: goto L_0898F224;
    case 1059u: goto L_0898F234;
    case 1060u: goto L_0898F23C;
    case 1061u: goto L_0898F248;
    case 1062u: goto L_0898F250;
    case 1063u: goto L_0898F260;
    case 1064u: goto L_0898F268;
    case 1065u: goto L_0898F274;
    case 1066u: goto L_0898F27C;
    case 1067u: goto L_0898F28C;
    case 1068u: goto L_0898F294;
    case 1069u: goto L_0898F2A0;
    case 1070u: goto L_0898F2A8;
    case 1071u: goto L_0898F2B8;
    case 1072u: goto L_0898F2C0;
    case 1073u: goto L_0898F2CC;
    case 1074u: goto L_0898F2D4;
    case 1075u: goto L_0898F2E4;
    case 1076u: goto L_0898F2EC;
    case 1077u: goto L_0898F2F8;
    case 1078u: goto L_0898F300;
    case 1079u: goto L_0898F310;
    case 1080u: goto L_0898F318;
    case 1081u: goto L_0898F324;
    case 1082u: goto L_0898F32C;
    case 1083u: goto L_0898F33C;
    case 1084u: goto L_0898F344;
    case 1085u: goto L_0898F350;
    case 1086u: goto L_0898F36C;
    case 1087u: goto L_0898F384;
    case 1088u: goto L_0898F390;
    case 1089u: goto L_0898F39C;
    case 1090u: goto L_0898F3A4;
    case 1091u: goto L_0898F3B0;
    case 1092u: goto L_0898F3BC;
    case 1093u: goto L_0898F3C8;
    case 1094u: goto L_0898F3EC;
    case 1095u: goto L_0898F3F8;
    case 1096u: goto L_0898F404;
    case 1097u: goto L_0898F410;
    case 1098u: goto L_0898F430;
    case 1099u: goto L_0898F444;
    case 1100u: goto L_0898F45C;
    case 1101u: goto L_0898F464;
    case 1102u: goto L_0898F468;
    case 1103u: goto L_0898F47C;
    case 1104u: goto L_0898F484;
    case 1105u: goto L_0898F490;
    case 1106u: goto L_0898F498;
    case 1107u: goto L_0898F4A0;
    case 1108u: goto L_0898F4B0;
    case 1109u: goto L_0898F4B8;
    case 1110u: goto L_0898F4C0;
    case 1111u: goto L_0898F4D0;
    case 1112u: goto L_0898F4D8;
    case 1113u: goto L_0898F4E0;
    case 1114u: goto L_0898F504;
    case 1115u: goto L_0898F50C;
    case 1116u: goto L_0898F514;
    case 1117u: goto L_0898F51C;
    case 1118u: goto L_0898F528;
    case 1119u: goto L_0898F530;
    case 1120u: goto L_0898F53C;
    case 1121u: goto L_0898F544;
    case 1122u: goto L_0898F550;
    case 1123u: goto L_0898F560;
    case 1124u: goto L_0898F56C;
    case 1125u: goto L_0898F574;
    case 1126u: goto L_0898F594;
    case 1127u: goto L_0898F5B4;
    case 1128u: goto L_0898F5C8;
    case 1129u: goto L_0898F5EC;
    case 1130u: goto L_0898F5F8;
    case 1131u: goto L_0898F618;
    case 1132u: goto L_0898F640;
    case 1133u: goto L_0898F654;
    case 1134u: goto L_0898F678;
    case 1135u: goto L_0898F6A4;
    case 1136u: goto L_0898F6B8;
    case 1137u: goto L_0898F6E0;
    case 1138u: goto L_0898F6EC;
    case 1139u: goto L_0898F6F8;
    case 1140u: goto L_0898F724;
    case 1141u: goto L_0898F73C;
    case 1142u: goto L_0898F764;
    case 1143u: goto L_0898F770;
    case 1144u: goto L_0898F77C;
    case 1145u: goto L_0898F7A8;
    case 1146u: goto L_0898F7C0;
    case 1147u: goto L_0898F7D4;
    case 1148u: goto L_0898F7E4;
    case 1149u: goto L_0898F80C;
    case 1150u: goto L_0898F850;
    case 1151u: goto L_0898F868;
    case 1152u: goto L_0898F898;
    case 1153u: goto L_0898F8B8;
    case 1154u: goto L_0898F8D0;
    case 1155u: goto L_0898F8DC;
    case 1156u: goto L_0898F8E0;
    case 1157u: goto L_0898F90C;
    case 1158u: goto L_0898F92C;
    case 1159u: goto L_0898F954;
    case 1160u: goto L_0898F978;
    case 1161u: goto L_0898F990;
    case 1162u: goto L_0898F9B8;
    case 1163u: goto L_0898F9DC;
    case 1164u: goto L_0898F9E4;
    case 1165u: goto L_0898F9F0;
    case 1166u: goto L_0898FA08;
    case 1167u: goto L_0898FA20;
    case 1168u: goto L_0898FA3C;
    case 1169u: goto L_0898FA44;
    case 1170u: goto L_0898FA4C;
    case 1171u: goto L_0898FA50;
    case 1172u: goto L_0898FA6C;
    case 1173u: goto L_0898FA74;
    case 1174u: goto L_0898FA94;
    case 1175u: goto L_0898FAA0;
    case 1176u: goto L_0898FAB8;
    case 1177u: goto L_0898FABC;
    case 1178u: goto L_0898FAD0;
    case 1179u: goto L_0898FAE4;
    case 1180u: goto L_0898FAF4;
    case 1181u: goto L_0898FB14;
    case 1182u: goto L_0898FB4C;
    case 1183u: goto L_0898FB60;
    case 1184u: goto L_0898FB68;
    case 1185u: goto L_0898FB74;
    case 1186u: goto L_0898FB88;
    case 1187u: goto L_0898FB9C;
    case 1188u: goto L_0898FBB0;
    case 1189u: goto L_0898FBC0;
    case 1190u: goto L_0898FBD4;
    case 1191u: goto L_0898FBE4;
    case 1192u: goto L_0898FC04;
    case 1193u: goto L_0898FC10;
    case 1194u: goto L_0898FC1C;
    case 1195u: goto L_0898FC20;
    case 1196u: goto L_0898FC34;
    case 1197u: goto L_0898FC54;
    case 1198u: goto L_0898FC64;
    case 1199u: goto L_0898FC78;
    case 1200u: goto L_0898FCA0;
    case 1201u: goto L_0898FCC0;
    case 1202u: goto L_0898FCD8;
    case 1203u: goto L_0898FD1C;
    case 1204u: goto L_0898FD30;
    case 1205u: goto L_0898FD38;
    case 1206u: goto L_0898FD44;
    case 1207u: goto L_0898FD54;
    case 1208u: goto L_0898FD80;
    case 1209u: goto L_0898FDB0;
    case 1210u: goto L_0898FDC0;
    case 1211u: goto L_0898FDD8;
    case 1212u: goto L_0898FE24;
    case 1213u: goto L_0898FE34;
    case 1214u: goto L_0898FE9C;
    case 1215u: goto L_0898FEAC;
    case 1216u: goto L_0898FED4;
    case 1217u: goto L_0898FEE4;
    case 1218u: goto L_0898FEF0;
    case 1219u: goto L_0898FEF4;
    case 1220u: goto L_0898FF00;
    case 1221u: goto L_0898FF0C;
    case 1222u: goto L_0898FF10;
    case 1223u: goto L_0898FF1C;
    case 1224u: goto L_0898FF28;
    case 1225u: goto L_0898FF38;
    case 1226u: goto L_0898FF50;
    case 1227u: goto L_0898FF94;
    case 1228u: goto L_0898FFA8;
    case 1229u: goto L_0898FFB0;
    case 1230u: goto L_0898FFBC;
    case 1231u: goto L_0898FFCC;
    case 1232u: goto L_0898FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_0898C000:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898C008:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0898C024;
      }
      goto L_0898C014;
    }
L_0898C014:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(94))))));
    if (aot_gpr_5 == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
        goto L_0898C028;
    }
    goto L_0898C020;
L_0898C020:
    ctx.gpr[6] = (0u | 1u);
    goto L_0898C024;
L_0898C024:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    goto L_0898C028;
L_0898C028:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C040;
      }
      goto L_0898C030;
    }
L_0898C030:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898C044;
      }
      goto L_0898C03C;
    }
L_0898C03C:
    aot_gpr_5 = (0u | 1u);
    goto L_0898C040;
L_0898C040:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0898C044;
L_0898C044:
    aot_gpr_5 = (ctx.gpr[6] & 255u);
    aot_gpr_2 = (aot_gpr_5 | aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898C054:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C070;
      }
      goto L_0898C060;
    }
L_0898C060:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C070;
      }
      goto L_0898C06C;
    }
L_0898C06C:
    aot_gpr_5 = (0u | 1u);
    goto L_0898C070;
L_0898C070:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_5 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898C078:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0898C094;
      }
      goto L_0898C084;
    }
L_0898C084:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(94))))));
    if (aot_gpr_5 != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
        goto L_0898C098;
    }
    goto L_0898C090;
L_0898C090:
    ctx.gpr[6] = (0u | 1u);
    goto L_0898C094;
L_0898C094:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    goto L_0898C098;
L_0898C098:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C0B0;
      }
      goto L_0898C0A0;
    }
L_0898C0A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898C0B4;
      }
      goto L_0898C0AC;
    }
L_0898C0AC:
    aot_gpr_5 = (0u | 1u);
    goto L_0898C0B0;
L_0898C0B0:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0898C0B4;
L_0898C0B4:
    aot_gpr_5 = (ctx.gpr[6] & 255u);
    aot_gpr_2 = (aot_gpr_5 | aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898C0C4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C0E0;
      }
      goto L_0898C0D0;
    }
L_0898C0D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C0E0;
      }
      goto L_0898C0DC;
    }
L_0898C0DC:
    aot_gpr_5 = (0u | 1u);
    goto L_0898C0E0;
L_0898C0E0:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_5 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898C0E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_0898C10C;
      }
      goto L_0898C0FC;
    }
L_0898C0FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
      if (branch_taken) {
          goto L_0898C138;
      }
      goto L_0898C104;
    }
L_0898C104:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C118;
      }
      goto L_0898C10C;
    }
L_0898C10C:
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
      if (branch_taken) {
          goto L_0898C138;
      }
      goto L_0898C118;
    }
L_0898C118:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898C128;
      }
      goto L_0898C120;
    }
L_0898C120:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C138;
      }
      goto L_0898C128;
    }
L_0898C128:
    aot_gpr_31 = (0x0898C130u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C130u) goto L_0898C130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C130:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C154;
      }
      goto L_0898C138;
    }
L_0898C138:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898C150;
      }
      goto L_0898C140;
    }
L_0898C140:
    aot_gpr_31 = (0x0898C148u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 988u, 0x0898BCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C148u) goto L_0898C148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C148:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C154;
      }
      goto L_0898C150;
    }
L_0898C150:
    aot_gpr_2 = (0u | 0u);
    goto L_0898C154;
L_0898C154:
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
L_0898C160:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C198;
      }
      goto L_0898C178;
    }
L_0898C178:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0898C1B8;
      }
      goto L_0898C180;
    }
L_0898C180:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_0898C1A8;
      }
      goto L_0898C188;
    }
L_0898C188:
    aot_gpr_31 = (0x0898C190u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C190u) goto L_0898C190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C1BC;
      }
      goto L_0898C198;
    }
L_0898C198:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C188;
      }
      goto L_0898C1A0;
    }
L_0898C1A0:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898C1B8;
      }
      goto L_0898C1A8;
    }
L_0898C1A8:
    aot_gpr_31 = (0x0898C1B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C1B0u) goto L_0898C1B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C1B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C1BC;
      }
      goto L_0898C1B8;
    }
L_0898C1B8:
    aot_gpr_2 = (0u | 0u);
    goto L_0898C1BC;
L_0898C1BC:
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
L_0898C1C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C220;
      }
      goto L_0898C1F0;
    }
L_0898C1F0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898C228;
    }
    goto L_0898C200;
L_0898C200:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_0898C210;
      }
      goto L_0898C208;
    }
L_0898C208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C2A0;
      }
      goto L_0898C210;
    }
L_0898C210:
    aot_gpr_31 = (0x0898C218u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C218u) goto L_0898C218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C218:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C2A0;
      }
      goto L_0898C220;
    }
L_0898C220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C2A0;
      }
      goto L_0898C228;
    }
L_0898C228:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C208;
      }
      goto L_0898C230;
    }
L_0898C230:
    aot_gpr_31 = (0x0898C238u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C238u) goto L_0898C238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C238:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898C26C;
      }
      goto L_0898C244;
    }
L_0898C244:
    aot_gpr_31 = (0x0898C24Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C24Cu) goto L_0898C24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C24C:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898C290;
      }
      goto L_0898C258;
    }
L_0898C258:
    aot_gpr_31 = (0x0898C260u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C260u) goto L_0898C260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C260:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898C290;
      }
      goto L_0898C26C;
    }
L_0898C26C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C280;
      }
      goto L_0898C278;
    }
L_0898C278:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C208;
      }
      goto L_0898C280;
    }
L_0898C280:
    aot_gpr_31 = (0x0898C288u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C288u) goto L_0898C288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C288:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C2A0;
      }
      goto L_0898C290;
    }
L_0898C290:
    aot_gpr_31 = (0x0898C298u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C298u) goto L_0898C298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C298:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C2A0;
      }
      goto L_0898C2A0;
    }
L_0898C2A0:
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
L_0898C2B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0898C2F8;
      }
      goto L_0898C2DC;
    }
L_0898C2DC:
    aot_gpr_31 = (0x0898C2E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C2E4u) goto L_0898C2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C2E4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C300;
      }
      goto L_0898C2F0;
    }
L_0898C2F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C310;
      }
      goto L_0898C2F8;
    }
L_0898C2F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C394;
      }
      goto L_0898C300;
    }
L_0898C300:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898C364;
      }
      goto L_0898C310;
    }
L_0898C310:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0898C330;
      }
      goto L_0898C318;
    }
L_0898C318:
    aot_gpr_31 = (0x0898C320u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CF8C;
L_0898C320:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
        goto L_0898C374;
    }
    goto L_0898C328;
L_0898C328:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C394;
      }
      goto L_0898C330;
    }
L_0898C330:
    aot_gpr_31 = (0x0898C338u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C338u) goto L_0898C338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C338:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898C344u);
    aot_gpr_16 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C344u) goto L_0898C344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C344:
    aot_gpr_4 = (aot_gpr_16 - aot_gpr_2);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898C394;
      }
      goto L_0898C364;
    }
L_0898C364:
    aot_gpr_31 = (0x0898C36Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C36Cu) goto L_0898C36C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C36C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C394;
      }
      goto L_0898C374;
    }
L_0898C374:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
    goto L_0898C394;
L_0898C394:
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
L_0898C3A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C400;
      }
      goto L_0898C3CC;
    }
L_0898C3CC:
    aot_gpr_31 = (0x0898C3D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CF8C;
L_0898C3D4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898C3F8;
      }
      goto L_0898C3DC;
    }
L_0898C3DC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C3F0;
      }
      goto L_0898C3E8;
    }
L_0898C3E8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C408;
      }
      goto L_0898C3F0;
    }
L_0898C3F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C410;
      }
      goto L_0898C3F8;
    }
L_0898C3F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C410;
      }
      goto L_0898C400;
    }
L_0898C400:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C410;
      }
      goto L_0898C408;
    }
L_0898C408:
    aot_gpr_31 = (0x0898C410u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C410u) goto L_0898C410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C410:
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
L_0898C420:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C4D4;
      }
      goto L_0898C440;
    }
L_0898C440:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C4D4;
      }
      goto L_0898C448;
    }
L_0898C448:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898C454u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C454u) goto L_0898C454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C454:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898C460u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C460u) goto L_0898C460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C460:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0898C46Cu);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C46Cu) goto L_0898C46C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C46C:
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_2);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_5 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0898C498;
      }
      goto L_0898C490;
    }
L_0898C490:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u - aot_gpr_2);
      if (branch_taken) {
          goto L_0898C498;
      }
      goto L_0898C498;
    }
L_0898C498:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0898C4A8;
      }
      goto L_0898C4A0;
    }
L_0898C4A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_0898C4A8;
      }
      goto L_0898C4A8;
    }
L_0898C4A8:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C4CC;
      }
      goto L_0898C4C4;
    }
L_0898C4C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0898C4D8;
      }
      goto L_0898C4CC;
    }
L_0898C4CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C4D8;
      }
      goto L_0898C4D4;
    }
L_0898C4D4:
    aot_gpr_2 = (0u | 0u);
    goto L_0898C4D8;
L_0898C4D8:
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
L_0898C4EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C544;
      }
      goto L_0898C510;
    }
L_0898C510:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C53C;
      }
      goto L_0898C520;
    }
L_0898C520:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C534;
      }
      goto L_0898C52C;
    }
L_0898C52C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C54C;
      }
      goto L_0898C534;
    }
L_0898C534:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C568;
      }
      goto L_0898C53C;
    }
L_0898C53C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C568;
      }
      goto L_0898C544;
    }
L_0898C544:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C568;
      }
      goto L_0898C54C;
    }
L_0898C54C:
    aot_gpr_31 = (0x0898C554u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C554u) goto L_0898C554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C554:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(aot_gpr_2));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(102))))));
    goto L_0898C568;
L_0898C568:
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
L_0898C578:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C5D0;
      }
      goto L_0898C59C;
    }
L_0898C59C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C5C8;
      }
      goto L_0898C5AC;
    }
L_0898C5AC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C5C0;
      }
      goto L_0898C5B8;
    }
L_0898C5B8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C5D8;
      }
      goto L_0898C5C0;
    }
L_0898C5C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C5F4;
      }
      goto L_0898C5C8;
    }
L_0898C5C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C5F4;
      }
      goto L_0898C5D0;
    }
L_0898C5D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C5F4;
      }
      goto L_0898C5D8;
    }
L_0898C5D8:
    aot_gpr_31 = (0x0898C5E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C5E0u) goto L_0898C5E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C5E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(aot_gpr_2));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(122))))));
    goto L_0898C5F4;
L_0898C5F4:
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
L_0898C604:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898C6B8;
      }
      goto L_0898C624;
    }
L_0898C624:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C6B8;
      }
      goto L_0898C62C;
    }
L_0898C62C:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898C638u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C638u) goto L_0898C638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C638:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898C644u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C644u) goto L_0898C644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C644:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0898C650u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C650u) goto L_0898C650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C650:
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_2);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_5 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0898C67C;
      }
      goto L_0898C674;
    }
L_0898C674:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u - aot_gpr_2);
      if (branch_taken) {
          goto L_0898C67C;
      }
      goto L_0898C67C;
    }
L_0898C67C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0898C68C;
      }
      goto L_0898C684;
    }
L_0898C684:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_0898C68C;
      }
      goto L_0898C68C;
    }
L_0898C68C:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C6B0;
      }
      goto L_0898C6A8;
    }
L_0898C6A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0898C6BC;
      }
      goto L_0898C6B0;
    }
L_0898C6B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C6BC;
      }
      goto L_0898C6B8;
    }
L_0898C6B8:
    aot_gpr_2 = (0u | 0u);
    goto L_0898C6BC;
L_0898C6BC:
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
L_0898C6D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C730;
      }
      goto L_0898C6F8;
    }
L_0898C6F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0898C738;
      }
      goto L_0898C728;
    }
L_0898C728:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C76C;
      }
      goto L_0898C730;
    }
L_0898C730:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C738;
    }
L_0898C738:
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
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898C788;
      }
      goto L_0898C76C;
    }
L_0898C76C:
    aot_gpr_31 = (0x0898C774u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C774u) goto L_0898C774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C774:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0898C790;
      }
      goto L_0898C780;
    }
L_0898C780:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C834;
      }
      goto L_0898C788;
    }
L_0898C788:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C790;
    }
L_0898C790:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 246u);
      if (branch_taken) {
          goto L_0898C7B0;
      }
      goto L_0898C7A0;
    }
L_0898C7A0:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 251u);
      if (branch_taken) {
          goto L_0898C7B0;
      }
      goto L_0898C7A8;
    }
L_0898C7A8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898C7C8;
      }
      goto L_0898C7B0;
    }
L_0898C7B0:
    aot_gpr_31 = (0x0898C7B8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C7B8u) goto L_0898C7B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C7B8:
    aot_gpr_31 = (0x0898C7C0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0898CF8C;
L_0898C7C0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898C7E4;
      }
      goto L_0898C7C8;
    }
L_0898C7C8:
    aot_gpr_31 = (0x0898C7D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C7D0u) goto L_0898C7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C7D0:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898C810;
      }
      goto L_0898C7DC;
    }
L_0898C7DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C7EC;
      }
      goto L_0898C7E4;
    }
L_0898C7E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C7EC;
    }
L_0898C7EC:
    aot_gpr_31 = (0x0898C7F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C7F4u) goto L_0898C7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C7F4:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898C834;
      }
      goto L_0898C800;
    }
L_0898C800:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 198u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898C834;
      }
      goto L_0898C810;
    }
L_0898C810:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C82C;
      }
      goto L_0898C81C;
    }
L_0898C81C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898C82C;
      }
      goto L_0898C828;
    }
L_0898C828:
    aot_gpr_4 = (0u | 1u);
    goto L_0898C82C;
L_0898C82C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C834;
    }
L_0898C834:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898C864;
    }
    goto L_0898C844;
L_0898C844:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0898C878;
      }
      goto L_0898C84C;
    }
L_0898C84C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C880;
      }
      goto L_0898C858;
    }
L_0898C858:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898C894;
      }
      goto L_0898C860;
    }
L_0898C860:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    goto L_0898C864;
L_0898C864:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898C878;
      }
      goto L_0898C86C;
    }
L_0898C86C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C904;
      }
      goto L_0898C878;
    }
L_0898C878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C880;
    }
L_0898C880:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898C894;
      }
      goto L_0898C88C;
    }
L_0898C88C:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0898C894;
L_0898C894:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898C8B0;
      }
      goto L_0898C89C;
    }
L_0898C89C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0898C8B8;
      }
      goto L_0898C8A8;
    }
L_0898C8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0898C8CC;
      }
      goto L_0898C8B0;
    }
L_0898C8B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C8B8;
    }
L_0898C8B8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0898C8CC;
      }
      goto L_0898C8C4;
    }
L_0898C8C4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_0898C8CC;
L_0898C8CC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_0898C8E8;
      }
      goto L_0898C8D4;
    }
L_0898C8D4:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C8F0;
      }
      goto L_0898C8E0;
    }
L_0898C8E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C8FC;
      }
      goto L_0898C8E8;
    }
L_0898C8E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C8F0;
    }
L_0898C8F0:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898C8FC;
      }
      goto L_0898C8F8;
    }
L_0898C8F8:
    aot_gpr_4 = (0u | 1u);
    goto L_0898C8FC;
L_0898C8FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898C910;
      }
      goto L_0898C904;
    }
L_0898C904:
    aot_gpr_31 = (0x0898C90Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C90Cu) goto L_0898C90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C90C:
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_2) < -10 ? 1u : 0u);
    goto L_0898C910;
L_0898C910:
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
L_0898C924:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898C984;
      }
      goto L_0898C94C;
    }
L_0898C94C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0898C98C;
      }
      goto L_0898C97C;
    }
L_0898C97C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898C9C0;
      }
      goto L_0898C984;
    }
L_0898C984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898C98C;
    }
L_0898C98C:
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
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898C9DC;
      }
      goto L_0898C9C0;
    }
L_0898C9C0:
    aot_gpr_31 = (0x0898C9C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898C9C8u) goto L_0898C9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898C9C8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0898C9E4;
      }
      goto L_0898C9D4;
    }
L_0898C9D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CA88;
      }
      goto L_0898C9DC;
    }
L_0898C9DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898C9E4;
    }
L_0898C9E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 246u);
      if (branch_taken) {
          goto L_0898CA04;
      }
      goto L_0898C9F4;
    }
L_0898C9F4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 251u);
      if (branch_taken) {
          goto L_0898CA04;
      }
      goto L_0898C9FC;
    }
L_0898C9FC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898CA1C;
      }
      goto L_0898CA04;
    }
L_0898CA04:
    aot_gpr_31 = (0x0898CA0Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CA0Cu) goto L_0898CA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CA0C:
    aot_gpr_31 = (0x0898CA14u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0898CF8C;
L_0898CA14:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898CA38;
      }
      goto L_0898CA1C;
    }
L_0898CA1C:
    aot_gpr_31 = (0x0898CA24u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CA24u) goto L_0898CA24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CA24:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898CA64;
      }
      goto L_0898CA30;
    }
L_0898CA30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CA40;
      }
      goto L_0898CA38;
    }
L_0898CA38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CA40;
    }
L_0898CA40:
    aot_gpr_31 = (0x0898CA48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CA48u) goto L_0898CA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CA48:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898CA88;
      }
      goto L_0898CA54;
    }
L_0898CA54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 198u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898CA88;
      }
      goto L_0898CA64;
    }
L_0898CA64:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CA80;
      }
      goto L_0898CA70;
    }
L_0898CA70:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CA80;
      }
      goto L_0898CA7C;
    }
L_0898CA7C:
    aot_gpr_4 = (0u | 1u);
    goto L_0898CA80;
L_0898CA80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CA88;
    }
L_0898CA88:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898CAB8;
    }
    goto L_0898CA98;
L_0898CA98:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0898CACC;
      }
      goto L_0898CAA0;
    }
L_0898CAA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CAD4;
      }
      goto L_0898CAAC;
    }
L_0898CAAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898CAE8;
      }
      goto L_0898CAB4;
    }
L_0898CAB4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    goto L_0898CAB8;
L_0898CAB8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898CACC;
      }
      goto L_0898CAC0;
    }
L_0898CAC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898CB58;
      }
      goto L_0898CACC;
    }
L_0898CACC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CAD4;
    }
L_0898CAD4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898CAE8;
      }
      goto L_0898CAE0;
    }
L_0898CAE0:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0898CAE8;
L_0898CAE8:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CB04;
      }
      goto L_0898CAF0;
    }
L_0898CAF0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB0C;
      }
      goto L_0898CAFC;
    }
L_0898CAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0898CB20;
      }
      goto L_0898CB04;
    }
L_0898CB04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CB0C;
    }
L_0898CB0C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0898CB20;
      }
      goto L_0898CB18;
    }
L_0898CB18:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_0898CB20;
L_0898CB20:
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_0898CB3C;
      }
      goto L_0898CB28;
    }
L_0898CB28:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB44;
      }
      goto L_0898CB34;
    }
L_0898CB34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CB50;
      }
      goto L_0898CB3C;
    }
L_0898CB3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CB44;
    }
L_0898CB44:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CB50;
      }
      goto L_0898CB4C;
    }
L_0898CB4C:
    aot_gpr_4 = (0u | 1u);
    goto L_0898CB50;
L_0898CB50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CB58;
    }
L_0898CB58:
    aot_gpr_31 = (0x0898CB60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CB60u) goto L_0898CB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CB60:
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_2) < 11 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_2 ^ 1u);
    goto L_0898CB68;
L_0898CB68:
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
L_0898CB7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898CBDC;
      }
      goto L_0898CBA4;
    }
L_0898CBA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0898CBE4;
      }
      goto L_0898CBD4;
    }
L_0898CBD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CC18;
      }
      goto L_0898CBDC;
    }
L_0898CBDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CE00;
      }
      goto L_0898CBE4;
    }
L_0898CBE4:
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
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898CC38;
      }
      goto L_0898CC18;
    }
L_0898CC18:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898CC40;
    }
    goto L_0898CC28;
L_0898CC28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0898CDFC;
      }
      goto L_0898CC30;
    }
L_0898CC30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CC50;
      }
      goto L_0898CC38;
    }
L_0898CC38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CE00;
      }
      goto L_0898CC40;
    }
L_0898CC40:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898CCD8;
      }
      goto L_0898CC48;
    }
L_0898CC48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CDFC;
      }
      goto L_0898CC50;
    }
L_0898CC50:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CC84;
      }
      goto L_0898CC5C;
    }
L_0898CC5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CC78;
      }
      goto L_0898CC68;
    }
L_0898CC68:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898CC7C;
      }
      goto L_0898CC74;
    }
L_0898CC74:
    aot_gpr_5 = (0u | 1u);
    goto L_0898CC78;
L_0898CC78:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0898CC7C;
L_0898CC7C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898CC88;
      }
      goto L_0898CC84;
    }
L_0898CC84:
    aot_gpr_4 = (0u | 1u);
    goto L_0898CC88;
L_0898CC88:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CCC0;
      }
      goto L_0898CC98;
    }
L_0898CC98:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0898CCB4;
      }
      goto L_0898CCA4;
    }
L_0898CCA4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0898CCB8;
      }
      goto L_0898CCB0;
    }
L_0898CCB0:
    ctx.gpr[6] = (0u | 1u);
    goto L_0898CCB4;
L_0898CCB4:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_0898CCB8;
L_0898CCB8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0898CCC4;
      }
      goto L_0898CCC0;
    }
L_0898CCC0:
    aot_gpr_5 = (0u | 1u);
    goto L_0898CCC4;
L_0898CCC4:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_2 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_4);
      if (branch_taken) {
          goto L_0898CE00;
      }
      goto L_0898CCD8;
    }
L_0898CCD8:
    aot_gpr_31 = (0x0898CCE0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CCE0u) goto L_0898CCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CCE0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898CDAC;
      }
      goto L_0898CCEC;
    }
L_0898CCEC:
    aot_gpr_31 = (0x0898CCF4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CCF4u) goto L_0898CCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CCF4:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898CD24;
      }
      goto L_0898CD00;
    }
L_0898CD00:
    aot_gpr_31 = (0x0898CD08u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CD08u) goto L_0898CD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CD08:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898CDAC;
      }
      goto L_0898CD14;
    }
L_0898CD14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 198u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898CDAC;
      }
      goto L_0898CD24;
    }
L_0898CD24:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CD58;
      }
      goto L_0898CD30;
    }
L_0898CD30:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CD4C;
      }
      goto L_0898CD3C;
    }
L_0898CD3C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898CD50;
      }
      goto L_0898CD48;
    }
L_0898CD48:
    aot_gpr_5 = (0u | 1u);
    goto L_0898CD4C;
L_0898CD4C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0898CD50;
L_0898CD50:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898CD5C;
      }
      goto L_0898CD58;
    }
L_0898CD58:
    aot_gpr_4 = (0u | 1u);
    goto L_0898CD5C;
L_0898CD5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CD94;
      }
      goto L_0898CD6C;
    }
L_0898CD6C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0898CD88;
      }
      goto L_0898CD78;
    }
L_0898CD78:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0898CD8C;
      }
      goto L_0898CD84;
    }
L_0898CD84:
    ctx.gpr[6] = (0u | 1u);
    goto L_0898CD88;
L_0898CD88:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_0898CD8C;
L_0898CD8C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0898CD98;
      }
      goto L_0898CD94;
    }
L_0898CD94:
    aot_gpr_5 = (0u | 1u);
    goto L_0898CD98;
L_0898CD98:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_2 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & aot_gpr_4);
      if (branch_taken) {
          goto L_0898CE00;
      }
      goto L_0898CDAC;
    }
L_0898CDAC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898CDFC;
      }
      goto L_0898CDB8;
    }
L_0898CDB8:
    aot_gpr_31 = (0x0898CDC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CDC0u) goto L_0898CDC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CDC0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_0898CDD4;
      }
      goto L_0898CDCC;
    }
L_0898CDCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_0898CDD4;
      }
      goto L_0898CDD4;
    }
L_0898CDD4:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 30 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898CDFC;
      }
      goto L_0898CDE8;
    }
L_0898CDE8:
    aot_gpr_31 = (0x0898CDF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CDF0u) goto L_0898CDF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CDF0:
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_2) < 11 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 ^ 1u);
      if (branch_taken) {
          goto L_0898CE00;
      }
      goto L_0898CDFC;
    }
L_0898CDFC:
    aot_gpr_2 = (0u | 0u);
    goto L_0898CE00;
L_0898CE00:
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
L_0898CE14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CE50;
      }
      goto L_0898CE20;
    }
L_0898CE20:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CE48;
      }
      goto L_0898CE34;
    }
L_0898CE34:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CE58;
      }
      goto L_0898CE40;
    }
L_0898CE40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CE68;
      }
      goto L_0898CE48;
    }
L_0898CE48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CE6C;
      }
      goto L_0898CE50;
    }
L_0898CE50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CE6C;
      }
      goto L_0898CE58;
    }
L_0898CE58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898CE68;
      }
      goto L_0898CE64;
    }
L_0898CE64:
    aot_gpr_5 = (0u | 1u);
    goto L_0898CE68;
L_0898CE68:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898CE6C;
L_0898CE6C:
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
L_0898CE74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CEA8;
      }
      goto L_0898CE90;
    }
L_0898CE90:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_0898CEB0;
      }
      goto L_0898CEA0;
    }
L_0898CEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CED0;
      }
      goto L_0898CEA8;
    }
L_0898CEA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CEF4;
      }
      goto L_0898CEB0;
    }
L_0898CEB0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0898CEF0;
      }
      goto L_0898CEB8;
    }
L_0898CEB8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_0898CEE0;
      }
      goto L_0898CEC0;
    }
L_0898CEC0:
    aot_gpr_31 = (0x0898CEC8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CEC8u) goto L_0898CEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CEC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CEF4;
      }
      goto L_0898CED0;
    }
L_0898CED0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CEC0;
      }
      goto L_0898CED8;
    }
L_0898CED8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898CEF0;
      }
      goto L_0898CEE0;
    }
L_0898CEE0:
    aot_gpr_31 = (0x0898CEE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CEE8u) goto L_0898CEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CEE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CEF4;
      }
      goto L_0898CEF0;
    }
L_0898CEF0:
    aot_gpr_2 = (0u | 0u);
    goto L_0898CEF4;
L_0898CEF4:
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
L_0898CF00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CF34;
      }
      goto L_0898CF1C;
    }
L_0898CF1C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_0898CF3C;
      }
      goto L_0898CF2C;
    }
L_0898CF2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CF5C;
      }
      goto L_0898CF34;
    }
L_0898CF34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CF80;
      }
      goto L_0898CF3C;
    }
L_0898CF3C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0898CF7C;
      }
      goto L_0898CF44;
    }
L_0898CF44:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_0898CF6C;
      }
      goto L_0898CF4C;
    }
L_0898CF4C:
    aot_gpr_31 = (0x0898CF54u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CF54u) goto L_0898CF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CF54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CF80;
      }
      goto L_0898CF5C;
    }
L_0898CF5C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CF4C;
      }
      goto L_0898CF64;
    }
L_0898CF64:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898CF7C;
      }
      goto L_0898CF6C;
    }
L_0898CF6C:
    aot_gpr_31 = (0x0898CF74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 988u, 0x0898BCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898CF74u) goto L_0898CF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898CF74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CF80;
      }
      goto L_0898CF7C;
    }
L_0898CF7C:
    aot_gpr_2 = (0u | 0u);
    goto L_0898CF80;
L_0898CF80:
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
L_0898CF8C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898CFA8;
      }
      goto L_0898CFA0;
    }
L_0898CFA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CFB0;
      }
      goto L_0898CFA8;
    }
L_0898CFA8:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_0898CFB0;
L_0898CFB0:
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
L_0898CFB8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898CFE0;
      }
      goto L_0898CFCC;
    }
L_0898CFCC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CFE8;
      }
      goto L_0898CFD8;
    }
L_0898CFD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898CFF8;
      }
      goto L_0898CFE0;
    }
L_0898CFE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898CFFC;
      }
      goto L_0898CFE8;
    }
L_0898CFE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898CFF8;
      }
      goto L_0898CFF4;
    }
L_0898CFF4:
    aot_gpr_5 = (0u | 1u);
    goto L_0898CFF8;
L_0898CFF8:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898CFFC;
L_0898CFFC:
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
L_0898D004:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D02C;
      }
      goto L_0898D018;
    }
L_0898D018:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D034;
      }
      goto L_0898D024;
    }
L_0898D024:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898D044;
      }
      goto L_0898D02C;
    }
L_0898D02C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D048;
      }
      goto L_0898D034;
    }
L_0898D034:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D044;
      }
      goto L_0898D040;
    }
L_0898D040:
    aot_gpr_5 = (0u | 1u);
    goto L_0898D044;
L_0898D044:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898D048;
L_0898D048:
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
L_0898D050:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D0A0;
      }
      goto L_0898D074;
    }
L_0898D074:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898D0A8;
    }
    goto L_0898D084;
L_0898D084:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0898D0F0;
      }
      goto L_0898D08C;
    }
L_0898D08C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D0F8;
      }
      goto L_0898D098;
    }
L_0898D098:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 << 16u);
      if (branch_taken) {
          goto L_0898D10C;
      }
      goto L_0898D0A0;
    }
L_0898D0A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D130;
      }
      goto L_0898D0A8;
    }
L_0898D0A8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D0F0;
      }
      goto L_0898D0B0;
    }
L_0898D0B0:
    aot_gpr_31 = (0x0898D0B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D0B8u) goto L_0898D0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D0B8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D0E8;
      }
      goto L_0898D0C4;
    }
L_0898D0C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898D0E8;
      }
      goto L_0898D0D4;
    }
L_0898D0D4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D114;
      }
      goto L_0898D0E0;
    }
L_0898D0E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 << 16u);
      if (branch_taken) {
          goto L_0898D128;
      }
      goto L_0898D0E8;
    }
L_0898D0E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_0898D130;
      }
      goto L_0898D0F0;
    }
L_0898D0F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D130;
      }
      goto L_0898D0F8;
    }
L_0898D0F8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_2 = (aot_gpr_4 << 16u);
      if (branch_taken) {
          goto L_0898D10C;
      }
      goto L_0898D104;
    }
L_0898D104:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_2 = (aot_gpr_4 << 16u);
    goto L_0898D10C;
L_0898D10C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898D130;
      }
      goto L_0898D114;
    }
L_0898D114:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_2 = (aot_gpr_4 << 16u);
      if (branch_taken) {
          goto L_0898D128;
      }
      goto L_0898D120;
    }
L_0898D120:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_2 = (aot_gpr_4 << 16u);
    goto L_0898D128;
L_0898D128:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898D130;
      }
      goto L_0898D130;
    }
L_0898D130:
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
L_0898D140:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D15C;
      }
      goto L_0898D154;
    }
L_0898D154:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D160;
      }
      goto L_0898D15C;
    }
L_0898D15C:
    // Vehicle brake / reverse. Stock loads 38 (CPad NewState.SQUARE); same
    // arrangement as the accelerator above, so S brakes in a car and stays
    // plain analog movement on foot.
    {
        vcs::vcs_note_vehicle_control_read();
        std::int16_t brake = static_cast<std::int16_t>(
            aot_mem.aot_direct_load16(aot_gpr_4 + vcs::vcs_brake_pad_offset()));
        if (brake == 0 && vcs::vcs_host_brake()) brake = 127;
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(brake)));
    }
    goto L_0898D160;
L_0898D160:
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
L_0898D168:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D194;
      }
      goto L_0898D174;
    }
L_0898D174:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D194;
      }
      goto L_0898D180;
    }
L_0898D180:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(167)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D19C;
      }
      goto L_0898D18C;
    }
L_0898D18C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D1A4;
      }
      goto L_0898D194;
    }
L_0898D194:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D1A4;
      }
      goto L_0898D19C;
    }
L_0898D19C:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_0898D1A4;
L_0898D1A4:
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
L_0898D1AC:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898D1B8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D208;
      }
      goto L_0898D1CC;
    }
L_0898D1CC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(167)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D200;
      }
      goto L_0898D1D8;
    }
L_0898D1D8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D1F8;
      }
      goto L_0898D1E4;
    }
L_0898D1E4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D210;
      }
      goto L_0898D1F0;
    }
L_0898D1F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898D220;
      }
      goto L_0898D1F8;
    }
L_0898D1F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D224;
      }
      goto L_0898D200;
    }
L_0898D200:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D224;
      }
      goto L_0898D208;
    }
L_0898D208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D224;
      }
      goto L_0898D210;
    }
L_0898D210:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D220;
      }
      goto L_0898D21C;
    }
L_0898D21C:
    aot_gpr_5 = (0u | 1u);
    goto L_0898D220;
L_0898D220:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898D224;
L_0898D224:
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
L_0898D22C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D25C;
      }
      goto L_0898D240;
    }
L_0898D240:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D254;
      }
      goto L_0898D24C;
    }
L_0898D24C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D264;
      }
      goto L_0898D254;
    }
L_0898D254:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D268;
      }
      goto L_0898D25C;
    }
L_0898D25C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D268;
      }
      goto L_0898D264;
    }
L_0898D264:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    goto L_0898D268;
L_0898D268:
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
L_0898D270:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D2B4;
      }
      goto L_0898D284;
    }
L_0898D284:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D2AC;
      }
      goto L_0898D290;
    }
L_0898D290:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D2AC;
      }
      goto L_0898D298;
    }
L_0898D298:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D2BC;
      }
      goto L_0898D2A4;
    }
L_0898D2A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898D2CC;
      }
      goto L_0898D2AC;
    }
L_0898D2AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D2D0;
      }
      goto L_0898D2B4;
    }
L_0898D2B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D2D0;
      }
      goto L_0898D2BC;
    }
L_0898D2BC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D2CC;
      }
      goto L_0898D2C8;
    }
L_0898D2C8:
    aot_gpr_5 = (0u | 1u);
    goto L_0898D2CC;
L_0898D2CC:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898D2D0;
L_0898D2D0:
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
L_0898D2D8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D2F4;
      }
      goto L_0898D2EC;
    }
L_0898D2EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D2F8;
      }
      goto L_0898D2F4;
    }
L_0898D2F4:
    // Vehicle accelerator. Stock loads 42 (CPad NewState.CROSS); the offset is
    // a call so ModernControlScheme can move it to R, and the host key is ORed
    // in so W drives without also sprinting on foot. See vcs_vehicle_input.hpp.
    {
        vcs::vcs_note_vehicle_control_read();
        std::int16_t accelerate = static_cast<std::int16_t>(
            aot_mem.aot_direct_load16(aot_gpr_4 + vcs::vcs_accelerate_pad_offset()));
        if (accelerate == 0 && vcs::vcs_host_accelerate()) accelerate = 127;
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(accelerate)));
    }
    goto L_0898D2F8;
L_0898D2F8:
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
L_0898D300:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D328;
      }
      goto L_0898D314;
    }
L_0898D314:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D330;
      }
      goto L_0898D320;
    }
L_0898D320:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898D344;
      }
      goto L_0898D328;
    }
L_0898D328:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D34C;
      }
      goto L_0898D330;
    }
L_0898D330:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898D344;
      }
      goto L_0898D33C;
    }
L_0898D33C:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0898D344;
L_0898D344:
    aot_gpr_2 = (aot_gpr_4 << 16u);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
    goto L_0898D34C;
L_0898D34C:
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
L_0898D354:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898D368u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D368u) goto L_0898D368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D368:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D3B4;
      }
      goto L_0898D370;
    }
L_0898D370:
    aot_gpr_31 = (0x0898D378u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D378u) goto L_0898D378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D378:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D3B4;
      }
      goto L_0898D380;
    }
L_0898D380:
    aot_gpr_31 = (0x0898D388u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D388u) goto L_0898D388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D388:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D3B4;
      }
      goto L_0898D390;
    }
L_0898D390:
    aot_gpr_31 = (0x0898D398u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D398u) goto L_0898D398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D398:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D3B4;
      }
      goto L_0898D3A0;
    }
L_0898D3A0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D3BC;
      }
      goto L_0898D3AC;
    }
L_0898D3AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898D3D0;
      }
      goto L_0898D3B4;
    }
L_0898D3B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D3E4;
      }
      goto L_0898D3BC;
    }
L_0898D3BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898D3D0;
      }
      goto L_0898D3C8;
    }
L_0898D3C8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898D3D0;
L_0898D3D0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D3E0;
      }
      goto L_0898D3D8;
    }
L_0898D3D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898D3E4;
      }
      goto L_0898D3E0;
    }
L_0898D3E0:
    aot_gpr_2 = (0u | 0u);
    goto L_0898D3E4;
L_0898D3E4:
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
L_0898D3F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898D404u);
    goto L_0898D354;
L_0898D404:
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
L_0898D410:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D448;
      }
      goto L_0898D42C;
    }
L_0898D42C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D440;
      }
      goto L_0898D438;
    }
L_0898D438:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D450;
      }
      goto L_0898D440;
    }
L_0898D440:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D458;
      }
      goto L_0898D448;
    }
L_0898D448:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D458;
      }
      goto L_0898D450;
    }
L_0898D450:
    aot_gpr_31 = (0x0898D458u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1018u, 0x0898BDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D458u) goto L_0898D458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D458:
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
L_0898D464:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D49C;
      }
      goto L_0898D480;
    }
L_0898D480:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D494;
      }
      goto L_0898D48C;
    }
L_0898D48C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D4A4;
      }
      goto L_0898D494;
    }
L_0898D494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D4AC;
      }
      goto L_0898D49C;
    }
L_0898D49C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D4AC;
      }
      goto L_0898D4A4;
    }
L_0898D4A4:
    aot_gpr_31 = (0x0898D4ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D4ACu) goto L_0898D4AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D4AC:
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
L_0898D4B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D4F0;
      }
      goto L_0898D4D4;
    }
L_0898D4D4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D4E8;
      }
      goto L_0898D4E0;
    }
L_0898D4E0:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D4F8;
      }
      goto L_0898D4E8;
    }
L_0898D4E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D500;
      }
      goto L_0898D4F0;
    }
L_0898D4F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D500;
      }
      goto L_0898D4F8;
    }
L_0898D4F8:
    aot_gpr_31 = (0x0898D500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D500u) goto L_0898D500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D500:
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
L_0898D50C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D544;
      }
      goto L_0898D528;
    }
L_0898D528:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D53C;
      }
      goto L_0898D534;
    }
L_0898D534:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D54C;
      }
      goto L_0898D53C;
    }
L_0898D53C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D554;
      }
      goto L_0898D544;
    }
L_0898D544:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D554;
      }
      goto L_0898D54C;
    }
L_0898D54C:
    aot_gpr_31 = (0x0898D554u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1018u, 0x0898BDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D554u) goto L_0898D554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D554:
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
L_0898D560:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D5A0;
      }
      goto L_0898D584;
    }
L_0898D584:
    aot_gpr_31 = (0x0898D58Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898DAFC;
L_0898D58C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D5A8;
      }
      goto L_0898D594;
    }
L_0898D594:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D5AC;
      }
      goto L_0898D5A0;
    }
L_0898D5A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D5AC;
      }
      goto L_0898D5A8;
    }
L_0898D5A8:
    aot_gpr_2 = (0u | 0u);
    goto L_0898D5AC;
L_0898D5AC:
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
L_0898D5BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D60C;
      }
      goto L_0898D5E0;
    }
L_0898D5E0:
    aot_gpr_31 = (0x0898D5E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898DAFC;
L_0898D5E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D604;
      }
      goto L_0898D5F0;
    }
L_0898D5F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D614;
      }
      goto L_0898D5FC;
    }
L_0898D5FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898D624;
      }
      goto L_0898D604;
    }
L_0898D604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D628;
      }
      goto L_0898D60C;
    }
L_0898D60C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D628;
      }
      goto L_0898D614;
    }
L_0898D614:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D624;
      }
      goto L_0898D620;
    }
L_0898D620:
    aot_gpr_4 = (0u | 1u);
    goto L_0898D624;
L_0898D624:
    aot_gpr_2 = (aot_gpr_4 & 255u);
    goto L_0898D628;
L_0898D628:
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
L_0898D638:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898D640:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D684;
      }
      goto L_0898D654;
    }
L_0898D654:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D67C;
      }
      goto L_0898D660;
    }
L_0898D660:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D67C;
      }
      goto L_0898D668;
    }
L_0898D668:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D68C;
      }
      goto L_0898D674;
    }
L_0898D674:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898D69C;
      }
      goto L_0898D67C;
    }
L_0898D67C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D6A0;
      }
      goto L_0898D684;
    }
L_0898D684:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D6A0;
      }
      goto L_0898D68C;
    }
L_0898D68C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D69C;
      }
      goto L_0898D698;
    }
L_0898D698:
    aot_gpr_5 = (0u | 1u);
    goto L_0898D69C;
L_0898D69C:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898D6A0;
L_0898D6A0:
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
L_0898D6A8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D6D8;
      }
      goto L_0898D6BC;
    }
L_0898D6BC:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D6D0;
      }
      goto L_0898D6C8;
    }
L_0898D6C8:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D6E0;
      }
      goto L_0898D6D0;
    }
L_0898D6D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D6E8;
      }
      goto L_0898D6D8;
    }
L_0898D6D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D6E8;
      }
      goto L_0898D6E0;
    }
L_0898D6E0:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_0898D6E8;
L_0898D6E8:
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
L_0898D6F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0898D720;
      }
      goto L_0898D708;
    }
L_0898D708:
    aot_gpr_31 = (0x0898D710u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898D640;
L_0898D710:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_0898D728;
      }
      goto L_0898D718;
    }
L_0898D718:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898D734;
      }
      goto L_0898D720;
    }
L_0898D720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D7B0;
      }
      goto L_0898D728;
    }
L_0898D728:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(196), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(200), aot_gpr_4);
    goto L_0898D734;
L_0898D734:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(196)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[6] - aot_gpr_4);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < 750 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D758;
      }
      goto L_0898D750;
    }
L_0898D750:
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_0898D78C;
      }
      goto L_0898D758;
    }
L_0898D758:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 751 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D784;
      }
      goto L_0898D764;
    }
L_0898D764:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D784;
      }
      goto L_0898D76C;
    }
L_0898D76C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D784;
      }
      goto L_0898D774;
    }
L_0898D774:
    aot_gpr_31 = (0x0898D77Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898D6A8;
L_0898D77C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D7A0;
      }
      goto L_0898D784;
    }
L_0898D784:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D7B0;
      }
      goto L_0898D78C;
    }
L_0898D78C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(196), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_0898D7B0;
      }
      goto L_0898D7A0;
    }
L_0898D7A0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(196), aot_gpr_4);
    aot_gpr_2 = (0u | 1u);
    goto L_0898D7B0;
L_0898D7B0:
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
L_0898D7C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898D7FC;
      }
      goto L_0898D7E8;
    }
L_0898D7E8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0898D888;
      }
      goto L_0898D7F4;
    }
L_0898D7F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D804;
      }
      goto L_0898D7FC;
    }
L_0898D7FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D88C;
      }
      goto L_0898D804;
    }
L_0898D804:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D888;
      }
      goto L_0898D80C;
    }
L_0898D80C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898D888;
      }
      goto L_0898D818;
    }
L_0898D818:
    aot_gpr_31 = (0x0898D820u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898C4EC;
L_0898D820:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_gpr_4 = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_0898D838;
      }
      goto L_0898D82C;
    }
L_0898D82C:
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_0898D840;
      }
      goto L_0898D838;
    }
L_0898D838:
    ctx.gpr[17] = (ctx.gpr[17] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_0898D840;
L_0898D840:
    aot_gpr_31 = (0x0898D848u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898C578;
L_0898D848:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
    aot_gpr_4 = (aot_gpr_16 << 16u);
      if (branch_taken) {
          goto L_0898D86C;
      }
      goto L_0898D854;
    }
L_0898D854:
    aot_gpr_4 = (0u - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[17]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D878;
      }
      goto L_0898D86C;
    }
L_0898D86C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[17]) < 65 ? 1u : 0u);
    goto L_0898D878;
L_0898D878:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0898D888;
      }
      goto L_0898D880;
    }
L_0898D880:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898D88C;
      }
      goto L_0898D888;
    }
L_0898D888:
    aot_gpr_2 = (0u | 0u);
    goto L_0898D88C;
L_0898D88C:
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
L_0898D8A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D8E0;
      }
      goto L_0898D8BC;
    }
L_0898D8BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D8D8;
      }
      goto L_0898D8C8;
    }
L_0898D8C8:
    aot_gpr_31 = (0x0898D8D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D8D0u) goto L_0898D8D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D8D0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D8E8;
      }
      goto L_0898D8D8;
    }
L_0898D8D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D8EC;
      }
      goto L_0898D8E0;
    }
L_0898D8E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D8EC;
      }
      goto L_0898D8E8;
    }
L_0898D8E8:
    aot_gpr_2 = (0u | 1u);
    goto L_0898D8EC;
L_0898D8EC:
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
L_0898D8F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D938;
      }
      goto L_0898D914;
    }
L_0898D914:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D930;
      }
      goto L_0898D920;
    }
L_0898D920:
    aot_gpr_31 = (0x0898D928u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1018u, 0x0898BDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D928u) goto L_0898D928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D928:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898D940;
      }
      goto L_0898D930;
    }
L_0898D930:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D944;
      }
      goto L_0898D938;
    }
L_0898D938:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898D944;
      }
      goto L_0898D940;
    }
L_0898D940:
    aot_gpr_2 = (0u | 1u);
    goto L_0898D944;
L_0898D944:
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
L_0898D950:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898D960u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D960u) goto L_0898D960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D960:
    aot_gpr_31 = (0x0898D968u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D968u) goto L_0898D968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D968:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D994;
      }
      goto L_0898D978;
    }
L_0898D978:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-16024))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < -5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D994;
      }
      goto L_0898D988;
    }
L_0898D988:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16024), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898D99C;
      }
      goto L_0898D994;
    }
L_0898D994:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16024), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_2 = (0u | 0u);
    goto L_0898D99C;
L_0898D99C:
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
L_0898D9A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898D9B8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D9B8u) goto L_0898D9B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D9B8:
    aot_gpr_31 = (0x0898D9C0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898D9C0u) goto L_0898D9C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898D9C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898D9EC;
      }
      goto L_0898D9D0;
    }
L_0898D9D0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-16022))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898D9EC;
      }
      goto L_0898D9E0;
    }
L_0898D9E0:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16022), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898D9F4;
      }
      goto L_0898D9EC;
    }
L_0898D9EC:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16022), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_2 = (0u | 0u);
    goto L_0898D9F4;
L_0898D9F4:
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
L_0898DA00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898DA10u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DA10u) goto L_0898DA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DA10:
    aot_gpr_31 = (0x0898DA18u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DA18u) goto L_0898DA18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DA18:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898DA44;
      }
      goto L_0898DA28;
    }
L_0898DA28:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-16020))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < -20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DA44;
      }
      goto L_0898DA38;
    }
L_0898DA38:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16020), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898DA4C;
      }
      goto L_0898DA44;
    }
L_0898DA44:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16020), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_2 = (0u | 0u);
    goto L_0898DA4C;
L_0898DA4C:
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
L_0898DA58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898DA68u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DA68u) goto L_0898DA68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DA68:
    aot_gpr_31 = (0x0898DA70u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DA70u) goto L_0898DA70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DA70:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 26 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DA9C;
      }
      goto L_0898DA80;
    }
L_0898DA80:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-16018))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898DA9C;
      }
      goto L_0898DA90;
    }
L_0898DA90:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16018), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898DAA4;
      }
      goto L_0898DA9C;
    }
L_0898DA9C:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-16018), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_2 = (0u | 0u);
    goto L_0898DAA4;
L_0898DAA4:
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
L_0898DAB0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DAD8;
      }
      goto L_0898DAC4;
    }
L_0898DAC4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DAE0;
      }
      goto L_0898DAD0;
    }
L_0898DAD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898DAF0;
      }
      goto L_0898DAD8;
    }
L_0898DAD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DAF4;
      }
      goto L_0898DAE0;
    }
L_0898DAE0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898DAF0;
      }
      goto L_0898DAEC;
    }
L_0898DAEC:
    aot_gpr_5 = (0u | 1u);
    goto L_0898DAF0;
L_0898DAF0:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898DAF4;
L_0898DAF4:
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
L_0898DAFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898DB44;
      }
      goto L_0898DB20;
    }
L_0898DB20:
    aot_gpr_31 = (0x0898DB28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DB28u) goto L_0898DB28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DB28:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898DB90;
      }
      goto L_0898DB3C;
    }
L_0898DB3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898DB4C;
      }
      goto L_0898DB44;
    }
L_0898DB44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DC94;
      }
      goto L_0898DB4C;
    }
L_0898DB4C:
    aot_gpr_31 = (0x0898DB54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CE14;
L_0898DB54:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898DBA8;
      }
      goto L_0898DB5C;
    }
L_0898DB5C:
    aot_gpr_31 = (0x0898DB64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DB64u) goto L_0898DB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DB64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898DBA8;
      }
      goto L_0898DB74;
    }
L_0898DB74:
    aot_gpr_31 = (0x0898DB7Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DB7Cu) goto L_0898DB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DB7C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898DBA8;
      }
      goto L_0898DB90;
    }
L_0898DB90:
    aot_gpr_31 = (0x0898DB98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DB98u) goto L_0898DB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DB98:
    aot_gpr_31 = (0x0898DBA0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 219u, 0x08908C50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DBA0u) goto L_0898DBA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DBA0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898DBBC;
      }
      goto L_0898DBA8;
    }
L_0898DBA8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_0898DBC4;
      }
      goto L_0898DBB4;
    }
L_0898DBB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898DC80;
      }
      goto L_0898DBBC;
    }
L_0898DBBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DC94;
      }
      goto L_0898DBC4;
    }
L_0898DBC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DBCC;
    }
L_0898DBCC:
    aot_gpr_31 = (0x0898DBD4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DBD4u) goto L_0898DBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DBD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DBEC;
    }
L_0898DBEC:
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
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 8u);
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC20;
    }
L_0898DC20:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 16u);
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC28;
    }
L_0898DC28:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 46u);
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC30;
    }
L_0898DC30:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 47u);
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC38;
    }
L_0898DC38:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 34u);
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC40;
    }
L_0898DC40:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC48;
    }
L_0898DC48:
    aot_gpr_31 = (0x0898DC50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898C4EC;
L_0898DC50:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898DC68;
      }
      goto L_0898DC58;
    }
L_0898DC58:
    aot_gpr_31 = (0x0898DC60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898C578;
L_0898DC60:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898DC70;
      }
      goto L_0898DC68;
    }
L_0898DC68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898DC94;
      }
      goto L_0898DC70;
    }
L_0898DC70:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DC94;
      }
      goto L_0898DC80;
    }
L_0898DC80:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898DC90;
      }
      goto L_0898DC88;
    }
L_0898DC88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898DC94;
      }
      goto L_0898DC90;
    }
L_0898DC90:
    aot_gpr_2 = (0u | 0u);
    goto L_0898DC94;
L_0898DC94:
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
L_0898DCA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898DCE8;
      }
      goto L_0898DCCC;
    }
L_0898DCCC:
    aot_gpr_31 = (0x0898DCD4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DCD4u) goto L_0898DCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DCD4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0898DCF0;
      }
      goto L_0898DCE0;
    }
L_0898DCE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898DD18;
      }
      goto L_0898DCE8;
    }
L_0898DCE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DD88;
      }
      goto L_0898DCF0;
    }
L_0898DCF0:
    aot_gpr_31 = (0x0898DCF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DCF8u) goto L_0898DCF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DCF8:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898DD38;
      }
      goto L_0898DD04;
    }
L_0898DD04:
    aot_gpr_31 = (0x0898DD0Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DD0Cu) goto L_0898DD0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DD0C:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0898DD38;
      }
      goto L_0898DD18;
    }
L_0898DD18:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898DD48;
    }
    goto L_0898DD28;
L_0898DD28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_0898DD58;
      }
      goto L_0898DD30;
    }
L_0898DD30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DD88;
      }
      goto L_0898DD38;
    }
L_0898DD38:
    aot_gpr_31 = (0x0898DD40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DD40u) goto L_0898DD40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DD40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898DD88;
      }
      goto L_0898DD48;
    }
L_0898DD48:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898DD30;
      }
      goto L_0898DD50;
    }
L_0898DD50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898DD60;
      }
      goto L_0898DD58;
    }
L_0898DD58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DD88;
      }
      goto L_0898DD60;
    }
L_0898DD60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898DD84;
      }
      goto L_0898DD6C;
    }
L_0898DD6C:
    aot_gpr_31 = (0x0898DD74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DD74u) goto L_0898DD74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DD74:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898DD84;
      }
      goto L_0898DD80;
    }
L_0898DD80:
    ctx.gpr[17] = (0u | 1u);
    goto L_0898DD84;
L_0898DD84:
    aot_gpr_2 = (ctx.gpr[17] & 255u);
    goto L_0898DD88;
L_0898DD88:
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
L_0898DD9C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DDCC;
      }
      goto L_0898DDB0;
    }
L_0898DDB0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898DDC4;
      }
      goto L_0898DDBC;
    }
L_0898DDBC:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DDD4;
      }
      goto L_0898DDC4;
    }
L_0898DDC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DDDC;
      }
      goto L_0898DDCC;
    }
L_0898DDCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DDDC;
      }
      goto L_0898DDD4;
    }
L_0898DDD4:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_0898DDDC;
L_0898DDDC:
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
L_0898DDE4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DE14;
      }
      goto L_0898DDF8;
    }
L_0898DDF8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898DE0C;
      }
      goto L_0898DE04;
    }
L_0898DE04:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898DE1C;
      }
      goto L_0898DE0C;
    }
L_0898DE0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DE24;
      }
      goto L_0898DE14;
    }
L_0898DE14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898DE24;
      }
      goto L_0898DE1C;
    }
L_0898DE1C:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_0898DE24;
L_0898DE24:
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
L_0898DE2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898DF44;
      }
      goto L_0898DE48;
    }
L_0898DE48:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898DF44;
      }
      goto L_0898DE50;
    }
L_0898DE50:
    aot_gpr_31 = (0x0898DE58u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DE58u) goto L_0898DE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DE58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898DECC;
      }
      goto L_0898DE64;
    }
L_0898DE64:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_4 = (0u | 45u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_5 = (2236u << 16u);
      if (branch_taken) {
          goto L_0898DE90;
      }
      goto L_0898DE7C;
    }
L_0898DE7C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898DEBC;
      }
      goto L_0898DE90;
    }
L_0898DE90:
    aot_gpr_31 = (0x0898DE98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DE98u) goto L_0898DE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DE98:
    // Gun aim X: ThirteenAG's aimX, which prefers the stick the player is
    // already holding and falls back to the second one. The call above is that
    // first stick; when it comes back centred, the mouse takes over.
    if (vcs::vcs_camera_hook_enabled() && aot_gpr_2 == 0u)
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_x())));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898DF48;
      }
      goto L_0898DEBC;
    }
L_0898DEBC:
    aot_gpr_31 = (0x0898DEC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DEC4u) goto L_0898DEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DEC4:
    // Gun aim X: ThirteenAG's aimX, which prefers the stick the player is
    // already holding and falls back to the second one. The call above is that
    // first stick; when it comes back centred, the mouse takes over.
    if (vcs::vcs_camera_hook_enabled() && aot_gpr_2 == 0u)
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_x())));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898DF48;
      }
      goto L_0898DECC;
    }
L_0898DECC:
    aot_gpr_31 = (0x0898DED4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DED4u) goto L_0898DED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DED4:
    // Gun aim X: ThirteenAG's aimX, which prefers the stick the player is
    // already holding and falls back to the second one. The call above is that
    // first stick; when it comes back centred, the mouse takes over.
    if (vcs::vcs_camera_hook_enabled() && aot_gpr_2 == 0u)
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_x())));
    aot_gpr_4 = (2236u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0898DF08;
      }
      goto L_0898DEF0;
    }
L_0898DEF0:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (16076u << 16u);
      if (branch_taken) {
          goto L_0898DF24;
      }
      goto L_0898DF08;
    }
L_0898DF08:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898DF48;
      }
      goto L_0898DF24;
    }
L_0898DF24:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898DF48;
      }
      goto L_0898DF44;
    }
L_0898DF44:
    aot_gpr_2 = (0u | 0u);
    goto L_0898DF48;
L_0898DF48:
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
L_0898DF58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898E06C;
      }
      goto L_0898DF74;
    }
L_0898DF74:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898E06C;
      }
      goto L_0898DF7C;
    }
L_0898DF7C:
    aot_gpr_31 = (0x0898DF84u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DF84u) goto L_0898DF84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DF84:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898DFFC;
      }
      goto L_0898DF90;
    }
L_0898DF90:
    aot_gpr_31 = (0x0898DF98u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DF98u) goto L_0898DF98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DF98:
    aot_gpr_31 = (0x0898DFA0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898DFA0u) goto L_0898DFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898DFA0:
    // Gun aim Y; the mirror of the X sites above.
    if (vcs::vcs_camera_hook_enabled() && aot_gpr_2 == 0u)
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_y())));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0898DFB4;
      }
      goto L_0898DFB0;
    }
L_0898DFB0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_0898DFB4;
L_0898DFB4:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_4 = (0u | 45u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898DFE8;
      }
      goto L_0898DFCC;
    }
L_0898DFCC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E070;
      }
      goto L_0898DFE8;
    }
L_0898DFE8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E070;
      }
      goto L_0898DFFC;
    }
L_0898DFFC:
    aot_gpr_31 = (0x0898E004u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E004u) goto L_0898E004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E004:
    // Gun aim Y; the mirror of the X sites above.
    if (vcs::vcs_camera_hook_enabled() && aot_gpr_2 == 0u)
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_y())));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0898E018;
      }
      goto L_0898E014;
    }
L_0898E014:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_0898E018;
L_0898E018:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_4 = (0u | 45u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (16076u << 16u);
      if (branch_taken) {
          goto L_0898E04C;
      }
      goto L_0898E030;
    }
L_0898E030:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E070;
      }
      goto L_0898E04C;
    }
L_0898E04C:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E070;
      }
      goto L_0898E06C;
    }
L_0898E06C:
    aot_gpr_2 = (0u | 0u);
    goto L_0898E070;
L_0898E070:
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
L_0898E080:
    vcs::vcs_camera_note_site(0u);
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    // The camera only runs once this counter reaches 7 -- the ramp that makes a
    // held D-pad start panning. A mouse has no ramp, so the hook satisfies the
    // condition by overriding the *loaded value*, not by forcing the branch.
    //
    // The difference matters. Forcing the branch also skips the store on the
    // far side of the next test, and that store is what resets this same
    // counter; without it the camera kept being driven past the point the game
    // stops it, and the overshoot had to be unwound before it answered again --
    // seizing at full pitch. Overriding the register leaves the counter, the
    // reset and every other condition exactly as the game wrote them.
    if (vcs::vcs_camera_hook_enabled()) aot_gpr_5 = (7u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898E174;
      }
      goto L_0898E0A0;
    }
L_0898E0A0:
    aot_gpr_31 = (0x0898E0A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CE14;
L_0898E0A8:
    // Taken unconditionally with the hook on: ThirteenAG's beqz -> b at
    // ptr + 0x10, the part of DualAnalogPatch this port had left out.
    //
    // The fall-through calls FindPlayerPed and tests the ped's field at 0x8C4,
    // and one value of it diverts past the stick read entirely. That is a
    // camera that stops answering in particular *player states* rather than at
    // particular angles, which is why the seizing wandered between looking up
    // and looking down, happened on the pad as well as the mouse, and cleared
    // itself after a while. An earlier note here argued the opposite and left
    // the branch alone; the pad reproducing the stall is what ruled that out.
    if (vcs::vcs_camera_hook_enabled()) goto L_0898E104;
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898E104;
      }
      goto L_0898E0B0;
    }
L_0898E0B0:
    aot_gpr_31 = (0x0898E0B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E0B8u) goto L_0898E0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E0B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898E104;
      }
      goto L_0898E0C8;
    }
L_0898E0C8:
    aot_gpr_31 = (0x0898E0D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E0D0u) goto L_0898E0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E0D0:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898E100;
      }
      goto L_0898E0E4;
    }
L_0898E0E4:
    aot_gpr_31 = (0x0898E0ECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E0ECu) goto L_0898E0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E0EC:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898E104;
      }
      goto L_0898E100;
    }
L_0898E100:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0898E104;
L_0898E104:
    aot_gpr_16 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0898E138;
      }
      goto L_0898E110;
    }
L_0898E110:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898E138;
      }
      goto L_0898E11C;
    }
L_0898E11C:
    aot_gpr_31 = (0x0898E124u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E124u) goto L_0898E124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E124:
    vcs::vcs_camera_note_site(1u);
    // Camera X from the host's mouse or right stick, replacing the pad read the
    // game does here. See vcs_camera_axis_x().
    if (vcs::vcs_camera_hook_enabled()) {
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_x())));
        goto L_0898E12C;
    }
    aot_gpr_31 = (0x0898E12Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E12Cu) goto L_0898E12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E12C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0898E138;
      }
      goto L_0898E138;
    }
L_0898E138:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898E160;
      }
      goto L_0898E14C;
    }
L_0898E14C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E178;
      }
      goto L_0898E160;
    }
L_0898E160:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E178;
      }
      goto L_0898E174;
    }
L_0898E174:
    aot_gpr_2 = (0u | 0u);
    goto L_0898E178;
L_0898E178:
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
L_0898E188:
    vcs::vcs_camera_note_site(2u);
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    // The Y half of the same ramp; see the X half above.
    if (vcs::vcs_camera_hook_enabled()) aot_gpr_5 = (7u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898E23C;
      }
      goto L_0898E1A8;
    }
L_0898E1A8:
    aot_gpr_31 = (0x0898E1B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CE14;
L_0898E1B0:
    // The Y counterpart: ThirteenAG's beqz -> b at ptr + 0x118.
    if (vcs::vcs_camera_hook_enabled()) goto L_0898E1BC;
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898E1BC;
      }
      goto L_0898E1B8;
    }
L_0898E1B8:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0898E1BC;
L_0898E1BC:
    aot_gpr_16 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    // Pad Mode. The two branches below skip the camera read unless it is in
    // [0,4); reported so the stall at full upward pitch can be attributed
    // rather than guessed. See vcs_camera_note_mode().
    vcs::vcs_camera_note_mode(static_cast<std::int16_t>(aot_gpr_16));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0898E200;
      }
      goto L_0898E1C8;
    }
L_0898E1C8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898E200;
      }
      goto L_0898E1D4;
    }
L_0898E1D4:
    aot_gpr_31 = (0x0898E1DCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E1DCu) goto L_0898E1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E1DC:
    vcs::vcs_camera_note_site(3u);
    // Camera Y; the mirror of the X read above.
    if (vcs::vcs_camera_hook_enabled()) {
        aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_y())));
        goto L_0898E1E4;
    }
    aot_gpr_31 = (0x0898E1E4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E1E4u) goto L_0898E1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E1E4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0898E1F8;
      }
      goto L_0898E1F4;
    }
L_0898E1F4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_0898E1F8;
L_0898E1F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898E200;
      }
      goto L_0898E200;
    }
L_0898E200:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898E228;
      }
      goto L_0898E214;
    }
L_0898E214:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E240;
      }
      goto L_0898E228;
    }
L_0898E228:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898E240;
      }
      goto L_0898E23C;
    }
L_0898E23C:
    aot_gpr_2 = (0u | 0u);
    goto L_0898E240;
L_0898E240:
    vcs::vcs_camera_note_return(static_cast<std::int16_t>(aot_gpr_2));
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
L_0898E250:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898E264u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0898D22C;
L_0898E264:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(188), aot_gpr_2);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(192), aot_gpr_4);
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
L_0898E280:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7664)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898E288:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 << 16u);
    ctx.gpr[6] = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 12u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_31);
    goto L_0898E2D0;
L_0898E2D0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (aot_gpr_5 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0898E2D0;
      }
      goto L_0898E2F4;
    }
L_0898E2F4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_0898E300;
      }
      goto L_0898E2FC;
    }
L_0898E2FC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9287), static_cast<std::uint8_t>(0u));
    goto L_0898E300;
L_0898E300:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898E324;
      }
      goto L_0898E308;
    }
L_0898E308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_5 = (17152u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_0898E32C;
      }
      goto L_0898E31C;
    }
L_0898E31C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898E338;
      }
      goto L_0898E324;
    }
L_0898E324:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898EB98;
      }
      goto L_0898E32C;
    }
L_0898E32C:
    aot_gpr_31 = (0x0898E334u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E334u) goto L_0898E334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E338;
L_0898E338:
    aot_gpr_31 = (0x0898E340u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 553u, 0x0889E620u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E340u) goto L_0898E340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
        goto L_0898E35C;
    }
    goto L_0898E34C;
L_0898E34C:
    aot_gpr_31 = (0x0898E354u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E354u) goto L_0898E354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_0898E35C;
L_0898E35C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_0898E394;
      }
      goto L_0898E388;
    }
L_0898E388:
    aot_gpr_31 = (0x0898E390u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E390u) goto L_0898E390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E394;
L_0898E394:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16136)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0898E3E8;
      }
      goto L_0898E3D4;
    }
L_0898E3D4:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898E3F4;
      }
      goto L_0898E3E8;
    }
L_0898E3E8:
    aot_gpr_31 = (0x0898E3F0u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73594u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E3F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E3F4;
L_0898E3F4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E408;
      }
      goto L_0898E3FC;
    }
L_0898E3FC:
    aot_gpr_31 = (0x0898E404u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E404u) goto L_0898E404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E408;
L_0898E408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E428;
    }
    goto L_0898E428;
L_0898E428:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(50))))));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16140)));
      if (branch_taken) {
          goto L_0898E444;
      }
      goto L_0898E43C;
    }
L_0898E43C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_0898E444;
L_0898E444:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898E454;
      }
      goto L_0898E44C;
    }
L_0898E44C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_0898E454;
L_0898E454:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898E498;
      }
      goto L_0898E464;
    }
L_0898E464:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_0898E4D0;
      }
      goto L_0898E498;
    }
L_0898E498:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0898E4D0;
L_0898E4D0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898E514;
      }
      goto L_0898E4E0;
    }
L_0898E4E0:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0898E54C;
      }
      goto L_0898E514;
    }
L_0898E514:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0898E54C;
L_0898E54C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
        goto L_0898E570;
    }
    goto L_0898E560;
L_0898E560:
    aot_gpr_31 = (0x0898E568u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E568u) goto L_0898E568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_0898E570;
L_0898E570:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
        goto L_0898E5C4;
    }
    goto L_0898E5B4;
L_0898E5B4:
    aot_gpr_31 = (0x0898E5BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E5BCu) goto L_0898E5BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E5BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_0898E5C4;
L_0898E5C4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 100 ? 1u : 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_0898E614;
    }
    goto L_0898E614;
L_0898E614:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < -99 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_0898E628;
    }
    goto L_0898E628;
L_0898E628:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -99 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_0898E63C;
    }
    goto L_0898E63C;
L_0898E63C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 100 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_0898E650;
    }
    goto L_0898E650;
L_0898E650:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E66C;
      }
      goto L_0898E660;
    }
L_0898E660:
    aot_gpr_31 = (0x0898E668u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E668u) goto L_0898E668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E668:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E66C;
L_0898E66C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E688;
    }
    goto L_0898E688;
L_0898E688:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E6A4;
      }
      goto L_0898E698;
    }
L_0898E698:
    aot_gpr_31 = (0x0898E6A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E6A0u) goto L_0898E6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E6A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E6A4;
L_0898E6A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E6C0;
    }
    goto L_0898E6C0;
L_0898E6C0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E6E4;
      }
      goto L_0898E6D8;
    }
L_0898E6D8:
    aot_gpr_31 = (0x0898E6E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E6E0u) goto L_0898E6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E6E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E6E4;
L_0898E6E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E700;
    }
    goto L_0898E700;
L_0898E700:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E71C;
      }
      goto L_0898E710;
    }
L_0898E710:
    aot_gpr_31 = (0x0898E718u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E718u) goto L_0898E718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E71C;
L_0898E71C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E738;
    }
    goto L_0898E738;
L_0898E738:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E754;
      }
      goto L_0898E748;
    }
L_0898E748:
    aot_gpr_31 = (0x0898E750u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E750u) goto L_0898E750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E754;
L_0898E754:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E770;
    }
    goto L_0898E770;
L_0898E770:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E78C;
      }
      goto L_0898E780;
    }
L_0898E780:
    aot_gpr_31 = (0x0898E788u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E788u) goto L_0898E788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E78C;
L_0898E78C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E7A8;
    }
    goto L_0898E7A8;
L_0898E7A8:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E7C4;
      }
      goto L_0898E7B8;
    }
L_0898E7B8:
    aot_gpr_31 = (0x0898E7C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E7C0u) goto L_0898E7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E7C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E7C4;
L_0898E7C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E7E0;
    }
    goto L_0898E7E0;
L_0898E7E0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E7FC;
      }
      goto L_0898E7F0;
    }
L_0898E7F0:
    aot_gpr_31 = (0x0898E7F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E7F8u) goto L_0898E7F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E7FC;
L_0898E7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E814;
    }
    goto L_0898E814;
L_0898E814:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E830;
      }
      goto L_0898E824;
    }
L_0898E824:
    aot_gpr_31 = (0x0898E82Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E82Cu) goto L_0898E82C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E82C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E830;
L_0898E830:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E84C;
    }
    goto L_0898E84C;
L_0898E84C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E868;
      }
      goto L_0898E85C;
    }
L_0898E85C:
    aot_gpr_31 = (0x0898E864u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E864u) goto L_0898E864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E868;
L_0898E868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E884;
    }
    goto L_0898E884;
L_0898E884:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E8A0;
      }
      goto L_0898E894;
    }
L_0898E894:
    aot_gpr_31 = (0x0898E89Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E89Cu) goto L_0898E89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E89C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E8A0;
L_0898E8A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E8BC;
    }
    goto L_0898E8BC;
L_0898E8BC:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898E8D8;
      }
      goto L_0898E8CC;
    }
L_0898E8CC:
    aot_gpr_31 = (0x0898E8D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E8D4u) goto L_0898E8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E8D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    goto L_0898E8D8;
L_0898E8D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_0898E8F4;
    }
    goto L_0898E8F4;
L_0898E8F4:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898E914;
      }
      goto L_0898E904;
    }
L_0898E904:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898E918;
      }
      goto L_0898E910;
    }
L_0898E910:
    aot_gpr_4 = (0u | 1u);
    goto L_0898E914;
L_0898E914:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898E918;
L_0898E918:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898E96C;
      }
      goto L_0898E920;
    }
L_0898E920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0898E948;
      }
      goto L_0898E930;
    }
L_0898E930:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0898E940u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E940u) goto L_0898E940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E940:
    aot_gpr_31 = (0x0898E948u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16124));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E948u) goto L_0898E948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E948:
    aot_gpr_31 = (0x0898E950u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898E950u) goto L_0898E950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898E950:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[17] = (2201u << 16u);
      if (branch_taken) {
          goto L_0898E960;
      }
      goto L_0898E958;
    }
L_0898E958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
      if (branch_taken) {
          goto L_0898E964;
      }
      goto L_0898E960;
    }
L_0898E960:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7552));
    goto L_0898E964;
L_0898E964:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    goto L_0898E96C;
L_0898E96C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(166)));
      if (branch_taken) {
          goto L_0898E990;
      }
      goto L_0898E980;
    }
L_0898E980:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898E994;
      }
      goto L_0898E98C;
    }
L_0898E98C:
    aot_gpr_5 = (0u | 1u);
    goto L_0898E990;
L_0898E990:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0898E994;
L_0898E994:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898E9A4;
      }
      goto L_0898E99C;
    }
L_0898E99C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(204), aot_gpr_5);
    goto L_0898E9A4;
L_0898E9A4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898E9D0;
      }
      goto L_0898E9B0;
    }
L_0898E9B0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(40))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_0898E9D0;
L_0898E9D0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0898EA2C;
      }
      goto L_0898E9DC;
    }
L_0898E9DC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898EA14;
      }
      goto L_0898E9E8;
    }
L_0898E9E8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898EA08;
      }
      goto L_0898E9F4;
    }
L_0898E9F4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898EA08;
      }
      goto L_0898EA00;
    }
L_0898EA00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0898EA2C;
      }
      goto L_0898EA08;
    }
L_0898EA08:
    aot_gpr_5 = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_0898EA2C;
      }
      goto L_0898EA14;
    }
L_0898EA14:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898EA2C;
      }
      goto L_0898EA1C;
    }
L_0898EA1C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898EA2C;
      }
      goto L_0898EA28;
    }
L_0898EA28:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0898EA2C;
L_0898EA2C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA34;
    }
L_0898EA34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA40;
    }
L_0898EA40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA4C;
    }
L_0898EA4C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA58;
    }
L_0898EA58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA64;
    }
L_0898EA64:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA70;
    }
L_0898EA70:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA7C;
    }
L_0898EA7C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA88;
    }
L_0898EA88:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EA94;
    }
L_0898EA94:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAA0;
    }
L_0898EAA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAAC;
    }
L_0898EAAC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAB8;
    }
L_0898EAB8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAC4;
    }
L_0898EAC4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAD0;
    }
L_0898EAD0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EADC;
    }
L_0898EADC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAE8;
    }
L_0898EAE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EAF4;
    }
L_0898EAF4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EB00;
    }
L_0898EB00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(46))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB18;
      }
      goto L_0898EB0C;
    }
L_0898EB0C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898EB20;
      }
      goto L_0898EB18;
    }
L_0898EB18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(184), aot_gpr_4);
    goto L_0898EB20;
L_0898EB20:
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB3C;
      }
      goto L_0898EB38;
    }
L_0898EB38:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    goto L_0898EB3C;
L_0898EB3C:
    aot_gpr_31 = (0x0898EB44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CE74;
L_0898EB44:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(166)));
    aot_gpr_4 = (0u | 8u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    goto L_0898EB58;
L_0898EB58:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(102))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0898EB58;
      }
      goto L_0898EB74;
    }
L_0898EB74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9285)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EB84;
      }
      goto L_0898EB80;
    }
L_0898EB80:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1048), static_cast<std::uint8_t>(0u));
    goto L_0898EB84;
L_0898EB84:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(167)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898EB98;
      }
      goto L_0898EB90;
    }
L_0898EB90:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0898EB98;
L_0898EB98:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
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
L_0898EBBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 << 24u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_5 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    goto L_0898EBE4;
L_0898EBE4:
    ctx.gpr[6] = (ctx.gpr[17] + aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(169))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0898EBE4;
      }
      goto L_0898EC00;
    }
L_0898EC00:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
        goto L_0898EC20;
    }
    goto L_0898EC10;
L_0898EC10:
    aot_gpr_31 = (0x0898EC18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EC18u) goto L_0898EC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EC18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    goto L_0898EC20;
L_0898EC20:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898EC58;
      }
      goto L_0898EC28;
    }
L_0898EC28:
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(169));
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EC3Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22016));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EC3Cu) goto L_0898EC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EC3C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EC60;
      }
      goto L_0898EC44;
    }
L_0898EC44:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EC50u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 146u, 0x08988E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EC50u) goto L_0898EC50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EC50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EC58;
    }
L_0898EC58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EC60;
    }
L_0898EC60:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EC70u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22007));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EC70u) goto L_0898EC70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EC70:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EC8C;
      }
      goto L_0898EC78;
    }
L_0898EC78:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EC84u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 200u, 0x089890ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EC84u) goto L_0898EC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EC84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EC8C;
    }
L_0898EC8C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EC9Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21998));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EC9Cu) goto L_0898EC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EC9C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898ECB8;
      }
      goto L_0898ECA4;
    }
L_0898ECA4:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898ECB0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 252u, 0x08989338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ECB0u) goto L_0898ECB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ECB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898ECB8;
    }
L_0898ECB8:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898ECC8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21989));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ECC8u) goto L_0898ECC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ECC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898ECE4;
      }
      goto L_0898ECD0;
    }
L_0898ECD0:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898ECDCu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 487u, 0x0898A0A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ECDCu) goto L_0898ECDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ECDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898ECE4;
    }
L_0898ECE4:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898ECF4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21980));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ECF4u) goto L_0898ECF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ECF4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898ED10;
      }
      goto L_0898ECFC;
    }
L_0898ECFC:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898ED08u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 499u, 0x0898A184u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED08u) goto L_0898ED08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898ED10;
    }
L_0898ED10:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898ED20u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21971));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED20u) goto L_0898ED20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED20:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898ED40;
      }
      goto L_0898ED28;
    }
L_0898ED28:
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0898ED38u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 316u, 0x0898967Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED38u) goto L_0898ED38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898ED40;
    }
L_0898ED40:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898ED50u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21962));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED50u) goto L_0898ED50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED50:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898ED6C;
      }
      goto L_0898ED58;
    }
L_0898ED58:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898ED64u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 512u, 0x0898A254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED64u) goto L_0898ED64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898ED6C;
    }
L_0898ED6C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898ED7Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21953));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED7Cu) goto L_0898ED7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED7C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898ED98;
      }
      goto L_0898ED84;
    }
L_0898ED84:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898ED90u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 528u, 0x0898A334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ED90u) goto L_0898ED90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ED90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898ED98;
    }
L_0898ED98:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EDA8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21944));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EDA8u) goto L_0898EDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EDA8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EDC4;
      }
      goto L_0898EDB0;
    }
L_0898EDB0:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EDBCu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 542u, 0x0898A3F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EDBCu) goto L_0898EDBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EDBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EDC4;
    }
L_0898EDC4:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EDD4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21935));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EDD4u) goto L_0898EDD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EDD4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EDF0;
      }
      goto L_0898EDDC;
    }
L_0898EDDC:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EDE8u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 555u, 0x0898A4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EDE8u) goto L_0898EDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EDE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EDF0;
    }
L_0898EDF0:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EE00u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21926));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE00u) goto L_0898EE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE00:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EE1C;
      }
      goto L_0898EE08;
    }
L_0898EE08:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EE14u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 568u, 0x0898A55Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE14u) goto L_0898EE14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EE1C;
    }
L_0898EE1C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EE2Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21917));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE2Cu) goto L_0898EE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE2C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EE48;
      }
      goto L_0898EE34;
    }
L_0898EE34:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EE40u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 581u, 0x0898A610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE40u) goto L_0898EE40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EE48;
    }
L_0898EE48:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EE58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21908));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE58u) goto L_0898EE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE58:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EE74;
      }
      goto L_0898EE60;
    }
L_0898EE60:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EE6Cu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 594u, 0x0898A6C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE6Cu) goto L_0898EE6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EE74;
    }
L_0898EE74:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EE84u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21899));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE84u) goto L_0898EE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE84:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EEA0;
      }
      goto L_0898EE8C;
    }
L_0898EE8C:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EE98u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 388u, 0x08989AD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EE98u) goto L_0898EE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EE98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EEA0;
    }
L_0898EEA0:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EEB0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21890));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EEB0u) goto L_0898EEB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EEB0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EECC;
      }
      goto L_0898EEB8;
    }
L_0898EEB8:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EEC4u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 607u, 0x0898A778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EEC4u) goto L_0898EEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EEC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EECC;
    }
L_0898EECC:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EEDCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21881));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EEDCu) goto L_0898EEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EEDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EEF8;
      }
      goto L_0898EEE4;
    }
L_0898EEE4:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EEF0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 392u, 0x08989B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EEF0u) goto L_0898EEF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EEF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EEF8;
    }
L_0898EEF8:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EF08u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21872));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF08u) goto L_0898EF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF08:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EF24;
      }
      goto L_0898EF10;
    }
L_0898EF10:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EF1Cu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 415u, 0x08989C58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF1Cu) goto L_0898EF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EF24;
    }
L_0898EF24:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EF34u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21863));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF34u) goto L_0898EF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF34:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EF50;
      }
      goto L_0898EF3C;
    }
L_0898EF3C:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EF48u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 432u, 0x08989D54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF48u) goto L_0898EF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EF50;
    }
L_0898EF50:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EF60u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21854));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF60u) goto L_0898EF60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF60:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EF7C;
      }
      goto L_0898EF68;
    }
L_0898EF68:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EF74u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 447u, 0x08989E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF74u) goto L_0898EF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EF7C;
    }
L_0898EF7C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EF8Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21845));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EF8Cu) goto L_0898EF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EF8C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EFA8;
      }
      goto L_0898EF94;
    }
L_0898EF94:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EFA0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 459u, 0x08989EF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EFA0u) goto L_0898EFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EFA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EFA8;
    }
L_0898EFA8:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EFB8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21836));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EFB8u) goto L_0898EFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EFB8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898EFD4;
      }
      goto L_0898EFC0;
    }
L_0898EFC0:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EFCCu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 473u, 0x08989FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EFCCu) goto L_0898EFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EFCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898EFD4;
    }
L_0898EFD4:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898EFE4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21827));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EFE4u) goto L_0898EFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EFE4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F000;
      }
      goto L_0898EFEC;
    }
L_0898EFEC:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898EFF8u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 619u, 0x0898A830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898EFF8u) goto L_0898EFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898EFF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F000;
    }
L_0898F000:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F010u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21818));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F010u) goto L_0898F010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F010:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F02C;
      }
      goto L_0898F018;
    }
L_0898F018:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F024u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 679u, 0x0898ABC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F024u) goto L_0898F024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F024:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F02C;
    }
L_0898F02C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F03Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21809));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F03Cu) goto L_0898F03C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F03C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F058;
      }
      goto L_0898F044;
    }
L_0898F044:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F050u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 693u, 0x0898ACA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F050u) goto L_0898F050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F050:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F058;
    }
L_0898F058:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F068u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21800));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F068u) goto L_0898F068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F068:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F084;
      }
      goto L_0898F070;
    }
L_0898F070:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F07Cu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 705u, 0x0898AD50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F07Cu) goto L_0898F07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F07C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F084;
    }
L_0898F084:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F094u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21791));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F094u) goto L_0898F094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F094:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F0B0;
      }
      goto L_0898F09C;
    }
L_0898F09C:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F0A8u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 717u, 0x0898AE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F0A8u) goto L_0898F0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F0A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F0B0;
    }
L_0898F0B0:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F0C0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21782));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F0C0u) goto L_0898F0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F0C0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F0DC;
      }
      goto L_0898F0C8;
    }
L_0898F0C8:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F0D4u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 390u, 0x08989AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F0D4u) goto L_0898F0D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F0D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F0DC;
    }
L_0898F0DC:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F0ECu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21755));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F0ECu) goto L_0898F0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F0EC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F180;
      }
      goto L_0898F0F4;
    }
L_0898F0F4:
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
      if (branch_taken) {
          goto L_0898F120;
      }
      goto L_0898F114;
    }
L_0898F114:
    aot_gpr_31 = (0x0898F11Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F11Cu) goto L_0898F11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F11C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0898F120;
L_0898F120:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0898F158;
      }
      goto L_0898F12C;
    }
L_0898F12C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0898F138u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F138u) goto L_0898F138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F138:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0898F150;
      }
      goto L_0898F144;
    }
L_0898F144:
    aot_gpr_31 = (0x0898F14Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F14Cu) goto L_0898F14C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F14C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898F150;
L_0898F150:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0898F158;
L_0898F158:
    aot_gpr_31 = (0x0898F160u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F160u) goto L_0898F160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F160:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898F178u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F178u) goto L_0898F178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F178:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F180;
    }
L_0898F180:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F190u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21746));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F190u) goto L_0898F190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F190:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F224;
      }
      goto L_0898F198;
    }
L_0898F198:
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
      if (branch_taken) {
          goto L_0898F1C4;
      }
      goto L_0898F1B8;
    }
L_0898F1B8:
    aot_gpr_31 = (0x0898F1C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F1C0u) goto L_0898F1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F1C0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0898F1C4;
L_0898F1C4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0898F1FC;
      }
      goto L_0898F1D0;
    }
L_0898F1D0:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0898F1DCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F1DCu) goto L_0898F1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F1DC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0898F1F4;
      }
      goto L_0898F1E8;
    }
L_0898F1E8:
    aot_gpr_31 = (0x0898F1F0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F1F0u) goto L_0898F1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F1F0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898F1F4;
L_0898F1F4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0898F1FC;
L_0898F1FC:
    aot_gpr_31 = (0x0898F204u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F204u) goto L_0898F204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F204:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898F21Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F21Cu) goto L_0898F21C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F21C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F224;
    }
L_0898F224:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F234u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21773));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F234u) goto L_0898F234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F234:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F250;
      }
      goto L_0898F23C;
    }
L_0898F23C:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F248u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 729u, 0x0898AEB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F248u) goto L_0898F248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F248:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F250;
    }
L_0898F250:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F260u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21764));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F260u) goto L_0898F260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F260:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F27C;
      }
      goto L_0898F268;
    }
L_0898F268:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F274u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 760u, 0x0898B070u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F274u) goto L_0898F274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F274:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F27C;
    }
L_0898F27C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F28Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21737));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F28Cu) goto L_0898F28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F28C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F2A8;
      }
      goto L_0898F294;
    }
L_0898F294:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F2A0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 631u, 0x0898A8E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F2A0u) goto L_0898F2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F2A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F2A8;
    }
L_0898F2A8:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F2B8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21728));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F2B8u) goto L_0898F2B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F2B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F2D4;
      }
      goto L_0898F2C0;
    }
L_0898F2C0:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F2CCu);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 643u, 0x0898A9A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F2CCu) goto L_0898F2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F2CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F2D4;
    }
L_0898F2D4:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F2E4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21719));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F2E4u) goto L_0898F2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F2E4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F300;
      }
      goto L_0898F2EC;
    }
L_0898F2EC:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F2F8u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 655u, 0x0898AA58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F2F8u) goto L_0898F2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F2F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F300;
    }
L_0898F300:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F310u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21710));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F310u) goto L_0898F310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F310:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F32C;
      }
      goto L_0898F318;
    }
L_0898F318:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F324u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 667u, 0x0898AB10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F324u) goto L_0898F324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F324:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F32C;
    }
L_0898F32C:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0898F33Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21701));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 772u, 0x0898B120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F33Cu) goto L_0898F33C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F33C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F350;
      }
      goto L_0898F344;
    }
L_0898F344:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0898F350u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 304u, 0x089895C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F350u) goto L_0898F350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F350:
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
L_0898F36C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x0898F384u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F384u) goto L_0898F384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F384:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0898F464;
      }
      goto L_0898F390;
    }
L_0898F390:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898F3A4;
      }
      goto L_0898F39C;
    }
L_0898F39C:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_0898F3A4;
L_0898F3A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_0898F3EC;
      }
      goto L_0898F3B0;
    }
L_0898F3B0:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < -32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898F3C8;
      }
      goto L_0898F3BC;
    }
L_0898F3BC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898F430;
      }
      goto L_0898F3C8;
    }
L_0898F3C8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898F430;
      }
      goto L_0898F3EC;
    }
L_0898F3EC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
      if (branch_taken) {
          goto L_0898F430;
      }
      goto L_0898F3F8;
    }
L_0898F3F8:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 33 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898F410;
      }
      goto L_0898F404;
    }
L_0898F404:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898F430;
      }
      goto L_0898F410;
    }
L_0898F410:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_4 = (ctx.gpr[6] - aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_0898F430;
L_0898F430:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-96));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
        goto L_0898F444;
    }
    goto L_0898F444;
L_0898F444:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (0u | 96u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
        goto L_0898F45C;
    }
    goto L_0898F45C;
L_0898F45C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898F468;
      }
      goto L_0898F464;
    }
L_0898F464:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996), static_cast<std::uint16_t>(0u));
    goto L_0898F468;
L_0898F468:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898F498;
      }
      goto L_0898F47C;
    }
L_0898F47C:
    aot_gpr_31 = (0x0898F484u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F484u) goto L_0898F484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F484:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898F4A0;
      }
      goto L_0898F490;
    }
L_0898F490:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F4C0;
      }
      goto L_0898F498;
    }
L_0898F498:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898F5B4;
      }
      goto L_0898F4A0;
    }
L_0898F4A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898F4C0;
      }
      goto L_0898F4B0;
    }
L_0898F4B0:
    aot_gpr_31 = (0x0898F4B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0898CF8C;
L_0898F4B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898F504;
      }
      goto L_0898F4C0;
    }
L_0898F4C0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0898F50C;
    }
    goto L_0898F4D0;
L_0898F4D0:
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_0898F4E0;
    }
    goto L_0898F4D8;
L_0898F4D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898F5B4;
      }
      goto L_0898F4E0;
    }
L_0898F4E0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(102))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898F5B4;
      }
      goto L_0898F504;
    }
L_0898F504:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898F5B4;
      }
      goto L_0898F50C;
    }
L_0898F50C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898F4D8;
      }
      goto L_0898F514;
    }
L_0898F514:
    aot_gpr_31 = (0x0898F51Cu);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F51Cu) goto L_0898F51C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F51C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898F560;
      }
      goto L_0898F528;
    }
L_0898F528:
    aot_gpr_31 = (0x0898F530u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F530u) goto L_0898F530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F530:
    aot_gpr_4 = (0u | 3u);
    if (aot_gpr_2 == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_0898F594;
    }
    goto L_0898F53C;
L_0898F53C:
    aot_gpr_31 = (0x0898F544u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F544u) goto L_0898F544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F544:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898F560;
      }
      goto L_0898F550;
    }
L_0898F550:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 198u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_0898F594;
    }
    goto L_0898F560;
L_0898F560:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_0898F574;
    }
    goto L_0898F56C;
L_0898F56C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898F4D8;
      }
      goto L_0898F574;
    }
L_0898F574:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(102))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898F5B4;
      }
      goto L_0898F594;
    }
L_0898F594:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-15996))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(102))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898F5B4;
      }
      goto L_0898F5B4;
    }
L_0898F5B4:
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
L_0898F5C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[7] = (2201u << 16u);
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[6] = (0u | 216u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898F5ECu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-19672));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F5ECu) goto L_0898F5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F5EC:
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
L_0898F5F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898F618u);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F618u) goto L_0898F618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F618:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0898F640u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 391u, 0x08A1A8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F640u) goto L_0898F640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F640:
    aot_gpr_2 = (0u | 0u);
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
L_0898F654:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[6] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898F678u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F678u) goto L_0898F678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_gpr_4 << 16u);
    ctx.gpr[7] = (aot_gpr_5 << 16u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0898F6A4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F6A4u) goto L_0898F6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F6A4:
    aot_gpr_2 = (0u | 0u);
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
L_0898F6B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0898F6E0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F6E0u) goto L_0898F6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F6E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x0898F6ECu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F6ECu) goto L_0898F6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F6EC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898F724;
      }
      goto L_0898F6F8;
    }
L_0898F6F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_gpr_5 << 16u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0898F724u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F724u) goto L_0898F724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F724:
    aot_gpr_2 = (0u | 0u);
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
L_0898F73C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0898F764u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F764u) goto L_0898F764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x0898F770u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F770u) goto L_0898F770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F770:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898F7A8;
      }
      goto L_0898F77C;
    }
L_0898F77C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_gpr_5 << 16u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0898F7A8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F7A8u) goto L_0898F7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F7A8:
    aot_gpr_2 = (0u | 0u);
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
L_0898F7C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898F7D4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F7D4u) goto L_0898F7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F7D4:
    aot_gpr_2 = (0u | 0u);
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
L_0898F7E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_31 = (0x0898F80Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F80Cu) goto L_0898F80C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F80C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0898F850u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F850u) goto L_0898F850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F850:
    aot_gpr_2 = (0u | 0u);
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
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_0898F868:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x0898F898u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F898u) goto L_0898F898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F898:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0898F8D0;
      }
      goto L_0898F8B8;
    }
L_0898F8B8:
    aot_gpr_4 = (50042u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898F8E0;
      }
      goto L_0898F8D0;
    }
L_0898F8D0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0898F8DCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F8DCu) goto L_0898F8DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F8DC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0898F8E0;
L_0898F8E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_gpr_4 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x0898F90Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 261u, 0x08A1D580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F90Cu) goto L_0898F90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F90C:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
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
L_0898F92C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0898F954u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F954u) goto L_0898F954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F954:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x0898F978u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F978u) goto L_0898F978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F978:
    aot_gpr_2 = (0u | 0u);
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
L_0898F990:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_gpr_31 = (0x0898F9B8u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898F9B8u) goto L_0898F9B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898F9B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898F9E4;
      }
      goto L_0898F9DC;
    }
L_0898F9DC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0898F9F0;
      }
      goto L_0898F9E4;
    }
L_0898F9E4:
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    goto L_0898F9F0;
L_0898F9F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0898FA08u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FA08u) goto L_0898FA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FA08:
    aot_gpr_2 = (0u | 0u);
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
L_0898FA20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898FA3Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 53u, 0x08A1C640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FA3Cu) goto L_0898FA3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FA3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898FA4C;
      }
      goto L_0898FA44;
    }
L_0898FA44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0898FA50;
      }
      goto L_0898FA4C;
    }
L_0898FA4C:
    aot_gpr_4 = (0u | 0u);
    goto L_0898FA50;
L_0898FA50:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FA74;
      }
      goto L_0898FA6C;
    }
L_0898FA6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FA74;
    }
L_0898FA74:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FAA0;
      }
      goto L_0898FA94;
    }
L_0898FA94:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FAA0;
    }
L_0898FAA0:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FAB8;
    }
L_0898FAB8:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_0898FABC;
L_0898FABC:
    aot_gpr_2 = (0u | 0u);
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
L_0898FAD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898FAE4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FAE4u) goto L_0898FAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FAE4:
    aot_gpr_2 = (0u | 0u);
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
L_0898FAF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898FB14u);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FB14u) goto L_0898FB14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FB14:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[6] = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
      if (branch_taken) {
          goto L_0898FB68;
      }
      goto L_0898FB4C;
    }
L_0898FB4C:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] << 16u);
    aot_gpr_31 = (0x0898FB60u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 236u, 0x08A1D3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FB60u) goto L_0898FB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FB60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898FB88;
      }
      goto L_0898FB68;
    }
L_0898FB68:
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
      if (branch_taken) {
          goto L_0898FB88;
      }
      goto L_0898FB74;
    }
L_0898FB74:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] << 16u);
    aot_gpr_31 = (0x0898FB88u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 223u, 0x08A1D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FB88u) goto L_0898FB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FB88:
    aot_gpr_2 = (0u | 0u);
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
L_0898FB9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898FBB0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 141u, 0x08A1CE7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FBB0u) goto L_0898FBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FBB0:
    aot_gpr_2 = (0u | 0u);
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
L_0898FBC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898FBD4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 148u, 0x08A1CEECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FBD4u) goto L_0898FBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FBD4:
    aot_gpr_2 = (0u | 0u);
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
L_0898FBE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898FC04u);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FC04u) goto L_0898FC04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FC04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898FC1C;
      }
      goto L_0898FC10;
    }
L_0898FC10:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5465), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898FC20;
      }
      goto L_0898FC1C;
    }
L_0898FC1C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5465), static_cast<std::uint8_t>(0u));
    goto L_0898FC20;
L_0898FC20:
    aot_gpr_2 = (0u | 0u);
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
L_0898FC34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898FC54u);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FC54u) goto L_0898FC54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FC54:
    aot_gpr_4 = (2236u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_31 = (0x0898FC64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 166u, 0x08A1D008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FC64u) goto L_0898FC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FC64:
    aot_gpr_2 = (0u | 0u);
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
L_0898FC78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0898FCA0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FCA0u) goto L_0898FCA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FCA0:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x0898FCC0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 193u, 0x08A1D150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FCC0u) goto L_0898FCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FCC0:
    aot_gpr_2 = (0u | 0u);
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
L_0898FCD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[8] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_0898FD30;
      }
      goto L_0898FD1C;
    }
L_0898FD1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1972)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FD38;
      }
      goto L_0898FD30;
    }
L_0898FD30:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), ctx.gpr[6]);
    goto L_0898FD38;
L_0898FD38:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0898FD44u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FD44u) goto L_0898FD44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FD44:
    aot_gpr_2 = (0u | 0u);
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
L_0898FD54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32304));
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_31 = (0x0898FD80u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FD80u) goto L_0898FD80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FD80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0898FDC0;
      }
      goto L_0898FDB0;
    }
L_0898FDB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0898FDC0;
L_0898FDC0:
    aot_gpr_2 = (0u | 0u);
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
L_0898FDD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(29704), aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0898FE24u);
    ctx.gpr[6] = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FE24u) goto L_0898FE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FE24:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
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
L_0898FE34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    ctx.gpr[6] = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2236u << 16u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(29704), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0898FE9Cu);
    ctx.gpr[6] = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FE9Cu) goto L_0898FE9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FE9C:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
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
L_0898FEAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0898FED4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FED4u) goto L_0898FED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FED4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_16 = (2236u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_0898FEF4;
      }
      goto L_0898FEE4;
    }
L_0898FEE4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0898FEF0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FEF0u) goto L_0898FEF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FEF0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), aot_gpr_2);
    goto L_0898FEF4;
L_0898FEF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0898FF10;
      }
      goto L_0898FF00;
    }
L_0898FF00:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0898FF0Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FF0Cu) goto L_0898FF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FF0C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), aot_gpr_2);
    goto L_0898FF10;
L_0898FF10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898FF28;
      }
      goto L_0898FF1C;
    }
L_0898FF1C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2054), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0898FF38;
      }
      goto L_0898FF28;
    }
L_0898FF28:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2054), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0898FF38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FF38u) goto L_0898FF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FF38:
    aot_gpr_2 = (0u | 0u);
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
L_0898FF50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[8] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_0898FFA8;
      }
      goto L_0898FF94;
    }
L_0898FF94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1944)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FFB0;
      }
      goto L_0898FFA8;
    }
L_0898FFA8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), ctx.gpr[6]);
    goto L_0898FFB0;
L_0898FFB0:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0898FFBCu);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FFBCu) goto L_0898FFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FFBC:
    aot_gpr_2 = (0u | 0u);
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
L_0898FFCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898FFECu);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898FFECu) goto L_0898FFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898FFEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    ctx.pc = 0x08990000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0098(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0098_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_98(Runtime &runtime) {
    runtime.register_generated_unit(98u, 0x0898C000u, 16384u, &recomp_unit_0098, &recomp_unit_0098_entry);
    runtime.register_function(0x0898C000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C008u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C014u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C020u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C024u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C028u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C030u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C03Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C040u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C054u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C060u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C06Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C070u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C078u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C084u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C090u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C094u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C098u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C104u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C10Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C118u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C120u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C128u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C130u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C138u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C140u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C148u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C150u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C178u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C180u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C188u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C190u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C198u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C208u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C210u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C218u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C220u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C228u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C230u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C238u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C244u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C24Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C258u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C260u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C26Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C278u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C280u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C288u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C290u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C298u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C300u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C310u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C318u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C320u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C328u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C330u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C338u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C364u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C374u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C394u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C400u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C408u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C410u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C420u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C440u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C448u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C454u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C460u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C46Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C490u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C510u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C520u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C52Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C534u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C53Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C544u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C54Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C568u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C578u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C59Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C604u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C624u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C62Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C638u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C644u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C650u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C674u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C67Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C684u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C68Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C728u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C730u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C738u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C76Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C774u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C780u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C788u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C790u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C800u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C810u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C81Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C828u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C82Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C834u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C844u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C84Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C858u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C860u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C864u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C86Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C878u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C88Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C894u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C89Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C904u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C90Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C910u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C924u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C94Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C97Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C984u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C98Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CACCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CED0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CED8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D004u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D018u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D024u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D02Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D034u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D040u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D048u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D050u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D074u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D084u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D08Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D098u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D104u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D10Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D114u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D120u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D128u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D130u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D140u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D15Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D168u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D174u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D180u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D18Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D194u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D19Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D208u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D210u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D21Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D220u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D224u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D22Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D240u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D24Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D254u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D25Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D264u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D268u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D270u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D284u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D290u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D298u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D300u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D314u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D320u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D328u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D330u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D33Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D34Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D354u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D368u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D370u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D378u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D380u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D388u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D390u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D398u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D404u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D410u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D42Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D438u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D440u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D448u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D450u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D458u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D464u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D480u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D48Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D494u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D49Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D500u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D50Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D528u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D534u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D53Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D544u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D54Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D584u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D58Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D594u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D604u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D60Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D620u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D624u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D628u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D638u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D654u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D660u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D668u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D674u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D67Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D684u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D68Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D698u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D69Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D708u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D710u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D718u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D720u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D728u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D734u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D758u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D764u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D76Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D774u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D77Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D784u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D78Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D804u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D80Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D818u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D820u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D82Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D838u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D840u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D848u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D854u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D86Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D878u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D888u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D88Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D914u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D920u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D928u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D938u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D940u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D944u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D950u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D960u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D968u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D988u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D994u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D99Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DECCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DED4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E004u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E014u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E018u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E030u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E04Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E06Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E070u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E080u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E100u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E104u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E110u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E11Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E124u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E12Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E138u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E14Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E174u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E178u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E188u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E214u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E228u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E23Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E240u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E250u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E264u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E280u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E288u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E300u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E308u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E31Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E324u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E32Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E334u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E338u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E340u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E34Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E354u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E35Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E388u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E390u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E394u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E404u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E408u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E428u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E43Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E444u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E44Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E454u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E464u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E514u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E54Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E568u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E570u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E628u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E63Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E650u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E660u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E668u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E66Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E688u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E698u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E700u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E710u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E718u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E71Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E738u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E748u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E754u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E770u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E780u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E788u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E78Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E814u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E824u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E82Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E830u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E84Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E85Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E864u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E868u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E884u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E894u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E89Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E904u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E910u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E914u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E918u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E920u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E940u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E948u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E950u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E958u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E960u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E964u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E96Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E980u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E98Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E990u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E994u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E99Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EADCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EECCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F010u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F018u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F024u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F02Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F03Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F050u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F058u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F068u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F070u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F07Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F084u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F094u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F09Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F114u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F11Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F120u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F12Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F138u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F144u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F14Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F150u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F158u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F178u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F180u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F190u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F198u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F204u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F21Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F224u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F234u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F23Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F248u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F250u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F260u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F268u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F274u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F27Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F28Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F294u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F300u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F310u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F318u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F324u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F32Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F33Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F350u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F384u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F390u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F39Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F404u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F410u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F430u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F444u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F45Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F464u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F468u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F47Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F484u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F490u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F504u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F50Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F514u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F51Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F528u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F530u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F53Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F544u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F550u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F56Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F574u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F594u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F618u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F654u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F678u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F724u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F73Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F764u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F770u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F77Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F80Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F850u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F868u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F898u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F90Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F92Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F954u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F990u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FABCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FED4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFECu, &recomp_unit_0098, "recomp_unit_0098");
}
} // namespace psprecomp
