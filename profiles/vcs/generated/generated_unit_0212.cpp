#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0212[64] = {
    0x00002440A4000801ull, 0x1142114A48044508ull, 0x32228A4804194A42ull, 0x1149102111289008ull,
    0x0100128810402488ull, 0x2081010092220208ull, 0x4528250119523401ull, 0xA954AA4A92A10CA4ull,
    0xA55254952A954AA4ull, 0x804952A95495254Aull, 0x0252922088A38C44ull, 0xAC8A29282812B480ull,
    0x00210000880200AAull, 0x8044850000000000ull, 0x5555555411D4D254ull, 0x201082A82AA85405ull,
    0x69010D082C144092ull, 0x555062D202AAA831ull, 0x2054408AAAA35A45ull, 0x5800000800000565ull,
    0x254C640109202214ull, 0x48214810292569A9ull, 0x48004010290A024Dull, 0x80520122500400AAull,
    0x0210800200000800ull, 0x0501088041200121ull, 0x000B14090A005200ull, 0x900146A440010010ull,
    0x0944044911504888ull, 0x074942A18234844Dull, 0x10D50234844D0924ull, 0x0402552600400500ull,
    0x4401204211A80520ull, 0x2840542542935102ull, 0x004212501024D02Bull, 0x0440002000508000ull,
    0x4020802820011228ull, 0x0155035120121122ull, 0x6009240010222381ull, 0x254AAA0A16108000ull,
    0x4884000000002A09ull, 0x08D498244A020D58ull, 0x81043208640924A0ull, 0x0C00244889022124ull,
    0x514AA58152302551ull, 0xD5481A8109048550ull, 0x6A02161AA9006150ull, 0x441835200C283520ull,
    0x208292AB4950248Cull, 0x00092CA88284A24Bull, 0x8C42945122104C91ull, 0x20A1224935A55524ull,
    0x484123551A4C4B2Aull, 0xA20420004004C668ull, 0x0A550C4269810AA6ull, 0x84888020449204A0ull,
    0x0005202AA4998004ull, 0x4014B592A4A00AD4ull, 0x0200A54A9004006Bull, 0x508009401A548008ull,
    0x090E504210844155ull, 0x400010001000400Aull, 0x108802000A008802ull, 0xA294022451652848ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0212[64] = {
    1u, 9u, 25u, 44u, 59u, 70u, 81u, 100u, 125u, 152u, 176u, 195u, 216u, 225u, 231u, 259u,
    277u, 295u, 319u, 342u, 352u, 369u, 390u, 404u, 418u, 423u, 434u, 446u, 458u, 474u, 496u, 516u,
    528u, 542u, 561u, 577u, 583u, 594u, 611u, 625u, 642u, 651u, 671u, 687u, 701u, 724u, 744u, 764u,
    782u, 803u, 822u, 842u, 865u, 889u, 903u, 925u, 939u, 954u, 976u, 992u, 1006u, 1024u, 1030u, 1039u,
};
void recomp_unit_0212_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,16,6 fprs=12,13,20,0 gpr_occ=4279 fpr_occ=61 gpr_total=6372 fpr_total=83
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B54000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0212[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0212[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B54000;
    case 2u: goto L_08B5402C;
    case 3u: goto L_08B54068;
    case 4u: goto L_08B54074;
    case 5u: goto L_08B5407C;
    case 6u: goto L_08B54098;
    case 7u: goto L_08B540A8;
    case 8u: goto L_08B540B4;
    case 9u: goto L_08B5410C;
    case 10u: goto L_08B54120;
    case 11u: goto L_08B54128;
    case 12u: goto L_08B54138;
    case 13u: goto L_08B54148;
    case 14u: goto L_08B5416C;
    case 15u: goto L_08B54178;
    case 16u: goto L_08B54184;
    case 17u: goto L_08B5418C;
    case 18u: goto L_08B54198;
    case 19u: goto L_08B541A0;
    case 20u: goto L_08B541B0;
    case 21u: goto L_08B541C4;
    case 22u: goto L_08B541D8;
    case 23u: goto L_08B541E0;
    case 24u: goto L_08B541F0;
    case 25u: goto L_08B54204;
    case 26u: goto L_08B54218;
    case 27u: goto L_08B54224;
    case 28u: goto L_08B5422C;
    case 29u: goto L_08B54238;
    case 30u: goto L_08B54240;
    case 31u: goto L_08B5424C;
    case 32u: goto L_08B54250;
    case 33u: goto L_08B54268;
    case 34u: goto L_08B5428C;
    case 35u: goto L_08B54298;
    case 36u: goto L_08B542A4;
    case 37u: goto L_08B542AC;
    case 38u: goto L_08B542BC;
    case 39u: goto L_08B542C4;
    case 40u: goto L_08B542D4;
    case 41u: goto L_08B542E4;
    case 42u: goto L_08B542F0;
    case 43u: goto L_08B542F4;
    case 44u: goto L_08B5430C;
    case 45u: goto L_08B54330;
    case 46u: goto L_08B5433C;
    case 47u: goto L_08B5434C;
    case 48u: goto L_08B54354;
    case 49u: goto L_08B54360;
    case 50u: goto L_08B54370;
    case 51u: goto L_08B54380;
    case 52u: goto L_08B54394;
    case 53u: goto L_08B543B0;
    case 54u: goto L_08B543C0;
    case 55u: goto L_08B543CC;
    case 56u: goto L_08B543D8;
    case 57u: goto L_08B543E0;
    case 58u: goto L_08B543F0;
    case 59u: goto L_08B5440C;
    case 60u: goto L_08B5441C;
    case 61u: goto L_08B54428;
    case 62u: goto L_08B54434;
    case 63u: goto L_08B54458;
    case 64u: goto L_08B54470;
    case 65u: goto L_08B5448C;
    case 66u: goto L_08B5449C;
    case 67u: goto L_08B544A4;
    case 68u: goto L_08B544B0;
    case 69u: goto L_08B544E0;
    case 70u: goto L_08B5450C;
    case 71u: goto L_08B54524;
    case 72u: goto L_08B54544;
    case 73u: goto L_08B54554;
    case 74u: goto L_08B54564;
    case 75u: goto L_08B54570;
    case 76u: goto L_08B5457C;
    case 77u: goto L_08B545A0;
    case 78u: goto L_08B545C0;
    case 79u: goto L_08B545DC;
    case 80u: goto L_08B545F4;
    case 81u: goto L_08B54600;
    case 82u: goto L_08B54628;
    case 83u: goto L_08B54630;
    case 84u: goto L_08B54634;
    case 85u: goto L_08B54644;
    case 86u: goto L_08B54650;
    case 87u: goto L_08B54658;
    case 88u: goto L_08B54660;
    case 89u: goto L_08B5466C;
    case 90u: goto L_08B54670;
    case 91u: goto L_08B54680;
    case 92u: goto L_08B546A0;
    case 93u: goto L_08B546A8;
    case 94u: goto L_08B546B4;
    case 95u: goto L_08B546CC;
    case 96u: goto L_08B546D4;
    case 97u: goto L_08B546E0;
    case 98u: goto L_08B546E8;
    case 99u: goto L_08B546F8;
    case 100u: goto L_08B54708;
    case 101u: goto L_08B54714;
    case 102u: goto L_08B5471C;
    case 103u: goto L_08B54728;
    case 104u: goto L_08B5472C;
    case 105u: goto L_08B54740;
    case 106u: goto L_08B54754;
    case 107u: goto L_08B5475C;
    case 108u: goto L_08B54764;
    case 109u: goto L_08B54770;
    case 110u: goto L_08B5477C;
    case 111u: goto L_08B54784;
    case 112u: goto L_08B5478C;
    case 113u: goto L_08B54798;
    case 114u: goto L_08B547A4;
    case 115u: goto L_08B547AC;
    case 116u: goto L_08B547B4;
    case 117u: goto L_08B547BC;
    case 118u: goto L_08B547C8;
    case 119u: goto L_08B547D0;
    case 120u: goto L_08B547D8;
    case 121u: goto L_08B547E0;
    case 122u: goto L_08B547EC;
    case 123u: goto L_08B547F4;
    case 124u: goto L_08B547FC;
    case 125u: goto L_08B54808;
    case 126u: goto L_08B54814;
    case 127u: goto L_08B5481C;
    case 128u: goto L_08B54824;
    case 129u: goto L_08B5482C;
    case 130u: goto L_08B54838;
    case 131u: goto L_08B54840;
    case 132u: goto L_08B54848;
    case 133u: goto L_08B54850;
    case 134u: goto L_08B5485C;
    case 135u: goto L_08B54864;
    case 136u: goto L_08B5486C;
    case 137u: goto L_08B54874;
    case 138u: goto L_08B54880;
    case 139u: goto L_08B54888;
    case 140u: goto L_08B54890;
    case 141u: goto L_08B5489C;
    case 142u: goto L_08B548A8;
    case 143u: goto L_08B548B0;
    case 144u: goto L_08B548B8;
    case 145u: goto L_08B548C4;
    case 146u: goto L_08B548D0;
    case 147u: goto L_08B548D8;
    case 148u: goto L_08B548E0;
    case 149u: goto L_08B548E8;
    case 150u: goto L_08B548F4;
    case 151u: goto L_08B548FC;
    case 152u: goto L_08B54904;
    case 153u: goto L_08B5490C;
    case 154u: goto L_08B54918;
    case 155u: goto L_08B54920;
    case 156u: goto L_08B54928;
    case 157u: goto L_08B54934;
    case 158u: goto L_08B54940;
    case 159u: goto L_08B54948;
    case 160u: goto L_08B54950;
    case 161u: goto L_08B5495C;
    case 162u: goto L_08B54968;
    case 163u: goto L_08B54970;
    case 164u: goto L_08B54978;
    case 165u: goto L_08B54980;
    case 166u: goto L_08B5498C;
    case 167u: goto L_08B54994;
    case 168u: goto L_08B5499C;
    case 169u: goto L_08B549A4;
    case 170u: goto L_08B549B0;
    case 171u: goto L_08B549B8;
    case 172u: goto L_08B549C0;
    case 173u: goto L_08B549CC;
    case 174u: goto L_08B549D8;
    case 175u: goto L_08B549FC;
    case 176u: goto L_08B54A08;
    case 177u: goto L_08B54A18;
    case 178u: goto L_08B54A28;
    case 179u: goto L_08B54A2C;
    case 180u: goto L_08B54A3C;
    case 181u: goto L_08B54A40;
    case 182u: goto L_08B54A44;
    case 183u: goto L_08B54A54;
    case 184u: goto L_08B54A5C;
    case 185u: goto L_08B54A6C;
    case 186u: goto L_08B54A7C;
    case 187u: goto L_08B54A94;
    case 188u: goto L_08B54AA4;
    case 189u: goto L_08B54AB0;
    case 190u: goto L_08B54ABC;
    case 191u: goto L_08B54AC4;
    case 192u: goto L_08B54AD0;
    case 193u: goto L_08B54AD8;
    case 194u: goto L_08B54AE4;
    case 195u: goto L_08B54B1C;
    case 196u: goto L_08B54B28;
    case 197u: goto L_08B54B30;
    case 198u: goto L_08B54B34;
    case 199u: goto L_08B54B3C;
    case 200u: goto L_08B54B44;
    case 201u: goto L_08B54B50;
    case 202u: goto L_08B54B6C;
    case 203u: goto L_08B54B74;
    case 204u: goto L_08B54B8C;
    case 205u: goto L_08B54B94;
    case 206u: goto L_08B54BA0;
    case 207u: goto L_08B54BAC;
    case 208u: goto L_08B54BB4;
    case 209u: goto L_08B54BC4;
    case 210u: goto L_08B54BCC;
    case 211u: goto L_08B54BDC;
    case 212u: goto L_08B54BE8;
    case 213u: goto L_08B54BEC;
    case 214u: goto L_08B54BF4;
    case 215u: goto L_08B54BFC;
    case 216u: goto L_08B54C04;
    case 217u: goto L_08B54C0C;
    case 218u: goto L_08B54C14;
    case 219u: goto L_08B54C1C;
    case 220u: goto L_08B54C44;
    case 221u: goto L_08B54C6C;
    case 222u: goto L_08B54C7C;
    case 223u: goto L_08B54CC0;
    case 224u: goto L_08B54CD4;
    case 225u: goto L_08B54DA0;
    case 226u: goto L_08B54DA8;
    case 227u: goto L_08B54DBC;
    case 228u: goto L_08B54DC8;
    case 229u: goto L_08B54DD8;
    case 230u: goto L_08B54DFC;
    case 231u: goto L_08B54E08;
    case 232u: goto L_08B54E10;
    case 233u: goto L_08B54E18;
    case 234u: goto L_08B54E24;
    case 235u: goto L_08B54E30;
    case 236u: goto L_08B54E38;
    case 237u: goto L_08B54E3C;
    case 238u: goto L_08B54E48;
    case 239u: goto L_08B54E50;
    case 240u: goto L_08B54E58;
    case 241u: goto L_08B54E5C;
    case 242u: goto L_08B54E60;
    case 243u: goto L_08B54E70;
    case 244u: goto L_08B54E88;
    case 245u: goto L_08B54E90;
    case 246u: goto L_08B54E98;
    case 247u: goto L_08B54EA0;
    case 248u: goto L_08B54EA8;
    case 249u: goto L_08B54EB0;
    case 250u: goto L_08B54EB8;
    case 251u: goto L_08B54EC0;
    case 252u: goto L_08B54EC8;
    case 253u: goto L_08B54ED0;
    case 254u: goto L_08B54ED8;
    case 255u: goto L_08B54EE0;
    case 256u: goto L_08B54EE8;
    case 257u: goto L_08B54EF0;
    case 258u: goto L_08B54EF8;
    case 259u: goto L_08B54F00;
    case 260u: goto L_08B54F08;
    case 261u: goto L_08B54F28;
    case 262u: goto L_08B54F30;
    case 263u: goto L_08B54F38;
    case 264u: goto L_08B54F4C;
    case 265u: goto L_08B54F54;
    case 266u: goto L_08B54F5C;
    case 267u: goto L_08B54F64;
    case 268u: goto L_08B54F6C;
    case 269u: goto L_08B54F74;
    case 270u: goto L_08B54F8C;
    case 271u: goto L_08B54F94;
    case 272u: goto L_08B54F9C;
    case 273u: goto L_08B54FA4;
    case 274u: goto L_08B54FBC;
    case 275u: goto L_08B54FD0;
    case 276u: goto L_08B54FF4;
    case 277u: goto L_08B55004;
    case 278u: goto L_08B55010;
    case 279u: goto L_08B5501C;
    case 280u: goto L_08B55038;
    case 281u: goto L_08B55048;
    case 282u: goto L_08B55050;
    case 283u: goto L_08B55068;
    case 284u: goto L_08B5506C;
    case 285u: goto L_08B55074;
    case 286u: goto L_08B5508C;
    case 287u: goto L_08B550A0;
    case 288u: goto L_08B550A8;
    case 289u: goto L_08B550AC;
    case 290u: goto L_08B550C0;
    case 291u: goto L_08B550E0;
    case 292u: goto L_08B550EC;
    case 293u: goto L_08B550F4;
    case 294u: goto L_08B550F8;
    case 295u: goto L_08B55100;
    case 296u: goto L_08B55110;
    case 297u: goto L_08B55114;
    case 298u: goto L_08B5512C;
    case 299u: goto L_08B55134;
    case 300u: goto L_08B5513C;
    case 301u: goto L_08B55144;
    case 302u: goto L_08B5514C;
    case 303u: goto L_08B55154;
    case 304u: goto L_08B5515C;
    case 305u: goto L_08B55164;
    case 306u: goto L_08B55184;
    case 307u: goto L_08B55190;
    case 308u: goto L_08B55198;
    case 309u: goto L_08B5519C;
    case 310u: goto L_08B551A4;
    case 311u: goto L_08B551B4;
    case 312u: goto L_08B551B8;
    case 313u: goto L_08B551D0;
    case 314u: goto L_08B551D8;
    case 315u: goto L_08B551E0;
    case 316u: goto L_08B551E8;
    case 317u: goto L_08B551F0;
    case 318u: goto L_08B551F8;
    case 319u: goto L_08B55200;
    case 320u: goto L_08B55208;
    case 321u: goto L_08B55218;
    case 322u: goto L_08B55224;
    case 323u: goto L_08B5522C;
    case 324u: goto L_08B55230;
    case 325u: goto L_08B55238;
    case 326u: goto L_08B55240;
    case 327u: goto L_08B55244;
    case 328u: goto L_08B55254;
    case 329u: goto L_08B5525C;
    case 330u: goto L_08B55264;
    case 331u: goto L_08B5526C;
    case 332u: goto L_08B55274;
    case 333u: goto L_08B5527C;
    case 334u: goto L_08B55284;
    case 335u: goto L_08B5528C;
    case 336u: goto L_08B5529C;
    case 337u: goto L_08B552B8;
    case 338u: goto L_08B552C8;
    case 339u: goto L_08B552D0;
    case 340u: goto L_08B552D8;
    case 341u: goto L_08B552F4;
    case 342u: goto L_08B55300;
    case 343u: goto L_08B55308;
    case 344u: goto L_08B55314;
    case 345u: goto L_08B55318;
    case 346u: goto L_08B55320;
    case 347u: goto L_08B55328;
    case 348u: goto L_08B5538C;
    case 349u: goto L_08B553EC;
    case 350u: goto L_08B553F0;
    case 351u: goto L_08B553F8;
    case 352u: goto L_08B55408;
    case 353u: goto L_08B55410;
    case 354u: goto L_08B55424;
    case 355u: goto L_08B55434;
    case 356u: goto L_08B55454;
    case 357u: goto L_08B55460;
    case 358u: goto L_08B5546C;
    case 359u: goto L_08B55480;
    case 360u: goto L_08B554A8;
    case 361u: goto L_08B554B4;
    case 362u: goto L_08B554B8;
    case 363u: goto L_08B554C8;
    case 364u: goto L_08B554CC;
    case 365u: goto L_08B554D8;
    case 366u: goto L_08B554E0;
    case 367u: goto L_08B554E8;
    case 368u: goto L_08B554F4;
    case 369u: goto L_08B55500;
    case 370u: goto L_08B5550C;
    case 371u: goto L_08B55514;
    case 372u: goto L_08B5551C;
    case 373u: goto L_08B55520;
    case 374u: goto L_08B5552C;
    case 375u: goto L_08B55534;
    case 376u: goto L_08B55538;
    case 377u: goto L_08B55540;
    case 378u: goto L_08B55548;
    case 379u: goto L_08B55554;
    case 380u: goto L_08B55560;
    case 381u: goto L_08B5556C;
    case 382u: goto L_08B55574;
    case 383u: goto L_08B55590;
    case 384u: goto L_08B555AC;
    case 385u: goto L_08B555B8;
    case 386u: goto L_08B555C0;
    case 387u: goto L_08B555D4;
    case 388u: goto L_08B555EC;
    case 389u: goto L_08B555F8;
    case 390u: goto L_08B55600;
    case 391u: goto L_08B55608;
    case 392u: goto L_08B5560C;
    case 393u: goto L_08B55618;
    case 394u: goto L_08B55624;
    case 395u: goto L_08B55644;
    case 396u: goto L_08B5564C;
    case 397u: goto L_08B55660;
    case 398u: goto L_08B5566C;
    case 399u: goto L_08B55674;
    case 400u: goto L_08B55690;
    case 401u: goto L_08B556B8;
    case 402u: goto L_08B556EC;
    case 403u: goto L_08B556F8;
    case 404u: goto L_08B55704;
    case 405u: goto L_08B5570C;
    case 406u: goto L_08B55714;
    case 407u: goto L_08B5571C;
    case 408u: goto L_08B55748;
    case 409u: goto L_08B55770;
    case 410u: goto L_08B55778;
    case 411u: goto L_08B55784;
    case 412u: goto L_08B55794;
    case 413u: goto L_08B557A0;
    case 414u: goto L_08B557C4;
    case 415u: goto L_08B557D0;
    case 416u: goto L_08B557D8;
    case 417u: goto L_08B557FC;
    case 418u: goto L_08B5582C;
    case 419u: goto L_08B55884;
    case 420u: goto L_08B558BC;
    case 421u: goto L_08B558D0;
    case 422u: goto L_08B558E4;
    case 423u: goto L_08B55900;
    case 424u: goto L_08B55914;
    case 425u: goto L_08B55920;
    case 426u: goto L_08B55954;
    case 427u: goto L_08B55960;
    case 428u: goto L_08B55978;
    case 429u: goto L_08B5599C;
    case 430u: goto L_08B559AC;
    case 431u: goto L_08B559C0;
    case 432u: goto L_08B559E0;
    case 433u: goto L_08B559E8;
    case 434u: goto L_08B55A24;
    case 435u: goto L_08B55A30;
    case 436u: goto L_08B55A38;
    case 437u: goto L_08B55A64;
    case 438u: goto L_08B55A6C;
    case 439u: goto L_08B55A80;
    case 440u: goto L_08B55A8C;
    case 441u: goto L_08B55AA8;
    case 442u: goto L_08B55AB0;
    case 443u: goto L_08B55AC0;
    case 444u: goto L_08B55AC4;
    case 445u: goto L_08B55ACC;
    case 446u: goto L_08B55B10;
    case 447u: goto L_08B55B40;
    case 448u: goto L_08B55B78;
    case 449u: goto L_08B55B88;
    case 450u: goto L_08B55B94;
    case 451u: goto L_08B55B9C;
    case 452u: goto L_08B55BA4;
    case 453u: goto L_08B55BA8;
    case 454u: goto L_08B55BB8;
    case 455u: goto L_08B55BC0;
    case 456u: goto L_08B55BF0;
    case 457u: goto L_08B55BFC;
    case 458u: goto L_08B55C0C;
    case 459u: goto L_08B55C1C;
    case 460u: goto L_08B55C2C;
    case 461u: goto L_08B55C38;
    case 462u: goto L_08B55C50;
    case 463u: goto L_08B55C58;
    case 464u: goto L_08B55C60;
    case 465u: goto L_08B55C70;
    case 466u: goto L_08B55C80;
    case 467u: goto L_08B55C8C;
    case 468u: goto L_08B55C98;
    case 469u: goto L_08B55CA8;
    case 470u: goto L_08B55CC8;
    case 471u: goto L_08B55CD8;
    case 472u: goto L_08B55CE0;
    case 473u: goto L_08B55CEC;
    case 474u: goto L_08B55D00;
    case 475u: goto L_08B55D08;
    case 476u: goto L_08B55D0C;
    case 477u: goto L_08B55D18;
    case 478u: goto L_08B55D28;
    case 479u: goto L_08B55D3C;
    case 480u: goto L_08B55D48;
    case 481u: goto L_08B55D50;
    case 482u: goto L_08B55D54;
    case 483u: goto L_08B55D64;
    case 484u: goto L_08B55D7C;
    case 485u: goto L_08B55D80;
    case 486u: goto L_08B55D94;
    case 487u: goto L_08B55D9C;
    case 488u: goto L_08B55DA4;
    case 489u: goto L_08B55DB8;
    case 490u: goto L_08B55DC0;
    case 491u: goto L_08B55DCC;
    case 492u: goto L_08B55DD8;
    case 493u: goto L_08B55DE0;
    case 494u: goto L_08B55DE4;
    case 495u: goto L_08B55DE8;
    case 496u: goto L_08B55E08;
    case 497u: goto L_08B55E14;
    case 498u: goto L_08B55E20;
    case 499u: goto L_08B55E2C;
    case 500u: goto L_08B55E40;
    case 501u: goto L_08B55E48;
    case 502u: goto L_08B55E4C;
    case 503u: goto L_08B55E58;
    case 504u: goto L_08B55E68;
    case 505u: goto L_08B55E7C;
    case 506u: goto L_08B55E88;
    case 507u: goto L_08B55E90;
    case 508u: goto L_08B55E94;
    case 509u: goto L_08B55EA4;
    case 510u: goto L_08B55EC0;
    case 511u: goto L_08B55EC8;
    case 512u: goto L_08B55ED0;
    case 513u: goto L_08B55ED8;
    case 514u: goto L_08B55EDC;
    case 515u: goto L_08B55EF0;
    case 516u: goto L_08B55F20;
    case 517u: goto L_08B55F28;
    case 518u: goto L_08B55F58;
    case 519u: goto L_08B55F84;
    case 520u: goto L_08B55F88;
    case 521u: goto L_08B55F94;
    case 522u: goto L_08B55FA0;
    case 523u: goto L_08B55FA8;
    case 524u: goto L_08B55FB0;
    case 525u: goto L_08B55FB8;
    case 526u: goto L_08B55FC4;
    case 527u: goto L_08B55FE8;
    case 528u: goto L_08B56014;
    case 529u: goto L_08B56020;
    case 530u: goto L_08B56028;
    case 531u: goto L_08B5604C;
    case 532u: goto L_08B56054;
    case 533u: goto L_08B5605C;
    case 534u: goto L_08B56060;
    case 535u: goto L_08B56070;
    case 536u: goto L_08B56084;
    case 537u: goto L_08B56098;
    case 538u: goto L_08B560B4;
    case 539u: goto L_08B560C0;
    case 540u: goto L_08B560E8;
    case 541u: goto L_08B560F8;
    case 542u: goto L_08B56104;
    case 543u: goto L_08B56120;
    case 544u: goto L_08B56130;
    case 545u: goto L_08B56138;
    case 546u: goto L_08B56140;
    case 547u: goto L_08B56144;
    case 548u: goto L_08B56150;
    case 549u: goto L_08B5615C;
    case 550u: goto L_08B56164;
    case 551u: goto L_08B56178;
    case 552u: goto L_08B56180;
    case 553u: goto L_08B56188;
    case 554u: goto L_08B56194;
    case 555u: goto L_08B561A8;
    case 556u: goto L_08B561B0;
    case 557u: goto L_08B561B8;
    case 558u: goto L_08B561D8;
    case 559u: goto L_08B561EC;
    case 560u: goto L_08B561F4;
    case 561u: goto L_08B56200;
    case 562u: goto L_08B56204;
    case 563u: goto L_08B5620C;
    case 564u: goto L_08B56214;
    case 565u: goto L_08B56230;
    case 566u: goto L_08B56238;
    case 567u: goto L_08B5623C;
    case 568u: goto L_08B56248;
    case 569u: goto L_08B56254;
    case 570u: goto L_08B56270;
    case 571u: goto L_08B56290;
    case 572u: goto L_08B56298;
    case 573u: goto L_08B562A4;
    case 574u: goto L_08B562B0;
    case 575u: goto L_08B562C4;
    case 576u: goto L_08B562D8;
    case 577u: goto L_08B5633C;
    case 578u: goto L_08B56350;
    case 579u: goto L_08B56358;
    case 580u: goto L_08B56394;
    case 581u: goto L_08B563D8;
    case 582u: goto L_08B563E8;
    case 583u: goto L_08B5640C;
    case 584u: goto L_08B56414;
    case 585u: goto L_08B56424;
    case 586u: goto L_08B56430;
    case 587u: goto L_08B56440;
    case 588u: goto L_08B56474;
    case 589u: goto L_08B5648C;
    case 590u: goto L_08B56494;
    case 591u: goto L_08B564BC;
    case 592u: goto L_08B564D4;
    case 593u: goto L_08B564F8;
    case 594u: goto L_08B56504;
    case 595u: goto L_08B56514;
    case 596u: goto L_08B56520;
    case 597u: goto L_08B56530;
    case 598u: goto L_08B56544;
    case 599u: goto L_08B56550;
    case 600u: goto L_08B56574;
    case 601u: goto L_08B56580;
    case 602u: goto L_08B56590;
    case 603u: goto L_08B56598;
    case 604u: goto L_08B565A0;
    case 605u: goto L_08B565A4;
    case 606u: goto L_08B565C0;
    case 607u: goto L_08B565C8;
    case 608u: goto L_08B565D0;
    case 609u: goto L_08B565D8;
    case 610u: goto L_08B565E0;
    case 611u: goto L_08B56600;
    case 612u: goto L_08B5661C;
    case 613u: goto L_08B56620;
    case 614u: goto L_08B56624;
    case 615u: goto L_08B56634;
    case 616u: goto L_08B56644;
    case 617u: goto L_08B56654;
    case 618u: goto L_08B56670;
    case 619u: goto L_08B566A8;
    case 620u: goto L_08B566B4;
    case 621u: goto L_08B566C0;
    case 622u: goto L_08B566CC;
    case 623u: goto L_08B566F4;
    case 624u: goto L_08B566F8;
    case 625u: goto L_08B5673C;
    case 626u: goto L_08B56750;
    case 627u: goto L_08B56764;
    case 628u: goto L_08B56768;
    case 629u: goto L_08B56770;
    case 630u: goto L_08B56784;
    case 631u: goto L_08B5678C;
    case 632u: goto L_08B567A4;
    case 633u: goto L_08B567AC;
    case 634u: goto L_08B567B4;
    case 635u: goto L_08B567BC;
    case 636u: goto L_08B567C4;
    case 637u: goto L_08B567CC;
    case 638u: goto L_08B567D8;
    case 639u: goto L_08B567E0;
    case 640u: goto L_08B567E8;
    case 641u: goto L_08B567F4;
    case 642u: goto L_08B56800;
    case 643u: goto L_08B5680C;
    case 644u: goto L_08B56824;
    case 645u: goto L_08B5682C;
    case 646u: goto L_08B56834;
    case 647u: goto L_08B568C8;
    case 648u: goto L_08B568DC;
    case 649u: goto L_08B568EC;
    case 650u: goto L_08B568F8;
    case 651u: goto L_08B5690C;
    case 652u: goto L_08B56910;
    case 653u: goto L_08B56918;
    case 654u: goto L_08B56920;
    case 655u: goto L_08B56928;
    case 656u: goto L_08B5692C;
    case 657u: goto L_08B56944;
    case 658u: goto L_08B56964;
    case 659u: goto L_08B5696C;
    case 660u: goto L_08B56978;
    case 661u: goto L_08B56988;
    case 662u: goto L_08B56994;
    case 663u: goto L_08B569AC;
    case 664u: goto L_08B569B0;
    case 665u: goto L_08B569BC;
    case 666u: goto L_08B569C8;
    case 667u: goto L_08B569D0;
    case 668u: goto L_08B569D8;
    case 669u: goto L_08B569DC;
    case 670u: goto L_08B569EC;
    case 671u: goto L_08B56A14;
    case 672u: goto L_08B56A1C;
    case 673u: goto L_08B56A28;
    case 674u: goto L_08B56A34;
    case 675u: goto L_08B56A40;
    case 676u: goto L_08B56A4C;
    case 677u: goto L_08B56A68;
    case 678u: goto L_08B56A74;
    case 679u: goto L_08B56A78;
    case 680u: goto L_08B56A8C;
    case 681u: goto L_08B56AA4;
    case 682u: goto L_08B56AB0;
    case 683u: goto L_08B56AB4;
    case 684u: goto L_08B56AC8;
    case 685u: goto L_08B56AE0;
    case 686u: goto L_08B56AFC;
    case 687u: goto L_08B56B08;
    case 688u: goto L_08B56B14;
    case 689u: goto L_08B56B20;
    case 690u: goto L_08B56B34;
    case 691u: goto L_08B56B44;
    case 692u: goto L_08B56B60;
    case 693u: goto L_08B56B6C;
    case 694u: goto L_08B56B7C;
    case 695u: goto L_08B56B8C;
    case 696u: goto L_08B56B98;
    case 697u: goto L_08B56BA8;
    case 698u: goto L_08B56BB4;
    case 699u: goto L_08B56BE8;
    case 700u: goto L_08B56BEC;
    case 701u: goto L_08B56C00;
    case 702u: goto L_08B56C10;
    case 703u: goto L_08B56C18;
    case 704u: goto L_08B56C20;
    case 705u: goto L_08B56C28;
    case 706u: goto L_08B56C34;
    case 707u: goto L_08B56C50;
    case 708u: goto L_08B56C54;
    case 709u: goto L_08B56C64;
    case 710u: goto L_08B56C70;
    case 711u: goto L_08B56C78;
    case 712u: goto L_08B56C80;
    case 713u: goto L_08B56C9C;
    case 714u: goto L_08B56CA0;
    case 715u: goto L_08B56CA8;
    case 716u: goto L_08B56CB4;
    case 717u: goto L_08B56CBC;
    case 718u: goto L_08B56CC4;
    case 719u: goto L_08B56CCC;
    case 720u: goto L_08B56CD8;
    case 721u: goto L_08B56CE0;
    case 722u: goto L_08B56CF0;
    case 723u: goto L_08B56CF8;
    case 724u: goto L_08B56D10;
    case 725u: goto L_08B56D18;
    case 726u: goto L_08B56D20;
    case 727u: goto L_08B56D28;
    case 728u: goto L_08B56D3C;
    case 729u: goto L_08B56D48;
    case 730u: goto L_08B56D60;
    case 731u: goto L_08B56D6C;
    case 732u: goto L_08B56D80;
    case 733u: goto L_08B56D9C;
    case 734u: goto L_08B56DA4;
    case 735u: goto L_08B56DAC;
    case 736u: goto L_08B56DB0;
    case 737u: goto L_08B56DCC;
    case 738u: goto L_08B56DD8;
    case 739u: goto L_08B56DE0;
    case 740u: goto L_08B56DE8;
    case 741u: goto L_08B56DF0;
    case 742u: goto L_08B56DF8;
    case 743u: goto L_08B56DFC;
    case 744u: goto L_08B56E10;
    case 745u: goto L_08B56E18;
    case 746u: goto L_08B56E20;
    case 747u: goto L_08B56E34;
    case 748u: goto L_08B56E38;
    case 749u: goto L_08B56E60;
    case 750u: goto L_08B56E6C;
    case 751u: goto L_08B56E74;
    case 752u: goto L_08B56E7C;
    case 753u: goto L_08B56E84;
    case 754u: goto L_08B56E8C;
    case 755u: goto L_08B56E90;
    case 756u: goto L_08B56EA4;
    case 757u: goto L_08B56EA8;
    case 758u: goto L_08B56EB0;
    case 759u: goto L_08B56EC4;
    case 760u: goto L_08B56EE4;
    case 761u: goto L_08B56EEC;
    case 762u: goto L_08B56EF4;
    case 763u: goto L_08B56EF8;
    case 764u: goto L_08B56F14;
    case 765u: goto L_08B56F20;
    case 766u: goto L_08B56F28;
    case 767u: goto L_08B56F30;
    case 768u: goto L_08B56F34;
    case 769u: goto L_08B56F4C;
    case 770u: goto L_08B56F54;
    case 771u: goto L_08B56F68;
    case 772u: goto L_08B56F6C;
    case 773u: goto L_08B56F94;
    case 774u: goto L_08B56FA0;
    case 775u: goto L_08B56FA8;
    case 776u: goto L_08B56FB0;
    case 777u: goto L_08B56FB4;
    case 778u: goto L_08B56FCC;
    case 779u: goto L_08B56FD0;
    case 780u: goto L_08B56FE8;
    case 781u: goto L_08B56FF8;
    case 782u: goto L_08B57008;
    case 783u: goto L_08B5700C;
    case 784u: goto L_08B5701C;
    case 785u: goto L_08B57028;
    case 786u: goto L_08B57034;
    case 787u: goto L_08B57050;
    case 788u: goto L_08B57058;
    case 789u: goto L_08B57060;
    case 790u: goto L_08B5706C;
    case 791u: goto L_08B57078;
    case 792u: goto L_08B57080;
    case 793u: goto L_08B57084;
    case 794u: goto L_08B5708C;
    case 795u: goto L_08B57094;
    case 796u: goto L_08B5709C;
    case 797u: goto L_08B570A4;
    case 798u: goto L_08B570B0;
    case 799u: goto L_08B570BC;
    case 800u: goto L_08B570C4;
    case 801u: goto L_08B570DC;
    case 802u: goto L_08B570F4;
    case 803u: goto L_08B57100;
    case 804u: goto L_08B57104;
    case 805u: goto L_08B5710C;
    case 806u: goto L_08B57118;
    case 807u: goto L_08B57124;
    case 808u: goto L_08B57134;
    case 809u: goto L_08B5713C;
    case 810u: goto L_08B57148;
    case 811u: goto L_08B5715C;
    case 812u: goto L_08B57164;
    case 813u: goto L_08B5717C;
    case 814u: goto L_08B5718C;
    case 815u: goto L_08B57194;
    case 816u: goto L_08B5719C;
    case 817u: goto L_08B571A8;
    case 818u: goto L_08B571AC;
    case 819u: goto L_08B571B4;
    case 820u: goto L_08B571C0;
    case 821u: goto L_08B571CC;
    case 822u: goto L_08B57200;
    case 823u: goto L_08B57210;
    case 824u: goto L_08B5721C;
    case 825u: goto L_08B57228;
    case 826u: goto L_08B5722C;
    case 827u: goto L_08B57238;
    case 828u: goto L_08B57250;
    case 829u: goto L_08B57264;
    case 830u: goto L_08B57274;
    case 831u: goto L_08B57280;
    case 832u: goto L_08B57290;
    case 833u: goto L_08B57298;
    case 834u: goto L_08B572A8;
    case 835u: goto L_08B572B0;
    case 836u: goto L_08B572BC;
    case 837u: goto L_08B572C4;
    case 838u: goto L_08B572D8;
    case 839u: goto L_08B572E8;
    case 840u: goto L_08B572EC;
    case 841u: goto L_08B572FC;
    case 842u: goto L_08B57308;
    case 843u: goto L_08B57314;
    case 844u: goto L_08B57320;
    case 845u: goto L_08B57328;
    case 846u: goto L_08B57330;
    case 847u: goto L_08B57338;
    case 848u: goto L_08B57340;
    case 849u: goto L_08B57348;
    case 850u: goto L_08B57354;
    case 851u: goto L_08B5735C;
    case 852u: goto L_08B57360;
    case 853u: goto L_08B57368;
    case 854u: goto L_08B57370;
    case 855u: goto L_08B57374;
    case 856u: goto L_08B57380;
    case 857u: goto L_08B5738C;
    case 858u: goto L_08B57398;
    case 859u: goto L_08B573A4;
    case 860u: goto L_08B573B4;
    case 861u: goto L_08B573C0;
    case 862u: goto L_08B573D4;
    case 863u: goto L_08B573DC;
    case 864u: goto L_08B573F4;
    case 865u: goto L_08B57404;
    case 866u: goto L_08B5740C;
    case 867u: goto L_08B57414;
    case 868u: goto L_08B57420;
    case 869u: goto L_08B57424;
    case 870u: goto L_08B5742C;
    case 871u: goto L_08B57438;
    case 872u: goto L_08B57448;
    case 873u: goto L_08B5744C;
    case 874u: goto L_08B57458;
    case 875u: goto L_08B57464;
    case 876u: goto L_08B5746C;
    case 877u: goto L_08B57470;
    case 878u: goto L_08B57480;
    case 879u: goto L_08B57488;
    case 880u: goto L_08B57490;
    case 881u: goto L_08B57498;
    case 882u: goto L_08B574A0;
    case 883u: goto L_08B574A4;
    case 884u: goto L_08B574B4;
    case 885u: goto L_08B574C0;
    case 886u: goto L_08B574D8;
    case 887u: goto L_08B574EC;
    case 888u: goto L_08B574F8;
    case 889u: goto L_08B5750C;
    case 890u: goto L_08B57514;
    case 891u: goto L_08B57518;
    case 892u: goto L_08B57524;
    case 893u: goto L_08B57528;
    case 894u: goto L_08B57538;
    case 895u: goto L_08B5753C;
    case 896u: goto L_08B57548;
    case 897u: goto L_08B57578;
    case 898u: goto L_08B575B4;
    case 899u: goto L_08B575C8;
    case 900u: goto L_08B575E4;
    case 901u: goto L_08B575F4;
    case 902u: goto L_08B575FC;
    case 903u: goto L_08B57604;
    case 904u: goto L_08B57608;
    case 905u: goto L_08B57614;
    case 906u: goto L_08B5761C;
    case 907u: goto L_08B57624;
    case 908u: goto L_08B5762C;
    case 909u: goto L_08B57640;
    case 910u: goto L_08B5765C;
    case 911u: goto L_08B57660;
    case 912u: goto L_08B5766C;
    case 913u: goto L_08B57674;
    case 914u: goto L_08B57678;
    case 915u: goto L_08B57684;
    case 916u: goto L_08B57698;
    case 917u: goto L_08B576A8;
    case 918u: goto L_08B576AC;
    case 919u: goto L_08B576C0;
    case 920u: goto L_08B576C8;
    case 921u: goto L_08B576D0;
    case 922u: goto L_08B576D8;
    case 923u: goto L_08B576E4;
    case 924u: goto L_08B576EC;
    case 925u: goto L_08B57714;
    case 926u: goto L_08B5771C;
    case 927u: goto L_08B57728;
    case 928u: goto L_08B57744;
    case 929u: goto L_08B57750;
    case 930u: goto L_08B5775C;
    case 931u: goto L_08B57768;
    case 932u: goto L_08B57778;
    case 933u: goto L_08B57794;
    case 934u: goto L_08B577BC;
    case 935u: goto L_08B577CC;
    case 936u: goto L_08B577DC;
    case 937u: goto L_08B577E8;
    case 938u: goto L_08B577FC;
    case 939u: goto L_08B57808;
    case 940u: goto L_08B5783C;
    case 941u: goto L_08B57840;
    case 942u: goto L_08B5784C;
    case 943u: goto L_08B57850;
    case 944u: goto L_08B5785C;
    case 945u: goto L_08B57868;
    case 946u: goto L_08B57874;
    case 947u: goto L_08B5787C;
    case 948u: goto L_08B57884;
    case 949u: goto L_08B5788C;
    case 950u: goto L_08B57894;
    case 951u: goto L_08B578B4;
    case 952u: goto L_08B578C0;
    case 953u: goto L_08B578C8;
    case 954u: goto L_08B57908;
    case 955u: goto L_08B57910;
    case 956u: goto L_08B57918;
    case 957u: goto L_08B5791C;
    case 958u: goto L_08B57924;
    case 959u: goto L_08B5792C;
    case 960u: goto L_08B57954;
    case 961u: goto L_08B5795C;
    case 962u: goto L_08B57968;
    case 963u: goto L_08B57974;
    case 964u: goto L_08B5797C;
    case 965u: goto L_08B57984;
    case 966u: goto L_08B57990;
    case 967u: goto L_08B5799C;
    case 968u: goto L_08B579A0;
    case 969u: goto L_08B579A8;
    case 970u: goto L_08B579B0;
    case 971u: goto L_08B579B4;
    case 972u: goto L_08B579BC;
    case 973u: goto L_08B579C8;
    case 974u: goto L_08B579D0;
    case 975u: goto L_08B579F8;
    case 976u: goto L_08B57A00;
    case 977u: goto L_08B57A04;
    case 978u: goto L_08B57A0C;
    case 979u: goto L_08B57A14;
    case 980u: goto L_08B57A18;
    case 981u: goto L_08B57A48;
    case 982u: goto L_08B57A70;
    case 983u: goto L_08B57A7C;
    case 984u: goto L_08B57A84;
    case 985u: goto L_08B57A8C;
    case 986u: goto L_08B57A98;
    case 987u: goto L_08B57AA0;
    case 988u: goto L_08B57AA8;
    case 989u: goto L_08B57AB4;
    case 990u: goto L_08B57ABC;
    case 991u: goto L_08B57AE4;
    case 992u: goto L_08B57B0C;
    case 993u: goto L_08B57B3C;
    case 994u: goto L_08B57B48;
    case 995u: goto L_08B57B50;
    case 996u: goto L_08B57B58;
    case 997u: goto L_08B57B64;
    case 998u: goto L_08B57B6C;
    case 999u: goto L_08B57B70;
    case 1000u: goto L_08B57B98;
    case 1001u: goto L_08B57BA0;
    case 1002u: goto L_08B57BAC;
    case 1003u: goto L_08B57BDC;
    case 1004u: goto L_08B57BF0;
    case 1005u: goto L_08B57BF8;
    case 1006u: goto L_08B57C00;
    case 1007u: goto L_08B57C08;
    case 1008u: goto L_08B57C10;
    case 1009u: goto L_08B57C18;
    case 1010u: goto L_08B57C20;
    case 1011u: goto L_08B57C38;
    case 1012u: goto L_08B57C48;
    case 1013u: goto L_08B57C5C;
    case 1014u: goto L_08B57C70;
    case 1015u: goto L_08B57C84;
    case 1016u: goto L_08B57C98;
    case 1017u: goto L_08B57CB0;
    case 1018u: goto L_08B57CB8;
    case 1019u: goto L_08B57CC4;
    case 1020u: goto L_08B57CC8;
    case 1021u: goto L_08B57CCC;
    case 1022u: goto L_08B57CE0;
    case 1023u: goto L_08B57CEC;
    case 1024u: goto L_08B57D04;
    case 1025u: goto L_08B57D0C;
    case 1026u: goto L_08B57D38;
    case 1027u: goto L_08B57D70;
    case 1028u: goto L_08B57DB0;
    case 1029u: goto L_08B57DF8;
    case 1030u: goto L_08B57E04;
    case 1031u: goto L_08B57E2C;
    case 1032u: goto L_08B57E3C;
    case 1033u: goto L_08B57E64;
    case 1034u: goto L_08B57E6C;
    case 1035u: goto L_08B57EA4;
    case 1036u: goto L_08B57ECC;
    case 1037u: goto L_08B57EDC;
    case 1038u: goto L_08B57EF0;
    case 1039u: goto L_08B57F0C;
    case 1040u: goto L_08B57F18;
    case 1041u: goto L_08B57F2C;
    case 1042u: goto L_08B57F34;
    case 1043u: goto L_08B57F40;
    case 1044u: goto L_08B57F48;
    case 1045u: goto L_08B57F54;
    case 1046u: goto L_08B57F58;
    case 1047u: goto L_08B57F60;
    case 1048u: goto L_08B57F70;
    case 1049u: goto L_08B57F78;
    case 1050u: goto L_08B57F88;
    case 1051u: goto L_08B57F94;
    case 1052u: goto L_08B57FA4;
    case 1053u: goto L_08B57FC8;
    case 1054u: goto L_08B57FD0;
    case 1055u: goto L_08B57FDC;
    case 1056u: goto L_08B57FE4;
    case 1057u: goto L_08B57FF4;
    case 1058u: goto L_08B57FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08B54000u;
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
L_08B54000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08B5402Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5402Cu) goto L_08B5402C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5402C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B54074;
      }
      goto L_08B54068;
    }
L_08B54068:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B54074;
L_08B54074:
    aot_gpr_31 = (0x08B5407Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5407Cu) goto L_08B5407C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5407C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x08B540A8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 7u, 0x08B540A8u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B540A8u) goto L_08B540A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B540A8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B54138;
      }
      goto L_08B540B4;
    }
L_08B540B4:
    aot_gpr_5 = (0u | 11u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8724)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
      if (branch_taken) {
          goto L_08B54128;
      }
      goto L_08B5410C;
    }
L_08B5410C:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_31 = (0x08B54120u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 10u, 0x08B54120u, 0x08A3716Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 795u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 795u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 795u, 0x08A3716Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54120u) goto L_08B54120;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54120:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B54138;
      }
      goto L_08B54128;
    }
L_08B54128:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B54138u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 12u, 0x08B54138u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54138u) goto L_08B54138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54138:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54148:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B5416Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 14u, 0x08B5416Cu, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5416Cu) goto L_08B5416C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5416C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B5418C;
      }
      goto L_08B54178;
    }
L_08B54178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B541A0;
      }
      goto L_08B54184;
    }
L_08B54184:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(194)));
      if (branch_taken) {
          goto L_08B541C4;
      }
      goto L_08B5418C;
    }
L_08B5418C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B54198u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54198u) goto L_08B54198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B54250;
      }
      goto L_08B541A0;
    }
L_08B541A0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B541B0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 20u, 0x08B541B0u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B541B0u) goto L_08B541B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B541B0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(194)));
    goto L_08B541C4;
L_08B541C4:
    aot_gpr_5 = (aot_gpr_5 ^ 5u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B54240;
      }
      goto L_08B541D8;
    }
L_08B541D8:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
        goto L_08B54204;
    }
    goto L_08B541E0;
L_08B541E0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08B541F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 24u, 0x08B541F0u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B541F0u) goto L_08B541F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B541F0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    goto L_08B54204;
L_08B54204:
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B5422C;
      }
      goto L_08B54218;
    }
L_08B54218:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B54224u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54224u) goto L_08B54224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54224:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B54238;
      }
      goto L_08B5422C;
    }
L_08B5422C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B54238u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54238u) goto L_08B54238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B54250;
      }
      goto L_08B54240;
    }
L_08B54240:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B5424Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5424Cu) goto L_08B5424C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5424C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B54250;
L_08B54250:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54268:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B5428Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 34u, 0x08B5428Cu, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5428Cu) goto L_08B5428C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5428C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B542AC;
      }
      goto L_08B54298;
    }
L_08B54298:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B542C4;
      }
      goto L_08B542A4;
    }
L_08B542A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B542E4;
      }
      goto L_08B542AC;
    }
L_08B542AC:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B542BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B542BCu) goto L_08B542BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B542BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B542F4;
      }
      goto L_08B542C4;
    }
L_08B542C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B542D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 40u, 0x08B542D4u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B542D4u) goto L_08B542D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B542D4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B542E4;
L_08B542E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(460)));
    aot_gpr_31 = (0x08B542F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B542F0u) goto L_08B542F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B542F0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B542F4;
L_08B542F4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5430C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B54330u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 45u, 0x08B54330u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54330u) goto L_08B54330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54330:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08B54354;
      }
      goto L_08B5433C;
    }
L_08B5433C:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B5434Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5434Cu) goto L_08B5434C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5434C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B54394;
      }
      goto L_08B54354;
    }
L_08B54354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B54380;
    }
    goto L_08B54360;
L_08B54360:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B54370u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 50u, 0x08B54370u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54370u) goto L_08B54370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54370:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B54380;
L_08B54380:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(464))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B54394u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54394u) goto L_08B54394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54394:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B543B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B543C0u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 54u, 0x08B543C0u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B543C0u) goto L_08B543C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B543C0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B543E0;
      }
      goto L_08B543CC;
    }
L_08B543CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B543E0;
      }
      goto L_08B543D8;
    }
L_08B543D8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B543E0;
L_08B543E0:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B543F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B5440Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 59u, 0x08B5440Cu, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5440Cu) goto L_08B5440C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5440C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B5441Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5441Cu) goto L_08B5441C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5441C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B54458;
      }
      goto L_08B54428;
    }
L_08B54428:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B54458;
      }
      goto L_08B54434;
    }
L_08B54434:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B54458u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 63u, 0x08B54458u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54458u) goto L_08B54458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54458:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B5448Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 65u, 0x08B5448Cu, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5448Cu) goto L_08B5448C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5448C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B5449Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5449Cu) goto L_08B5449C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5449C:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B5450C;
      }
      goto L_08B544A4;
    }
L_08B544A4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B5450C;
      }
      goto L_08B544B0;
    }
L_08B544B0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16051u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B5450C;
      }
      goto L_08B544E0;
    }
L_08B544E0:
    aot_gpr_5 = (16236u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B5450Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 70u, 0x08B5450Cu, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5450Cu) goto L_08B5450C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5450C:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54524:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B54544u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 72u, 0x08B54544u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54544u) goto L_08B54544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54544:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B54554u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54554u) goto L_08B54554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54554:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B54564u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54564u) goto L_08B54564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54564:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B545C0;
      }
      goto L_08B54570;
    }
L_08B54570:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B545C0;
      }
      goto L_08B5457C;
    }
L_08B5457C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B545C0;
      }
      goto L_08B545A0;
    }
L_08B545A0:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B545C0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 78u, 0x08B545C0u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B545C0u) goto L_08B545C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B545C0:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B545DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B545F4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 80u, 0x08B545F4u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B545F4u) goto L_08B545F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B545F4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B54660;
      }
      goto L_08B54600;
    }
L_08B54600:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B54630;
      }
      goto L_08B54628;
    }
L_08B54628:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B54634;
      }
      goto L_08B54630;
    }
L_08B54630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    goto L_08B54634;
L_08B54634:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B54650;
      }
      goto L_08B54644;
    }
L_08B54644:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B54650;
L_08B54650:
    aot_gpr_31 = (0x08B54658u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54658u) goto L_08B54658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B54670;
      }
      goto L_08B54660;
    }
L_08B54660:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B5466Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5466Cu) goto L_08B5466C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5466C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B54670;
L_08B54670:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54680:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B546A0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B546A0u) goto L_08B546A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B546A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B546D4;
      }
      goto L_08B546A8;
    }
L_08B546A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B546B4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B546B4u) goto L_08B546B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B546B4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B546E8;
      }
      goto L_08B546CC;
    }
L_08B546CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B546F8;
      }
      goto L_08B546D4;
    }
L_08B546D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B546E0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B546E0u) goto L_08B546E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B546E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B5472C;
      }
      goto L_08B546E8;
    }
L_08B546E8:
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B546F8;
L_08B546F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B5471C;
      }
      goto L_08B54708;
    }
L_08B54708:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B54714u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54714u) goto L_08B54714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54714:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B54728;
      }
      goto L_08B5471C;
    }
L_08B5471C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B54728u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54728u) goto L_08B54728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54728:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B5472C;
L_08B5472C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54740:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54764;
    }
    goto L_08B54754;
L_08B54754:
    aot_gpr_31 = (0x08B5475Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5475Cu) goto L_08B5475C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5475C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54764;
L_08B54764:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_31 = (0x08B54770u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54770u) goto L_08B54770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54770:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B5478C;
    }
    goto L_08B5477C;
L_08B5477C:
    aot_gpr_31 = (0x08B54784u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54784u) goto L_08B54784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B5478C;
L_08B5478C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_31 = (0x08B54798u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29748));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 113u, 0x08B54798u, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54798u) goto L_08B54798;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B547B4;
    }
    goto L_08B547A4;
L_08B547A4:
    aot_gpr_31 = (0x08B547ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B547ACu) goto L_08B547AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B547AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B547B4;
L_08B547B4:
    aot_gpr_31 = (0x08B547BCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 117u, 0x08B547BCu, 0x0880673Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B547BCu) goto L_08B547BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B547BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B547D8;
    }
    goto L_08B547C8;
L_08B547C8:
    aot_gpr_31 = (0x08B547D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B547D0u) goto L_08B547D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B547D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B547D8;
L_08B547D8:
    aot_gpr_31 = (0x08B547E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B547E0u) goto L_08B547E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B547E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B547FC;
    }
    goto L_08B547EC;
L_08B547EC:
    aot_gpr_31 = (0x08B547F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B547F4u) goto L_08B547F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B547F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B547FC;
L_08B547FC:
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_31 = (0x08B54808u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54808u) goto L_08B54808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54824;
    }
    goto L_08B54814;
L_08B54814:
    aot_gpr_31 = (0x08B5481Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5481Cu) goto L_08B5481C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5481C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54824;
L_08B54824:
    aot_gpr_31 = (0x08B5482Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5804));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 129u, 0x08B5482Cu, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5482Cu) goto L_08B5482C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5482C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54848;
    }
    goto L_08B54838;
L_08B54838:
    aot_gpr_31 = (0x08B54840u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54840u) goto L_08B54840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54848;
L_08B54848:
    aot_gpr_31 = (0x08B54850u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 133u, 0x08B54850u, 0x0880673Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54850u) goto L_08B54850;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B5486C;
    }
    goto L_08B5485C;
L_08B5485C:
    aot_gpr_31 = (0x08B54864u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54864u) goto L_08B54864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B5486C;
L_08B5486C:
    aot_gpr_31 = (0x08B54874u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54874u) goto L_08B54874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54890;
    }
    goto L_08B54880;
L_08B54880:
    aot_gpr_31 = (0x08B54888u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54888u) goto L_08B54888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54890;
L_08B54890:
    aot_gpr_5 = (16608u << 16u);
    aot_gpr_31 = (0x08B5489Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5489Cu) goto L_08B5489C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5489C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B548B8;
    }
    goto L_08B548A8;
L_08B548A8:
    aot_gpr_31 = (0x08B548B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B548B0u) goto L_08B548B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B548B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B548B8;
L_08B548B8:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_31 = (0x08B548C4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29728));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 145u, 0x08B548C4u, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B548C4u) goto L_08B548C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B548C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B548E0;
    }
    goto L_08B548D0;
L_08B548D0:
    aot_gpr_31 = (0x08B548D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B548D8u) goto L_08B548D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B548D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B548E0;
L_08B548E0:
    aot_gpr_31 = (0x08B548E8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 149u, 0x08B548E8u, 0x0880673Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B548E8u) goto L_08B548E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B548E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54904;
    }
    goto L_08B548F4;
L_08B548F4:
    aot_gpr_31 = (0x08B548FCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B548FCu) goto L_08B548FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B548FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54904;
L_08B54904:
    aot_gpr_31 = (0x08B5490Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5490Cu) goto L_08B5490C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5490C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54928;
    }
    goto L_08B54918;
L_08B54918:
    aot_gpr_31 = (0x08B54920u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54920u) goto L_08B54920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54928;
L_08B54928:
    aot_gpr_5 = (16640u << 16u);
    aot_gpr_31 = (0x08B54934u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54934u) goto L_08B54934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54950;
    }
    goto L_08B54940;
L_08B54940:
    aot_gpr_31 = (0x08B54948u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54948u) goto L_08B54948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54950;
L_08B54950:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_31 = (0x08B5495Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29704));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 161u, 0x08B5495Cu, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5495Cu) goto L_08B5495C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5495C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B54978;
    }
    goto L_08B54968;
L_08B54968:
    aot_gpr_31 = (0x08B54970u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54970u) goto L_08B54970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B54978;
L_08B54978:
    aot_gpr_31 = (0x08B54980u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 165u, 0x08B54980u, 0x0880673Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54980u) goto L_08B54980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B5499C;
    }
    goto L_08B5498C;
L_08B5498C:
    aot_gpr_31 = (0x08B54994u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54994u) goto L_08B54994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B5499C;
L_08B5499C:
    aot_gpr_31 = (0x08B549A4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B549A4u) goto L_08B549A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B549A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B549C0;
      }
      goto L_08B549B0;
    }
L_08B549B0:
    aot_gpr_31 = (0x08B549B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B549B8u) goto L_08B549B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B549B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2233u << 16u);
    goto L_08B549C0;
L_08B549C0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30004));
    aot_gpr_31 = (0x08B549CCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 173u, 0x08B549CCu, 0x08885220u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 266u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 266u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B549CCu) goto L_08B549CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B549CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B549D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (519u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + 0u);
    aot_gpr_4 = (ctx.gpr[3] | 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_31 = (0x08B549FCu);
    aot_gpr_16 = (aot_gpr_5 + 0u);
    ctx.pc = 0x08B73554u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B549FC:
    ctx.gpr[2] = (3u << 16u);
    aot_gpr_31 = (0x08B54A08u);
    aot_gpr_4 = (ctx.gpr[2] | 774u);
    ctx.pc = 0x08B73574u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54A08:
    aot_gpr_4 = (0u << 16u);
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B54AD8;
      }
      goto L_08B54A18;
    }
L_08B54A18:
    aot_gpr_6 = (0u << 16u);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B54AC4;
      }
      goto L_08B54A28;
    }
L_08B54A28:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B54A2C;
L_08B54A2C:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[9] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[3] = (2235u << 16u);
        goto L_08B54AB0;
    }
    goto L_08B54A3C;
L_08B54A3C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08B54A40;
L_08B54A40:
    ctx.gpr[7] = (ctx.gpr[2] << 10u);
    goto L_08B54A44;
L_08B54A44:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[11] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[12] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B54A94;
      }
      goto L_08B54A54;
    }
L_08B54A54:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] | ctx.gpr[12]);
    goto L_08B54A5C;
L_08B54A5C:
    ctx.gpr[24] = (2229u << 16u);
    aot_gpr_5 = (ctx.gpr[24] + static_cast<std::uint32_t>(19172));
    aot_gpr_31 = (0x08B54A6Cu);
    ctx.gpr[9] = (0u + 0u);
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54A6C:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    aot_gpr_5 = (ctx.gpr[17] + 0u);
    aot_gpr_31 = (0x08B54A7Cu);
    aot_gpr_6 = (aot_gpr_16 + 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54A7C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54A94:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[14] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[8] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B54A5C;
      }
      goto L_08B54AA4;
    }
L_08B54AA4:
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[15] | ctx.gpr[8]);
    goto L_08B54A5C;
L_08B54AB0:
    ctx.gpr[10] = (ctx.gpr[3] + static_cast<std::uint32_t>(-12172));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (4u << 16u);
      if (branch_taken) {
          goto L_08B54A44;
      }
      goto L_08B54ABC;
    }
L_08B54ABC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12172)));
    goto L_08B54A40;
L_08B54AC4:
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(-12168));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B54A2C;
      }
      goto L_08B54AD0;
    }
L_08B54AD0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12168)));
    goto L_08B54A2C;
L_08B54AD8:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-29624));
    goto L_08B54A18;
L_08B54AE4:
    ctx.gpr[3] = (0u << 16u);
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1008));
    aot_gpr_6 = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(996), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1000), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(992), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(980), ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(976), aot_gpr_16);
      if (branch_taken) {
          goto L_08B54B28;
      }
      goto L_08B54B1C;
    }
L_08B54B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_08B54B34;
      }
      goto L_08B54B28;
    }
L_08B54B28:
    aot_gpr_31 = (0x08B54B30u);
    aot_gpr_4 = (0u + 0u);
    goto L_08B54FD0;
L_08B54B30:
    ctx.gpr[20] = (0u + 0u);
    goto L_08B54B34;
L_08B54B34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_gpr_16 = (ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08B54B74;
      }
      goto L_08B54B3C;
    }
L_08B54B3C:
    ctx.gpr[17] = (aot_gpr_29 + 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_16);
    goto L_08B54B44;
L_08B54B44:
    aot_gpr_4 = (aot_gpr_16 + 0u);
    aot_gpr_31 = (0x08B54B50u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54B50u) goto L_08B54B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54B50:
    aot_gpr_6 = (aot_gpr_16 + ctx.gpr[2]);
    aot_gpr_16 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (aot_gpr_16 - ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B54B74;
      }
      goto L_08B54B6C;
    }
L_08B54B6C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_16);
        goto L_08B54B44;
    }
    goto L_08B54B74;
L_08B54B74:
    ctx.gpr[9] = (ctx.gpr[20] << 2u);
    ctx.gpr[7] = (0u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + aot_gpr_29);
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08B54C44;
      }
      goto L_08B54B8C;
    }
L_08B54B8C:
    aot_gpr_31 = (0x08B54B94u);
    aot_gpr_4 = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54B94u) goto L_08B54B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54B94:
    ctx.gpr[10] = (2229u << 16u);
    aot_gpr_31 = (0x08B54BA0u);
    aot_gpr_4 = (ctx.gpr[10] + static_cast<std::uint32_t>(18904));
    ctx.pc = 0x08B735C4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54BA0:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    aot_gpr_31 = (0x08B54BACu);
    aot_gpr_5 = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54BACu) goto L_08B54BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54BAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
      if (branch_taken) {
          goto L_08B54C14;
      }
      goto L_08B54BB4;
    }
L_08B54BB4:
    aot_mem.aot_direct_store32(ctx.gpr[26] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_gpr_5 = (2230u << 16u);
    aot_gpr_31 = (0x08B54BC4u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1584));
    goto L_08B57728;
L_08B54BC4:
    aot_gpr_31 = (0x08B54BCCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 210u, 0x08B54BCCu, 0x08B60628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 61u, 0x08B60628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54BCCu) goto L_08B54BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54BCC:
    aot_gpr_4 = (0u << 16u);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_6 = (0u << 16u);
      if (branch_taken) {
          goto L_08B54BE8;
      }
      goto L_08B54BDC;
    }
L_08B54BDC:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B54BFC;
      }
      goto L_08B54BE8;
    }
L_08B54BE8:
    aot_gpr_4 = (ctx.gpr[20] + 0u);
    goto L_08B54BEC;
L_08B54BEC:
    aot_gpr_31 = (0x08B54BF4u);
    aot_gpr_5 = (aot_gpr_29 + 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 214u, 0x08B54BF4u, 0x08934794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 116u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 116u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 116u, 0x08934794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54BF4u) goto L_08B54BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B54BF4:
    aot_gpr_31 = (0x08B54BFCu);
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    goto L_08B57808;
L_08B54BFC:
    aot_gpr_31 = (0x08B54C04u);
    goto L_08B57728;
L_08B54C04:
    aot_gpr_31 = (0x08B54C0Cu);
    ctx.pc = 0x00000000u;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54C0Cu) goto L_08B54C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54C0C:
    aot_gpr_4 = (ctx.gpr[20] + 0u);
    goto L_08B54BEC;
L_08B54C14:
    aot_gpr_31 = (0x08B54C1Cu);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B73524u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54C1C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(996)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(992)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(988)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(984)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(980)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(976)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1008));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54C44:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(616));
    ctx.gpr[12] = (ctx.gpr[21] + static_cast<std::uint32_t>(708));
    ctx.gpr[11] = (ctx.gpr[21] + static_cast<std::uint32_t>(800));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_08B54C6C;
L_08B54C6C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B54C6C;
      }
      goto L_08B54C7C;
    }
L_08B54C7C:
    ctx.gpr[14] = (2233u << 16u);
    ctx.gpr[13] = (ctx.gpr[14] + static_cast<std::uint32_t>(-29612));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[13]);
    aot_gpr_6 = (ctx.gpr[21] + static_cast<std::uint32_t>(124));
    aot_gpr_5 = (0u + 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    { const std::uint32_t aot_run_words[10]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08B54CC0;
L_08B54CC0:
    aot_gpr_16 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (aot_gpr_5 < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B54CC0;
      }
      goto L_08B54CD4;
    }
L_08B54CD4:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(13070));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-21555));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(4660));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-6547));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-8468));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(5));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(11));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), ctx.gpr[9]);
    aot_gpr_5 = (0u + 0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(276));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[25]));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[24]));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(160), 0u);
    { const std::uint32_t aot_run_words[6]{0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(192), aot_run_words); }
    { const std::uint32_t aot_run_words[10]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(252), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(328), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(600), aot_run_words); }
    aot_gpr_31 = (0x08B54DA0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(612), 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54DA0u) goto L_08B54DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54DA0:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(892), 0u);
    goto L_08B54BB4;
L_08B54DA8:
    ctx.gpr[3] = (2233u << 16u);
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (ctx.gpr[3] + static_cast<std::uint32_t>(-29556));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
      if (branch_taken) {
          goto L_08B54DC8;
      }
      goto L_08B54DBC;
    }
L_08B54DBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-29556)));
    jump_target = aot_gpr_4;
    aot_gpr_31 = (0x08B54DC8u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54DC8u) goto L_08B54DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54DC8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54DD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[3];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B54EF8;
      }
      goto L_08B54DFC;
    }
L_08B54DFC:
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54EE0;
      }
      goto L_08B54E08;
    }
L_08B54E08:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B54ED0;
      }
      goto L_08B54E10;
    }
L_08B54E10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B54E70;
      }
      goto L_08B54E18;
    }
L_08B54E18:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_6;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B54E3C;
      }
      goto L_08B54E24;
    }
L_08B54E24:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54EC0;
      }
      goto L_08B54E30;
    }
L_08B54E30:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[8];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54E3C;
      }
      goto L_08B54E38;
    }
L_08B54E38:
    ctx.gpr[17] = (aot_gpr_16 + 0u);
    goto L_08B54E3C;
L_08B54E3C:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[9];
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B54EB0;
      }
      goto L_08B54E48;
    }
L_08B54E48:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54E98;
      }
      goto L_08B54E50;
    }
L_08B54E50:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[11];
      if (branch_taken) {
          goto L_08B54E88;
      }
      goto L_08B54E58;
    }
L_08B54E58:
    ctx.gpr[2] = (aot_gpr_4 + 0u);
    goto L_08B54E5C;
L_08B54E5C:
    aot_gpr_6 = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54E60:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    aot_gpr_31 = (0x08B54E70u);
    ctx.gpr[8] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B7369Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54E70:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54E88:
    aot_gpr_31 = (0x08B54E90u);
    ctx.pc = 0x08B7358Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54E90:
    aot_gpr_6 = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54E98:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_gpr_4 + 0u);
        goto L_08B54E5C;
    }
    goto L_08B54EA0;
L_08B54EA0:
    aot_gpr_31 = (0x08B54EA8u);
    ctx.pc = 0x08B7357Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54EA8:
    aot_gpr_6 = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54EB0:
    aot_gpr_31 = (0x08B54EB8u);
    ctx.pc = 0x08B73584u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54EB8:
    aot_gpr_6 = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54EC0:
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_08B54E3C;
      }
      goto L_08B54EC8;
    }
L_08B54EC8:
    ctx.gpr[17] = (aot_gpr_16 + 0u);
    goto L_08B54E3C;
L_08B54ED0:
    aot_gpr_31 = (0x08B54ED8u);
    ctx.pc = 0x08B7358Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54ED8:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    goto L_08B54E10;
L_08B54EE0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B54E10;
      }
      goto L_08B54EE8;
    }
L_08B54EE8:
    aot_gpr_31 = (0x08B54EF0u);
    ctx.pc = 0x08B7357Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54EF0:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    goto L_08B54E10;
L_08B54EF8:
    aot_gpr_31 = (0x08B54F00u);
    ctx.pc = 0x08B73584u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F00:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    goto L_08B54E10;
L_08B54F08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + 0u);
    aot_gpr_4 = (0u << 16u);
    ctx.gpr[3] = (aot_gpr_4 + static_cast<std::uint32_t>(0));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
      if (branch_taken) {
          goto L_08B54FA4;
      }
      goto L_08B54F28;
    }
L_08B54F28:
    aot_gpr_31 = (0x08B54F30u);
    ctx.pc = 0x00000000u;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54F30u) goto L_08B54F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F30:
    aot_gpr_31 = (0x08B54F38u);
    aot_gpr_16 = (ctx.gpr[2] + 0u);
    goto L_08B55300;
L_08B54F38:
    aot_gpr_6 = (2233u << 16u);
    ctx.gpr[3] = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-29608));
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[2];
    aot_gpr_4 = (ctx.gpr[3] + static_cast<std::uint32_t>(-29600));
      if (branch_taken) {
          goto L_08B54F5C;
      }
      goto L_08B54F4C;
    }
L_08B54F4C:
    aot_gpr_31 = (0x08B54F54u);
    ctx.pc = 0x08B73544u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F54:
    aot_gpr_31 = (0x08B54F5Cu);
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73524u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F5C:
    aot_gpr_31 = (0x08B54F64u);
    aot_gpr_4 = (aot_gpr_16 + 0u);
    goto L_08B55480;
L_08B54F64:
    aot_gpr_31 = (0x08B54F6Cu);
    aot_gpr_4 = (aot_gpr_16 + 0u);
    ctx.pc = 0x00000000u;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B54F6Cu) goto L_08B54F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F6C:
    aot_gpr_31 = (0x08B54F74u);
    aot_gpr_16 = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B735CCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F74:
    aot_gpr_5 = (0u + 0u);
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[7] = (aot_gpr_29 + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_16;
    aot_gpr_4 = (aot_gpr_16 + 0u);
      if (branch_taken) {
          goto L_08B54FA4;
      }
      goto L_08B54F8C;
    }
L_08B54F8C:
    aot_gpr_31 = (0x08B54F94u);
    ctx.pc = 0x08B735BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F94:
    aot_gpr_31 = (0x08B54F9Cu);
    aot_gpr_4 = (aot_gpr_16 + 0u);
    ctx.pc = 0x08B735D4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54F9C:
    aot_gpr_31 = (0x08B54FA4u);
    aot_gpr_4 = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73524u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54FA4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (0u + 0u);
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[7] = (0u + 0u);
    aot_gpr_31 = (0x08B54FBCu);
    ctx.gpr[8] = (0u + 0u);
    ctx.pc = 0x08B735E4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B54FBC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B54FD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B55068;
      }
      goto L_08B54FF4;
    }
L_08B54FF4:
    ctx.gpr[3] = (2235u << 16u);
    aot_gpr_4 = (ctx.gpr[3] + static_cast<std::uint32_t>(-12176));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_08B5501C;
      }
      goto L_08B55004;
    }
L_08B55004:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12176)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B550A8;
      }
      goto L_08B55010;
    }
L_08B55010:
    ctx.gpr[17] = (ctx.gpr[7] << 10u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16628)));
      if (branch_taken) {
          goto L_08B5506C;
      }
      goto L_08B5501C;
    }
L_08B5501C:
    ctx.gpr[2] = (2233u << 16u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(-29552));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    aot_gpr_31 = (0x08B55038u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B7354Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55038:
    ctx.gpr[3] = (2236u << 16u);
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16636), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B55068;
      }
      goto L_08B55048;
    }
L_08B55048:
    aot_gpr_31 = (0x08B55050u);
    ctx.pc = 0x08B7355Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55050:
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[17]);
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16632), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16624), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16628), ctx.gpr[2]);
    goto L_08B55068;
L_08B55068:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16628)));
    goto L_08B5506C;
L_08B5506C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B550A8;
    }
    goto L_08B55074;
L_08B55074:
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16624)));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[18]);
    ctx.gpr[8] = (aot_gpr_4 < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B550A8;
      }
      goto L_08B5508C;
    }
L_08B5508C:
    ctx.gpr[11] = (2236u << 16u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16632)));
    ctx.gpr[9] = (ctx.gpr[10] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B550AC;
      }
      goto L_08B550A0;
    }
L_08B550A0:
    ctx.gpr[2] = (aot_gpr_5 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16624), aot_gpr_4);
    goto L_08B550A8;
L_08B550A8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_08B550AC;
L_08B550AC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B550C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 + 0u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[3];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
      if (branch_taken) {
          goto L_08B55154;
      }
      goto L_08B550E0;
    }
L_08B550E0:
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B5513C;
      }
      goto L_08B550EC;
    }
L_08B550EC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B5512C;
      }
      goto L_08B550F4;
    }
L_08B550F4:
    ctx.gpr[2] = (aot_gpr_4 + 0u);
    goto L_08B550F8;
L_08B550F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B55114;
      }
      goto L_08B55100;
    }
L_08B55100:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    aot_gpr_5 = (aot_gpr_16 + 0u);
    aot_gpr_31 = (0x08B55110u);
    aot_gpr_6 = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73624u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55110:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08B55114;
L_08B55114:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5512C:
    aot_gpr_31 = (0x08B55134u);
    ctx.pc = 0x08B7358Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55134:
    goto L_08B550F8;
L_08B5513C:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_gpr_4 + 0u);
        goto L_08B550F8;
    }
    goto L_08B55144;
L_08B55144:
    aot_gpr_31 = (0x08B5514Cu);
    ctx.pc = 0x08B7357Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5514C:
    goto L_08B550F8;
L_08B55154:
    aot_gpr_31 = (0x08B5515Cu);
    ctx.pc = 0x08B73584u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5515C:
    goto L_08B550F8;
L_08B55164:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 + 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 + 0u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[3];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
      if (branch_taken) {
          goto L_08B551F8;
      }
      goto L_08B55184;
    }
L_08B55184:
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B551E0;
      }
      goto L_08B55190;
    }
L_08B55190:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B551D0;
      }
      goto L_08B55198;
    }
L_08B55198:
    ctx.gpr[2] = (aot_gpr_4 + 0u);
    goto L_08B5519C;
L_08B5519C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B551B8;
      }
      goto L_08B551A4;
    }
L_08B551A4:
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    aot_gpr_5 = (aot_gpr_16 + 0u);
    aot_gpr_31 = (0x08B551B4u);
    aot_gpr_6 = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73614u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B551B4:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08B551B8;
L_08B551B8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B551D0:
    aot_gpr_31 = (0x08B551D8u);
    ctx.pc = 0x08B7358Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B551D8:
    goto L_08B5519C;
L_08B551E0:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_gpr_4 + 0u);
        goto L_08B5519C;
    }
    goto L_08B551E8;
L_08B551E8:
    aot_gpr_31 = (0x08B551F0u);
    ctx.pc = 0x08B7357Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B551F0:
    goto L_08B5519C;
L_08B551F8:
    aot_gpr_31 = (0x08B55200u);
    ctx.pc = 0x08B73584u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55200:
    goto L_08B5519C;
L_08B55208:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[3];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
      if (branch_taken) {
          goto L_08B5527C;
      }
      goto L_08B55218;
    }
L_08B55218:
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B55264;
      }
      goto L_08B55224;
    }
L_08B55224:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B55254;
      }
      goto L_08B5522C;
    }
L_08B5522C:
    ctx.gpr[2] = (aot_gpr_4 + 0u);
    goto L_08B55230;
L_08B55230:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B55244;
      }
      goto L_08B55238;
    }
L_08B55238:
    aot_gpr_31 = (0x08B55240u);
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B7363Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55240:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08B55244;
L_08B55244:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55254:
    aot_gpr_31 = (0x08B5525Cu);
    ctx.pc = 0x08B7358Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5525C:
    goto L_08B55230;
L_08B55264:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_gpr_4 + 0u);
        goto L_08B55230;
    }
    goto L_08B5526C;
L_08B5526C:
    aot_gpr_31 = (0x08B55274u);
    ctx.pc = 0x08B7357Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55274:
    goto L_08B55230;
L_08B5527C:
    aot_gpr_31 = (0x08B55284u);
    ctx.pc = 0x08B73584u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55284:
    goto L_08B55230;
L_08B5528C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    ctx.gpr[2] = (0u + 0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5529C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16636)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_gpr_4 = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08B552C8;
      }
      goto L_08B552B8;
    }
L_08B552B8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B552C8:
    aot_gpr_31 = (0x08B552D0u);
    ctx.pc = 0x08B7356Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B552D0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16636), 0u);
    goto L_08B552B8;
L_08B552D8:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] & 2u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B552F4:
    aot_gpr_4 = (2234u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55300:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B55318;
      }
      goto L_08B55308;
    }
L_08B55308:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(0u + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B55320;
      }
      goto L_08B55314;
    }
L_08B55314:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B55318;
L_08B55318:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55320:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55328:
    { const std::uint32_t aot_run_words[23]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_29, ctx.gpr[30], aot_gpr_31, std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[21]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[23]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[25]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[27]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[29]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(ctx.fpr[31])};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u + 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5538C:
    { std::uint32_t aot_run_words[22]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_29 = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[11]);
      ctx.fpr[21] = std::bit_cast<float>(aot_run_words[12]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[13]);
      ctx.fpr[23] = std::bit_cast<float>(aot_run_words[14]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[15]);
      ctx.fpr[25] = std::bit_cast<float>(aot_run_words[16]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[17]);
      ctx.fpr[27] = std::bit_cast<float>(aot_run_words[18]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[19]);
      ctx.fpr[29] = std::bit_cast<float>(aot_run_words[20]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[21]);
    }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.fpr[31] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08B553F0;
      }
      goto L_08B553EC;
    }
L_08B553EC:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(1));
    goto L_08B553F0;
L_08B553F0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 + 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B553F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B55408u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 352u, 0x08B55408u, 0x08B625C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55408u) goto L_08B55408;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08B55424;
      }
      goto L_08B55410;
    }
L_08B55410:
    aot_gpr_5 = (ctx.gpr[3] + 0u);
    aot_gpr_6 = (0u + 0u);
    ctx.gpr[7] = (0u | 61505u);
    aot_gpr_31 = (0x08B55424u);
    aot_gpr_4 = (ctx.gpr[2] + 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55424u) goto L_08B55424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55424:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55434:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B55460;
      }
      goto L_08B55454;
    }
L_08B55454:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B55460u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B55434;
L_08B55460:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B5546Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 358u, 0x08B5546Cu, 0x08B5D908u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5546Cu) goto L_08B5546C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5546C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55480:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(15532)));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B55574;
      }
      goto L_08B554A8;
    }
L_08B554A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55500;
      }
      goto L_08B554B4;
    }
L_08B554B4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B554B8;
L_08B554B8:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08B554E8;
    }
    goto L_08B554C8;
L_08B554C8:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08B554CC;
L_08B554CC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B554D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 365u, 0x08B554D8u, 0x08B5D908u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B554D8u) goto L_08B554D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B554D8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B554CC;
      }
      goto L_08B554E0;
    }
L_08B554E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B554E8;
L_08B554E8:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B554B8;
      }
      goto L_08B554F4;
    }
L_08B554F4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B55500u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 369u, 0x08B55500u, 0x08B5D908u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55500u) goto L_08B55500;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55500:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08B55534;
      }
      goto L_08B5550C;
    }
L_08B5550C:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
        goto L_08B55538;
    }
    goto L_08B55514;
L_08B55514:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
        goto L_08B55538;
    }
    goto L_08B5551C;
L_08B5551C:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B55520;
L_08B55520:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B5552Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 374u, 0x08B5552Cu, 0x08B5D908u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5552Cu) goto L_08B5552C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5552C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    aot_gpr_5 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B55520;
      }
      goto L_08B55534;
    }
L_08B55534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    goto L_08B55538;
L_08B55538:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B55548;
      }
      goto L_08B55540;
    }
L_08B55540:
    aot_gpr_31 = (0x08B55548u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 378u, 0x08B55548u, 0x08B5D908u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55548u) goto L_08B55548;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B55574;
      }
      goto L_08B55554;
    }
L_08B55554:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B55560u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55560u) goto L_08B55560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55560:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B55574;
      }
      goto L_08B5556C;
    }
L_08B5556C:
    aot_gpr_31 = (0x08B55574u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55434;
L_08B55574:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55590:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B555C0;
      }
      goto L_08B555AC;
    }
L_08B555AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (2234u << 16u);
        goto L_08B555EC;
    }
    goto L_08B555B8;
L_08B555B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08B555F8;
      }
      goto L_08B555C0;
    }
L_08B555C0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (2229u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_gpr_31 = (0x08B555D4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21904));
    goto L_08B55F58;
L_08B555D4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B555EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    goto L_08B555F8;
L_08B555F8:
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B5560C;
    }
    goto L_08B55600;
L_08B55600:
    aot_gpr_31 = (0x08B55608u);
    goto L_08B55884;
L_08B55608:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B5560C;
L_08B5560C:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B55674;
      }
      goto L_08B55618;
    }
L_08B55618:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B55674;
      }
      goto L_08B55624;
    }
L_08B55624:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 3u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
        goto L_08B55644;
    }
    goto L_08B55644;
L_08B55644:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B55674;
      }
      goto L_08B5564C;
    }
L_08B5564C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B55660u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55660u) goto L_08B55660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55660:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] - aot_gpr_4);
      if (branch_taken) {
          goto L_08B55690;
      }
      goto L_08B5566C;
    }
L_08B5566C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B5564C;
      }
      goto L_08B55674;
    }
L_08B55674:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55690:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B556B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B55748;
      }
      goto L_08B556EC;
    }
L_08B556EC:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B556F8;
L_08B556F8:
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08B55778;
    }
    goto L_08B55704;
L_08B55704:
    aot_gpr_31 = (0x08B5570Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B56104;
L_08B5570C:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B55770;
    }
    goto L_08B55714;
L_08B55714:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
      if (branch_taken) {
          goto L_08B55748;
      }
      goto L_08B5571C;
    }
L_08B5571C:
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55748:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55770:
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B55778;
L_08B55778:
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_08B55784;
    }
    goto L_08B55784;
L_08B55784:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x08B55794u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 412u, 0x08B55794u, 0x08B580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 18u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 18u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55794u) goto L_08B55794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55794:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B557D8;
      }
      goto L_08B557A0;
    }
L_08B557A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B557C4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 414u, 0x08B557C4u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B557C4u) goto L_08B557C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B557C4:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B5571C;
      }
      goto L_08B557D0;
    }
L_08B557D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B556F8;
      }
      goto L_08B557D8;
    }
L_08B557D8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B557FCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 417u, 0x08B557FCu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B557FCu) goto L_08B557FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B557FC:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5582C:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_5 = (2229u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25576));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_5 = (2229u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25664));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (2229u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25812));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (2229u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25904));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55884:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2229u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22784));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(484));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B558BCu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B5582C;
L_08B558BC:
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(572));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B558D0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B5582C;
L_08B558D0:
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(660));
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08B558E4u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B5582C;
L_08B558E4:
    aot_gpr_4 = (0u | 3u);
    { const std::uint32_t aot_run_words[3]{0u, aot_gpr_4, ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(ctx.gpr[8] + static_cast<std::uint32_t>(472), aot_run_words); }
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55900:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (2229u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B55914u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21904));
    goto L_08B55F58;
L_08B55914:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55920:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_6 = (0u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08B55954u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 426u, 0x08B55954u, 0x08B5A974u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 694u, 0x08B5A974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55954u) goto L_08B55954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55954:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55960:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_31 = (0x08B55978u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55978u) goto L_08B55978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55978:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B5599Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55B40;
L_08B5599C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B559AC:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B559E0;
      }
      goto L_08B559C0;
    }
L_08B559C0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B559C0;
      }
      goto L_08B559E0;
    }
L_08B559E0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B559E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[22] = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B55A38;
      }
      goto L_08B55A24;
    }
L_08B55A24:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B55A64;
      }
      goto L_08B55A30;
    }
L_08B55A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B55A6C;
      }
      goto L_08B55A38;
    }
L_08B55A38:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55A64:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B55A6C;
L_08B55A6C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B55AC4;
      }
      goto L_08B55A80;
    }
L_08B55A80:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B55A8Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08B559AC;
L_08B55A8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[19]);
    aot_gpr_31 = (0x08B55AA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B56104;
L_08B55AA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (ctx.gpr[21] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B55B10;
      }
      goto L_08B55AB0;
    }
L_08B55AB0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B55A80;
      }
      goto L_08B55AC0;
    }
L_08B55AC0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08B55AC4;
L_08B55AC4:
    aot_gpr_31 = (0x08B55ACCu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08B559AC;
L_08B55ACC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55B10:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55B40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B55EF0;
      }
      goto L_08B55B78;
    }
L_08B55B78:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B55B94;
      }
      goto L_08B55B88;
    }
L_08B55B88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08B55BA8;
    }
    goto L_08B55B94;
L_08B55B94:
    aot_gpr_31 = (0x08B55B9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B575C8;
L_08B55B9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B55BC0;
      }
      goto L_08B55BA4;
    }
L_08B55BA4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B55BA8;
L_08B55BA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55BF0;
      }
      goto L_08B55BB8;
    }
L_08B55BB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 1u);
      if (branch_taken) {
          goto L_08B55C58;
      }
      goto L_08B55BC0;
    }
L_08B55BC0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55BF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B55C0C;
      }
      goto L_08B55BFC;
    }
L_08B55BFC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B55BFC;
      }
      goto L_08B55C0C;
    }
L_08B55C0C:
    aot_gpr_5 = (0u | 1024u);
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (ctx.gpr[18] | 0u);
        goto L_08B55C1C;
    }
    goto L_08B55C1C;
L_08B55C1C:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B55C2Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55C2Cu) goto L_08B55C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55C2C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B55F20;
    }
    goto L_08B55C38;
L_08B55C38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B55BF0;
      }
      goto L_08B55C50;
    }
L_08B55C50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B55EF0;
      }
      goto L_08B55C58;
    }
L_08B55C58:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55D9C;
      }
      goto L_08B55C60;
    }
L_08B55C60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B55C80;
      }
      goto L_08B55C70;
    }
L_08B55C70:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B55C70;
      }
      goto L_08B55C80;
    }
L_08B55C80:
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B55CC8;
      }
      goto L_08B55C8C;
    }
L_08B55C8C:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08B55C98;
    }
    goto L_08B55C98;
L_08B55C98:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B55CA8u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 469u, 0x08B55CA8u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55CA8u) goto L_08B55CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B55D7C;
      }
      goto L_08B55CC8;
    }
L_08B55CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B55D18;
      }
      goto L_08B55CD8;
    }
L_08B55CD8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B55D18;
      }
      goto L_08B55CE0;
    }
L_08B55CE0:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B55CECu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 473u, 0x08B55CECu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55CECu) goto L_08B55CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55CEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_31 = (0x08B55D00u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08B55590;
L_08B55D00:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08B55D80;
    }
    goto L_08B55D08;
L_08B55D08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B55D0C;
L_08B55D0C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 | 64u);
      if (branch_taken) {
          goto L_08B55F28;
      }
      goto L_08B55D18;
    }
L_08B55D18:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08B55D54;
    }
    goto L_08B55D28;
L_08B55D28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B55D3Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55D3Cu) goto L_08B55D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55D3C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[20]) <= 0) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B55D0C;
    }
    goto L_08B55D48;
L_08B55D48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B55D80;
      }
      goto L_08B55D50;
    }
L_08B55D50:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08B55D54;
L_08B55D54:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B55D64u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 483u, 0x08B55D64u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55D64u) goto L_08B55D64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55D64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B55D7C;
L_08B55D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08B55D80;
L_08B55D80:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B55C60;
      }
      goto L_08B55D94;
    }
L_08B55D94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B55EF0;
      }
      goto L_08B55D9C;
    }
L_08B55D9C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08B55DB8;
      }
      goto L_08B55DA4;
    }
L_08B55DA4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B55DA4;
      }
      goto L_08B55DB8;
    }
L_08B55DB8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B55DE8;
      }
      goto L_08B55DC0;
    }
L_08B55DC0:
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x08B55DCCu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 491u, 0x08B55DCCu, 0x08B580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 18u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 18u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55DCCu) goto L_08B55DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55DCC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B55DE0;
      }
      goto L_08B55DD8;
    }
L_08B55DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B55DE4;
      }
      goto L_08B55DE0;
    }
L_08B55DE0:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08B55DE4;
L_08B55DE4:
    ctx.gpr[22] = (0u | 1u);
    goto L_08B55DE8;
L_08B55DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[23] ? 1u : 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
        goto L_08B55E08;
    }
    goto L_08B55E08;
L_08B55E08:
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_6);
      if (branch_taken) {
          goto L_08B55E58;
      }
      goto L_08B55E14;
    }
L_08B55E14:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B55E58;
      }
      goto L_08B55E20;
    }
L_08B55E20:
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B55E2Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 499u, 0x08B55E2Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55E2Cu) goto L_08B55E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55E2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[21]);
    aot_gpr_31 = (0x08B55E40u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08B55590;
L_08B55E40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B55EC0;
      }
      goto L_08B55E48;
    }
L_08B55E48:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B55E4C;
L_08B55E4C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 | 64u);
      if (branch_taken) {
          goto L_08B55F28;
      }
      goto L_08B55E58;
    }
L_08B55E58:
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
        goto L_08B55E94;
    }
    goto L_08B55E68;
L_08B55E68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B55E7Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55E7Cu) goto L_08B55E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55E7C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[21]) <= 0) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B55E4C;
    }
    goto L_08B55E88;
L_08B55E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B55EC0;
      }
      goto L_08B55E90;
    }
L_08B55E90:
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    goto L_08B55E94;
L_08B55E94:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B55EA4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 509u, 0x08B55EA4u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55EA4u) goto L_08B55EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B55EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
    goto L_08B55EC0;
L_08B55EC0:
    if (ctx.gpr[23] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08B55EDC;
    }
    goto L_08B55EC8;
L_08B55EC8:
    aot_gpr_31 = (0x08B55ED0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55590;
L_08B55ED0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55E48;
      }
      goto L_08B55ED8;
    }
L_08B55ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08B55EDC;
L_08B55EDC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[21]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B55D9C;
      }
      goto L_08B55EF0;
    }
L_08B55EF0:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55F20:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    goto L_08B55F28;
L_08B55F28:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55F58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(472));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B55FC4;
      }
      goto L_08B55F84;
    }
L_08B55F84:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08B55F88;
L_08B55F88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B55FB8;
      }
      goto L_08B55F94;
    }
L_08B55F94:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08B55FB0;
    }
    goto L_08B55FA0;
L_08B55FA0:
    jump_target = aot_gpr_16;
    aot_gpr_31 = (0x08B55FA8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B55FA8u) goto L_08B55FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B55FA8:
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B55FB0;
L_08B55FB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08B55F94;
      }
      goto L_08B55FB8;
    }
L_08B55FB8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08B55F88;
    }
    goto L_08B55FC4;
L_08B55FC4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B55FE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(67));
    aot_gpr_5 = (aot_gpr_4 & 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B56028;
      }
      goto L_08B56014;
    }
L_08B56014:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_4 = (aot_gpr_4 | 2048u);
      if (branch_taken) {
          goto L_08B56060;
      }
      goto L_08B56020;
    }
L_08B56020:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08B5604C;
      }
      goto L_08B56028;
    }
L_08B56028:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5604C:
    aot_gpr_31 = (0x08B56054u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 532u, 0x08B56054u, 0x08B5F23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 699u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 699u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 699u, 0x08B5F23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B56054u) goto L_08B56054;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B56054:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B56070;
      }
      goto L_08B5605C;
    }
L_08B5605C:
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    goto L_08B56060;
L_08B56060:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 | 2u);
      if (branch_taken) {
          goto L_08B560C0;
      }
      goto L_08B56070;
    }
L_08B56070:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (0u | 32768u);
    aot_gpr_5 = (aot_gpr_5 & 61440u);
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 | 2048u);
        goto L_08B560B4;
    }
    goto L_08B56084;
L_08B56084:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (2229u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(25812));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_4 = (aot_gpr_4 | 2048u);
        goto L_08B560B4;
    }
    goto L_08B56098;
L_08B56098:
    aot_gpr_4 = (aot_gpr_4 | 1024u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1024u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 | 2u);
      if (branch_taken) {
          goto L_08B560C0;
      }
      goto L_08B560B4;
    }
L_08B560B4:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    goto L_08B560C0;
L_08B560C0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B560E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B560F8u);
    goto L_08B55590;
L_08B560F8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56104:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
        goto L_08B56130;
    }
    goto L_08B56120;
L_08B56120:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    goto L_08B56130;
L_08B56130:
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B56144;
    }
    goto L_08B56138;
L_08B56138:
    aot_gpr_31 = (0x08B56140u);
    goto L_08B55884;
L_08B56140:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B56144;
L_08B56144:
    aot_gpr_5 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08B56164;
      }
      goto L_08B56150;
    }
L_08B56150:
    aot_gpr_5 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08B56178;
      }
      goto L_08B5615C;
    }
L_08B5615C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B561EC;
      }
      goto L_08B56164;
    }
L_08B56164:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56178:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 & 8u);
      if (branch_taken) {
          goto L_08B56194;
      }
      goto L_08B56180;
    }
L_08B56180:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B561A8;
      }
      goto L_08B56188;
    }
L_08B56188:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B56200;
      }
      goto L_08B56194;
    }
L_08B56194:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B561A8:
    aot_gpr_31 = (0x08B561B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55590;
L_08B561B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B561D8;
      }
      goto L_08B561B8;
    }
L_08B561B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B56188;
      }
      goto L_08B561D8;
    }
L_08B561D8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B561EC:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
        goto L_08B56204;
    }
    goto L_08B561F4;
L_08B561F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B56214;
      }
      goto L_08B56200;
    }
L_08B56200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    goto L_08B56204;
L_08B56204:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B56230;
      }
      goto L_08B5620C;
    }
L_08B5620C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B5623C;
      }
      goto L_08B56214;
    }
L_08B56214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56230:
    aot_gpr_31 = (0x08B56238u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55FE8;
L_08B56238:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B5623C;
L_08B5623C:
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2229u << 16u);
      if (branch_taken) {
          goto L_08B56254;
      }
      goto L_08B56248;
    }
L_08B56248:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    aot_gpr_31 = (0x08B56254u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24808));
    goto L_08B55F58;
L_08B56254:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B56270u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B56270u) goto L_08B56270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B56270:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-8193));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B562C4;
      }
      goto L_08B56290;
    }
L_08B56290:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B562A4;
      }
      goto L_08B56298;
    }
L_08B56298:
    aot_gpr_4 = (aot_gpr_4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B562B0;
      }
      goto L_08B562A4;
    }
L_08B562A4:
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B562B0;
L_08B562B0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B562C4:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B562D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[6]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words); }
    aot_gpr_6 = (0u | 520u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (0u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_31);
    aot_gpr_31 = (0x08B5633Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 577u, 0x08B5633Cu, 0x08B5A974u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 694u, 0x08B5A974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5633Cu) goto L_08B5633C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5633C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56350:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56358:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[5]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[11]);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_31);
    aot_gpr_31 = (0x08B56394u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B56394u) goto L_08B56394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B56394:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (2229u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25424));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_gpr_5 = (0u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08B563D8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08B56834;
L_08B563D8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B563E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08B5640Cu);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 583u, 0x08B5640Cu, 0x08B5F2F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 709u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 709u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 709u, 0x08B5F2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5640Cu) goto L_08B5640C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5640C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B56424;
    }
    goto L_08B56414;
L_08B56414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), aot_gpr_4);
      if (branch_taken) {
          goto L_08B56430;
      }
      goto L_08B56424;
    }
L_08B56424:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B56430;
L_08B56430:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56440:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_4 & 256u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B56494;
      }
      goto L_08B56474;
    }
L_08B56474:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08B5648Cu);
    ctx.gpr[7] = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 589u, 0x08B5648Cu, 0x08B5F294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 704u, 0x08B5F294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5648Cu) goto L_08B5648C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5648C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08B56494;
L_08B56494:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B564BCu);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 591u, 0x08B564BCu, 0x08B5F3A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 719u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 719u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 719u, 0x08B5F3A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B564BCu) goto L_08B564BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B564BC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B564D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08B564F8u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 593u, 0x08B564F8u, 0x08B5F294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 704u, 0x08B5F294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B564F8u) goto L_08B564F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B564F8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_5;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B56514;
      }
      goto L_08B56504;
    }
L_08B56504:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B56520;
      }
      goto L_08B56514;
    }
L_08B56514:
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08B56520;
L_08B56520:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56530:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B56544u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 598u, 0x08B56544u, 0x08B5F1E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 694u, 0x08B5F1E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B56544u) goto L_08B56544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B56544:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56550:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B56600;
      }
      goto L_08B56574;
    }
L_08B56574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
        goto L_08B56590;
    }
    goto L_08B56580;
L_08B56580:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    goto L_08B56590;
L_08B56590:
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B565A4;
    }
    goto L_08B56598;
L_08B56598:
    aot_gpr_31 = (0x08B565A0u);
    goto L_08B55884;
L_08B565A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B565A4;
L_08B565A4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08B56624;
      }
      goto L_08B565C0;
    }
L_08B565C0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 & 8u);
      if (branch_taken) {
          goto L_08B56600;
      }
      goto L_08B565C8;
    }
L_08B565C8:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 | 4u);
      if (branch_taken) {
          goto L_08B56620;
      }
      goto L_08B565D0;
    }
L_08B565D0:
    aot_gpr_31 = (0x08B565D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55590;
L_08B565D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B56600;
      }
      goto L_08B565E0;
    }
L_08B565E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B5661C;
      }
      goto L_08B56600;
    }
L_08B56600:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5661C:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    goto L_08B56620;
L_08B56620:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B56624;
L_08B56624:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B566A8;
      }
      goto L_08B56634;
    }
L_08B56634:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B56670;
      }
      goto L_08B56644;
    }
L_08B56644:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_6 = (0u | 68u);
    aot_gpr_31 = (0x08B56654u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29528));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 617u, 0x08B56654u, 0x08B605C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 55u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 55u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 55u, 0x08B605C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B56654u) goto L_08B56654;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B56654:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B566A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B566F4;
      }
      goto L_08B566B4;
    }
L_08B566B4:
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(60), aot_gpr_4);
        goto L_08B566F8;
    }
    goto L_08B566C0;
L_08B566C0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B566F4;
      }
      goto L_08B566CC;
    }
L_08B566CC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B566F4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(60), aot_gpr_4);
    goto L_08B566F8;
L_08B566F8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_6);
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(66));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5673C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B56764;
      }
      goto L_08B56750;
    }
L_08B56750:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B56768;
      }
      goto L_08B56764;
    }
L_08B56764:
    ctx.gpr[8] = (0u | 0u);
    goto L_08B56768;
L_08B56768:
    ctx.gpr[3] = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[3] + aot_gpr_4);
    goto L_08B56770;
L_08B56770:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (ctx.gpr[3] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B56770;
      }
      goto L_08B56784;
    }
L_08B56784:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_08B567A4;
      }
      goto L_08B5678C;
    }
L_08B5678C:
    ctx.gpr[8] = (aot_gpr_6 - ctx.gpr[8]);
    ctx.gpr[7] = (0u | 93u);
    aot_gpr_6 = (0u | 45u);
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B567AC;
      }
      goto L_08B567A4;
    }
L_08B567A4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B567AC:
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    goto L_08B567B4;
L_08B567B4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[7];
    aot_gpr_5 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5682C;
      }
      goto L_08B567BC;
    }
L_08B567BC:
    if (ctx.gpr[10] == aot_gpr_6) {
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
        goto L_08B567E0;
    }
    goto L_08B567C4;
L_08B567C4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B567D8;
      }
      goto L_08B567CC;
    }
L_08B567CC:
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B567AC;
      }
      goto L_08B567D8;
    }
L_08B567D8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B567E0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B567F4;
      }
      goto L_08B567E8;
    }
L_08B567E8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_gpr_5 = (ctx.gpr[2] | 0u);
        goto L_08B56800;
    }
    goto L_08B567F4;
L_08B567F4:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_gpr_4 + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08B567AC;
      }
      goto L_08B56800;
    }
L_08B56800:
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[11]);
    goto L_08B5680C;
L_08B5680C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08B5680C;
      }
      goto L_08B56824;
    }
L_08B56824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B567B4;
      }
      goto L_08B5682C;
    }
L_08B5682C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56834:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-720));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(644), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.gpr[23] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(15536));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_4);
    aot_gpr_4 = (2230u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8396));
    aot_gpr_5 = (2230u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(668), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32624));
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), aot_gpr_5);
    ctx.gpr[30] = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_6);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    ctx.gpr[20] = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16752)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(708), aot_gpr_31);
    goto L_08B568C8;
L_08B568C8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(644));
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B568DCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08B578C8;
L_08B568DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B568EC;
    }
L_08B568EC:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_5;
    aot_gpr_5 = (0u | 37u);
      if (branch_taken) {
          goto L_08B56964;
      }
      goto L_08B568F8;
    }
L_08B568F8:
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 37u);
      if (branch_taken) {
          goto L_08B56964;
      }
      goto L_08B5690C;
    }
L_08B5690C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56910;
L_08B56910:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B5692C;
    }
    goto L_08B56918;
L_08B56918:
    aot_gpr_31 = (0x08B56920u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B56928;
    }
L_08B56928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B5692C;
L_08B5692C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (2234u << 16u);
        goto L_08B57528;
    }
    goto L_08B56944;
L_08B56944:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B56910;
      }
      goto L_08B56964;
    }
L_08B56964:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08B569B0;
      }
      goto L_08B5696C;
    }
L_08B5696C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B56978;
L_08B56978:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B56BE8;
      }
      goto L_08B56988;
    }
L_08B56988:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 121 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_4);
        goto L_08B56BEC;
    }
    goto L_08B56994;
L_08B56994:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29456)));
    jump_target = ctx.gpr[1];
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B569AC:
    aot_gpr_16 = (0u | 0u);
    goto L_08B569B0;
L_08B569B0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B569BC;
    }
L_08B569BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B569DC;
    }
    goto L_08B569C8;
L_08B569C8:
    aot_gpr_31 = (0x08B569D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B569D0:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B569D8;
L_08B569D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B569DC;
L_08B569DC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B569EC;
    }
L_08B569EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B569BC;
      }
      goto L_08B56A14;
    }
L_08B56A14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B56A1C;
    }
L_08B56A1C:
    aot_gpr_16 = (aot_gpr_16 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A28;
    }
L_08B56A28:
    aot_gpr_16 = (aot_gpr_16 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A34;
    }
L_08B56A34:
    aot_gpr_16 = (aot_gpr_16 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A40;
    }
L_08B56A40:
    aot_gpr_16 = (aot_gpr_16 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A4C;
    }
L_08B56A4C:
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A68;
    }
L_08B56A68:
    aot_gpr_16 = (aot_gpr_16 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56A78;
      }
      goto L_08B56A74;
    }
L_08B56A74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56A78;
L_08B56A78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_5);
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56A8C;
    }
L_08B56A8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(668)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_5);
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AA4;
    }
L_08B56AA4:
    aot_gpr_16 = (aot_gpr_16 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56AB4;
      }
      goto L_08B56AB0;
    }
L_08B56AB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56AB4;
L_08B56AB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_5);
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AC8;
    }
L_08B56AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_4);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AE0;
    }
L_08B56AE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    aot_gpr_16 = (aot_gpr_16 | 256u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_4);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AFC;
    }
L_08B56AFC:
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B08;
    }
L_08B56B08:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B14;
    }
L_08B56B14:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_31 = (0x08B56B20u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_08B5673C;
L_08B56B20:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_16 = (aot_gpr_16 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B34;
    }
L_08B56B34:
    aot_gpr_16 = (aot_gpr_16 | 32u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B44;
    }
L_08B56B44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    aot_gpr_16 = (aot_gpr_16 | 272u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_4);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B60;
    }
L_08B56B60:
    aot_gpr_4 = (aot_gpr_16 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B56B6C;
    }
L_08B56B6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
    aot_gpr_5 = (aot_gpr_16 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B56B8C;
      }
      goto L_08B56B7C;
    }
L_08B56B7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56B8C;
    }
L_08B56B8C:
    aot_gpr_5 = (aot_gpr_16 & 1u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
        goto L_08B56BA8;
    }
    goto L_08B56B98;
L_08B56B98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56BA8;
    }
L_08B56BA8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56BB4;
    }
L_08B56BB4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B56BE8:
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_4);
    goto L_08B56BEC;
L_08B56BEC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_gpr_16 | 1u);
        goto L_08B56C00;
    }
    goto L_08B56C00;
L_08B56C00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_5);
    goto L_08B56C10;
L_08B56C10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-449));
      if (branch_taken) {
          goto L_08B56C28;
      }
      goto L_08B56C18;
    }
L_08B56C18:
    aot_gpr_31 = (0x08B56C20u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56C20:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56C28;
L_08B56C28:
    aot_gpr_4 = (aot_gpr_16 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B56CA0;
      }
      goto L_08B56C34;
    }
L_08B56C34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
        goto L_08B56CA0;
    }
    goto L_08B56C50;
L_08B56C50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56C54;
L_08B56C54:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_08B56C70;
      }
      goto L_08B56C64;
    }
L_08B56C64:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B56C80;
      }
      goto L_08B56C70;
    }
L_08B56C70:
    aot_gpr_31 = (0x08B56C78u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56C78:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56C80;
L_08B56C80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56C54;
    }
    goto L_08B56C9C;
L_08B56C9C:
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    goto L_08B56CA0;
L_08B56CA0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B56CA8;
    }
L_08B56CA8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B56D80;
      }
      goto L_08B56CB4;
    }
L_08B56CB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B56EC4;
      }
      goto L_08B56CBC;
    }
L_08B56CBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B56FE8;
      }
      goto L_08B56CC4;
    }
L_08B56CC4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08B572C4;
      }
      goto L_08B56CCC;
    }
L_08B56CCC:
    aot_gpr_16 = (aot_gpr_16 & 8u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08B56CD8;
    }
    goto L_08B56CD8;
L_08B56CD8:
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
        goto L_08B56D48;
    }
    goto L_08B56CE0;
L_08B56CE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    goto L_08B56CF0;
L_08B56CF0:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[19]);
        goto L_08B56D28;
    }
    goto L_08B56CF8;
L_08B56CF8:
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] - aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_31 = (0x08B56D10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56D10:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56D3C;
    }
    goto L_08B56D18;
L_08B56D18:
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56D20;
L_08B56D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_16);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56D28;
    }
L_08B56D28:
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B56D20;
      }
      goto L_08B56D3C;
    }
L_08B56D3C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B56CF0;
      }
      goto L_08B56D48;
    }
L_08B56D48:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(-4)));
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B56D60u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08B559E8;
L_08B56D60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_16);
      if (branch_taken) {
          goto L_08B57538;
      }
      goto L_08B56D6C;
    }
L_08B56D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_4);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56D80;
    }
L_08B56D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 & 8u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(36))))));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B56D9C;
    }
    goto L_08B56D9C;
L_08B56D9C:
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
        goto L_08B56E20;
    }
    goto L_08B56DA4;
L_08B56DA4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B56E10;
      }
      goto L_08B56DAC;
    }
L_08B56DAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56DB0;
L_08B56DB0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B56E10;
      }
      goto L_08B56DCC;
    }
L_08B56DCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56DFC;
    }
    goto L_08B56DD8;
L_08B56DD8:
    aot_gpr_31 = (0x08B56DE0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56DE0:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56DFC;
    }
    goto L_08B56DE8;
L_08B56DE8:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56DF0;
L_08B56DF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B56E18;
      }
      goto L_08B56DF8;
    }
L_08B56DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56DFC;
L_08B56DFC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(36))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56DB0;
    }
    goto L_08B56E10;
L_08B56E10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B56E18;
    }
L_08B56E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56E20;
    }
L_08B56E20:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B56EA4;
      }
      goto L_08B56E34;
    }
L_08B56E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56E38;
L_08B56E38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56EA4;
      }
      goto L_08B56E60;
    }
L_08B56E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56E90;
    }
    goto L_08B56E6C;
L_08B56E6C:
    aot_gpr_31 = (0x08B56E74u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56E74:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56E90;
    }
    goto L_08B56E7C;
L_08B56E7C:
    if (aot_gpr_16 == ctx.gpr[17]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56E84;
L_08B56E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_16 - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B56EA8;
      }
      goto L_08B56E8C;
    }
L_08B56E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56E90;
L_08B56E90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56E38;
    }
    goto L_08B56EA4;
L_08B56EA4:
    ctx.gpr[17] = (aot_gpr_16 - ctx.gpr[17]);
    goto L_08B56EA8;
L_08B56EA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B56EB0;
    }
L_08B56EB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_4);
      if (branch_taken) {
          goto L_08B56E18;
      }
      goto L_08B56EC4;
    }
L_08B56EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 & 8u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B56EE4;
    }
    goto L_08B56EE4;
L_08B56EE4:
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
        goto L_08B56F54;
    }
    goto L_08B56EEC;
L_08B56EEC:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08B56F4C;
      }
      goto L_08B56EF4;
    }
L_08B56EF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56EF8;
L_08B56EF8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B56F4C;
      }
      goto L_08B56F14;
    }
L_08B56F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56F34;
    }
    goto L_08B56F20;
L_08B56F20:
    aot_gpr_31 = (0x08B56F28u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56F28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B56F4C;
      }
      goto L_08B56F30;
    }
L_08B56F30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56F34;
L_08B56F34:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56EF8;
    }
    goto L_08B56F4C;
L_08B56F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_gpr_16 + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56F54;
    }
L_08B56F54:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B56FCC;
      }
      goto L_08B56F68;
    }
L_08B56F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56F6C;
L_08B56F6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56FCC;
      }
      goto L_08B56F94;
    }
L_08B56F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56FB4;
    }
    goto L_08B56FA0;
L_08B56FA0:
    aot_gpr_31 = (0x08B56FA8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56FA8:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B56FD0;
    }
    goto L_08B56FB0;
L_08B56FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56FB4;
L_08B56FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56F6C;
    }
    goto L_08B56FCC;
L_08B56FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    goto L_08B56FD0;
L_08B56FD0:
    aot_gpr_5 = (aot_gpr_16 - ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_4);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56FE8;
    }
L_08B56FE8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[19] = (0u | 348u);
        goto L_08B56FF8;
    }
    goto L_08B56FF8;
L_08B56FF8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_16 | 704u);
      if (branch_taken) {
          goto L_08B571A8;
      }
      goto L_08B57008;
    }
L_08B57008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B5700C;
L_08B5700C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_08B57060;
      }
      goto L_08B5701C;
    }
L_08B5701C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 71 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 88u);
      if (branch_taken) {
          goto L_08B57050;
      }
      goto L_08B57028;
    }
L_08B57028:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 43 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57034;
    }
L_08B57034:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-43));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28968)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57050:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    aot_gpr_4 = (aot_gpr_16 & 256u);
      if (branch_taken) {
          goto L_08B57134;
      }
      goto L_08B57058;
    }
L_08B57058:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57060;
    }
L_08B57060:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 120 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 121 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57084;
      }
      goto L_08B5706C;
    }
L_08B5706C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57104;
      }
      goto L_08B57078;
    }
L_08B57078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57080;
    }
L_08B57080:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 121 ? 1u : 0u);
    goto L_08B57084;
L_08B57084:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 & 256u);
      if (branch_taken) {
          goto L_08B57134;
      }
      goto L_08B5708C;
    }
L_08B5708C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57094;
    }
L_08B57094:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B570A4;
      }
      goto L_08B5709C;
    }
L_08B5709C:
    ctx.gpr[21] = (0u | 8u);
    aot_gpr_16 = (aot_gpr_16 | 256u);
    goto L_08B570A4;
L_08B570A4:
    aot_gpr_4 = (aot_gpr_16 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B570BC;
      }
      goto L_08B570B0;
    }
L_08B570B0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-705));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & aot_gpr_4);
      if (branch_taken) {
          goto L_08B570BC;
      }
      goto L_08B570BC;
    }
L_08B570BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B570C4;
    }
L_08B570C4:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_16 = (aot_gpr_16 & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B570DC;
    }
L_08B570DC:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B570F4;
    }
L_08B570F4:
    aot_gpr_16 = (aot_gpr_16 & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B57100;
    }
L_08B57100:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 11 ? 1u : 0u);
    goto L_08B57104;
L_08B57104:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B5710C;
    }
L_08B5710C:
    aot_gpr_16 = (aot_gpr_16 & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B57118;
    }
L_08B57118:
    aot_gpr_4 = (aot_gpr_16 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57124;
    }
L_08B57124:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_16 = (aot_gpr_16 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B57134;
    }
L_08B57134:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B5713C;
    }
L_08B5713C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(293));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57148;
    }
L_08B57148:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[21] = (0u | 16u);
    aot_gpr_16 = (aot_gpr_16 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B5715C;
    }
L_08B5715C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57164;
    }
L_08B57164:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5718C;
      }
      goto L_08B5717C;
    }
L_08B5717C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5719C;
      }
      goto L_08B5718C;
    }
L_08B5718C:
    aot_gpr_31 = (0x08B57194u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B57194:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B5719C;
    }
L_08B5719C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B5700C;
    }
    goto L_08B571A8;
L_08B571A8:
    aot_gpr_4 = (aot_gpr_16 & 128u);
    goto L_08B571AC;
L_08B571AC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
      if (branch_taken) {
          goto L_08B57200;
      }
      goto L_08B571B4;
    }
L_08B571B4:
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B571C0;
    }
L_08B571C0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08B571CCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B571CC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57200:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1))))));
    aot_gpr_5 = (0u | 120u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[19] = (aot_gpr_16 & 8u);
      if (branch_taken) {
          goto L_08B5721C;
      }
      goto L_08B57210;
    }
L_08B57210:
    aot_gpr_5 = (0u | 88u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
      if (branch_taken) {
          goto L_08B5722C;
      }
      goto L_08B5721C;
    }
L_08B5721C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08B57228u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B57228:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    goto L_08B5722C;
L_08B5722C:
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_5);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B572BC;
      }
      goto L_08B57238;
    }
L_08B57238:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(660)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B57250u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57250u) goto L_08B57250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B57250:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B57274;
      }
      goto L_08B57264;
    }
L_08B57264:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B572B0;
      }
      goto L_08B57274;
    }
L_08B57274:
    aot_gpr_5 = (aot_gpr_16 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B57290;
      }
      goto L_08B57280;
    }
L_08B57280:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B572B0;
      }
      goto L_08B57290;
    }
L_08B57290:
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
        goto L_08B572A8;
    }
    goto L_08B57298;
L_08B57298:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B572B0;
      }
      goto L_08B572A8;
    }
L_08B572A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B572B0;
L_08B572B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_4);
    goto L_08B572BC;
L_08B572BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B572C4;
    }
L_08B572C4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-65));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[19] = (0u | 348u);
        goto L_08B572D8;
    }
    goto L_08B572D8;
L_08B572D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_16 | 960u);
      if (branch_taken) {
          goto L_08B57420;
      }
      goto L_08B572E8;
    }
L_08B572E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B572EC;
L_08B572EC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 70 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57340;
      }
      goto L_08B572FC;
    }
L_08B572FC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 43 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57308;
    }
L_08B57308:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-193));
      if (branch_taken) {
          goto L_08B57374;
      }
      goto L_08B57314;
    }
L_08B57314:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-43));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57380;
      }
      goto L_08B57320;
    }
L_08B57320:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B573D4;
      }
      goto L_08B57328;
    }
L_08B57328:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B57380;
      }
      goto L_08B57330;
    }
L_08B57330:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B57398;
      }
      goto L_08B57338;
    }
L_08B57338:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08B573D4;
      }
      goto L_08B57340;
    }
L_08B57340:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 101u);
      if (branch_taken) {
          goto L_08B57360;
      }
      goto L_08B57348;
    }
L_08B57348:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 69 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57354;
    }
L_08B57354:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 640u);
      if (branch_taken) {
          goto L_08B573B4;
      }
      goto L_08B5735C;
    }
L_08B5735C:
    aot_gpr_4 = (0u | 101u);
    goto L_08B57360;
L_08B57360:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (aot_gpr_16 & 640u);
      if (branch_taken) {
          goto L_08B573B4;
      }
      goto L_08B57368;
    }
L_08B57368:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57370;
    }
L_08B57370:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-193));
    goto L_08B57374;
L_08B57374:
    aot_gpr_16 = (aot_gpr_16 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B57380;
    }
L_08B57380:
    aot_gpr_4 = (aot_gpr_16 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B5738C;
    }
L_08B5738C:
    aot_gpr_16 = (aot_gpr_16 & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B57398;
    }
L_08B57398:
    aot_gpr_4 = (aot_gpr_16 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B573A4;
    }
L_08B573A4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-321));
    aot_gpr_16 = (aot_gpr_16 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B573B4;
    }
L_08B573B4:
    aot_gpr_6 = (0u | 512u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B573C0;
    }
L_08B573C0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-769));
    aot_gpr_16 = (aot_gpr_16 & aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 | 192u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B573D4;
    }
L_08B573D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B573DC;
    }
L_08B573DC:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B57404;
      }
      goto L_08B573F4;
    }
L_08B573F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B57414;
      }
      goto L_08B57404;
    }
L_08B57404:
    aot_gpr_31 = (0x08B5740Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B5740C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57414;
    }
L_08B57414:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B572EC;
    }
    goto L_08B57420;
L_08B57420:
    aot_gpr_4 = (aot_gpr_16 & 128u);
    goto L_08B57424;
L_08B57424:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
      if (branch_taken) {
          goto L_08B574A4;
      }
      goto L_08B5742C;
    }
L_08B5742C:
    aot_gpr_4 = (aot_gpr_16 & 512u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08B57470;
    }
    goto L_08B57438;
L_08B57438:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    aot_gpr_4 = (aot_gpr_16 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B57448;
    }
L_08B57448:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B5744C;
L_08B5744C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08B57458u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B57458:
    aot_gpr_4 = (aot_gpr_16 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5744C;
      }
      goto L_08B57464;
    }
L_08B57464:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B5746C;
    }
L_08B5746C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B57470;
L_08B57470:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 101u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 69u);
      if (branch_taken) {
          goto L_08B57498;
      }
      goto L_08B57480;
    }
L_08B57480:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B57498;
      }
      goto L_08B57488;
    }
L_08B57488:
    aot_gpr_31 = (0x08B57490u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B57490:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08B57498;
L_08B57498:
    aot_gpr_31 = (0x08B574A0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B574A0:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    goto L_08B574A4;
L_08B574A4:
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B574B4;
    }
L_08B574B4:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B574C0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08B577CC;
L_08B574C0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B574EC;
      }
      goto L_08B574D8;
    }
L_08B574D8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B57518;
      }
      goto L_08B574EC;
    }
L_08B574EC:
    aot_gpr_6 = (aot_gpr_16 & 2u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
        goto L_08B5750C;
    }
    goto L_08B574F8;
L_08B574F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B57518;
      }
      goto L_08B5750C;
    }
L_08B5750C:
    aot_gpr_31 = (0x08B57514u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57514u) goto L_08B57514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B57514:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08B57518;
L_08B57518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_4);
    goto L_08B57524;
L_08B57524:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B57528;
L_08B57528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    ctx.gpr[20] = (2234u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16752)));
      if (branch_taken) {
          goto L_08B568C8;
      }
      goto L_08B57538;
    }
L_08B57538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    goto L_08B5753C;
L_08B5753C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
        goto L_08B57548;
    }
    goto L_08B57548;
L_08B57548:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57578:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (0u | 520u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_31);
    aot_gpr_31 = (0x08B575B4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 898u, 0x08B575B4u, 0x08B5A974u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 694u, 0x08B5A974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B575B4u) goto L_08B575B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B575B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B575C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
        goto L_08B575F4;
    }
    goto L_08B575E4;
L_08B575E4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    goto L_08B575F4;
L_08B575F4:
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B57608;
    }
    goto L_08B575FC;
L_08B575FC:
    aot_gpr_31 = (0x08B57604u);
    goto L_08B55884;
L_08B57604:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B57608;
L_08B57608:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08B57660;
      }
      goto L_08B57614;
    }
L_08B57614:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 & 4u);
      if (branch_taken) {
          goto L_08B5762C;
      }
      goto L_08B5761C;
    }
L_08B5761C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-37));
      if (branch_taken) {
          goto L_08B57640;
      }
      goto L_08B57624;
    }
L_08B57624:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 | 8u);
      if (branch_taken) {
          goto L_08B5765C;
      }
      goto L_08B5762C;
    }
L_08B5762C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57640:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    goto L_08B5765C;
L_08B5765C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B57660;
L_08B57660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
        goto L_08B57678;
    }
    goto L_08B5766C;
L_08B5766C:
    aot_gpr_31 = (0x08B57674u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B55FE8;
L_08B57674:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12))))));
    goto L_08B57678;
L_08B57678:
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B57698;
      }
      goto L_08B57684;
    }
L_08B57684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (0u - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_08B576AC;
      }
      goto L_08B57698;
    }
L_08B57698:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 2u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
        goto L_08B576A8;
    }
    goto L_08B576A8;
L_08B576A8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08B576AC;
L_08B576AC:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B576C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    goto L_08B576C8;
L_08B576C8:
    aot_gpr_31 = (0x08B576D0u);
    aot_gpr_4 = (0u | 1u);
    goto L_08B54F08;
L_08B576D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B576C8;
      }
      goto L_08B576D8;
    }
L_08B576D8:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    ctx.gpr[2] = (0u - aot_gpr_4);
        goto L_08B576E4;
    }
    goto L_08B576E4;
L_08B576E4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B576EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x08B57714u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28856));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 925u, 0x08B57714u, 0x08B5F3FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 724u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 724u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 724u, 0x08B5F3FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57714u) goto L_08B57714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B57714:
    aot_gpr_31 = (0x08B5771Cu);
    goto L_08B576C0;
L_08B5771C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57728:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2234u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(328)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
        goto L_08B57750;
    }
    goto L_08B57744;
L_08B57744:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(332));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(328), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_08B57750;
L_08B57750:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B57794;
      }
      goto L_08B5775C;
    }
L_08B5775C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_31 = (0x08B57768u);
    aot_gpr_4 = (0u | 136u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 931u, 0x08B57768u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57768u) goto L_08B57768;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B57768:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[7] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B577BC;
      }
      goto L_08B57778;
    }
L_08B57778:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(328)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(328), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    goto L_08B57794;
L_08B57794:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B577BC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B577CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B577DCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 936u, 0x08B577DCu, 0x08B59DE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 521u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 521u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 521u, 0x08B59DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B577DCu) goto L_08B577DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B577DC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B577E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B577FCu);
    aot_gpr_6 = (0u | 10u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 938u, 0x08B577FCu, 0x08B5DF34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 469u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 469u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 469u, 0x08B5DF34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B577FCu) goto L_08B577FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B577FC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57808:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(328)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    if (ctx.gpr[17] == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
        goto L_08B5787C;
    }
    goto L_08B5783C;
L_08B5783C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B57840;
L_08B57840:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[19] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08B57868;
      }
      goto L_08B5784C;
    }
L_08B5784C:
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08B57850;
L_08B57850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_4;
    aot_gpr_31 = (0x08B5785Cu);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5785Cu) goto L_08B5785C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5785C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B57850;
      }
      goto L_08B57868;
    }
L_08B57868:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B57840;
    }
    goto L_08B57874;
L_08B57874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    goto L_08B5787C;
L_08B5787C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B5788C;
      }
      goto L_08B57884;
    }
L_08B57884:
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B5788Cu);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5788Cu) goto L_08B5788C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5788C:
    aot_gpr_31 = (0x08B57894u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B54F08;
L_08B57894:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B578B4:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    ctx.gpr[2] = (0u - aot_gpr_4);
        goto L_08B578C0;
    }
    goto L_08B578C0;
L_08B578C0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B578C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
        goto L_08B57908;
    }
    goto L_08B57908;
L_08B57908:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
        goto L_08B5791C;
    }
    goto L_08B57910;
L_08B57910:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B5792C;
      }
      goto L_08B57918;
    }
L_08B57918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    goto L_08B5791C;
L_08B5791C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57924;
    }
L_08B57924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B57954;
      }
      goto L_08B5792C;
    }
L_08B5792C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57954:
    aot_gpr_31 = (0x08B5795Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5795Cu) goto L_08B5795C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5795C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57968;
    }
L_08B57968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08B57974u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28808));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 963u, 0x08B57974u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57974u) goto L_08B57974;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B57974:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B57A70;
      }
      goto L_08B5797C;
    }
L_08B5797C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57EA4;
      }
      goto L_08B57984;
    }
L_08B57984:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 129 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 224 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B579A0;
      }
      goto L_08B57990;
    }
L_08B57990:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 160 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B579B4;
      }
      goto L_08B5799C;
    }
L_08B5799C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 224 ? 1u : 0u);
    goto L_08B579A0;
L_08B579A0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 240 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B579A8;
    }
L_08B579A8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B579B0;
    }
L_08B579B0:
    aot_gpr_5 = (ctx.gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_08B579B4;
L_08B579B4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08B579D0;
      }
      goto L_08B579BC;
    }
L_08B579BC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 127 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B579F8;
      }
      goto L_08B579C8;
    }
L_08B579C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57A04;
      }
      goto L_08B579D0;
    }
L_08B579D0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B579F8:
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_4 << 8u);
        goto L_08B57A18;
    }
    goto L_08B57A00;
L_08B57A00:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 128 ? 1u : 0u);
    goto L_08B57A04;
L_08B57A04:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 253 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57A48;
      }
      goto L_08B57A0C;
    }
L_08B57A0C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B57A48;
      }
      goto L_08B57A14;
    }
L_08B57A14:
    aot_gpr_4 = (aot_gpr_4 << 8u);
    goto L_08B57A18;
L_08B57A18:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (0u | 2u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57A48:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57A70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08B57A7Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28800));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 983u, 0x08B57A7Cu, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57A7Cu) goto L_08B57A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B57A7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B57B3C;
      }
      goto L_08B57A84;
    }
L_08B57A84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57EA4;
      }
      goto L_08B57A8C;
    }
L_08B57A8C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 161 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57A98;
    }
L_08B57A98:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57AA0;
    }
L_08B57AA0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08B57AE4;
      }
      goto L_08B57AA8;
    }
L_08B57AA8:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 161 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57ABC;
      }
      goto L_08B57AB4;
    }
L_08B57AB4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 << 8u);
      if (branch_taken) {
          goto L_08B57B0C;
      }
      goto L_08B57ABC;
    }
L_08B57ABC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57AE4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57B0C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (0u | 2u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08B57B48u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28792));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0212->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0212_entry, 994u, 0x08B57B48u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B57B48u) goto L_08B57B48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B57B48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57B50;
    }
L_08B57B50:
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
        goto L_08B57B70;
    }
    goto L_08B57B58;
L_08B57B58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 3u);
      if (branch_taken) {
          goto L_08B57B98;
      }
      goto L_08B57B64;
    }
L_08B57B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B57BA0;
      }
      goto L_08B57B6C;
    }
L_08B57B6C:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B57B70;
L_08B57B70:
    ctx.gpr[2] = (0u | 1u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57B98:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    goto L_08B57BA0;
L_08B57BA0:
    aot_gpr_6 = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08B57E3C;
      }
      goto L_08B57BAC;
    }
L_08B57BAC:
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[12] = (2234u << 16u);
    ctx.gpr[14] = (2234u << 16u);
    ctx.gpr[7] = (0u | 74u);
    ctx.gpr[8] = (0u | 66u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 40u);
    ctx.gpr[11] = (0u | 36u);
    ctx.gpr[3] = (0u | 27u);
    ctx.gpr[15] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(16008));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(15576));
    goto L_08B57BDC;
L_08B57BDC:
    ctx.gpr[13] = (aot_gpr_4 << 5u);
    ctx.gpr[24] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[7];
    aot_gpr_4 = (ctx.gpr[13] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B57C98;
      }
      goto L_08B57BF0;
    }
L_08B57BF0:
    if (ctx.gpr[24] == ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
        goto L_08B57C84;
    }
    goto L_08B57BF8;
L_08B57BF8:
    if (ctx.gpr[24] == ctx.gpr[9]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
        goto L_08B57C5C;
    }
    goto L_08B57C00;
L_08B57C00:
    if (ctx.gpr[24] == ctx.gpr[10]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
        goto L_08B57C70;
    }
    goto L_08B57C08;
L_08B57C08:
    if (ctx.gpr[24] == ctx.gpr[11]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B57C48;
    }
    goto L_08B57C10;
L_08B57C10:
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[3];
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B57C38;
      }
      goto L_08B57C18;
    }
L_08B57C18:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[24]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57CB0;
      }
      goto L_08B57C20;
    }
L_08B57C20:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C38;
    }
L_08B57C38:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C48;
    }
L_08B57C48:
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C5C;
    }
L_08B57C5C:
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C70;
    }
L_08B57C70:
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C84;
    }
L_08B57C84:
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C98;
    }
L_08B57C98:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57CB0;
    }
L_08B57CB0:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[13] = (0u | 8u);
      if (branch_taken) {
          goto L_08B57CC8;
      }
      goto L_08B57CB8;
    }
L_08B57CB8:
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[24]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_08B57CCC;
      }
      goto L_08B57CC4;
    }
L_08B57CC4:
    ctx.gpr[13] = (0u | 7u);
    goto L_08B57CC8;
L_08B57CC8:
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    goto L_08B57CCC;
L_08B57CCC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[13]);
    ctx.gpr[13] = (aot_gpr_4 + ctx.gpr[12]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B57CE0;
L_08B57CE0:
    ctx.gpr[24] = (ctx.gpr[13] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
      if (branch_taken) {
          goto L_08B57E04;
      }
      goto L_08B57CEC;
    }
L_08B57CEC:
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[13]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28784)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57E2C;
      }
      goto L_08B57D0C;
    }
L_08B57D0C:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57D38:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57D70:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57DB0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[2] = (aot_gpr_5 - ctx.gpr[21]);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57DF8:
    aot_gpr_5 = (ctx.gpr[15] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57E2C;
      }
      goto L_08B57E04;
    }
L_08B57E04:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57E2C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57BDC;
      }
      goto L_08B57E3C;
    }
L_08B57E3C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57E64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B57EA4;
      }
      goto L_08B57E6C;
    }
L_08B57E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57EA4:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57ECC:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(15532)));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(88), aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B57EDC:
    ctx.gpr[9] = (2234u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(14520));
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08B57EF0;
L_08B57EF0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B57EF0;
      }
      goto L_08B57F0C;
    }
L_08B57F0C:
    ctx.gpr[2] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08B57F2C;
      }
      goto L_08B57F18;
    }
L_08B57F18:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B57F40;
      }
      goto L_08B57F2C;
    }
L_08B57F2C:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08B57F40;
      }
      goto L_08B57F34;
    }
L_08B57F34:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    goto L_08B57F40;
L_08B57F40:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08B57F58;
      }
      goto L_08B57F48;
    }
L_08B57F48:
    ctx.gpr[2] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B57F88;
      }
      goto L_08B57F54;
    }
L_08B57F54:
    ctx.gpr[2] = (0u | 48u);
    goto L_08B57F58;
L_08B57F58:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B57F88;
      }
      goto L_08B57F60;
    }
L_08B57F60:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[12];
    ctx.gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08B57F78;
      }
      goto L_08B57F70;
    }
L_08B57F70:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B57F88;
      }
      goto L_08B57F78;
    }
L_08B57F78:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_08B57F88;
L_08B57F88:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08B57FA4;
      }
      goto L_08B57F94;
    }
L_08B57F94:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[2] = (0u | 48u);
    if (ctx.gpr[10] == ctx.gpr[2]) {
    ctx.gpr[7] = (0u | 8u);
        goto L_08B57FA4;
    }
    goto L_08B57FA4;
L_08B57FA4:
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[13] = (ctx.lo);
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.hi);
    goto L_08B57FC8;
L_08B57FC8:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 3u);
      if (branch_taken) {
          goto L_08B57FDC;
      }
      goto L_08B57FD0;
    }
L_08B57FD0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57FFC;
      }
      goto L_08B57FDC;
    }
L_08B57FDC:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 8u, 0x08B58054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B57FE4;
    }
L_08B57FE4:
    ctx.gpr[14] = (0u | 87u);
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    if (ctx.gpr[15] != 0u) {
    ctx.gpr[14] = (0u | 55u);
        goto L_08B57FF4;
    }
    goto L_08B57FF4;
L_08B57FF4:
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[14]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_08B57FFC;
L_08B57FFC:
    { const bool branch_taken = ctx.gpr[14] == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 8u, 0x08B58054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 1u, 0x08B58004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0212(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0212_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_212(Runtime &runtime) {
    runtime.register_generated_unit(212u, 0x08B54000u, 16384u, &recomp_unit_0212, &recomp_unit_0212_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B54000u, &recomp_unit_0212, "recomp_unit_0212",
                                          kEntryMasks_recomp_unit_0212, 64u);
}
} // namespace psprecomp
