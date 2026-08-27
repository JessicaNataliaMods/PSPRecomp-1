#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0174[64] = {
    0x001510900A10A863ull, 0x21A40021A0015043ull, 0x0401324A92892415ull, 0x8020040102B49548ull,
    0x1482000600A00000ull, 0x8011609014211428ull, 0x52C1202904184A24ull, 0x40244100800B8240ull,
    0x0800228410800241ull, 0xA010AA0004800091ull, 0x00402901A5226002ull, 0x20028A8A28844C00ull,
    0x2008440902A04100ull, 0x80812A0900811495ull, 0xA010221002440528ull, 0x0240480081002000ull,
    0x4120802804000448ull, 0x4082004288824884ull, 0x24000A1404441080ull, 0x8222200210900828ull,
    0x80010100A20834A2ull, 0x0432A22220421240ull, 0x12A10A8554409144ull, 0x82509412A5129002ull,
    0x0440090422400412ull, 0x0820928020080100ull, 0x5555102118A55544ull, 0x041249084108108Cull,
    0x824A201120408205ull, 0x0849249294900848ull, 0x4008112003224410ull, 0x4008002402012010ull,
    0x2240225290002402ull, 0xA092400002402240ull, 0x8241209040209112ull, 0x0200904842240904ull,
    0x0201202202200040ull, 0x0D10152082021251ull, 0x5000954402008751ull, 0x04808220810294A2ull,
    0x20192A88A0848224ull, 0x4421108480400A88ull, 0xCA8A104151048014ull, 0x1028000000225552ull,
    0x002000022060A508ull, 0xA14080420000804Aull, 0x0510810882400800ull, 0x94A14200802C8408ull,
    0x555040420CA51841ull, 0x480422A208104814ull, 0x1048820005000A00ull, 0x4900822445052A4Aull,
    0x08800A2008220824ull, 0x0000020841102202ull, 0x0288A89590A92304ull, 0x8110102440200004ull,
    0x0100228404020AA0ull, 0x1494800014010A00ull, 0x5540A46000101241ull, 0x0241000080002A04ull,
    0x442508410200000Aull, 0x290890A24A448A4Aull, 0x9100A92120282000ull, 0x882009A0440A8010ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0174[64] = {
    1u, 17u, 32u, 51u, 66u, 74u, 89u, 107u, 119u, 129u, 141u, 155u, 170u, 181u, 197u, 210u,
    217u, 227u, 240u, 251u, 263u, 276u, 291u, 310u, 328u, 339u, 348u, 371u, 385u, 399u, 416u, 428u,
    436u, 449u, 460u, 474u, 486u, 494u, 510u, 526u, 540u, 557u, 570u, 587u, 599u, 609u, 620u, 630u,
    645u, 664u, 678u, 687u, 705u, 716u, 724u, 744u, 753u, 764u, 775u, 790u, 798u, 809u, 829u, 842u,
};
void recomp_unit_0174_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,16 fprs=12 gpr_occ=4690 fpr_occ=14 gpr_total=6740 fpr_total=14
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ABC000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0174[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0174[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08ABC000;
    case 2u: goto L_08ABC004;
    case 3u: goto L_08ABC014;
    case 4u: goto L_08ABC018;
    case 5u: goto L_08ABC02C;
    case 6u: goto L_08ABC034;
    case 7u: goto L_08ABC03C;
    case 8u: goto L_08ABC050;
    case 9u: goto L_08ABC064;
    case 10u: goto L_08ABC06C;
    case 11u: goto L_08ABC090;
    case 12u: goto L_08ABC09C;
    case 13u: goto L_08ABC0B0;
    case 14u: goto L_08ABC0C0;
    case 15u: goto L_08ABC0C8;
    case 16u: goto L_08ABC0D0;
    case 17u: goto L_08ABC100;
    case 18u: goto L_08ABC104;
    case 19u: goto L_08ABC118;
    case 20u: goto L_08ABC130;
    case 21u: goto L_08ABC138;
    case 22u: goto L_08ABC140;
    case 23u: goto L_08ABC174;
    case 24u: goto L_08ABC17C;
    case 25u: goto L_08ABC180;
    case 26u: goto L_08ABC194;
    case 27u: goto L_08ABC1C8;
    case 28u: goto L_08ABC1D4;
    case 29u: goto L_08ABC1DC;
    case 30u: goto L_08ABC1E0;
    case 31u: goto L_08ABC1F4;
    case 32u: goto L_08ABC200;
    case 33u: goto L_08ABC208;
    case 34u: goto L_08ABC210;
    case 35u: goto L_08ABC228;
    case 36u: goto L_08ABC234;
    case 37u: goto L_08ABC240;
    case 38u: goto L_08ABC24C;
    case 39u: goto L_08ABC25C;
    case 40u: goto L_08ABC264;
    case 41u: goto L_08ABC270;
    case 42u: goto L_08ABC27C;
    case 43u: goto L_08ABC284;
    case 44u: goto L_08ABC28C;
    case 45u: goto L_08ABC298;
    case 46u: goto L_08ABC2A4;
    case 47u: goto L_08ABC2B0;
    case 48u: goto L_08ABC2B4;
    case 49u: goto L_08ABC2C0;
    case 50u: goto L_08ABC2E8;
    case 51u: goto L_08ABC30C;
    case 52u: goto L_08ABC318;
    case 53u: goto L_08ABC320;
    case 54u: goto L_08ABC328;
    case 55u: goto L_08ABC330;
    case 56u: goto L_08ABC33C;
    case 57u: goto L_08ABC348;
    case 58u: goto L_08ABC350;
    case 59u: goto L_08ABC354;
    case 60u: goto L_08ABC35C;
    case 61u: goto L_08ABC364;
    case 62u: goto L_08ABC380;
    case 63u: goto L_08ABC3A8;
    case 64u: goto L_08ABC3D4;
    case 65u: goto L_08ABC3FC;
    case 66u: goto L_08ABC454;
    case 67u: goto L_08ABC45C;
    case 68u: goto L_08ABC484;
    case 69u: goto L_08ABC488;
    case 70u: goto L_08ABC4C4;
    case 71u: goto L_08ABC4DC;
    case 72u: goto L_08ABC4E8;
    case 73u: goto L_08ABC4F0;
    case 74u: goto L_08ABC50C;
    case 75u: goto L_08ABC514;
    case 76u: goto L_08ABC528;
    case 77u: goto L_08ABC530;
    case 78u: goto L_08ABC540;
    case 79u: goto L_08ABC554;
    case 80u: goto L_08ABC568;
    case 81u: goto L_08ABC570;
    case 82u: goto L_08ABC590;
    case 83u: goto L_08ABC59C;
    case 84u: goto L_08ABC5B4;
    case 85u: goto L_08ABC5B8;
    case 86u: goto L_08ABC5C0;
    case 87u: goto L_08ABC5D0;
    case 88u: goto L_08ABC5FC;
    case 89u: goto L_08ABC608;
    case 90u: goto L_08ABC614;
    case 91u: goto L_08ABC624;
    case 92u: goto L_08ABC62C;
    case 93u: goto L_08ABC638;
    case 94u: goto L_08ABC64C;
    case 95u: goto L_08ABC650;
    case 96u: goto L_08ABC668;
    case 97u: goto L_08ABC680;
    case 98u: goto L_08ABC68C;
    case 99u: goto L_08ABC694;
    case 100u: goto L_08ABC6B4;
    case 101u: goto L_08ABC6C0;
    case 102u: goto L_08ABC6D8;
    case 103u: goto L_08ABC6DC;
    case 104u: goto L_08ABC6E4;
    case 105u: goto L_08ABC6F0;
    case 106u: goto L_08ABC6F8;
    case 107u: goto L_08ABC718;
    case 108u: goto L_08ABC724;
    case 109u: goto L_08ABC73C;
    case 110u: goto L_08ABC740;
    case 111u: goto L_08ABC744;
    case 112u: goto L_08ABC74C;
    case 113u: goto L_08ABC77C;
    case 114u: goto L_08ABC7A0;
    case 115u: goto L_08ABC7B8;
    case 116u: goto L_08ABC7C8;
    case 117u: goto L_08ABC7D4;
    case 118u: goto L_08ABC7F8;
    case 119u: goto L_08ABC800;
    case 120u: goto L_08ABC818;
    case 121u: goto L_08ABC824;
    case 122u: goto L_08ABC85C;
    case 123u: goto L_08ABC870;
    case 124u: goto L_08ABC888;
    case 125u: goto L_08ABC89C;
    case 126u: goto L_08ABC8A4;
    case 127u: goto L_08ABC8B4;
    case 128u: goto L_08ABC8EC;
    case 129u: goto L_08ABC900;
    case 130u: goto L_08ABC910;
    case 131u: goto L_08ABC91C;
    case 132u: goto L_08ABC95C;
    case 133u: goto L_08ABC968;
    case 134u: goto L_08ABC9A4;
    case 135u: goto L_08ABC9AC;
    case 136u: goto L_08ABC9B4;
    case 137u: goto L_08ABC9BC;
    case 138u: goto L_08ABC9D0;
    case 139u: goto L_08ABC9F4;
    case 140u: goto L_08ABC9FC;
    case 141u: goto L_08ABCA04;
    case 142u: goto L_08ABCA34;
    case 143u: goto L_08ABCA38;
    case 144u: goto L_08ABCA44;
    case 145u: goto L_08ABCA54;
    case 146u: goto L_08ABCA60;
    case 147u: goto L_08ABCA68;
    case 148u: goto L_08ABCA74;
    case 149u: goto L_08ABCA7C;
    case 150u: goto L_08ABCA80;
    case 151u: goto L_08ABCAA0;
    case 152u: goto L_08ABCAAC;
    case 153u: goto L_08ABCAB4;
    case 154u: goto L_08ABCAD8;
    case 155u: goto L_08ABCB28;
    case 156u: goto L_08ABCB2C;
    case 157u: goto L_08ABCB38;
    case 158u: goto L_08ABCB48;
    case 159u: goto L_08ABCB5C;
    case 160u: goto L_08ABCB6C;
    case 161u: goto L_08ABCB74;
    case 162u: goto L_08ABCB84;
    case 163u: goto L_08ABCB8C;
    case 164u: goto L_08ABCB9C;
    case 165u: goto L_08ABCBA4;
    case 166u: goto L_08ABCBAC;
    case 167u: goto L_08ABCBBC;
    case 168u: goto L_08ABCBC4;
    case 169u: goto L_08ABCBF4;
    case 170u: goto L_08ABCC20;
    case 171u: goto L_08ABCC38;
    case 172u: goto L_08ABCC54;
    case 173u: goto L_08ABCC5C;
    case 174u: goto L_08ABCC64;
    case 175u: goto L_08ABCC80;
    case 176u: goto L_08ABCC8C;
    case 177u: goto L_08ABCCA8;
    case 178u: goto L_08ABCCB8;
    case 179u: goto L_08ABCCCC;
    case 180u: goto L_08ABCCF4;
    case 181u: goto L_08ABCD00;
    case 182u: goto L_08ABCD08;
    case 183u: goto L_08ABCD10;
    case 184u: goto L_08ABCD1C;
    case 185u: goto L_08ABCD28;
    case 186u: goto L_08ABCD30;
    case 187u: goto L_08ABCD40;
    case 188u: goto L_08ABCD5C;
    case 189u: goto L_08ABCD80;
    case 190u: goto L_08ABCD8C;
    case 191u: goto L_08ABCDA4;
    case 192u: goto L_08ABCDAC;
    case 193u: goto L_08ABCDB4;
    case 194u: goto L_08ABCDC0;
    case 195u: goto L_08ABCDDC;
    case 196u: goto L_08ABCDFC;
    case 197u: goto L_08ABCE0C;
    case 198u: goto L_08ABCE14;
    case 199u: goto L_08ABCE20;
    case 200u: goto L_08ABCE28;
    case 201u: goto L_08ABCE48;
    case 202u: goto L_08ABCE58;
    case 203u: goto L_08ABCE64;
    case 204u: goto L_08ABCE90;
    case 205u: goto L_08ABCEA4;
    case 206u: goto L_08ABCEB4;
    case 207u: goto L_08ABCED0;
    case 208u: goto L_08ABCEF4;
    case 209u: goto L_08ABCEFC;
    case 210u: goto L_08ABCF34;
    case 211u: goto L_08ABCF60;
    case 212u: goto L_08ABCF7C;
    case 213u: goto L_08ABCFAC;
    case 214u: goto L_08ABCFB8;
    case 215u: goto L_08ABCFD8;
    case 216u: goto L_08ABCFE4;
    case 217u: goto L_08ABD00C;
    case 218u: goto L_08ABD018;
    case 219u: goto L_08ABD028;
    case 220u: goto L_08ABD068;
    case 221u: goto L_08ABD08C;
    case 222u: goto L_08ABD094;
    case 223u: goto L_08ABD0BC;
    case 224u: goto L_08ABD0D4;
    case 225u: goto L_08ABD0E0;
    case 226u: goto L_08ABD0F8;
    case 227u: goto L_08ABD108;
    case 228u: goto L_08ABD11C;
    case 229u: goto L_08ABD12C;
    case 230u: goto L_08ABD138;
    case 231u: goto L_08ABD144;
    case 232u: goto L_08ABD15C;
    case 233u: goto L_08ABD16C;
    case 234u: goto L_08ABD17C;
    case 235u: goto L_08ABD184;
    case 236u: goto L_08ABD198;
    case 237u: goto L_08ABD1C4;
    case 238u: goto L_08ABD1DC;
    case 239u: goto L_08ABD1F8;
    case 240u: goto L_08ABD21C;
    case 241u: goto L_08ABD230;
    case 242u: goto L_08ABD248;
    case 243u: goto L_08ABD258;
    case 244u: goto L_08ABD268;
    case 245u: goto L_08ABD288;
    case 246u: goto L_08ABD290;
    case 247u: goto L_08ABD2A4;
    case 248u: goto L_08ABD2AC;
    case 249u: goto L_08ABD2E8;
    case 250u: goto L_08ABD2F4;
    case 251u: goto L_08ABD30C;
    case 252u: goto L_08ABD314;
    case 253u: goto L_08ABD32C;
    case 254u: goto L_08ABD350;
    case 255u: goto L_08ABD35C;
    case 256u: goto L_08ABD370;
    case 257u: goto L_08ABD384;
    case 258u: goto L_08ABD3B4;
    case 259u: goto L_08ABD3C4;
    case 260u: goto L_08ABD3D4;
    case 261u: goto L_08ABD3E4;
    case 262u: goto L_08ABD3FC;
    case 263u: goto L_08ABD404;
    case 264u: goto L_08ABD414;
    case 265u: goto L_08ABD41C;
    case 266u: goto L_08ABD428;
    case 267u: goto L_08ABD430;
    case 268u: goto L_08ABD434;
    case 269u: goto L_08ABD44C;
    case 270u: goto L_08ABD464;
    case 271u: goto L_08ABD474;
    case 272u: goto L_08ABD47C;
    case 273u: goto L_08ABD4A0;
    case 274u: goto L_08ABD4C0;
    case 275u: goto L_08ABD4FC;
    case 276u: goto L_08ABD518;
    case 277u: goto L_08ABD524;
    case 278u: goto L_08ABD530;
    case 279u: goto L_08ABD544;
    case 280u: goto L_08ABD558;
    case 281u: goto L_08ABD574;
    case 282u: goto L_08ABD584;
    case 283u: goto L_08ABD594;
    case 284u: goto L_08ABD5A4;
    case 285u: goto L_08ABD5B4;
    case 286u: goto L_08ABD5BC;
    case 287u: goto L_08ABD5C4;
    case 288u: goto L_08ABD5D0;
    case 289u: goto L_08ABD5D4;
    case 290u: goto L_08ABD5E8;
    case 291u: goto L_08ABD608;
    case 292u: goto L_08ABD618;
    case 293u: goto L_08ABD620;
    case 294u: goto L_08ABD630;
    case 295u: goto L_08ABD63C;
    case 296u: goto L_08ABD658;
    case 297u: goto L_08ABD668;
    case 298u: goto L_08ABD670;
    case 299u: goto L_08ABD678;
    case 300u: goto L_08ABD680;
    case 301u: goto L_08ABD688;
    case 302u: goto L_08ABD69C;
    case 303u: goto L_08ABD6A4;
    case 304u: goto L_08ABD6AC;
    case 305u: goto L_08ABD6C0;
    case 306u: goto L_08ABD6D4;
    case 307u: goto L_08ABD6DC;
    case 308u: goto L_08ABD6E4;
    case 309u: goto L_08ABD6F0;
    case 310u: goto L_08ABD704;
    case 311u: goto L_08ABD730;
    case 312u: goto L_08ABD73C;
    case 313u: goto L_08ABD744;
    case 314u: goto L_08ABD750;
    case 315u: goto L_08ABD760;
    case 316u: goto L_08ABD768;
    case 317u: goto L_08ABD774;
    case 318u: goto L_08ABD77C;
    case 319u: goto L_08ABD784;
    case 320u: goto L_08ABD790;
    case 321u: goto L_08ABD7A8;
    case 322u: goto L_08ABD7B0;
    case 323u: goto L_08ABD7BC;
    case 324u: goto L_08ABD7D0;
    case 325u: goto L_08ABD7D8;
    case 326u: goto L_08ABD7E4;
    case 327u: goto L_08ABD7FC;
    case 328u: goto L_08ABD804;
    case 329u: goto L_08ABD810;
    case 330u: goto L_08ABD828;
    case 331u: goto L_08ABD858;
    case 332u: goto L_08ABD864;
    case 333u: goto L_08ABD874;
    case 334u: goto L_08ABD888;
    case 335u: goto L_08ABD8A0;
    case 336u: goto L_08ABD8AC;
    case 337u: goto L_08ABD8D8;
    case 338u: goto L_08ABD8E8;
    case 339u: goto L_08ABD920;
    case 340u: goto L_08ABD94C;
    case 341u: goto L_08ABD974;
    case 342u: goto L_08ABD99C;
    case 343u: goto L_08ABD9A4;
    case 344u: goto L_08ABD9B0;
    case 345u: goto L_08ABD9BC;
    case 346u: goto L_08ABD9D4;
    case 347u: goto L_08ABD9EC;
    case 348u: goto L_08ABDA08;
    case 349u: goto L_08ABDA18;
    case 350u: goto L_08ABDA20;
    case 351u: goto L_08ABDA28;
    case 352u: goto L_08ABDA30;
    case 353u: goto L_08ABDA38;
    case 354u: goto L_08ABDA40;
    case 355u: goto L_08ABDA48;
    case 356u: goto L_08ABDA54;
    case 357u: goto L_08ABDA5C;
    case 358u: goto L_08ABDA6C;
    case 359u: goto L_08ABDA70;
    case 360u: goto L_08ABDA80;
    case 361u: goto L_08ABDA94;
    case 362u: goto L_08ABDAB0;
    case 363u: goto L_08ABDAC0;
    case 364u: goto L_08ABDAC8;
    case 365u: goto L_08ABDAD0;
    case 366u: goto L_08ABDAD8;
    case 367u: goto L_08ABDAE0;
    case 368u: goto L_08ABDAE8;
    case 369u: goto L_08ABDAF0;
    case 370u: goto L_08ABDAF8;
    case 371u: goto L_08ABDB08;
    case 372u: goto L_08ABDB0C;
    case 373u: goto L_08ABDB1C;
    case 374u: goto L_08ABDB30;
    case 375u: goto L_08ABDB4C;
    case 376u: goto L_08ABDB60;
    case 377u: goto L_08ABDB78;
    case 378u: goto L_08ABDB8C;
    case 379u: goto L_08ABDBA0;
    case 380u: goto L_08ABDBAC;
    case 381u: goto L_08ABDBB8;
    case 382u: goto L_08ABDBC4;
    case 383u: goto L_08ABDBD0;
    case 384u: goto L_08ABDBE8;
    case 385u: goto L_08ABDC00;
    case 386u: goto L_08ABDC08;
    case 387u: goto L_08ABDC24;
    case 388u: goto L_08ABDC3C;
    case 389u: goto L_08ABDC58;
    case 390u: goto L_08ABDC74;
    case 391u: goto L_08ABDC80;
    case 392u: goto L_08ABDC90;
    case 393u: goto L_08ABDCB4;
    case 394u: goto L_08ABDCC4;
    case 395u: goto L_08ABDCCC;
    case 396u: goto L_08ABDCD8;
    case 397u: goto L_08ABDCE4;
    case 398u: goto L_08ABDCFC;
    case 399u: goto L_08ABDD0C;
    case 400u: goto L_08ABDD18;
    case 401u: goto L_08ABDD2C;
    case 402u: goto L_08ABDD50;
    case 403u: goto L_08ABDD5C;
    case 404u: goto L_08ABDD68;
    case 405u: goto L_08ABDD70;
    case 406u: goto L_08ABDD7C;
    case 407u: goto L_08ABDD84;
    case 408u: goto L_08ABDD90;
    case 409u: goto L_08ABDD9C;
    case 410u: goto L_08ABDDA8;
    case 411u: goto L_08ABDDB4;
    case 412u: goto L_08ABDDC0;
    case 413u: goto L_08ABDDCC;
    case 414u: goto L_08ABDDD8;
    case 415u: goto L_08ABDDEC;
    case 416u: goto L_08ABDE10;
    case 417u: goto L_08ABDE28;
    case 418u: goto L_08ABDE38;
    case 419u: goto L_08ABDE44;
    case 420u: goto L_08ABDE54;
    case 421u: goto L_08ABDE60;
    case 422u: goto L_08ABDE64;
    case 423u: goto L_08ABDE94;
    case 424u: goto L_08ABDEA0;
    case 425u: goto L_08ABDEB0;
    case 426u: goto L_08ABDECC;
    case 427u: goto L_08ABDEF8;
    case 428u: goto L_08ABDF10;
    case 429u: goto L_08ABDF34;
    case 430u: goto L_08ABDF40;
    case 431u: goto L_08ABDF64;
    case 432u: goto L_08ABDF88;
    case 433u: goto L_08ABDF94;
    case 434u: goto L_08ABDFCC;
    case 435u: goto L_08ABDFF8;
    case 436u: goto L_08ABE004;
    case 437u: goto L_08ABE028;
    case 438u: goto L_08ABE034;
    case 439u: goto L_08ABE070;
    case 440u: goto L_08ABE07C;
    case 441u: goto L_08ABE084;
    case 442u: goto L_08ABE090;
    case 443u: goto L_08ABE098;
    case 444u: goto L_08ABE0A4;
    case 445u: goto L_08ABE0B4;
    case 446u: goto L_08ABE0D8;
    case 447u: goto L_08ABE0E4;
    case 448u: goto L_08ABE0F4;
    case 449u: goto L_08ABE118;
    case 450u: goto L_08ABE124;
    case 451u: goto L_08ABE134;
    case 452u: goto L_08ABE158;
    case 453u: goto L_08ABE164;
    case 454u: goto L_08ABE1B8;
    case 455u: goto L_08ABE1C4;
    case 456u: goto L_08ABE1D0;
    case 457u: goto L_08ABE1DC;
    case 458u: goto L_08ABE1F4;
    case 459u: goto L_08ABE1FC;
    case 460u: goto L_08ABE204;
    case 461u: goto L_08ABE210;
    case 462u: goto L_08ABE220;
    case 463u: goto L_08ABE230;
    case 464u: goto L_08ABE23C;
    case 465u: goto L_08ABE254;
    case 466u: goto L_08ABE278;
    case 467u: goto L_08ABE290;
    case 468u: goto L_08ABE29C;
    case 469u: goto L_08ABE2B4;
    case 470u: goto L_08ABE2C0;
    case 471u: goto L_08ABE2D8;
    case 472u: goto L_08ABE2E4;
    case 473u: goto L_08ABE2FC;
    case 474u: goto L_08ABE308;
    case 475u: goto L_08ABE320;
    case 476u: goto L_08ABE32C;
    case 477u: goto L_08ABE348;
    case 478u: goto L_08ABE354;
    case 479u: goto L_08ABE364;
    case 480u: goto L_08ABE378;
    case 481u: goto L_08ABE38C;
    case 482u: goto L_08ABE398;
    case 483u: goto L_08ABE3B0;
    case 484u: goto L_08ABE3BC;
    case 485u: goto L_08ABE3E4;
    case 486u: goto L_08ABE418;
    case 487u: goto L_08ABE454;
    case 488u: goto L_08ABE464;
    case 489u: goto L_08ABE484;
    case 490u: goto L_08ABE494;
    case 491u: goto L_08ABE4B4;
    case 492u: goto L_08ABE4C0;
    case 493u: goto L_08ABE4E4;
    case 494u: goto L_08ABE500;
    case 495u: goto L_08ABE510;
    case 496u: goto L_08ABE518;
    case 497u: goto L_08ABE524;
    case 498u: goto L_08ABE530;
    case 499u: goto L_08ABE544;
    case 500u: goto L_08ABE564;
    case 501u: goto L_08ABE57C;
    case 502u: goto L_08ABE594;
    case 503u: goto L_08ABE5A0;
    case 504u: goto L_08ABE5A8;
    case 505u: goto L_08ABE5B0;
    case 506u: goto L_08ABE5D0;
    case 507u: goto L_08ABE5E0;
    case 508u: goto L_08ABE5E8;
    case 509u: goto L_08ABE5EC;
    case 510u: goto L_08ABE600;
    case 511u: goto L_08ABE610;
    case 512u: goto L_08ABE618;
    case 513u: goto L_08ABE620;
    case 514u: goto L_08ABE624;
    case 515u: goto L_08ABE628;
    case 516u: goto L_08ABE63C;
    case 517u: goto L_08ABE664;
    case 518u: goto L_08ABE688;
    case 519u: goto L_08ABE698;
    case 520u: goto L_08ABE6A0;
    case 521u: goto L_08ABE6A8;
    case 522u: goto L_08ABE6B0;
    case 523u: goto L_08ABE6BC;
    case 524u: goto L_08ABE6F0;
    case 525u: goto L_08ABE6F8;
    case 526u: goto L_08ABE704;
    case 527u: goto L_08ABE714;
    case 528u: goto L_08ABE71C;
    case 529u: goto L_08ABE728;
    case 530u: goto L_08ABE730;
    case 531u: goto L_08ABE73C;
    case 532u: goto L_08ABE744;
    case 533u: goto L_08ABE760;
    case 534u: goto L_08ABE77C;
    case 535u: goto L_08ABE794;
    case 536u: goto L_08ABE7A4;
    case 537u: goto L_08ABE7BC;
    case 538u: goto L_08ABE7DC;
    case 539u: goto L_08ABE7E8;
    case 540u: goto L_08ABE808;
    case 541u: goto L_08ABE814;
    case 542u: goto L_08ABE824;
    case 543u: goto L_08ABE83C;
    case 544u: goto L_08ABE848;
    case 545u: goto L_08ABE85C;
    case 546u: goto L_08ABE874;
    case 547u: goto L_08ABE87C;
    case 548u: goto L_08ABE88C;
    case 549u: goto L_08ABE89C;
    case 550u: goto L_08ABE8A4;
    case 551u: goto L_08ABE8AC;
    case 552u: goto L_08ABE8B4;
    case 553u: goto L_08ABE8C0;
    case 554u: goto L_08ABE8CC;
    case 555u: goto L_08ABE8D0;
    case 556u: goto L_08ABE8F4;
    case 557u: goto L_08ABE90C;
    case 558u: goto L_08ABE91C;
    case 559u: goto L_08ABE924;
    case 560u: goto L_08ABE92C;
    case 561u: goto L_08ABE958;
    case 562u: goto L_08ABE97C;
    case 563u: goto L_08ABE988;
    case 564u: goto L_08ABE99C;
    case 565u: goto L_08ABE9B0;
    case 566u: goto L_08ABE9C0;
    case 567u: goto L_08ABE9D4;
    case 568u: goto L_08ABE9E8;
    case 569u: goto L_08ABE9F8;
    case 570u: goto L_08ABEA08;
    case 571u: goto L_08ABEA10;
    case 572u: goto L_08ABEA3C;
    case 573u: goto L_08ABEA48;
    case 574u: goto L_08ABEA60;
    case 575u: goto L_08ABEA70;
    case 576u: goto L_08ABEA78;
    case 577u: goto L_08ABEA80;
    case 578u: goto L_08ABEA98;
    case 579u: goto L_08ABEAB0;
    case 580u: goto L_08ABEAC4;
    case 581u: goto L_08ABEACC;
    case 582u: goto L_08ABEADC;
    case 583u: goto L_08ABEAE4;
    case 584u: goto L_08ABEAEC;
    case 585u: goto L_08ABEAF8;
    case 586u: goto L_08ABEAFC;
    case 587u: goto L_08ABEB04;
    case 588u: goto L_08ABEB10;
    case 589u: goto L_08ABEB18;
    case 590u: goto L_08ABEB20;
    case 591u: goto L_08ABEB28;
    case 592u: goto L_08ABEB30;
    case 593u: goto L_08ABEB38;
    case 594u: goto L_08ABEB44;
    case 595u: goto L_08ABEB54;
    case 596u: goto L_08ABEBCC;
    case 597u: goto L_08ABEBD4;
    case 598u: goto L_08ABEBF0;
    case 599u: goto L_08ABEC0C;
    case 600u: goto L_08ABEC20;
    case 601u: goto L_08ABEC28;
    case 602u: goto L_08ABEC34;
    case 603u: goto L_08ABEC3C;
    case 604u: goto L_08ABEC54;
    case 605u: goto L_08ABEC58;
    case 606u: goto L_08ABEC74;
    case 607u: goto L_08ABEC84;
    case 608u: goto L_08ABECD4;
    case 609u: goto L_08ABED04;
    case 610u: goto L_08ABED0C;
    case 611u: goto L_08ABED18;
    case 612u: goto L_08ABED3C;
    case 613u: goto L_08ABED84;
    case 614u: goto L_08ABED98;
    case 615u: goto L_08ABEDBC;
    case 616u: goto L_08ABEDD8;
    case 617u: goto L_08ABEDE0;
    case 618u: goto L_08ABEDF4;
    case 619u: goto L_08ABEDFC;
    case 620u: goto L_08ABEE2C;
    case 621u: goto L_08ABEE58;
    case 622u: goto L_08ABEE64;
    case 623u: goto L_08ABEE7C;
    case 624u: goto L_08ABEE8C;
    case 625u: goto L_08ABEEA0;
    case 626u: goto L_08ABEEBC;
    case 627u: goto L_08ABEED0;
    case 628u: goto L_08ABEEE0;
    case 629u: goto L_08ABEEE8;
    case 630u: goto L_08ABEF0C;
    case 631u: goto L_08ABEF28;
    case 632u: goto L_08ABEF3C;
    case 633u: goto L_08ABEF48;
    case 634u: goto L_08ABEF4C;
    case 635u: goto L_08ABEF54;
    case 636u: goto L_08ABEF7C;
    case 637u: goto L_08ABEFA4;
    case 638u: goto L_08ABEFB8;
    case 639u: goto L_08ABEFC0;
    case 640u: goto L_08ABEFD4;
    case 641u: goto L_08ABEFDC;
    case 642u: goto L_08ABEFE8;
    case 643u: goto L_08ABEFF0;
    case 644u: goto L_08ABEFFC;
    case 645u: goto L_08ABF000;
    case 646u: goto L_08ABF018;
    case 647u: goto L_08ABF02C;
    case 648u: goto L_08ABF030;
    case 649u: goto L_08ABF040;
    case 650u: goto L_08ABF048;
    case 651u: goto L_08ABF054;
    case 652u: goto L_08ABF05C;
    case 653u: goto L_08ABF068;
    case 654u: goto L_08ABF06C;
    case 655u: goto L_08ABF084;
    case 656u: goto L_08ABF098;
    case 657u: goto L_08ABF0B8;
    case 658u: goto L_08ABF0D0;
    case 659u: goto L_08ABF0D8;
    case 660u: goto L_08ABF0E0;
    case 661u: goto L_08ABF0E8;
    case 662u: goto L_08ABF0F0;
    case 663u: goto L_08ABF0F8;
    case 664u: goto L_08ABF108;
    case 665u: goto L_08ABF110;
    case 666u: goto L_08ABF12C;
    case 667u: goto L_08ABF138;
    case 668u: goto L_08ABF150;
    case 669u: goto L_08ABF16C;
    case 670u: goto L_08ABF184;
    case 671u: goto L_08ABF194;
    case 672u: goto L_08ABF19C;
    case 673u: goto L_08ABF1A4;
    case 674u: goto L_08ABF1B4;
    case 675u: goto L_08ABF1C8;
    case 676u: goto L_08ABF1EC;
    case 677u: goto L_08ABF1F8;
    case 678u: goto L_08ABF224;
    case 679u: goto L_08ABF22C;
    case 680u: goto L_08ABF260;
    case 681u: goto L_08ABF268;
    case 682u: goto L_08ABF2A4;
    case 683u: goto L_08ABF2BC;
    case 684u: goto L_08ABF2CC;
    case 685u: goto L_08ABF2D8;
    case 686u: goto L_08ABF2F0;
    case 687u: goto L_08ABF304;
    case 688u: goto L_08ABF30C;
    case 689u: goto L_08ABF318;
    case 690u: goto L_08ABF324;
    case 691u: goto L_08ABF32C;
    case 692u: goto L_08ABF334;
    case 693u: goto L_08ABF340;
    case 694u: goto L_08ABF348;
    case 695u: goto L_08ABF360;
    case 696u: goto L_08ABF368;
    case 697u: goto L_08ABF378;
    case 698u: goto L_08ABF388;
    case 699u: goto L_08ABF394;
    case 700u: goto L_08ABF3A4;
    case 701u: goto L_08ABF3BC;
    case 702u: goto L_08ABF3E0;
    case 703u: goto L_08ABF3EC;
    case 704u: goto L_08ABF3F8;
    case 705u: goto L_08ABF408;
    case 706u: goto L_08ABF414;
    case 707u: goto L_08ABF42C;
    case 708u: goto L_08ABF444;
    case 709u: goto L_08ABF454;
    case 710u: goto L_08ABF46C;
    case 711u: goto L_08ABF494;
    case 712u: goto L_08ABF4A4;
    case 713u: goto L_08ABF4AC;
    case 714u: goto L_08ABF4DC;
    case 715u: goto L_08ABF4EC;
    case 716u: goto L_08ABF504;
    case 717u: goto L_08ABF524;
    case 718u: goto L_08ABF534;
    case 719u: goto L_08ABF550;
    case 720u: goto L_08ABF560;
    case 721u: goto L_08ABF578;
    case 722u: goto L_08ABF58C;
    case 723u: goto L_08ABF5A4;
    case 724u: goto L_08ABF608;
    case 725u: goto L_08ABF620;
    case 726u: goto L_08ABF624;
    case 727u: goto L_08ABF634;
    case 728u: goto L_08ABF640;
    case 729u: goto L_08ABF64C;
    case 730u: goto L_08ABF654;
    case 731u: goto L_08ABF65C;
    case 732u: goto L_08ABF670;
    case 733u: goto L_08ABF67C;
    case 734u: goto L_08ABF680;
    case 735u: goto L_08ABF688;
    case 736u: goto L_08ABF690;
    case 737u: goto L_08ABF69C;
    case 738u: goto L_08ABF6AC;
    case 739u: goto L_08ABF6B4;
    case 740u: goto L_08ABF6BC;
    case 741u: goto L_08ABF6CC;
    case 742u: goto L_08ABF6DC;
    case 743u: goto L_08ABF6E4;
    case 744u: goto L_08ABF708;
    case 745u: goto L_08ABF754;
    case 746u: goto L_08ABF778;
    case 747u: goto L_08ABF788;
    case 748u: goto L_08ABF794;
    case 749u: goto L_08ABF7B0;
    case 750u: goto L_08ABF7D0;
    case 751u: goto L_08ABF7E0;
    case 752u: goto L_08ABF7FC;
    case 753u: goto L_08ABF814;
    case 754u: goto L_08ABF81C;
    case 755u: goto L_08ABF824;
    case 756u: goto L_08ABF82C;
    case 757u: goto L_08ABF844;
    case 758u: goto L_08ABF868;
    case 759u: goto L_08ABF888;
    case 760u: goto L_08ABF89C;
    case 761u: goto L_08ABF8A4;
    case 762u: goto L_08ABF8B4;
    case 763u: goto L_08ABF8E0;
    case 764u: goto L_08ABF924;
    case 765u: goto L_08ABF92C;
    case 766u: goto L_08ABF940;
    case 767u: goto L_08ABF968;
    case 768u: goto L_08ABF970;
    case 769u: goto L_08ABF9BC;
    case 770u: goto L_08ABF9C8;
    case 771u: goto L_08ABF9D0;
    case 772u: goto L_08ABF9DC;
    case 773u: goto L_08ABF9E8;
    case 774u: goto L_08ABF9F0;
    case 775u: goto L_08ABFA00;
    case 776u: goto L_08ABFA18;
    case 777u: goto L_08ABFA24;
    case 778u: goto L_08ABFA30;
    case 779u: goto L_08ABFA50;
    case 780u: goto L_08ABFA94;
    case 781u: goto L_08ABFA98;
    case 782u: goto L_08ABFAA8;
    case 783u: goto L_08ABFAB4;
    case 784u: goto L_08ABFABC;
    case 785u: goto L_08ABFAD8;
    case 786u: goto L_08ABFAE0;
    case 787u: goto L_08ABFAE8;
    case 788u: goto L_08ABFAF0;
    case 789u: goto L_08ABFAF8;
    case 790u: goto L_08ABFB08;
    case 791u: goto L_08ABFB24;
    case 792u: goto L_08ABFB2C;
    case 793u: goto L_08ABFB34;
    case 794u: goto L_08ABFB7C;
    case 795u: goto L_08ABFBC0;
    case 796u: goto L_08ABFBD8;
    case 797u: goto L_08ABFBE4;
    case 798u: goto L_08ABFC04;
    case 799u: goto L_08ABFC0C;
    case 800u: goto L_08ABFC64;
    case 801u: goto L_08ABFC80;
    case 802u: goto L_08ABFC98;
    case 803u: goto L_08ABFCAC;
    case 804u: goto L_08ABFCC0;
    case 805u: goto L_08ABFCC8;
    case 806u: goto L_08ABFCD4;
    case 807u: goto L_08ABFCE8;
    case 808u: goto L_08ABFCF8;
    case 809u: goto L_08ABFD04;
    case 810u: goto L_08ABFD0C;
    case 811u: goto L_08ABFD18;
    case 812u: goto L_08ABFD24;
    case 813u: goto L_08ABFD2C;
    case 814u: goto L_08ABFD3C;
    case 815u: goto L_08ABFD48;
    case 816u: goto L_08ABFD58;
    case 817u: goto L_08ABFD64;
    case 818u: goto L_08ABFD6C;
    case 819u: goto L_08ABFD78;
    case 820u: goto L_08ABFD84;
    case 821u: goto L_08ABFD94;
    case 822u: goto L_08ABFD9C;
    case 823u: goto L_08ABFDB0;
    case 824u: goto L_08ABFDBC;
    case 825u: goto L_08ABFDCC;
    case 826u: goto L_08ABFDE0;
    case 827u: goto L_08ABFDEC;
    case 828u: goto L_08ABFDF4;
    case 829u: goto L_08ABFE34;
    case 830u: goto L_08ABFE4C;
    case 831u: goto L_08ABFE54;
    case 832u: goto L_08ABFE74;
    case 833u: goto L_08ABFE80;
    case 834u: goto L_08ABFE94;
    case 835u: goto L_08ABFEA0;
    case 836u: goto L_08ABFEAC;
    case 837u: goto L_08ABFEB4;
    case 838u: goto L_08ABFEBC;
    case 839u: goto L_08ABFEE0;
    case 840u: goto L_08ABFEF0;
    case 841u: goto L_08ABFEFC;
    case 842u: goto L_08ABFF10;
    case 843u: goto L_08ABFF3C;
    case 844u: goto L_08ABFF44;
    case 845u: goto L_08ABFF4C;
    case 846u: goto L_08ABFF68;
    case 847u: goto L_08ABFF78;
    case 848u: goto L_08ABFF94;
    case 849u: goto L_08ABFF9C;
    case 850u: goto L_08ABFFA0;
    case 851u: goto L_08ABFFAC;
    case 852u: goto L_08ABFFD4;
    case 853u: goto L_08ABFFEC;
    case 854u: goto L_08ABFFFC;
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
L_08ABC000:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08ABC004;
L_08ABC004:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(527));
    aot_gpr_31 = (0x08ABC014u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC014u) goto L_08ABC014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC014:
    aot_gpr_4 = (0u | 0u);
    goto L_08ABC018;
L_08ABC018:
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(527))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC03C;
      }
      goto L_08ABC02C;
    }
L_08ABC02C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08ABC03C;
      }
      goto L_08ABC034;
    }
L_08ABC034:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08ABC03C;
L_08ABC03C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABC018;
      }
      goto L_08ABC050;
    }
L_08ABC050:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC064:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC06C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_31 = (0x08ABC090u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC090u) goto L_08ABC090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC090:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8022))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08ABC0C8;
      }
      goto L_08ABC09C;
    }
L_08ABC09C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (0u | 65533u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABC0C0;
      }
      goto L_08ABC0B0;
    }
L_08ABC0B0:
    aot_gpr_5 = (0u | 65535u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(29704), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABC0C8;
      }
      goto L_08ABC0C0;
    }
L_08ABC0C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC180;
      }
      goto L_08ABC0C8;
    }
L_08ABC0C8:
    aot_gpr_31 = (0x08ABC0D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC0D0u) goto L_08ABC0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC0D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28496));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_16 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
      if (branch_taken) {
          goto L_08ABC104;
      }
      goto L_08ABC100;
    }
L_08ABC100:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8016)));
    goto L_08ABC104;
L_08ABC104:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABC118u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 363u, 0x088713F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC118u) goto L_08ABC118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC118:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_31 = (0x08ABC130u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC130u) goto L_08ABC130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC130:
    aot_gpr_31 = (0x08ABC138u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08863470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC138u) goto L_08ABC138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC138:
    aot_gpr_31 = (0x08ABC140u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC140u) goto L_08ABC140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC140:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(522), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8012))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8014))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_31 = (0x08ABC174u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC174u) goto L_08ABC174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC174:
    aot_gpr_31 = (0x08ABC17Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 375u, 0x088624A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC17Cu) goto L_08ABC17C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC17C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABC180;
L_08ABC180:
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
L_08ABC194:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_31 = (0x08ABC1C8u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC1C8u) goto L_08ABC1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC1C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08ABC1DC;
    }
    goto L_08ABC1D4;
L_08ABC1D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC1E0;
      }
      goto L_08ABC1DC;
    }
L_08ABC1DC:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08ABC1E0;
L_08ABC1E0:
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC228;
      }
      goto L_08ABC1F4;
    }
L_08ABC1F4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC210;
      }
      goto L_08ABC200;
    }
L_08ABC200:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABC210;
      }
      goto L_08ABC208;
    }
L_08ABC208:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08ABC210;
L_08ABC210:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08ABC1F4;
      }
      goto L_08ABC228;
    }
L_08ABC228:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(527));
    aot_gpr_31 = (0x08ABC234u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC234u) goto L_08ABC234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC234:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (2236u << 16u);
      if (branch_taken) {
          goto L_08ABC2C0;
      }
      goto L_08ABC240;
    }
L_08ABC240:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(7956));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    goto L_08ABC24C;
L_08ABC24C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(527));
    aot_gpr_31 = (0x08ABC25Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC25Cu) goto L_08ABC25C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC25C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ABC2B4;
      }
      goto L_08ABC264;
    }
L_08ABC264:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(535)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABC298;
      }
      goto L_08ABC270;
    }
L_08ABC270:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08ABC27Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC27Cu) goto L_08ABC27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC27C:
    aot_gpr_31 = (0x08ABC284u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC284u) goto L_08ABC284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC284:
    aot_gpr_31 = (0x08ABC28Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC28Cu) goto L_08ABC28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC28C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08ABC298u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC298u) goto L_08ABC298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC298:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABC2A4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 409u, 0x088626C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC2A4u) goto L_08ABC2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC2A4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABC2B0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 415u, 0x088626F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC2B0u) goto L_08ABC2B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC2B0:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    goto L_08ABC2B4;
L_08ABC2B4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08ABC24C;
      }
      goto L_08ABC2C0;
    }
L_08ABC2C0:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC2E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08ABC30Cu);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC30Cu) goto L_08ABC30C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC30C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08ABC320;
      }
      goto L_08ABC318;
    }
L_08ABC318:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC328;
      }
      goto L_08ABC320;
    }
L_08ABC320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_16);
    goto L_08ABC328;
L_08ABC328:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ABC35C;
      }
      goto L_08ABC330;
    }
L_08ABC330:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08ABC33Cu);
    aot_gpr_4 = (0u | 2452u);
    goto L_08ABE278;
L_08ABC33C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08ABC354;
      }
      goto L_08ABC348;
    }
L_08ABC348:
    aot_gpr_31 = (0x08ABC350u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC350u) goto L_08ABC350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC350:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ABC354;
L_08ABC354:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABC35C;
L_08ABC35C:
    aot_gpr_31 = (0x08ABC364u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 492u, 0x089F6818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC364u) goto L_08ABC364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC364:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08ABC380:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (0u | 891u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08ABC3D4;
      }
      goto L_08ABC3A8;
    }
L_08ABC3A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(516));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (128u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABC3FC;
      }
      goto L_08ABC3D4;
    }
L_08ABC3D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(516));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (192u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_gpr_4);
    goto L_08ABC3FC;
L_08ABC3FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABC454u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC454u) goto L_08ABC454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC454:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(508)));
        goto L_08ABC488;
    }
    goto L_08ABC45C;
L_08ABC45C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(508)));
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(84));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABC484u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC484u) goto L_08ABC484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(508)));
    goto L_08ABC488;
L_08ABC488:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(516)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(508), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[17]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08ABC4DC;
      }
      goto L_08ABC4C4;
    }
L_08ABC4C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABC4E8;
      }
      goto L_08ABC4DC;
    }
L_08ABC4DC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08ABC4E8;
L_08ABC4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC4F0;
      }
      goto L_08ABC4F0;
    }
L_08ABC4F0:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC50C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC514:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABC530;
      }
      goto L_08ABC528;
    }
L_08ABC528:
    aot_gpr_31 = (0x08ABC530u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC530u) goto L_08ABC530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC530:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC540:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABC5C0;
      }
      goto L_08ABC554;
    }
L_08ABC554:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC570;
      }
      goto L_08ABC568;
    }
L_08ABC568:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08ABC5B8;
      }
      goto L_08ABC570;
    }
L_08ABC570:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC59C;
      }
      goto L_08ABC590;
    }
L_08ABC590:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABC5B8;
      }
      goto L_08ABC59C;
    }
L_08ABC59C:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABC5B8;
      }
      goto L_08ABC5B4;
    }
L_08ABC5B4:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABC5B8;
L_08ABC5B8:
    aot_gpr_31 = (0x08ABC5C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC5C0u) goto L_08ABC5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC5C0:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC5D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABC614;
      }
      goto L_08ABC5FC;
    }
L_08ABC5FC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(535)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABC62C;
      }
      goto L_08ABC608;
    }
L_08ABC608:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABC5FC;
      }
      goto L_08ABC614;
    }
L_08ABC614:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABC624u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC624u) goto L_08ABC624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC650;
      }
      goto L_08ABC62C;
    }
L_08ABC62C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(527));
    aot_gpr_31 = (0x08ABC638u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 436u, 0x08862920u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC638u) goto L_08ABC638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC638:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABC64Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC64Cu) goto L_08ABC64C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC64C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABC650;
L_08ABC650:
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
L_08ABC668:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7952)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(535)));
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08ABC6E4;
      }
      goto L_08ABC680;
    }
L_08ABC680:
    aot_gpr_6 = (aot_gpr_6 ^ 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC694;
      }
      goto L_08ABC68C;
    }
L_08ABC68C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08ABC6DC;
      }
      goto L_08ABC694;
    }
L_08ABC694:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC6C0;
      }
      goto L_08ABC6B4;
    }
L_08ABC6B4:
    aot_gpr_5 = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABC6DC;
      }
      goto L_08ABC6C0;
    }
L_08ABC6C0:
    aot_gpr_5 = (aot_gpr_6 | ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABC6DC;
      }
      goto L_08ABC6D8;
    }
L_08ABC6D8:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABC6DC;
L_08ABC6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC744;
      }
      goto L_08ABC6E4;
    }
L_08ABC6E4:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC6F8;
      }
      goto L_08ABC6F0;
    }
L_08ABC6F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABC740;
      }
      goto L_08ABC6F8;
    }
L_08ABC6F8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC724;
      }
      goto L_08ABC718;
    }
L_08ABC718:
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABC740;
      }
      goto L_08ABC724;
    }
L_08ABC724:
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABC740;
      }
      goto L_08ABC73C;
    }
L_08ABC73C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABC740;
L_08ABC740:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABC744;
L_08ABC744:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC74C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (ctx.gpr[9] + aot_gpr_6);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC77C;
    }
L_08ABC77C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 63u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC7A0;
    }
L_08ABC7A0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] >> 24u);
    ctx.gpr[7] = (ctx.gpr[9] >> 15u);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC7B8;
    }
L_08ABC7B8:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC7C8;
    }
L_08ABC7C8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABC7F8;
      }
      goto L_08ABC7D4;
    }
L_08ABC7D4:
    aot_gpr_5 = (aot_gpr_6 << 15u);
    aot_gpr_4 = (65280u << 16u);
    aot_gpr_6 = (256u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32767));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-32768));
    aot_gpr_4 = (ctx.gpr[9] & aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08ABC7F8;
L_08ABC7F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABC818;
      }
      goto L_08ABC800;
    }
L_08ABC800:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x08ABC818u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABC818:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC824:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_gpr_4);
    ctx.gpr[7] = (2u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABC85Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    goto L_08ABE004;
L_08ABC85C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABC870u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABC870:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[2] = aot_run_words[0];
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
L_08ABC888:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08ABC89Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08ABDFCC;
L_08ABC89C:
    aot_gpr_31 = (0x08ABC8A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABC824;
L_08ABC8A4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC8B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 << 2u);
    ctx.gpr[17] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABC8ECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 922u, 0x08B576D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC8ECu) goto L_08ABC8EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC8EC:
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ABC91C;
    }
    goto L_08ABC900;
L_08ABC900:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08ABC910u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12224));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABC910u) goto L_08ABC910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABC910:
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ABC91C;
L_08ABC91C:
    aot_gpr_6 = (65280u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(63));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_6 = (256u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
L_08ABC95C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_6 = (2u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08ABC9AC;
      }
      goto L_08ABC9A4;
    }
L_08ABC9A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABC9B4;
      }
      goto L_08ABC9AC;
    }
L_08ABC9AC:
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ABC9B4;
L_08ABC9B4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABC9BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABC9FC;
      }
      goto L_08ABC9D0;
    }
L_08ABC9D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1032));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABC9FC;
      }
      goto L_08ABC9F4;
    }
L_08ABC9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08ABC9FC;
      }
      goto L_08ABC9FC;
    }
L_08ABC9FC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCA04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABCA7C;
      }
      goto L_08ABCA34;
    }
L_08ABCA34:
    ctx.gpr[19] = (0u | 24u);
    goto L_08ABCA38;
L_08ABCA38:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABCA44u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABC9BC;
L_08ABCA44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
    aot_gpr_4 = (aot_gpr_4 >> 6u);
      if (branch_taken) {
          goto L_08ABCA60;
      }
      goto L_08ABCA54;
    }
L_08ABCA54:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_08ABCA68;
      }
      goto L_08ABCA60;
    }
L_08ABCA60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ABCA80;
      }
      goto L_08ABCA68;
    }
L_08ABCA68:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABCA74u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABC968;
L_08ABCA74:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABCA38;
      }
      goto L_08ABCA7C;
    }
L_08ABCA7C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABCA80;
L_08ABCA80:
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
L_08ABCAA0:
    ctx.gpr[7] = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABCAB4;
      }
      goto L_08ABCAAC;
    }
L_08ABCAAC:
    aot_gpr_5 = (aot_gpr_6 >> 15u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    goto L_08ABCAB4;
L_08ABCAB4:
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 24u);
    ctx.gpr[7] = (65280u << 16u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCAD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08ABCBC4;
      }
      goto L_08ABCB28;
    }
L_08ABCB28:
    ctx.gpr[19] = (0u | 24u);
    goto L_08ABCB2C;
L_08ABCB2C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABCB38u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABC968;
L_08ABCB38:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABCB48u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABC9BC;
L_08ABCB48:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 & 63u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08ABCB74;
      }
      goto L_08ABCB5C;
    }
L_08ABCB5C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABCB6Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    goto L_08ABC8B4;
L_08ABCB6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABCBBC;
      }
      goto L_08ABCB74;
    }
L_08ABCB74:
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABCBA4;
      }
      goto L_08ABCB84;
    }
L_08ABCB84:
    aot_gpr_31 = (0x08ABCB8Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    goto L_08ABCAA0;
L_08ABCB8C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABCB9Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABC8B4;
L_08ABCB9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABCBBC;
      }
      goto L_08ABCBA4;
    }
L_08ABCBA4:
    aot_gpr_31 = (0x08ABCBACu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_08ABCAA0;
L_08ABCBAC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABCBBCu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    goto L_08ABC8B4;
L_08ABCBBC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ABCB2C;
      }
      goto L_08ABCBC4;
    }
L_08ABCBC4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCBF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_6 = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08ABCC20u);
    ctx.gpr[9] = (0u | 255u);
    goto L_08ABCAD8;
L_08ABCC20:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCC38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABCC64;
      }
      goto L_08ABCC54;
    }
L_08ABCC54:
    aot_gpr_31 = (0x08ABCC5Cu);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08ABCC8C;
L_08ABCC5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABCC80;
      }
      goto L_08ABCC64;
    }
L_08ABCC64:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    aot_gpr_31 = (0x08ABCC80u);
    ctx.gpr[9] = (0u | 255u);
    goto L_08ABCAD8;
L_08ABCC80:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCC8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABCCA8u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_08ABC95C;
L_08ABCCA8:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABCCB8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABCCB8:
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
L_08ABCCCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[19];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABCD08;
      }
      goto L_08ABCCF4;
    }
L_08ABCCF4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
      if (branch_taken) {
          goto L_08ABCD10;
      }
      goto L_08ABCD00;
    }
L_08ABCD00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_16);
      if (branch_taken) {
          goto L_08ABCD40;
      }
      goto L_08ABCD08;
    }
L_08ABCD08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABCD40;
      }
      goto L_08ABCD10;
    }
L_08ABCD10:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABCD1Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08ABC968;
L_08ABCD1C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08ABCD30;
      }
      goto L_08ABCD28;
    }
L_08ABCD28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABCD10;
      }
      goto L_08ABCD30;
    }
L_08ABCD30:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABCD40u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ABC8B4;
L_08ABCD40:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCD5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ABCDB4;
      }
      goto L_08ABCD80;
    }
L_08ABCD80:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ABCDAC;
      }
      goto L_08ABCD8C;
    }
L_08ABCD8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08ABCDA4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12252));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABCDA4u) goto L_08ABCDA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABCDA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08ABCDAC;
L_08ABCDAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08ABCDB4;
L_08ABCDB4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCDC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABCDDCu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABCD5C;
L_08ABCDDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_4);
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
L_08ABCDFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABCE20;
      }
      goto L_08ABCE0C;
    }
L_08ABCE0C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABCE20;
      }
      goto L_08ABCE14;
    }
L_08ABCE14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_08ABCE20;
L_08ABCE20:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCE28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (0u | 11u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABCE58;
      }
      goto L_08ABCE48;
    }
L_08ABCE48:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08ABCE58u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08ABCDFC;
L_08ABCE58:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCE64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08ABCE90u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 6u, 0x08A9402Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABCE90u) goto L_08ABCE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABCE90:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08ABCEB4;
      }
      goto L_08ABCEA4;
    }
L_08ABCEA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08ABCF60;
      }
      goto L_08ABCEB4;
    }
L_08ABCEB4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_08ABCEFC;
    }
    goto L_08ABCED0;
L_08ABCED0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08ABCEF4u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABCEF4u) goto L_08ABCEF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABCEF4:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08ABCEFC;
L_08ABCEFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08ABCF34u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 17u, 0x08A940D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABCF34u) goto L_08ABCF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABCF34:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABCF60;
      }
      goto L_08ABCF60;
    }
L_08ABCF60:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCF7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_6 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABCFACu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08ABCE64;
L_08ABCFAC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCFB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABCFD8u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08ABCE64;
L_08ABCFD8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABCFE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_31 = (0x08ABD00Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08ABCE64;
L_08ABD00C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD018:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08ABD08C;
      }
      goto L_08ABD028;
    }
L_08ABD028:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-32705));
    ctx.gpr[10] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] << 6u);
    ctx.gpr[9] = (ctx.gpr[9] & 32704u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_6 = (0u | 11u);
      if (branch_taken) {
          goto L_08ABD08C;
      }
      goto L_08ABD068;
    }
L_08ABD068:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 >> 24u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08ABD08C;
L_08ABD08C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD094:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-5));
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD0BC;
    }
L_08ABD0BC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12360)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD0D4:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD0E0;
    }
L_08ABD0E0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08ABD0F8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD0F8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD108;
    }
L_08ABD108:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08ABD11Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_08ABE004;
L_08ABD11C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD12C;
    }
L_08ABD12C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08ABD138u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCDFC;
L_08ABD138:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08ABD144u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCDFC;
L_08ABD144:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 6u);
    aot_gpr_31 = (0x08ABD15Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD15C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD16C;
    }
L_08ABD16C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABD17Cu);
    aot_gpr_6 = (0u | 1u);
    goto L_08ABD018;
L_08ABD17C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD184;
    }
L_08ABD184:
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
L_08ABD198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08ABD1C4u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    goto L_08ABC95C;
L_08ABD1C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABD1DCu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08ABDFCC;
L_08ABD1DC:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD1F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABD21Cu);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08ABD094;
L_08ABD21C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABD314;
      }
      goto L_08ABD230;
    }
L_08ABD230:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12392)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD248:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABD258u);
    aot_gpr_6 = (0u | 1u);
    goto L_08ABC74C;
L_08ABD258:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABD314;
      }
      goto L_08ABD268;
    }
L_08ABD268:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_gpr_5 ^ 2u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABD288u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD288:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD290;
    }
L_08ABD290:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08ABD2A4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ABE004;
L_08ABD2A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD2AC;
    }
L_08ABD2AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (256u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_16 << 24u);
    aot_gpr_6 = (65280u << 16u);
    aot_gpr_6 = (ctx.gpr[7] & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD2E8;
    }
L_08ABD2E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
      if (branch_taken) {
          goto L_08ABD30C;
      }
      goto L_08ABD2F4;
    }
L_08ABD2F4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABD30Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD30C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD314;
    }
L_08ABD314:
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
L_08ABD32C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08ABD370;
      }
      goto L_08ABD350;
    }
L_08ABD350:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABD35Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08ABCDC0;
L_08ABD35C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08ABD370u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD1F8;
L_08ABD370:
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
L_08ABD384:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08ABD3B4u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08ABD1F8;
L_08ABD3B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08ABD3D4;
      }
      goto L_08ABD3C4;
    }
L_08ABD3C4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08ABD3D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08ABCCCC;
L_08ABD3D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08ABD4C0;
      }
      goto L_08ABD3E4;
    }
L_08ABD3E4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD3FCu);
    aot_gpr_6 = (0u | 1u);
    goto L_08ABCA04;
L_08ABD3FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ABD41C;
      }
      goto L_08ABD404;
    }
L_08ABD404:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD414u);
    aot_gpr_6 = (0u | 0u);
    goto L_08ABCA04;
L_08ABD414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ABD474;
      }
      goto L_08ABD41C;
    }
L_08ABD41C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABD434;
      }
      goto L_08ABD428;
    }
L_08ABD428:
    aot_gpr_31 = (0x08ABD430u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08ABC824;
L_08ABD430:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ABD434;
L_08ABD434:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08ABD44Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_08ABD198;
L_08ABD44C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABD464u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08ABD198;
L_08ABD464:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD474u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_08ABCC8C;
L_08ABD474:
    aot_gpr_31 = (0x08ABD47Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08ABC95C;
L_08ABD47C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABD4A0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    goto L_08ABCAD8;
L_08ABD4A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 255u);
    aot_gpr_31 = (0x08ABD4C0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_08ABCAD8;
L_08ABD4C0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD4FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABD518u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABD094;
L_08ABD518:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABD524u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABD524:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABD530u);
    aot_gpr_5 = (0u | 1u);
    goto L_08ABCDC0;
L_08ABD530:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08ABD544u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD384;
L_08ABD544:
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
L_08ABD558:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABD574u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABD094;
L_08ABD574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABD5C4;
      }
      goto L_08ABD584;
    }
L_08ABD584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABD5BC;
      }
      goto L_08ABD594;
    }
L_08ABD594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABD5C4;
      }
      goto L_08ABD5A4;
    }
L_08ABD5A4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABD5B4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_08ABD384;
L_08ABD5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABD5D4;
      }
      goto L_08ABD5BC;
    }
L_08ABD5BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD5D4;
      }
      goto L_08ABD5C4;
    }
L_08ABD5C4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABD5D0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD4FC;
L_08ABD5D0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08ABD5D4;
L_08ABD5D4:
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
L_08ABD5E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABD620;
      }
      goto L_08ABD608;
    }
L_08ABD608:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08ABD618u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08ABD558;
L_08ABD618:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD630;
      }
      goto L_08ABD620;
    }
L_08ABD620:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08ABD630u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08ABD094;
L_08ABD630:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD63C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABD658u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABD5E8;
L_08ABD658:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 4u);
      if (branch_taken) {
          goto L_08ABD678;
      }
      goto L_08ABD668;
    }
L_08ABD668:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD670;
    }
L_08ABD670:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD688;
      }
      goto L_08ABD678;
    }
L_08ABD678:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08ABD6C0;
      }
      goto L_08ABD680;
    }
L_08ABD680:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD688;
    }
L_08ABD688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(250));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 512 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABD6A4;
      }
      goto L_08ABD69C;
    }
L_08ABD69C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD6A4;
    }
L_08ABD6A4:
    aot_gpr_31 = (0x08ABD6ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCFE4;
L_08ABD6AC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
      if (branch_taken) {
          goto L_08ABD6F0;
      }
      goto L_08ABD6C0;
    }
L_08ABD6C0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABD6DC;
      }
      goto L_08ABD6D4;
    }
L_08ABD6D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD6DC;
    }
L_08ABD6DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD6F0;
      }
      goto L_08ABD6E4;
    }
L_08ABD6E4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABD6F0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD558;
L_08ABD6F0:
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
L_08ABD704:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABD768;
      }
      goto L_08ABD730;
    }
L_08ABD730:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD73C;
    }
L_08ABD73C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABD784;
      }
      goto L_08ABD744;
    }
L_08ABD744:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD750u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABD750:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD760u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD384;
L_08ABD760:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD810;
      }
      goto L_08ABD768;
    }
L_08ABD768:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABD7B0;
      }
      goto L_08ABD774;
    }
L_08ABD774:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABD7D8;
      }
      goto L_08ABD77C;
    }
L_08ABD77C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD784;
    }
L_08ABD784:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD790u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD558;
L_08ABD790:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08ABD7A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD7A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD7B0;
    }
L_08ABD7B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD7BCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD558;
L_08ABD7BC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_31 = (0x08ABD7D0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_08ABE004;
L_08ABD7D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD7D8;
    }
L_08ABD7D8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD7E4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD63C;
L_08ABD7E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08ABD7FCu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    goto L_08ABDFCC;
L_08ABD7FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD804;
    }
L_08ABD804:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD810u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABD810:
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
L_08ABD828:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08ABD858u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08ABD558;
L_08ABD858:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD864u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABD864:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD874u);
    aot_gpr_5 = (0u | 2u);
    goto L_08ABCDC0;
L_08ABD874:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD888u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABD63C;
L_08ABD888:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08ABD8A0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    goto L_08ABDFCC;
L_08ABD8A0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD8ACu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABD8AC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD8D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABD8E8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_08ABC9BC;
L_08ABD8E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (256u << 16u);
    aot_gpr_6 = (aot_gpr_4 >> 24u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 << 24u);
    aot_gpr_6 = (65280u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABD920:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 10u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABD9A4;
      }
      goto L_08ABD94C;
    }
L_08ABD94C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 18u);
    aot_gpr_6 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABD9A4;
      }
      goto L_08ABD974;
    }
L_08ABD974:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_gpr_4 >> 15u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
    ctx.gpr[8] = (aot_gpr_16 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_31 = (0x08ABD99Cu);
    aot_gpr_6 = (0u | 255u);
    goto L_08ABC888;
L_08ABD99C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABD9D4;
      }
      goto L_08ABD9A4;
    }
L_08ABD9A4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD9B0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABD32C;
L_08ABD9B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABD9BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABD9BC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x08ABD9D4u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08ABC888;
L_08ABD9D4:
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
L_08ABD9EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABDA08u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABD094;
L_08ABDA08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 4u);
      if (branch_taken) {
          goto L_08ABDA48;
      }
      goto L_08ABDA18;
    }
L_08ABDA18:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_08ABDA30;
      }
      goto L_08ABDA20;
    }
L_08ABDA20:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_08ABDA38;
      }
      goto L_08ABDA28;
    }
L_08ABDA28:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABDA5C;
      }
      goto L_08ABDA30;
    }
L_08ABDA30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABDA70;
      }
      goto L_08ABDA38;
    }
L_08ABDA38:
    aot_gpr_31 = (0x08ABDA40u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABC824;
L_08ABDA40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABDA70;
      }
      goto L_08ABDA48;
    }
L_08ABDA48:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDA54u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD8D8;
L_08ABDA54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABDA70;
      }
      goto L_08ABDA5C;
    }
L_08ABDA5C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABDA6Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_08ABD920;
L_08ABDA6C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08ABDA70;
L_08ABDA70:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08ABDA80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABDA80:
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
L_08ABDA94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABDAB0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABD094;
L_08ABDAB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_08ABDAF0;
      }
      goto L_08ABDAC0;
    }
L_08ABDAC0:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_08ABDAD8;
      }
      goto L_08ABDAC8;
    }
L_08ABDAC8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08ABDAE0;
      }
      goto L_08ABDAD0;
    }
L_08ABDAD0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABDAF8;
      }
      goto L_08ABDAD8;
    }
L_08ABDAD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABDB0C;
      }
      goto L_08ABDAE0;
    }
L_08ABDAE0:
    aot_gpr_31 = (0x08ABDAE8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABC824;
L_08ABDAE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABDB0C;
      }
      goto L_08ABDAF0;
    }
L_08ABDAF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABDB0C;
      }
      goto L_08ABDAF8;
    }
L_08ABDAF8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABDB08u);
    aot_gpr_6 = (0u | 1u);
    goto L_08ABD920;
L_08ABDB08:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08ABDB0C;
L_08ABDB0C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08ABDB1Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABDB1C:
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
L_08ABDB30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABDB4Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABD094;
L_08ABDB4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABDC00;
      }
      goto L_08ABDB60;
    }
L_08ABDB60:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12440)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABDB78:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDB8C;
    }
L_08ABDB8C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDBA0;
    }
L_08ABDBA0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDBACu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD8D8;
L_08ABDBAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDBB8;
    }
L_08ABDBB8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDBC4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD32C;
L_08ABDBC4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDBD0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABDBD0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08ABDBE8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABDBE8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDC00;
    }
L_08ABDC00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_08ABDC08;
L_08ABDC08:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
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
L_08ABDC24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08ABDC3Cu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08ABD63C;
L_08ABDC3C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABDC58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABDD0C;
      }
      goto L_08ABDC74;
    }
L_08ABDC74:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDC80u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD5E8;
L_08ABDC80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABDCCC;
      }
      goto L_08ABDC90;
    }
L_08ABDC90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08ABDCCC;
      }
      goto L_08ABDCB4;
    }
L_08ABDCB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDCC4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_08ABCFB8;
L_08ABDCC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABDD18;
      }
      goto L_08ABDCCC;
    }
L_08ABDCCC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDCD8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD558;
L_08ABDCD8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDCE4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABDCE4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 17u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08ABDCFCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABDCFC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABDD18;
      }
      goto L_08ABDD0C;
    }
L_08ABDD0C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDD18u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABDB30;
L_08ABDD18:
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
L_08ABDD2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABDD70;
      }
      goto L_08ABDD50;
    }
L_08ABDD50:
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABDDCC;
      }
      goto L_08ABDD5C;
    }
L_08ABDD5C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDD68u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD4FC;
L_08ABDD68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABDDD8;
      }
      goto L_08ABDD70;
    }
L_08ABDD70:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABDDA8;
      }
      goto L_08ABDD7C;
    }
L_08ABDD7C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABDDCC;
      }
      goto L_08ABDD84;
    }
L_08ABDD84:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDD90u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABDA94;
L_08ABDD90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08ABDD9Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCC8C;
L_08ABDD9C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABDDD8;
      }
      goto L_08ABDDA8;
    }
L_08ABDDA8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDDB4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD9EC;
L_08ABDDB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08ABDDC0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABCC8C;
L_08ABDDC0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABDDD8;
      }
      goto L_08ABDDCC;
    }
L_08ABDDCC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABDDD8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD63C;
L_08ABDDD8:
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
L_08ABDDEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_6) < 5 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08ABDE38;
      }
      goto L_08ABDE10;
    }
L_08ABDE10:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08ABDE28u);
    aot_gpr_6 = (0u | 0u);
    goto L_08ABDFCC;
L_08ABDE28:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABDEA0;
      }
      goto L_08ABDE38;
    }
L_08ABDE38:
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_6) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08ABDE54;
      }
      goto L_08ABDE44;
    }
L_08ABDE44:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08ABDE64;
      }
      goto L_08ABDE54;
    }
L_08ABDE54:
    ctx.gpr[9] = (0u | 6u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[9];
      if (branch_taken) {
          goto L_08ABDE64;
      }
      goto L_08ABDE60;
    }
L_08ABDE60:
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDE64;
L_08ABDE64:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12312));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-24)));
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    aot_gpr_31 = (0x08ABDE94u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    goto L_08ABC888;
L_08ABDE94:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08ABDEA0;
L_08ABDEA0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABDEB0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-4), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABDECC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08ABDEF8u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ABCBF4;
L_08ABDEF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDF40;
      }
      goto L_08ABDF10;
    }
L_08ABDF10:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    aot_gpr_31 = (0x08ABDF34u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12336));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABDF34u) goto L_08ABDF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABDF34:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08ABDF40;
L_08ABDF40:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08ABDF94;
      }
      goto L_08ABDF64;
    }
L_08ABDF64:
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    aot_gpr_31 = (0x08ABDF88u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12336));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABDF88u) goto L_08ABDF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABDF88:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08ABDF94;
L_08ABDF94:
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABDFCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_6 << 24u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABDFF8u);
    aot_gpr_5 = (ctx.gpr[7] | aot_gpr_5);
    goto L_08ABDECC;
L_08ABDFF8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE004:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_6 << 24u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE028u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    goto L_08ABDECC;
L_08ABE028:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE034:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABE084;
      }
      goto L_08ABE070;
    }
L_08ABE070:
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08ABE118;
      }
      goto L_08ABE07C;
    }
L_08ABE07C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE204;
      }
      goto L_08ABE084;
    }
L_08ABE084:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABE0D8;
      }
      goto L_08ABE090;
    }
L_08ABE090:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABE204;
      }
      goto L_08ABE098;
    }
L_08ABE098:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE0A4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD094;
L_08ABE0A4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08ABE0B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08ABCCCC;
L_08ABE0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABE254;
      }
      goto L_08ABE0D8;
    }
L_08ABE0D8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE0E4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD094;
L_08ABE0E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08ABE0F4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08ABCCCC;
L_08ABE0F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABE254;
      }
      goto L_08ABE118;
    }
L_08ABE118:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE124u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD5E8;
L_08ABE124:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 10u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
    aot_gpr_4 = (0u | 19u);
      if (branch_taken) {
          goto L_08ABE1B8;
      }
      goto L_08ABE134;
    }
L_08ABE134:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 63u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08ABE1B8;
      }
      goto L_08ABE158;
    }
L_08ABE158:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE164u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABE164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (65280u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    ctx.gpr[7] = (256u << 16u);
    aot_gpr_6 = (aot_gpr_6 << 15u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32768));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABE1FC;
      }
      goto L_08ABE1B8;
    }
L_08ABE1B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE1C4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD4FC;
L_08ABE1C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE1D0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABE1D0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE1DCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABE1DC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 19u);
    aot_gpr_31 = (0x08ABE1F4u);
    aot_gpr_6 = (0u | 0u);
    goto L_08ABDFCC;
L_08ABE1F4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08ABE1FC;
L_08ABE1FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE254;
      }
      goto L_08ABE204;
    }
L_08ABE204:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE210u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABD63C;
L_08ABE210:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE220u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABD63C;
L_08ABE220:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE230u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABCE28;
L_08ABE230:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABE23Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABE23C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ABE254u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    goto L_08ABDDEC;
L_08ABE254:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE278:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE290u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    goto L_08ABE57C;
L_08ABE290:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE29C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE2B4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    goto L_08ABE57C;
L_08ABE2B4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE2C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE2D8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    goto L_08ABE8F4;
L_08ABE2D8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE2E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE2FCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    goto L_08ABE8F4;
L_08ABE2FC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE308:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE320u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    goto L_08ABE57C;
L_08ABE320:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE32C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_31 = (0x08ABE348u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08ABE308;
L_08ABE348:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABE364;
      }
      goto L_08ABE354;
    }
L_08ABE354:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABE364u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE364u) goto L_08ABE364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE364:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE378:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE38Cu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08ABE32C;
L_08ABE38C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE398:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABE3B0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    goto L_08ABE8F4;
L_08ABE3B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE3BC:
    aot_gpr_5 = (2220u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-3256));
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE3E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08ABE418u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABF578;
L_08ABE418:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] - ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_16 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_5 = (ctx.gpr[2] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_5 = (ctx.gpr[17] >> 10u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_gpr_31 = (0x08ABE454u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    goto L_08ABF1F8;
L_08ABE454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 264u);
    aot_gpr_31 = (0x08ABE464u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    goto L_08ABF1F8;
L_08ABE464:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16));
    goto L_08ABE484;
L_08ABE484:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABE4B4;
      }
      goto L_08ABE494;
    }
L_08ABE494:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABE500;
      }
      goto L_08ABE4B4;
    }
L_08ABE4B4:
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08ABE4E4;
      }
      goto L_08ABE4C0;
    }
L_08ABE4C0:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(7));
    ctx.gpr[8] = (ctx.gpr[8] & aot_gpr_6);
    ctx.gpr[2] = (ctx.gpr[8] >> 3u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABE500;
      }
      goto L_08ABE4E4;
    }
L_08ABE4E4:
    ctx.gpr[8] = (ctx.gpr[8] & aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[8] >> 4u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08ABE500;
L_08ABE500:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABE524;
      }
      goto L_08ABE510;
    }
L_08ABE510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ABE524;
      }
      goto L_08ABE518;
    }
L_08ABE518:
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_08ABE524;
L_08ABE524:
    ctx.gpr[2] = (ctx.gpr[9] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ABE484;
      }
      goto L_08ABE530;
    }
L_08ABE530:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08ABE544u);
    aot_gpr_5 = (aot_gpr_5 & 1023u);
    goto L_08ABF1F8;
L_08ABE544:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08ABE564:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE57C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABE5A8;
      }
      goto L_08ABE594;
    }
L_08ABE594:
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABE5B0;
      }
      goto L_08ABE5A0;
    }
L_08ABE5A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE618;
      }
      goto L_08ABE5A8;
    }
L_08ABE5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABE628;
      }
      goto L_08ABE5B0;
    }
L_08ABE5B0:
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ABE5E0;
      }
      goto L_08ABE5D0;
    }
L_08ABE5D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABE5EC;
      }
      goto L_08ABE5E0;
    }
L_08ABE5E0:
    aot_gpr_31 = (0x08ABE5E8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 466u, 0x08AA7154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE5E8u) goto L_08ABE5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE5E8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08ABE5EC;
L_08ABE5EC:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABE610;
      }
      goto L_08ABE600;
    }
L_08ABE600:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABE610u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE610u) goto L_08ABE610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE610:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE624;
      }
      goto L_08ABE618;
    }
L_08ABE618:
    aot_gpr_31 = (0x08ABE620u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABF3BC;
L_08ABE620:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    goto L_08ABE624;
L_08ABE624:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_08ABE628;
L_08ABE628:
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
L_08ABE63C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (~(ctx.gpr[8] | 0u));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABE6A8;
      }
      goto L_08ABE664;
    }
L_08ABE664:
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_gpr_5 = (aot_gpr_5 >> 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABE698;
      }
      goto L_08ABE688;
    }
L_08ABE688:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABE6A0;
      }
      goto L_08ABE698;
    }
L_08ABE698:
    aot_gpr_31 = (0x08ABE6A0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 466u, 0x08AA7154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE6A0u) goto L_08ABE6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE6A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE6B0;
      }
      goto L_08ABE6A8;
    }
L_08ABE6A8:
    aot_gpr_31 = (0x08ABE6B0u);
    goto L_08ABF46C;
L_08ABE6B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE6BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08ABE730;
      }
      goto L_08ABE6F0;
    }
L_08ABE6F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08ABE71C;
      }
      goto L_08ABE6F8;
    }
L_08ABE6F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABE704u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABEF54;
L_08ABE704:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABE744;
      }
      goto L_08ABE714;
    }
L_08ABE714:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE874;
      }
      goto L_08ABE71C;
    }
L_08ABE71C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABE728u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABE8F4;
L_08ABE728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE730;
    }
L_08ABE730:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABE73Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08ABE57C;
L_08ABE73C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE744;
    }
L_08ABE744:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_gpr_16 - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABE7A4;
      }
      goto L_08ABE760;
    }
L_08ABE760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABE7A4;
      }
      goto L_08ABE77C;
    }
L_08ABE77C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_31 = (0x08ABE794u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_5);
    goto L_08ABFC0C;
L_08ABE794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
    goto L_08ABE7A4;
L_08ABE7A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABE874;
      }
      goto L_08ABE7BC;
    }
L_08ABE7BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ABE7DCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08ABFA50;
L_08ABE7DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABE808;
      }
      goto L_08ABE7E8;
    }
L_08ABE7E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[19]);
    aot_gpr_31 = (0x08ABE808u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE808u) goto L_08ABE808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE808:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ABE814u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABE814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08ABE824u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    goto L_08ABFC04;
L_08ABE824:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08ABE85C;
      }
      goto L_08ABE83C;
    }
L_08ABE83C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABE85C;
      }
      goto L_08ABE848;
    }
L_08ABE848:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_31 = (0x08ABE85Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE85Cu) goto L_08ABE85C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE85C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE874;
    }
L_08ABE874:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08ABE8A4;
      }
      goto L_08ABE87C;
    }
L_08ABE87C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABE88Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08ABE57C;
L_08ABE88C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABE8AC;
      }
      goto L_08ABE89C;
    }
L_08ABE89C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABE8B4;
      }
      goto L_08ABE8A4;
    }
L_08ABE8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE8AC;
    }
L_08ABE8AC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_08ABE8B4;
L_08ABE8B4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08ABE8C0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABE8C0u) goto L_08ABE8C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABE8C0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABE8CCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABE8F4;
L_08ABE8CC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ABE8D0;
L_08ABE8D0:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE8F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABE924;
      }
      goto L_08ABE90C;
    }
L_08ABE90C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
        goto L_08ABE92C;
    }
    goto L_08ABE91C;
L_08ABE91C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE958;
      }
      goto L_08ABE924;
    }
L_08ABE924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABE97C;
      }
      goto L_08ABE92C;
    }
L_08ABE92C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(296)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 >> 10u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABE97C;
      }
      goto L_08ABE958;
    }
L_08ABE958:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_gpr_31 = (0x08ABE97Cu);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    goto L_08ABF8B4;
L_08ABE97C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABE988:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
      if (branch_taken) {
          goto L_08ABE9D4;
      }
      goto L_08ABE99C;
    }
L_08ABE99C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABE9C0;
      }
      goto L_08ABE9B0;
    }
L_08ABE9B0:
    aot_gpr_6 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABEA08;
      }
      goto L_08ABE9C0;
    }
L_08ABE9C0:
    aot_gpr_6 = (61440u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABEA08;
      }
      goto L_08ABE9D4;
    }
L_08ABE9D4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABE9F8;
      }
      goto L_08ABE9E8;
    }
L_08ABE9E8:
    aot_gpr_6 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABEA08;
      }
      goto L_08ABE9F8;
    }
L_08ABE9F8:
    aot_gpr_6 = (61440u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08ABEA08;
L_08ABEA08:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABEA10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7584), 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABEB28;
      }
      goto L_08ABEA3C;
    }
L_08ABEA3C:
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (32768u << 16u);
    ctx.gpr[15] = (4096u << 16u);
    goto L_08ABEA48;
L_08ABEA48:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[10]);
    ctx.gpr[11] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08ABEB18;
      }
      goto L_08ABEA60;
    }
L_08ABEA60:
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    goto L_08ABEA70;
L_08ABEA70:
    { const bool branch_taken = ctx.gpr[12] == 0u;
      if (branch_taken) {
          goto L_08ABEAE4;
      }
      goto L_08ABEA78;
    }
L_08ABEA78:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
      if (branch_taken) {
          goto L_08ABEAE4;
      }
      goto L_08ABEA80;
    }
L_08ABEA80:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[24] = (ctx.gpr[13] & ctx.gpr[10]);
    ctx.gpr[24] = (0u < ctx.gpr[24] ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
      if (branch_taken) {
          goto L_08ABEAB0;
      }
      goto L_08ABEA98;
    }
L_08ABEA98:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08ABEADC;
      }
      goto L_08ABEAB0;
    }
L_08ABEAB0:
    ctx.gpr[13] = (ctx.gpr[13] & ctx.gpr[15]);
    ctx.gpr[13] = (0u < ctx.gpr[13] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
      if (branch_taken) {
          goto L_08ABEACC;
      }
      goto L_08ABEAC4;
    }
L_08ABEAC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABEAE4;
      }
      goto L_08ABEACC;
    }
L_08ABEACC:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
    goto L_08ABEADC;
L_08ABEADC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABEA70;
      }
      goto L_08ABEAE4;
    }
L_08ABEAE4:
    { const bool branch_taken = ctx.gpr[12] == 0u;
      if (branch_taken) {
          goto L_08ABEB04;
      }
      goto L_08ABEAEC;
    }
L_08ABEAEC:
    ctx.gpr[8] = (aot_gpr_6 < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABEAFC;
      }
      goto L_08ABEAF8;
    }
L_08ABEAF8:
    aot_gpr_6 = (ctx.gpr[11] | 0u);
    goto L_08ABEAFC;
L_08ABEAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08ABEB20;
      }
      goto L_08ABEB04;
    }
L_08ABEB04:
    ctx.gpr[11] = (ctx.gpr[2] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08ABEB18;
      }
      goto L_08ABEB10;
    }
L_08ABEB10:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08ABEB18;
L_08ABEB18:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    goto L_08ABEB20;
L_08ABEB20:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
      if (branch_taken) {
          goto L_08ABEA48;
      }
      goto L_08ABEB28;
    }
L_08ABEB28:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABEB44;
      }
      goto L_08ABEB30;
    }
L_08ABEB30:
    aot_gpr_31 = (0x08ABEB38u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ABEB54;
L_08ABEB38:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABEB44;
      }
      goto L_08ABEB44;
    }
L_08ABEB44:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABEB54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(26160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[23] = (57344u << 16u);
    ctx.gpr[22] = (4096u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (16384u << 16u);
    ctx.gpr[30] = (4096u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    goto L_08ABEBCC;
L_08ABEBCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABEDF4;
      }
      goto L_08ABEBD4;
    }
L_08ABEBD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABEDF4;
      }
      goto L_08ABEBF0;
    }
L_08ABEBF0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABEC28;
      }
      goto L_08ABEC0C;
    }
L_08ABEC0C:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABEC34;
      }
      goto L_08ABEC20;
    }
L_08ABEC20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABEC58;
      }
      goto L_08ABEC28;
    }
L_08ABEC28:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ABEDFC;
      }
      goto L_08ABEC34;
    }
L_08ABEC34:
    aot_gpr_31 = (0x08ABEC3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABFC0C;
L_08ABEC3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABEC34;
      }
      goto L_08ABEC54;
    }
L_08ABEC54:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08ABEC58;
L_08ABEC58:
    ctx.gpr[17] = (aot_gpr_16 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABED0C;
      }
      goto L_08ABEC74;
    }
L_08ABEC74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ABED0C;
      }
      goto L_08ABEC84;
    }
L_08ABEC84:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_5 - ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7584), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_6, ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08ABECD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABFD6C;
L_08ABECD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (28672u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[22]);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08ABED18;
    }
    goto L_08ABED04;
L_08ABED04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABED3C;
      }
      goto L_08ABED0C;
    }
L_08ABED0C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ABEDFC;
      }
      goto L_08ABED18;
    }
L_08ABED18:
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[22]);
    aot_gpr_4 = (aot_gpr_16 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08ABED3C;
L_08ABED3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_16 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ABED98;
      }
      goto L_08ABED84;
    }
L_08ABED84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[17]);
    goto L_08ABED98;
L_08ABED98:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ABEDBCu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABEDBCu) goto L_08ABEDBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABEDBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABEDD8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08ABFA50;
L_08ABEDD8:
    aot_gpr_31 = (0x08ABEDE0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08ABEFD4;
L_08ABEDE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABEBCC;
      }
      goto L_08ABEDF4;
    }
L_08ABEDF4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABEDFC;
L_08ABEDFC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABEE2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7584), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABEEA0;
      }
      goto L_08ABEE58;
    }
L_08ABEE58:
    ctx.gpr[17] = (32768u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (32768u << 16u);
    goto L_08ABEE64;
L_08ABEE64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABEE8C;
      }
      goto L_08ABEE7C;
    }
L_08ABEE7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08ABEE8Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08ABEB54;
L_08ABEE8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_5;
      if (branch_taken) {
          goto L_08ABEE64;
      }
      goto L_08ABEEA0;
    }
L_08ABEEA0:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABEEBC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08ABEEE0;
      }
      goto L_08ABEED0;
    }
L_08ABEED0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABEEE8;
      }
      goto L_08ABEEE0;
    }
L_08ABEEE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABEF4C;
      }
      goto L_08ABEEE8;
    }
L_08ABEEE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(26160));
    ctx.gpr[8] = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
      if (branch_taken) {
          goto L_08ABEF48;
      }
      goto L_08ABEF0C;
    }
L_08ABEF0C:
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[10] = (ctx.gpr[10] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08ABEF3C;
      }
      goto L_08ABEF28;
    }
L_08ABEF28:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABEF4C;
      }
      goto L_08ABEF3C;
    }
L_08ABEF3C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08ABEF0C;
      }
      goto L_08ABEF48;
    }
L_08ABEF48:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABEF4C;
L_08ABEF4C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABEF54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABEFA4;
      }
      goto L_08ABEF7C;
    }
L_08ABEF7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 >> 10u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABEFC0;
      }
      goto L_08ABEFA4;
    }
L_08ABEFA4:
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_gpr_4 - aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08ABEFB8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABFC04;
L_08ABEFB8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] - aot_gpr_16);
    goto L_08ABEFC0;
L_08ABEFC0:
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
L_08ABEFD4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABEFDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABEFF0;
      }
      goto L_08ABEFE8;
    }
L_08ABEFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABF040;
      }
      goto L_08ABEFF0;
    }
L_08ABEFF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[7] = (32768u << 16u);
      if (branch_taken) {
          goto L_08ABF040;
      }
      goto L_08ABEFFC;
    }
L_08ABEFFC:
    aot_gpr_6 = (4096u << 16u);
    goto L_08ABF000;
L_08ABF000:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08ABF030;
      }
      goto L_08ABF018;
    }
L_08ABF018:
    ctx.gpr[8] = (ctx.gpr[8] & aot_gpr_6);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08ABF030;
      }
      goto L_08ABF02C;
    }
L_08ABF02C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ABF030;
L_08ABF030:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08ABF000;
      }
      goto L_08ABF040;
    }
L_08ABF040:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF048:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABF05C;
      }
      goto L_08ABF054;
    }
L_08ABF054:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF108;
      }
      goto L_08ABF05C;
    }
L_08ABF05C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[7] = (32768u << 16u);
      if (branch_taken) {
          goto L_08ABF108;
      }
      goto L_08ABF068;
    }
L_08ABF068:
    aot_gpr_6 = (4096u << 16u);
    goto L_08ABF06C;
L_08ABF06C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF084;
    }
L_08ABF084:
    ctx.gpr[8] = (ctx.gpr[8] & aot_gpr_6);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF098;
    }
L_08ABF098:
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-109));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0B8;
    }
L_08ABF0B8:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12704)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF0D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0D8;
    }
L_08ABF0D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0E0;
    }
L_08ABF0E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0E8;
    }
L_08ABF0E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0F0;
    }
L_08ABF0F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0F8;
    }
L_08ABF0F8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08ABF06C;
      }
      goto L_08ABF108;
    }
L_08ABF108:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF110:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1023));
    aot_gpr_5 = (aot_gpr_5 >> 10u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08ABF150;
      }
      goto L_08ABF12C;
    }
L_08ABF12C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ABF150;
      }
      goto L_08ABF138;
    }
L_08ABF138:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
      if (branch_taken) {
          goto L_08ABF1B4;
      }
      goto L_08ABF150;
    }
L_08ABF150:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08ABF19C;
      }
      goto L_08ABF16C;
    }
L_08ABF16C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_31 = (0x08ABF184u);
    aot_gpr_5 = (0u + aot_gpr_5);
    goto L_08ABF1F8;
L_08ABF184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ABF1A4;
      }
      goto L_08ABF194;
    }
L_08ABF194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF1EC;
      }
      goto L_08ABF19C;
    }
L_08ABF19C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF1EC;
      }
      goto L_08ABF1A4;
    }
L_08ABF1A4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
    goto L_08ABF1B4;
L_08ABF1B4:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABF1EC;
      }
      goto L_08ABF1C8;
    }
L_08ABF1C8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(296)));
    ctx.gpr[10] = (aot_gpr_5 << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABF1C8;
      }
      goto L_08ABF1EC;
    }
L_08ABF1EC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF1F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_08ABF22C;
    }
    goto L_08ABF224;
L_08ABF224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF260;
      }
      goto L_08ABF22C;
    }
L_08ABF22C:
    aot_gpr_5 = (ctx.gpr[7] - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (8192u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08ABF260;
L_08ABF260:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF268:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    aot_gpr_5 = (aot_gpr_5 >> 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1024));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1023));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ABF2CC;
      }
      goto L_08ABF2A4;
    }
L_08ABF2A4:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08ABF2BCu);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    goto L_08ABF110;
L_08ABF2BC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08ABF2CCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 463u, 0x08AA70F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABF2CCu) goto L_08ABF2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABF2CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF2D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_6);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF2F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF318;
      }
      goto L_08ABF304;
    }
L_08ABF304:
    aot_gpr_31 = (0x08ABF30Cu);
    goto L_08ABF6BC;
L_08ABF30C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[2] - aot_gpr_4);
    goto L_08ABF318;
L_08ABF318:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF324:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABF334;
      }
      goto L_08ABF32C;
    }
L_08ABF32C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABF340;
      }
      goto L_08ABF334;
    }
L_08ABF334:
    aot_gpr_5 = (2220u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-3256));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_08ABF340;
L_08ABF340:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF348:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08ABF360u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABFF10;
L_08ABF360:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08ABF368;
L_08ABF368:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08ABF394;
      }
      goto L_08ABF378;
    }
L_08ABF378:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ABF394;
      }
      goto L_08ABF388;
    }
L_08ABF388:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ABF388;
      }
      goto L_08ABF394;
    }
L_08ABF394:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABF368;
      }
      goto L_08ABF3A4;
    }
L_08ABF3A4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08ABF3A4u, 0x0000000Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08ABF3BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08ABF444;
      }
      goto L_08ABF3E0;
    }
L_08ABF3E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08ABF3ECu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABF608;
L_08ABF3EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08ABF444;
      }
      goto L_08ABF3F8;
    }
L_08ABF3F8:
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABF408u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABF6E4;
L_08ABF408:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABF42C;
      }
      goto L_08ABF414;
    }
L_08ABF414:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABF42Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABF42Cu) goto L_08ABF42C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABF42C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABF454;
      }
      goto L_08ABF444;
    }
L_08ABF444:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08ABF454u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABF454u) goto L_08ABF454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABF454:
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
L_08ABF46C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08ABF550;
      }
      goto L_08ABF494;
    }
L_08ABF494:
    aot_gpr_5 = (aot_gpr_16 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08ABF4A4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    goto L_08ABF608;
L_08ABF4A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ABF550;
      }
      goto L_08ABF4AC;
    }
L_08ABF4AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABF4EC;
      }
      goto L_08ABF4DC;
    }
L_08ABF4DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_5);
    goto L_08ABF4EC;
L_08ABF4EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABF504u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ABF7B0;
L_08ABF504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (32768u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABF534;
      }
      goto L_08ABF524;
    }
L_08ABF524:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
    goto L_08ABF534;
L_08ABF534:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[2] - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABF560;
      }
      goto L_08ABF550;
    }
L_08ABF550:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08ABF560u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABF560u) goto L_08ABF560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABF560:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08ABF578:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 63u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[8]);
        goto L_08ABF5A4;
    }
    goto L_08ABF58C;
L_08ABF58C:
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[8]);
    goto L_08ABF5A4;
L_08ABF5A4:
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 63u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (32768u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF608:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABF624;
      }
      goto L_08ABF620;
    }
L_08ABF620:
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_08ABF624;
L_08ABF624:
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] & 63u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08ABF640;
      }
      goto L_08ABF634;
    }
L_08ABF634:
    ctx.gpr[8] = (0u | 64u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    goto L_08ABF640;
L_08ABF640:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08ABF64C;
L_08ABF64C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (aot_gpr_4 < static_cast<std::uint32_t>(15) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABF65C;
      }
      goto L_08ABF654;
    }
L_08ABF654:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABF6B4;
      }
      goto L_08ABF65C;
    }
L_08ABF65C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABF690;
      }
      goto L_08ABF670;
    }
L_08ABF670:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08ABF688;
      }
      goto L_08ABF67C;
    }
L_08ABF67C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08ABF680;
L_08ABF680:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF64C;
      }
      goto L_08ABF688;
    }
L_08ABF688:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF6B4;
      }
      goto L_08ABF690;
    }
L_08ABF690:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABF6AC;
      }
      goto L_08ABF69C;
    }
L_08ABF69C:
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABF680;
      }
      goto L_08ABF6AC;
    }
L_08ABF6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABF6B4;
      }
      goto L_08ABF6B4;
    }
L_08ABF6B4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF6BC:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABF6DC;
      }
      goto L_08ABF6CC;
    }
L_08ABF6CC:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABF6CC;
      }
      goto L_08ABF6DC;
    }
L_08ABF6DC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF6E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABF708u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_08ABFD6C;
L_08ABF708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (28672u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (57344u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABF778;
      }
      goto L_08ABF754;
    }
L_08ABF754:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (49152u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08ABF778;
L_08ABF778:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABF788u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ABFA50;
L_08ABF788:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABF794u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABF794:
    ctx.gpr[2] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
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
L_08ABF7B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABF81C;
      }
      goto L_08ABF7D0;
    }
L_08ABF7D0:
    ctx.gpr[8] = (aot_gpr_6 - ctx.gpr[8]);
    aot_gpr_6 = (ctx.gpr[8] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ABF82C;
      }
      goto L_08ABF7E0;
    }
L_08ABF7E0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08ABF7FCu);
    aot_gpr_5 = (ctx.gpr[8] - aot_gpr_5);
    goto L_08ABFA50;
L_08ABF7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_31 = (0x08ABF814u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08ABF6E4;
L_08ABF814:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF8A4;
      }
      goto L_08ABF81C;
    }
L_08ABF81C:
    aot_gpr_31 = (0x08ABF824u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    goto L_08ABF6E4;
L_08ABF824:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF8A4;
      }
      goto L_08ABF82C;
    }
L_08ABF82C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08ABF844u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABF844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABF868u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABF868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08ABF888u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABFA50;
L_08ABF888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x08ABF89Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08ABF6E4;
L_08ABF89C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABF8A4;
      }
      goto L_08ABF8A4;
    }
L_08ABF8A4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABF8B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08ABF8E0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABF8E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (61440u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[18] = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (8192u << 16u);
      if (branch_taken) {
          goto L_08ABF940;
      }
      goto L_08ABF924;
    }
L_08ABF924:
    aot_gpr_31 = (0x08ABF92Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08ABFC0C;
L_08ABF92C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[19]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08ABF968;
      }
      goto L_08ABF940;
    }
L_08ABF940:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[19]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08ABF968;
L_08ABF968:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABF9F0;
      }
      goto L_08ABF970;
    }
L_08ABF970:
    ctx.gpr[18] = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABF9C8;
      }
      goto L_08ABF9BC;
    }
L_08ABF9BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08ABF9C8;
L_08ABF9C8:
    aot_gpr_31 = (0x08ABF9D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08ABFD6C;
L_08ABF9D0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABF9DCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABFCD4;
L_08ABF9DC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABF9E8u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABF9E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABFA30;
      }
      goto L_08ABF9F0;
    }
L_08ABF9F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABFA18;
      }
      goto L_08ABFA00;
    }
L_08ABFA00:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08ABFA18;
L_08ABFA18:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABFA24u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08ABFCD4;
L_08ABFA24:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABFA30u);
    aot_gpr_5 = (0u | 0u);
    goto L_08ABFC04;
L_08ABFA30:
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
L_08ABFA50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[17] < aot_gpr_6 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ABFA98;
      }
      goto L_08ABFA94;
    }
L_08ABFA94:
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    goto L_08ABFA98;
L_08ABFA98:
    aot_gpr_6 = (ctx.gpr[17] + ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_6 & 63u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ABFAB4;
      }
      goto L_08ABFAA8;
    }
L_08ABFAA8:
    ctx.gpr[7] = (0u | 64u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_6);
    goto L_08ABFAB4;
L_08ABFAB4:
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_08ABFAE0;
      }
      goto L_08ABFABC;
    }
L_08ABFABC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (16384u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[20]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ABFAE8;
      }
      goto L_08ABFAD8;
    }
L_08ABFAD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABFAF8;
      }
      goto L_08ABFAE0;
    }
L_08ABFAE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABFBE4;
      }
      goto L_08ABFAE8;
    }
L_08ABFAE8:
    aot_gpr_31 = (0x08ABFAF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABFC0C;
L_08ABFAF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[19]);
    goto L_08ABFAF8;
L_08ABFAF8:
    ctx.gpr[17] = (aot_gpr_5 - ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[17] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABFBE4;
      }
      goto L_08ABFB08;
    }
L_08ABFB08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[19]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08ABFB34;
    }
    goto L_08ABFB24;
L_08ABFB24:
    aot_gpr_31 = (0x08ABFB2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABFD6C;
L_08ABFB2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08ABFB34;
L_08ABFB34:
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_gpr_4 | ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_6 & ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_6 & ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] | aot_gpr_4);
    aot_gpr_4 = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (aot_gpr_4 & 255u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (8192u << 16u);
        goto L_08ABFB7C;
    }
    goto L_08ABFB7C;
L_08ABFB7C:
    aot_gpr_6 = (ctx.gpr[17] | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ABFBC0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    goto L_08ABFCD4;
L_08ABFBC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABFBE4;
      }
      goto L_08ABFBD8;
    }
L_08ABFBD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ABFBE4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08ABFCD4;
L_08ABFBE4:
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
L_08ABFC04:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFC0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & aot_gpr_5);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08ABFC80;
      }
      goto L_08ABFC64;
    }
L_08ABFC64:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (49152u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[8]);
    goto L_08ABFC80;
L_08ABFC80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABFCAC;
      }
      goto L_08ABFC98;
    }
L_08ABFC98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABFCC0;
      }
      goto L_08ABFCAC;
    }
L_08ABFCAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (57344u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08ABFCC0;
L_08ABFCC0:
    aot_gpr_31 = (0x08ABFCC8u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08ABFD6C;
L_08ABFCC8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFCD4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08ABFCF8;
      }
      goto L_08ABFCE8;
    }
L_08ABFCE8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABFD04;
      }
      goto L_08ABFCF8;
    }
L_08ABFCF8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABFD64;
      }
      goto L_08ABFD04;
    }
L_08ABFD04:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABFD3C;
      }
      goto L_08ABFD0C;
    }
L_08ABFD0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABFD2C;
      }
      goto L_08ABFD18;
    }
L_08ABFD18:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    goto L_08ABFD24;
L_08ABFD24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABFD04;
      }
      goto L_08ABFD2C;
    }
L_08ABFD2C:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABFD64;
      }
      goto L_08ABFD3C;
    }
L_08ABFD3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABFD58;
      }
      goto L_08ABFD48;
    }
L_08ABFD48:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABFD24;
      }
      goto L_08ABFD58;
    }
L_08ABFD58:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    goto L_08ABFD64;
L_08ABFD64:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFD6C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABFD94;
      }
      goto L_08ABFD78;
    }
L_08ABFD78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFD84;
    }
L_08ABFD84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFD94;
    }
L_08ABFD94:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08ABFDB0;
      }
      goto L_08ABFD9C;
    }
L_08ABFD9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFDB0;
    }
L_08ABFDB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABFE34;
      }
      goto L_08ABFDBC;
    }
L_08ABFDBC:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABFDE0;
      }
      goto L_08ABFDCC;
    }
L_08ABFDCC:
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABFDCC;
      }
      goto L_08ABFDE0;
    }
L_08ABFDE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08ABFDF4;
      }
      goto L_08ABFDEC;
    }
L_08ABFDEC:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_6);
    goto L_08ABFDF4;
L_08ABFDF4:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFE34;
    }
L_08ABFE34:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08ABFE4C;
L_08ABFE4C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFE54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABFE74u);
    ctx.gpr[7] = (8u << 16u);
    goto L_08ABE3E4;
L_08ABFE74:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFE80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABFE94u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08ABE3BC;
L_08ABFE94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1836)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABFEAC;
      }
      goto L_08ABFEA0;
    }
L_08ABFEA0:
    aot_gpr_4 = (193u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30720));
      if (branch_taken) {
          goto L_08ABFEBC;
      }
      goto L_08ABFEAC;
    }
L_08ABFEAC:
    aot_gpr_31 = (0x08ABFEB4u);
    ctx.pc = 0x08B73564u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABFEB4:
    aot_gpr_4 = (83u << 16u);
    aot_gpr_4 = (ctx.gpr[2] - aot_gpr_4);
    goto L_08ABFEBC;
L_08ABFEBC:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08ABFEE0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12488));
    ctx.pc = 0x08B73534u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABFEE0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABFEF0u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B7342Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABFEF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ABFEFCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08ABFE54;
L_08ABFEFC:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFF10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-4128));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4096), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABFF44;
      }
      goto L_08ABFF3C;
    }
L_08ABFF3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 34u, 0x08AC01F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08ABFF44;
    }
L_08ABFF44:
    aot_gpr_31 = (0x08ABFF4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08ABEFD4;
L_08ABFF4C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 18u, 0x08AC00E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08ABFF68;
    }
L_08ABFF68:
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(4095));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[12] = (4096u << 16u);
    goto L_08ABFF78;
L_08ABFF78:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[3] = (ctx.gpr[11] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABFF9C;
      }
      goto L_08ABFF94;
    }
L_08ABFF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABFFA0;
      }
      goto L_08ABFF9C;
    }
L_08ABFF9C:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[3]);
    goto L_08ABFFA0;
L_08ABFFA0:
    ctx.gpr[14] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[10] = (0u | 46u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 11u, 0x08AC0074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08ABFFAC;
    }
L_08ABFFAC:
    ctx.gpr[10] = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[14] = (ctx.gpr[8] & ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[10] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-109));
    ctx.gpr[10] = (0u < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[8] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 10u, 0x08AC0064u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08ABFFD4;
    }
L_08ABFFD4:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12752)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABFFEC:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 65u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 97u);
        goto L_08ABFFFC;
    }
    goto L_08ABFFFC;
L_08ABFFFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 11u, 0x08AC0074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 2u, 0x08AC0004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0174(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0174_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_174(Runtime &runtime) {
    runtime.register_generated_unit(174u, 0x08ABC000u, 16384u, &recomp_unit_0174, &recomp_unit_0174_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08ABC000u, &recomp_unit_0174, "recomp_unit_0174",
                                          kEntryMasks_recomp_unit_0174, 64u);
}
} // namespace psprecomp
